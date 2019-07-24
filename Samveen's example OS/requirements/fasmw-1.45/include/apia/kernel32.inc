
; KERNEL32 API calls (ASCII)

import kernel32,\
       AddAtom,'AddAtomA',\
       AddConsoleAlias,'AddConsoleAliasA',\
       AllocConsole,'AllocConsole',\
       AreFileApisANSI,'AreFileApisANSI',\
       AssignProcessToJobObject,'AssignProcessToJobObject',\
       BackupRead,'BackupRead',\
       BackupSeek,'BackupSeek',\
       BackupWrite,'BackupWrite',\
       BaseAttachCompleteThunk,'BaseAttachCompleteThunk',\
       Beep,'Beep',\
       BeginUpdateResource,'BeginUpdateResourceA',\
       BuildCommDCB,'BuildCommDCBA',\
       BuildCommDCBAndTimeouts,'BuildCommDCBAndTimeoutsA',\
       CallNamedPipe,'CallNamedPipeA',\
       CancelIo,'CancelIo',\
       CancelWaitableTimer,'CancelWaitableTimer',\
       ClearCommBreak,'ClearCommBreak',\
       ClearCommError,'ClearCommError',\
       CloseConsoleHandle,'CloseConsoleHandle',\
       CloseHandle,'CloseHandle',\
       CloseProfileUserMapping,'CloseProfileUserMapping',\
       CmdBatNotification,'CmdBatNotification',\
       CommConfigDialog,'CommConfigDialogA',\
       CompareFileTime,'CompareFileTime',\
       CompareString,'CompareStringA',\
       ConnectNamedPipe,'ConnectNamedPipe',\
       ConsoleMenuControl,'ConsoleMenuControl',\
       ContinueDebugEvent,'ContinueDebugEvent',\
       ConvertDefaultLocale,'ConvertDefaultLocale',\
       ConvertThreadToFiber,'ConvertThreadToFiber',\
       CopyFile,'CopyFileA',\
       CopyFileEx,'CopyFileExA',\
       CreateConsoleScreenBuffer,'CreateConsoleScreenBuffer',\
       CreateDirectory,'CreateDirectoryA',\
       CreateDirectoryEx,'CreateDirectoryExA',\
       CreateEvent,'CreateEventA',\
       CreateFiber,'CreateFiber',\
       CreateFile,'CreateFileA',\
       CreateFileMapping,'CreateFileMappingA',\
       CreateHardLink,'CreateHardLinkA',\
       CreateIoCompletionPort,'CreateIoCompletionPort',\
       CreateJobObject,'CreateJobObjectA',\
       CreateMailslot,'CreateMailslotA',\
       CreateMutex,'CreateMutexA',\
       CreateNamedPipe,'CreateNamedPipeA',\
       CreatePipe,'CreatePipe',\
       CreateProcess,'CreateProcessA',\
       CreateRemoteThread,'CreateRemoteThread',\
       CreateSemaphore,'CreateSemaphoreA',\
       CreateTapePartition,'CreateTapePartition',\
       CreateThread,'CreateThread',\
       CreateToolhelp32Snapshot,'CreateToolhelp32Snapshot',\
       CreateVirtualBuffer,'CreateVirtualBuffer',\
       CreateWaitableTimer,'CreateWaitableTimerA',\
       DebugActiveProcess,'DebugActiveProcess',\
       DebugBreak,'DebugBreak',\
       DefineDosDevice,'DefineDosDeviceA',\
       DeleteAtom,'DeleteAtom',\
       DeleteCriticalSection,'DeleteCriticalSection',\
       DeleteFiber,'DeleteFiber',\
       DeleteFile,'DeleteFileA',\
       DeviceIoControl,'DeviceIoControl',\
       DisableThreadLibraryCalls,'DisableThreadLibraryCalls',\
       DisconnectNamedPipe,'DisconnectNamedPipe',\
       DosDateTimeToFileTime,'DosDateTimeToFileTime',\
       DuplicateConsoleHandle,'DuplicateConsoleHandle',\
       DuplicateHandle,'DuplicateHandle',\
       EndUpdateResource,'EndUpdateResourceA',\
       EnterCriticalSection,'EnterCriticalSection',\
       EnumCalendarInfo,'EnumCalendarInfoA',\
       EnumCalendarInfoEx,'EnumCalendarInfoExA',\
       EnumDateFormats,'EnumDateFormatsA',\
       EnumDateFormatsEx,'EnumDateFormatsExA',\
       EnumResourceLanguages,'EnumResourceLanguagesA',\
       EnumResourceNames,'EnumResourceNamesA',\
       EnumResourceTypes,'EnumResourceTypesA',\
       EnumSystemCodePages,'EnumSystemCodePagesA',\
       EnumSystemLocales,'EnumSystemLocalesA',\
       EnumTimeFormats,'EnumTimeFormatsA',\
       EraseTape,'EraseTape',\
       EscapeCommFunction,'EscapeCommFunction',\
       ExitProcess,'ExitProcess',\
       ExitThread,'ExitThread',\
       ExitVDM,'ExitVDM',\
       ExpandEnvironmentStrings,'ExpandEnvironmentStringsA',\
       ExpungeConsoleCommandHistory,'ExpungeConsoleCommandHistoryA',\
       ExtendVirtualBuffer,'ExtendVirtualBuffer',\
       FatalAppExit,'FatalAppExitA',\
       FatalExit,'FatalExit',\
       FileTimeToDosDateTime,'FileTimeToDosDateTime',\
       FileTimeToLocalFileTime,'FileTimeToLocalFileTime',\
       FileTimeToSystemTime,'FileTimeToSystemTime',\
       FillConsoleOutputAttribute,'FillConsoleOutputAttribute',\
       FillConsoleOutputCharacter,'FillConsoleOutputCharacterA',\
       FindAtom,'FindAtomA',\
       FindClose,'FindClose',\
       FindCloseChangeNotification,'FindCloseChangeNotification',\
       FindFirstChangeNotification,'FindFirstChangeNotificationA',\
       FindFirstFile,'FindFirstFileA',\
       FindFirstFileEx,'FindFirstFileExA',\
       FindNextChangeNotification,'FindNextChangeNotification',\
       FindNextFile,'FindNextFileA',\
       FindResource,'FindResourceA',\
       FindResourceEx,'FindResourceExA',\
       FlushConsoleInputBuffer,'FlushConsoleInputBuffer',\
       FlushFileBuffers,'FlushFileBuffers',\
       FlushInstructionCache,'FlushInstructionCache',\
       FlushViewOfFile,'FlushViewOfFile',\
       FoldString,'FoldStringA',\
       FormatMessage,'FormatMessageA',\
       FreeConsole,'FreeConsole',\
       FreeEnvironmentStrings,'FreeEnvironmentStringsA',\
       FreeLibrary,'FreeLibrary',\
       FreeLibraryAndExitThread,'FreeLibraryAndExitThread',\
       FreeResource,'FreeResource',\
       FreeVirtualBuffer,'FreeVirtualBuffer',\
       GenerateConsoleCtrlEvent,'GenerateConsoleCtrlEvent',\
       GetACP,'GetACP',\
       GetAtomName,'GetAtomNameA',\
       GetBinaryType,'GetBinaryTypeA',\
       GetCPInfo,'GetCPInfo',\
       GetCPInfoEx,'GetCPInfoExA',\
       GetCommConfig,'GetCommConfig',\
       GetCommMask,'GetCommMask',\
       GetCommModemStatus,'GetCommModemStatus',\
       GetCommProperties,'GetCommProperties',\
       GetCommState,'GetCommState',\
       GetCommTimeouts,'GetCommTimeouts',\
       GetCommandLine,'GetCommandLineA',\
       GetCompressedFileSize,'GetCompressedFileSizeA',\
       GetComputerName,'GetComputerNameA',\
       GetConsoleAlias,'GetConsoleAliasA',\
       GetConsoleAliasExes,'GetConsoleAliasExesA',\
       GetConsoleAliasExesLength,'GetConsoleAliasExesLengthA',\
       GetConsoleAliases,'GetConsoleAliasesA',\
       GetConsoleAliasesLength,'GetConsoleAliasesLengthA',\
       GetConsoleCP,'GetConsoleCP',\
       GetConsoleCommandHistory,'GetConsoleCommandHistoryA',\
       GetConsoleCommandHistoryLength,'GetConsoleCommandHistoryLengthA',\
       GetConsoleCursorInfo,'GetConsoleCursorInfo',\
       GetConsoleDisplayMode,'GetConsoleDisplayMode',\
       GetConsoleFontInfo,'GetConsoleFontInfo',\
       GetConsoleFontSize,'GetConsoleFontSize',\
       GetConsoleHardwareState,'GetConsoleHardwareState',\
       GetConsoleInputExeName,'GetConsoleInputExeNameA',\
       GetConsoleInputWaitHandle,'GetConsoleInputWaitHandle',\
       GetConsoleKeyboardLayoutName,'GetConsoleKeyboardLayoutNameA',\
       GetConsoleMode,'GetConsoleMode',\
       GetConsoleOutputCP,'GetConsoleOutputCP',\
       GetConsoleScreenBufferInfo,'GetConsoleScreenBufferInfo',\
       GetConsoleTitle,'GetConsoleTitleA',\
       GetConsoleWindow,'GetConsoleWindow',\
       GetCurrencyFormat,'GetCurrencyFormatA',\
       GetCurrentConsoleFont,'GetCurrentConsoleFont',\
       GetCurrentDirectory,'GetCurrentDirectoryA',\
       GetCurrentProcess,'GetCurrentProcess',\
       GetCurrentProcessId,'GetCurrentProcessId',\
       GetCurrentThread,'GetCurrentThread',\
       GetCurrentThreadId,'GetCurrentThreadId',\
       GetDateFormat,'GetDateFormatA',\
       GetDefaultCommConfig,'GetDefaultCommConfigA',\
       GetDevicePowerState,'GetDevicePowerState',\
       GetDiskFreeSpace,'GetDiskFreeSpaceA',\
       GetDiskFreeSpaceEx,'GetDiskFreeSpaceExA',\
       GetDriveType,'GetDriveTypeA',\
       GetEnvironmentStrings,'GetEnvironmentStringsA',\
       GetEnvironmentVariable,'GetEnvironmentVariableA',\
       GetExitCodeProcess,'GetExitCodeProcess',\
       GetExitCodeThread,'GetExitCodeThread',\
       GetFileAttributes,'GetFileAttributesA',\
       GetFileAttributesEx,'GetFileAttributesExA',\
       GetFileInformationByHandle,'GetFileInformationByHandle',\
       GetFileSize,'GetFileSize',\
       GetFileTime,'GetFileTime',\
       GetFileType,'GetFileType',\
       GetFullPathName,'GetFullPathNameA',\
       GetHandleInformation,'GetHandleInformation',\
       GetLargestConsoleWindowSize,'GetLargestConsoleWindowSize',\
       GetLastError,'GetLastError',\
       GetLocalTime,'GetLocalTime',\
       GetLocaleInfo,'GetLocaleInfoA',\
       GetLogicalDriveStrings,'GetLogicalDriveStringsA',\
       GetLogicalDrives,'GetLogicalDrives',\
       GetLongPathName,'GetLongPathNameA',\
       GetMailslotInfo,'GetMailslotInfo',\
       GetModuleFileName,'GetModuleFileNameA',\
       GetModuleHandle,'GetModuleHandleA',\
       GetNamedPipeHandleState,'GetNamedPipeHandleStateA',\
       GetNamedPipeInfo,'GetNamedPipeInfo',\
       GetNextVDMCommand,'GetNextVDMCommand',\
       GetNumberFormat,'GetNumberFormatA',\
       GetNumberOfConsoleFonts,'GetNumberOfConsoleFonts',\
       GetNumberOfConsoleInputEvents,'GetNumberOfConsoleInputEvents',\
       GetNumberOfConsoleMouseButtons,'GetNumberOfConsoleMouseButtons',\
       GetOEMCP,'GetOEMCP',\
       GetOverlappedResult,'GetOverlappedResult',\
       GetPriorityClass,'GetPriorityClass',\
       GetPrivateProfileInt,'GetPrivateProfileIntA',\
       GetPrivateProfileSection,'GetPrivateProfileSectionA',\
       GetPrivateProfileSectionNames,'GetPrivateProfileSectionNamesA',\
       GetPrivateProfileString,'GetPrivateProfileStringA',\
       GetPrivateProfileStruct,'GetPrivateProfileStructA',\
       GetProcAddress,'GetProcAddress',\
       GetProcessAffinityMask,'GetProcessAffinityMask',\
       GetProcessHeap,'GetProcessHeap',\
       GetProcessHeaps,'GetProcessHeaps',\
       GetProcessPriorityBoost,'GetProcessPriorityBoost',\
       GetProcessShutdownParameters,'GetProcessShutdownParameters',\
       GetProcessTimes,'GetProcessTimes',\
       GetProcessVersion,'GetProcessVersion',\
       GetProcessWorkingSetSize,'GetProcessWorkingSetSize',\
       GetProfileInt,'GetProfileIntA',\
       GetProfileSection,'GetProfileSectionA',\
       GetProfileString,'GetProfileStringA',\
       GetQueuedCompletionStatus,'GetQueuedCompletionStatus',\
       GetShortPathName,'GetShortPathNameA',\
       GetStartupInfo,'GetStartupInfoA',\
       GetStdHandle,'GetStdHandle',\
       GetStringType,'GetStringTypeA',\
       GetStringTypeEx,'GetStringTypeExA',\
       GetSystemDefaultLCID,'GetSystemDefaultLCID',\
       GetSystemDefaultLangID,'GetSystemDefaultLangID',\
       GetSystemDirectory,'GetSystemDirectoryA',\
       GetSystemInfo,'GetSystemInfo',\
       GetSystemPowerStatus,'GetSystemPowerStatus',\
       GetSystemTime,'GetSystemTime',\
       GetSystemTimeAdjustment,'GetSystemTimeAdjustment',\
       GetSystemTimeAsFileTime,'GetSystemTimeAsFileTime',\
       GetTapeParameters,'GetTapeParameters',\
       GetTapePosition,'GetTapePosition',\
       GetTapeStatus,'GetTapeStatus',\
       GetTempFileName,'GetTempFileNameA',\
       GetTempPath,'GetTempPathA',\
       GetThreadContext,'GetThreadContext',\
       GetThreadLocale,'GetThreadLocale',\
       GetThreadPriority,'GetThreadPriority',\
       GetThreadPriorityBoost,'GetThreadPriorityBoost',\
       GetThreadSelectorEntry,'GetThreadSelectorEntry',\
       GetThreadTimes,'GetThreadTimes',\
       GetTickCount,'GetTickCount',\
       GetTimeFormat,'GetTimeFormatA',\
       GetTimeZoneInformation,'GetTimeZoneInformation',\
       GetUserDefaultLCID,'GetUserDefaultLCID',\
       GetUserDefaultLangID,'GetUserDefaultLangID',\
       GetVDMCurrentDirectories,'GetVDMCurrentDirectories',\
       GetVersion,'GetVersion',\
       GetVersionEx,'GetVersionExA',\
       GetVolumeInformation,'GetVolumeInformationA',\
       GetWindowsDirectory,'GetWindowsDirectoryA',\
       GlobalAddAtom,'GlobalAddAtomA',\
       GlobalAlloc,'GlobalAlloc',\
       GlobalCompact,'GlobalCompact',\
       GlobalDeleteAtom,'GlobalDeleteAtom',\
       GlobalFindAtom,'GlobalFindAtomA',\
       GlobalFix,'GlobalFix',\
       GlobalFlags,'GlobalFlags',\
       GlobalFree,'GlobalFree',\
       GlobalGetAtomName,'GlobalGetAtomNameA',\
       GlobalHandle,'GlobalHandle',\
       GlobalLock,'GlobalLock',\
       GlobalMemoryStatus,'GlobalMemoryStatus',\
       GlobalMemoryStatusVlm,'GlobalMemoryStatusVlm',\
       GlobalReAlloc,'GlobalReAlloc',\
       GlobalSize,'GlobalSize',\
       GlobalUnWire,'GlobalUnWire',\
       GlobalUnfix,'GlobalUnfix',\
       GlobalUnlock,'GlobalUnlock',\
       GlobalWire,'GlobalWire',\
       Heap32First,'Heap32First',\
       Heap32ListFirst,'Heap32ListFirst',\
       Heap32ListNext,'Heap32ListNext',\
       Heap32Next,'Heap32Next',\
       HeapAlloc,'HeapAlloc',\
       HeapCompact,'HeapCompact',\
       HeapCreate,'HeapCreate',\
       HeapDestroy,'HeapDestroy',\
       HeapExtend,'HeapExtend',\
       HeapFree,'HeapFree',\
       HeapLock,'HeapLock',\
       HeapReAlloc,'HeapReAlloc',\
       HeapSize,'HeapSize',\
       HeapSummary,'HeapSummary',\
       HeapUnlock,'HeapUnlock',\
       HeapUsage,'HeapUsage',\
       HeapValidate,'HeapValidate',\
       HeapWalk,'HeapWalk',\
       InitAtomTable,'InitAtomTable',\
       InitializeCriticalSection,'InitializeCriticalSection',\
       InitializeCriticalSectionAndSpinCount,'InitializeCriticalSectionAndSpinCount',\
       InterlockedCompareExchange,'InterlockedCompareExchange',\
       InterlockedDecrement,'InterlockedDecrement',\
       InterlockedExchange,'InterlockedExchange',\
       InterlockedExchangeAdd,'InterlockedExchangeAdd',\
       InterlockedIncrement,'InterlockedIncrement',\
       InvalidateConsoleDIBits,'InvalidateConsoleDIBits',\
       IsBadCodePtr,'IsBadCodePtr',\
       IsBadHugeReadPtr,'IsBadHugeReadPtr',\
       IsBadHugeWritePtr,'IsBadHugeWritePtr',\
       IsBadReadPtr,'IsBadReadPtr',\
       IsBadStringPtr,'IsBadStringPtrA',\
       IsBadWritePtr,'IsBadWritePtr',\
       IsDBCSLeadByte,'IsDBCSLeadByte',\
       IsDBCSLeadByteEx,'IsDBCSLeadByteEx',\
       IsDebuggerPresent,'IsDebuggerPresent',\
       IsProcessorFeaturePresent,'IsProcessorFeaturePresent',\
       IsValidCodePage,'IsValidCodePage',\
       IsValidLocale,'IsValidLocale',\
       LCMapString,'LCMapStringA',\
       LeaveCriticalSection,'LeaveCriticalSection',\
       LoadLibrary,'LoadLibraryA',\
       LoadLibraryEx,'LoadLibraryExA',\
       LoadModule,'LoadModule',\
       LoadResource,'LoadResource',\
       LocalAlloc,'LocalAlloc',\
       LocalCompact,'LocalCompact',\
       LocalFileTimeToFileTime,'LocalFileTimeToFileTime',\
       LocalFlags,'LocalFlags',\
       LocalFree,'LocalFree',\
       LocalHandle,'LocalHandle',\
       LocalLock,'LocalLock',\
       LocalReAlloc,'LocalReAlloc',\
       LocalShrink,'LocalShrink',\
       LocalSize,'LocalSize',\
       LocalUnlock,'LocalUnlock',\
       LockFile,'LockFile',\
       LockFileEx,'LockFileEx',\
       LockResource,'LockResource',\
       MapViewOfFile,'MapViewOfFile',\
       MapViewOfFileEx,'MapViewOfFileEx',\
       MapViewOfFileVlm,'MapViewOfFileVlm',\
       Module32First,'Module32First',\
       Module32Next,'Module32Next',\
       MoveFile,'MoveFileA',\
       MoveFileEx,'MoveFileExA',\
       MoveFileWithProgress,'MoveFileWithProgressA',\
       MulDiv,'MulDiv',\
       MultiByteToWideChar,'MultiByteToWideChar',\
       OpenEvent,'OpenEventA',\
       OpenFile,'OpenFile',\
       OpenFileMapping,'OpenFileMappingA',\
       OpenJobObject,'OpenJobObjectA',\
       OpenMutex,'OpenMutexA',\
       OpenProcess,'OpenProcess',\
       OpenProfileUserMapping,'OpenProfileUserMapping',\
       OpenSemaphore,'OpenSemaphoreA',\
       OpenWaitableTimer,'OpenWaitableTimerA',\
       OutputDebugString,'OutputDebugStringA',\
       PeekConsoleInput,'PeekConsoleInputA',\
       PeekNamedPipe,'PeekNamedPipe',\
       PostQueuedCompletionStatus,'PostQueuedCompletionStatus',\
       PrepareTape,'PrepareTape',\
       Process32First,'Process32First',\
       Process32Next,'Process32Next',\
       PulseEvent,'PulseEvent',\
       PurgeComm,'PurgeComm',\
       QueryDosDevice,'QueryDosDeviceA',\
       QueryInformationJobObject,'QueryInformationJobObject',\
       QueryPerformanceFrequency,'QueryPerformanceFrequencyA',\
       QueryWin31IniFilesMappedToRegistry,'QueryWin31IniFilesMappedToRegistry',\
       QueueUserAPC,'QueueUserAPC',\
       RaiseException,'RaiseException',\
       ReadConsole,'ReadConsoleA',\
       ReadConsoleInput,'ReadConsoleInputA',\
       ReadConsoleInputEx,'ReadConsoleInputExA',\
       ReadConsoleOutput,'ReadConsoleOutputA',\
       ReadConsoleOutputAttribute,'ReadConsoleOutputAttribute',\
       ReadConsoleOutputCharacter,'ReadConsoleOutputCharacterA',\
       ReadFile,'ReadFile',\
       ReadFileEx,'ReadFileEx',\
       ReadFileScatter,'ReadFileScatter',\
       ReadFileVlm,'ReadFileVlm',\
       ReadProcessMemory,'ReadProcessMemory',\
       ReadProcessMemoryVlm,'ReadProcessMemoryVlm',\
       RegisterConsoleVDM,'RegisterConsoleVDM',\
       RegisterWaitForInputIdle,'RegisterWaitForInputIdle',\
       RegisterWowBaseHandlers,'RegisterWowBaseHandlers',\
       RegisterWowExec,'RegisterWowExec',\
       ReleaseMutex,'ReleaseMutex',\
       ReleaseSemaphore,'ReleaseSemaphore',\
       RemoveDirectory,'RemoveDirectoryA',\
       RequestWakeupLatency,'RequestWakeupLatency',\
       ResetEvent,'ResetEvent',\
       ResumeThread,'ResumeThread',\
       RtlFillMemory,'RtlFillMemory',\
       RtlMoveMemory,'RtlMoveMemory',\
       RtlUnwind,'RtlUnwind',\
       RtlZeroMemory,'RtlZeroMemory',\
       ScrollConsoleScreenBuffer,'ScrollConsoleScreenBufferA',\
       SearchPath,'SearchPathA',\
       SetCommBreak,'SetCommBreak',\
       SetCommConfig,'SetCommConfig',\
       SetCommMask,'SetCommMask',\
       SetCommState,'SetCommState',\
       SetCommTimeouts,'SetCommTimeouts',\
       SetComputerName,'SetComputerNameA',\
       SetConsoleActiveScreenBuffer,'SetConsoleActiveScreenBuffer',\
       SetConsoleCP,'SetConsoleCP',\
       SetConsoleCommandHistoryMode,'SetConsoleCommandHistoryMode',\
       SetConsoleCtrlHandler,'SetConsoleCtrlHandler',\
       SetConsoleCursor,'SetConsoleCursor',\
       SetConsoleCursorInfo,'SetConsoleCursorInfo',\
       SetConsoleCursorPosition,'SetConsoleCursorPosition',\
       SetConsoleDisplayMode,'SetConsoleDisplayMode',\
       SetConsoleFont,'SetConsoleFont',\
       SetConsoleHardwareState,'SetConsoleHardwareState',\
       SetConsoleIcon,'SetConsoleIcon',\
       SetConsoleInputExeName,'SetConsoleInputExeNameA',\
       SetConsoleKeyShortcuts,'SetConsoleKeyShortcuts',\
       SetConsoleMaximumWindowSize,'SetConsoleMaximumWindowSize',\
       SetConsoleMenuClose,'SetConsoleMenuClose',\
       SetConsoleMode,'SetConsoleMode',\
       SetConsoleNumberOfCommands,'SetConsoleNumberOfCommandsA',\
       SetConsoleOutputCP,'SetConsoleOutputCP',\
       SetConsolePalette,'SetConsolePalette',\
       SetConsoleScreenBufferSize,'SetConsoleScreenBufferSize',\
       SetConsoleTextAttribute,'SetConsoleTextAttribute',\
       SetConsoleTitle,'SetConsoleTitleA',\
       SetConsoleWindowInfo,'SetConsoleWindowInfo',\
       SetCriticalSectionSpinCount,'SetCriticalSectionSpinCount',\
       SetCurrentDirectory,'SetCurrentDirectoryA',\
       SetDefaultCommConfig,'SetDefaultCommConfigA',\
       SetEndOfFile,'SetEndOfFile',\
       SetEnvironmentVariable,'SetEnvironmentVariableA',\
       SetErrorMode,'SetErrorMode',\
       SetEvent,'SetEvent',\
       SetFileApisToANSI,'SetFileApisToANSI',\
       SetFileApisToOEM,'SetFileApisToOEM',\
       SetFileAttributes,'SetFileAttributesA',\
       SetFilePointer,'SetFilePointer',\
       SetFileTime,'SetFileTime',\
       SetHandleCount,'SetHandleCount',\
       SetHandleInformation,'SetHandleInformation',\
       SetInformationJobObject,'SetInformationJobObject',\
       SetLastConsoleEventActive,'SetLastConsoleEventActive',\
       SetLastError,'SetLastError',\
       SetLocalTime,'SetLocalTime',\
       SetLocaleInfo,'SetLocaleInfoA',\
       SetMailslotInfo,'SetMailslotInfo',\
       SetNamedPipeHandleState,'SetNamedPipeHandleState',\
       SetPriorityClass,'SetPriorityClass',\
       SetProcessAffinityMask,'SetProcessAffinityMask',\
       SetProcessPriorityBoost,'SetProcessPriorityBoost',\
       SetProcessShutdownParameters,'SetProcessShutdownParameters',\
       SetProcessWorkingSetSize,'SetProcessWorkingSetSize',\
       SetStdHandle,'SetStdHandle',\
       SetSystemPowerState,'SetSystemPowerState',\
       SetSystemTime,'SetSystemTime',\
       SetSystemTimeAdjustment,'SetSystemTimeAdjustment',\
       SetTapeParameters,'SetTapeParameters',\
       SetTapePosition,'SetTapePosition',\
       SetThreadAffinityMask,'SetThreadAffinityMask',\
       SetThreadContext,'SetThreadContext',\
       SetThreadExecutionState,'SetThreadExecutionState',\
       SetThreadIdealProcessor,'SetThreadIdealProcessor',\
       SetThreadLocale,'SetThreadLocale',\
       SetThreadPriority,'SetThreadPriority',\
       SetThreadPriorityBoost,'SetThreadPriorityBoost',\
       SetTimeZoneInformation,'SetTimeZoneInformation',\
       SetUnhandledExceptionFilter,'SetUnhandledExceptionFilter',\
       SetVDMCurrentDirectories,'SetVDMCurrentDirectories',\
       SetVolumeLabel,'SetVolumeLabelA',\
       SetWaitableTimer,'SetWaitableTimer',\
       SetupComm,'SetupComm',\
       ShowConsoleCursor,'ShowConsoleCursor',\
       SignalObjectAndWait,'SignalObjectAndWait',\
       SizeofResource,'SizeofResource',\
       Sleep,'Sleep',\
       SleepEx,'SleepEx',\
       SuspendThread,'SuspendThread',\
       SwitchToFiber,'SwitchToFiber',\
       SwitchToThread,'SwitchToThread',\
       SystemTimeToFileTime,'SystemTimeToFileTime',\
       SystemTimeToTzSpecificLocalTime,'SystemTimeToTzSpecificLocalTime',\
       TerminateJobObject,'TerminateJobObject',\
       TerminateProcess,'TerminateProcess',\
       TerminateThread,'TerminateThread',\
       Thread32First,'Thread32First',\
       Thread32Next,'Thread32Next',\
       TlsAlloc,'TlsAlloc',\
       TlsFree,'TlsFree',\
       TlsGetValue,'TlsGetValue',\
       TlsSetValue,'TlsSetValue',\
       Toolhelp32ReadProcessMemory,'Toolhelp32ReadProcessMemory',\
       TransactNamedPipe,'TransactNamedPipe',\
       TransmitCommChar,'TransmitCommChar',\
       TrimVirtualBuffer,'TrimVirtualBuffer',\
       TryEnterCriticalSection,'TryEnterCriticalSection',\
       UnhandledExceptionFilter,'UnhandledExceptionFilter',\
       UnlockFile,'UnlockFile',\
       UnlockFileEx,'UnlockFileEx',\
       UnmapViewOfFile,'UnmapViewOfFile',\
       UnmapViewOfFileVlm,'UnmapViewOfFileVlm',\
       UpdateResource,'UpdateResourceA',\
       VDMConsoleOperation,'VDMConsoleOperation',\
       VDMOperationStarted,'VDMOperationStarted',\
       VerLanguageName,'VerLanguageNameA',\
       VerifyConsoleIoHandle,'VerifyConsoleIoHandle',\
       VirtualAlloc,'VirtualAlloc',\
       VirtualAllocEx,'VirtualAllocEx',\
       VirtualAllocVlm,'VirtualAllocVlm',\
       VirtualBufferExceptionHandler,'VirtualBufferExceptionHandler',\
       VirtualFree,'VirtualFree',\
       VirtualFreeEx,'VirtualFreeEx',\
       VirtualFreeVlm,'VirtualFreeVlm',\
       VirtualLock,'VirtualLock',\
       VirtualProtect,'VirtualProtect',\
       VirtualProtectEx,'VirtualProtectEx',\
       VirtualProtectVlm,'VirtualProtectVlm',\
       VirtualQuery,'VirtualQuery',\
       VirtualQueryEx,'VirtualQueryEx',\
       VirtualQueryVlm,'VirtualQueryVlm',\
       VirtualUnlock,'VirtualUnlock',\
       WaitCommEvent,'WaitCommEvent',\
       WaitForDebugEvent,'WaitForDebugEvent',\
       WaitForMultipleObjects,'WaitForMultipleObjects',\
       WaitForMultipleObjectsEx,'WaitForMultipleObjectsEx',\
       WaitForSingleObject,'WaitForSingleObject',\
       WaitForSingleObjectEx,'WaitForSingleObjectEx',\
       WaitNamedPipe,'WaitNamedPipeA',\
       WideCharToMultiByte,'WideCharToMultiByte',\
       WinExec,'WinExec',\
       WriteConsole,'WriteConsoleA',\
       WriteConsoleInput,'WriteConsoleInputA',\
       WriteConsoleInputVDM,'WriteConsoleInputVDMA',\
       WriteConsoleOutput,'WriteConsoleOutputA',\
       WriteConsoleOutputAttribute,'WriteConsoleOutputAttribute',\
       WriteConsoleOutputCharacter,'WriteConsoleOutputCharacterA',\
       WriteFile,'WriteFile',\
       WriteFileEx,'WriteFileEx',\
       WriteFileGather,'WriteFileGather',\
       WriteFileVlm,'WriteFileVlm',\
       WritePrivateProfileSection,'WritePrivateProfileSectionA',\
       WritePrivateProfileString,'WritePrivateProfileStringA',\
       WritePrivateProfileStruct,'WritePrivateProfileStructA',\
       WriteProcessMemory,'WriteProcessMemory',\
       WriteProcessMemoryVlm,'WriteProcessMemoryVlm',\
       WriteProfileSection,'WriteProfileSectionA',\
       WriteProfileString,'WriteProfileStringA',\
       WriteTapemark,'WriteTapemark',\
       _hread,'_hread',\
       _hwrite,'_hwrite',\
       _lclose,'_lclose',\
       _lcreat,'_lcreat',\
       _llseek,'_llseek',\
       _lopen,'_lopen',\
       _lread,'_lread',\
       _lwrite,'_lwrite',\
       lstrcat,'lstrcatA',\
       lstrcmp,'lstrcmpA',\
       lstrcmpi,'lstrcmpiA',\
       lstrcpy,'lstrcpyA',\
       lstrcpyn,'lstrcpynA',\
       lstrlen,'lstrlenA'