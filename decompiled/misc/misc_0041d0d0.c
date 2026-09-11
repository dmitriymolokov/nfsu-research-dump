/* Decompiled from Speed.exe @ 0041d0d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


bool __fastcall FUN_0041d0d0(undefined4 param_1,undefined4 param_2)

{
  HANDLE hFindFile;
  CHAR local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  FUN_0041dc10(param_2,param_1,local_244);
  hFindFile = FindFirstFileA(local_244,&local_140);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    return (((byte)local_140.dwFileAttributes & 0x10) != 0) != true;
  }
  return false;
}

