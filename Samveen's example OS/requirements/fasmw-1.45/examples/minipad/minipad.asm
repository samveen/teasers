
; Simple text editor - fasm example program

format PE GUI 4.0
entry start

include '%include%\win32a.inc'

IDM_NEW   = 101
IDM_EXIT  = 102
IDM_ABOUT = 901

section '.data' data readable writeable

  _class db 'MINIPAD32',0
  _edit db 'EDIT',0

  _title db 'MiniPad',0
  _about_title db 'About MiniPad',0
  _about_text db 'This is Win32 example program created with flat assembler.',0

  hinstance dd ?
  edithwnd dd ?
  editfont dd ?

  msg MSG
  wc WNDCLASS
  client RECT

section '.code' code readable executable

  start:

	invoke	GetModuleHandle,0
	mov	[hinstance],eax
	invoke	LoadIcon,eax,17
	mov	[wc.hIcon],eax
	invoke	LoadCursor,0,IDC_ARROW
	mov	[wc.hCursor],eax
	mov	[wc.style],0
	mov	[wc.lpfnWndProc],WindowProc
	mov	[wc.cbClsExtra],0
	mov	[wc.cbWndExtra],0
	mov	eax,[hinstance]
	mov	[wc.hInstance],eax
	mov	[wc.hbrBackground],COLOR_WINDOW+1
	mov	[wc.lpszMenuName],0
	mov	[wc.lpszClassName],_class
	invoke	RegisterClass,wc

	invoke	LoadMenu,[hinstance],37
	invoke	CreateWindowEx,0,_class,_title,WS_VISIBLE+WS_OVERLAPPEDWINDOW,144,128,256,256,NULL,eax,[hinstance],NULL

  msg_loop:
	invoke	GetMessage,msg,NULL,0,0
	or	eax,eax
	jz	end_loop
	invoke	TranslateMessage,msg
	invoke	DispatchMessage,msg

	jmp	msg_loop

  end_loop:
	invoke	ExitProcess,[msg.wParam]

proc WindowProc, hwnd,wmsg,wparam,lparam
	enter
	push	ebx esi edi
	cmp	[wmsg],WM_CREATE
	je	wmcreate
	cmp	[wmsg],WM_SIZE
	je	wmsize
	cmp	[wmsg],WM_SETFOCUS
	je	wmsetfocus
	cmp	[wmsg],WM_COMMAND
	je	wmcommand
	cmp	[wmsg],WM_DESTROY
	je	wmdestroy
  defwndproc:
	invoke	DefWindowProc,[hwnd],[wmsg],[wparam],[lparam]
	jmp	finish
  wmcreate:
	invoke	GetClientRect,[hwnd],client
	invoke	CreateWindowEx,WS_EX_CLIENTEDGE,_edit,0,WS_VISIBLE+WS_CHILD+WS_HSCROLL+WS_VSCROLL+ES_AUTOHSCROLL+ES_AUTOVSCROLL+ES_MULTILINE,[client.left],[client.top],[client.right],[client.bottom],[hwnd],0,[hinstance],NULL
	or	eax,eax
	jz	failed
	mov	[edithwnd],eax
	invoke	CreateFont,16,0,0,0,0,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_RASTER_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,FIXED_PITCH+FF_DONTCARE,NULL
	or	eax,eax
	jz	failed
	mov	[editfont],eax
	invoke	SendMessage,[edithwnd],WM_SETFONT,eax,FALSE
	xor	eax,eax
	jmp	finish
      failed:
	or	eax,-1
	jmp	finish
  wmsize:
	invoke	GetClientRect,[hwnd],client
	invoke	MoveWindow,[edithwnd],[client.left],[client.top],[client.right],[client.bottom],TRUE
	xor	eax,eax
	jmp	finish
  wmsetfocus:
	invoke	SetFocus,[edithwnd]
	xor	eax,eax
	jmp	finish
  wmcommand:
	mov	eax,[wparam]
	and	eax,0FFFFh
	cmp	eax,IDM_NEW
	je	new
	cmp	eax,IDM_ABOUT
	je	about
	cmp	eax,IDM_EXIT
	je	wmdestroy
	jmp	defwndproc
      new:
	invoke	SendMessage,[edithwnd],WM_SETTEXT,0,0
	jmp	finish
      about:
	invoke	MessageBox,[hwnd],_about_text,_about_title,MB_OK
	jmp	finish
  wmdestroy:
	invoke	DeleteObject,[editfont]
	invoke	PostQuitMessage,0
	xor	eax,eax
  finish:
	pop	edi esi ebx
	return

section '.idata' import data readable writeable

  library kernel,'KERNEL32.DLL',\
	  user,'USER32.DLL',\
	  gdi,'GDI32.DLL'

  import kernel,\
	 GetModuleHandle,'GetModuleHandleA',\
	 ExitProcess,'ExitProcess'

  import user,\
	 RegisterClass,'RegisterClassA',\
	 CreateWindowEx,'CreateWindowExA',\
	 DefWindowProc,'DefWindowProcA',\
	 SetWindowLong,'SetWindowLongA',\
	 RedrawWindow,'RedrawWindow',\
	 GetMessage,'GetMessageA',\
	 TranslateMessage,'TranslateMessage',\
	 DispatchMessage,'DispatchMessageA',\
	 SendMessage,'SendMessageA',\
	 LoadCursor,'LoadCursorA',\
	 LoadIcon,'LoadIconA',\
	 LoadMenu,'LoadMenuA',\
	 GetClientRect,'GetClientRect',\
	 MoveWindow,'MoveWindow',\
	 SetFocus,'SetFocus',\
	 MessageBox,'MessageBoxA',\
	 PostQuitMessage,'PostQuitMessage'

  import gdi,\
	 CreateFont,'CreateFontA',\
	 DeleteObject,'DeleteObject'

section '.rsrc' resource data readable

  ; resource directory

  directory RT_MENU,menus,\
	    RT_ICON,icons,\
	    RT_GROUP_ICON,group_icons,\
	    RT_VERSION,versions

  ; resource subdirectories

  resource menus,\
	   37,LANG_ENGLISH+SUBLANG_DEFAULT,main_menu

  resource icons,\
	   1,LANG_NEUTRAL,icon_data

  resource group_icons,\
	   17,LANG_NEUTRAL,main_icon

  resource versions,\
	   1,LANG_NEUTRAL,version_info

  menu main_menu
       menuitem '&File',0,MFR_POPUP
		menuitem '&New',IDM_NEW,0
		menuseparator
		menuitem 'E&xit',IDM_EXIT,MFR_END
       menuitem '&Help',0,MFR_POPUP + MFR_END
		menuitem '&About...',IDM_ABOUT,MFR_END

  icon main_icon,icon_data,'minipad.ico'

  version version_info,VOS__WINDOWS32,VFT_APP,VFT2_UNKNOWN,LANG_ENGLISH+SUBLANG_DEFAULT,0,\
	  'FileDescription','MiniPad - example program',\
	  'LegalCopyright','No rights reserved.',\
	  'FileVersion','1.0',\
	  'ProductVersion','1.0',\
	  'OriginalFilename','MINIPAD.EXE'
