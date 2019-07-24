
; DLL creation example

format PE GUI 4.0 DLL
entry DllEntryPoint

include '%include%\win32a.inc'

section '.code' code readable executable

proc DllEntryPoint, hinstDLL,fdwReason,lpvReserved
	enter
	mov	eax,TRUE
	return

; VOID ShowErrorMessage(HWND hWnd,DWORD dwError);

proc ShowErrorMessage, hWnd,dwError
  .lpBuffer dd ?
	enter
	lea	eax,[.lpBuffer]
	invoke	FormatMessage,FORMAT_MESSAGE_ALLOCATE_BUFFER+FORMAT_MESSAGE_FROM_SYSTEM,0,[dwError],LANG_NEUTRAL,eax,0,0
	invoke	MessageBox,[hWnd],[.lpBuffer],NULL,MB_ICONERROR+MB_OK
	invoke	LocalFree,[.lpBuffer]
	return

; VOID ShowLastError(HWND hWnd);

proc ShowLastError, hwnd
	enter
	invoke	GetLastError
	stdcall ShowErrorMessage,[hwnd],eax
	return

section '.idata' import data readable writeable

  library kernel,'KERNEL32.DLL',\
	  user,'USER32.DLL'

  import kernel,\
	 GetLastError,'GetLastError',\
	 SetLastError,'SetLastError',\
	 FormatMessage,'FormatMessageA',\
	 LocalFree,'LocalFree'

  import user,\
	 MessageBox,'MessageBoxA'

section '.edata' export data readable

  ; functions have to be sorted alphabetically

  export 'ERRORMSG.DLL',\
	 ShowErrorMessage,'ShowErrorMessage',\
	 ShowLastError,'ShowLastError'

section '.reloc' fixups data discardable
