/* Decompiled from Speed.exe @ 00678217 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2003 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD *pDVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (DAT_00793224 <= (uint)_FileHandle) {
LAB_006782bf:
    puVar3 = (undefined4 *)FUN_00677f42();
    *puVar3 = 9;
    return -1;
  }
  iVar4 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)((&DAT_00793240)[_FileHandle >> 5] + 4 + iVar4) & 1) == 0) goto LAB_006782bf;
  FUN_006806ac(_FileHandle);
  if ((*(byte *)((&DAT_00793240)[_FileHandle >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_20 = GetLastError();
    }
    else {
      local_20 = 0;
    }
    if (local_20 == 0) goto LAB_006782a6;
    pDVar2 = (DWORD *)FUN_00677f4b();
    *pDVar2 = local_20;
  }
  puVar3 = (undefined4 *)FUN_00677f42();
  *puVar3 = 9;
  local_20 = 0xffffffff;
LAB_006782a6:
  FUN_006782b7();
  return local_20;
}

