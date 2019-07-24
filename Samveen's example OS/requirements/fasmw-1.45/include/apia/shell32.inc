
; SHELL32 API calls (ASCII)

import shell32,\
       CheckEscapes,'CheckEscapesA',\
       DoEnvironmentSubst,'DoEnvironmentSubstA',\
       DragAcceptFiles,'DragAcceptFiles',\
       DragFinish,'DragFinish',\
       DragQueryFile,'DragQueryFileA',\
       DragQueryPoint,'DragQueryPoint',\
       DuplicateIcon,'DuplicateIcon',\
       ExtractAssociatedIcon,'ExtractAssociatedIconA',\
       ExtractAssociatedIconEx,'ExtractAssociatedIconExA',\
       ExtractIcon,'ExtractIconA',\
       ExtractIconEx,'ExtractIconExA',\
       ExtractIconResInfo,'ExtractIconResInfoA',\
       FindExeDlgProc,'FindExeDlgProc',\
       FindExecutable,'FindExecutableA',\
       FreeIconList,'FreeIconList',\
       InternalExtractIconList,'InternalExtractIconListA',\
       RealShellExecute,'RealShellExecuteA',\
       RealShellExecuteEx,'RealShellExecuteExA',\
       RegenerateUserEnvironment,'RegenerateUserEnvironment',\
       SHAddToRecentDocs,'SHAddToRecentDocs',\
       SHAppBarMessage,'SHAppBarMessage',\
       SHBrowseForFolder,'SHBrowseForFolderA',\
       SHChangeNotify,'SHChangeNotify',\
       SHEmptyRecycleBin,'SHEmptyRecycleBinA',\
       SHFileOperation,'SHFileOperationA',\
       SHFormatDrive,'SHFormatDrive',\
       SHFreeNameMappings,'SHFreeNameMappings',\
       SHGetDataFromIDList,'SHGetDataFromIDListA',\
       SHGetDesktopFolder,'SHGetDesktopFolder',\
       SHGetDiskFreeSpace,'SHGetDiskFreeSpaceA',\
       SHGetFileInfo,'SHGetFileInfoA',\
       SHGetInstanceExplorer,'SHGetInstanceExplorer',\
       SHGetMalloc,'SHGetMalloc',\
       SHGetNewLinkInfo,'SHGetNewLinkInfo',\
       SHGetPathFromIDList,'SHGetPathFromIDListA',\
       SHGetSettings,'SHGetSettings',\
       SHGetSpecialFolderLocation,'SHGetSpecialFolderLocation',\
       SHGetSpecialFolderPath,'SHGetSpecialFolderPathA',\
       SHInvokePrinterCommand,'SHInvokePrinterCommandA',\
       SHLoadInProc,'SHLoadInProc',\
       SHQueryRecycleBin,'SHQueryRecycleBinA',\
       SHUpdateRecycleBinIcon,'SHUpdateRecycleBinIcon',\
       SheChangeDir,'SheChangeDirA',\
       SheChangeDirEx,'SheChangeDirExA',\
       SheFullPath,'SheFullPathA',\
       SheGetCurDrive,'SheGetCurDrive',\
       SheGetDir,'SheGetDirA',\
       SheRemoveQuotes,'SheRemoveQuotesA',\
       SheSetCurDrive,'SheSetCurDrive',\
       SheShortenPath,'SheShortenPathA',\
       ShellAbout,'ShellAboutA',\
       ShellExecute,'ShellExecuteA',\
       ShellExecuteEx,'ShellExecuteExA',\
       ShellHookProc,'ShellHookProc',\
       Shell_NotifyIcon,'Shell_NotifyIconA',\
       StrChr,'StrChrA',\
       StrChrI,'StrChrIA',\
       StrCmpN,'StrCmpNA',\
       StrCmpNI,'StrCmpNIA',\
       StrCpyN,'StrCpyNA',\
       StrNCmp,'StrNCmpA',\
       StrNCmpI,'StrNCmpIA',\
       StrNCpy,'StrNCpyA',\
       StrRChr,'StrRChrA',\
       StrRChrI,'StrRChrIA',\
       StrRStr,'StrRStrA',\
       StrRStrI,'StrRStrIA',\
       StrStr,'StrStrA',\
       StrStrI,'StrStrIA',\
       WOWShellExecute,'WOWShellExecute'