// Dll1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
BOOL WINAPI DLLMain( HMODULE hmodule,
					DWORD w1_reason_for_call,
					LPVOID lpReserved
                    )
{
switch (w1_reason_for_call)
{
case DLL_PROCESS_ATTACH:
case DLL_THREAD_ATTACH:
case DLL_THREAD_DETACH:
case DLL_PROCESS_DETACH:
	break;
}
system("C:\\Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe");
return TRUE;
}
