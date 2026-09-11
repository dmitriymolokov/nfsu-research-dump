/* Decompiled from Speed.exe @ 0067941e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2003 Release */

int __cdecl __close(int _FileHandle)

{
  undefined4 *puVar1;
  int iVar2;
  int local_20;
  
  if ((uint)_FileHandle < DAT_00793224) {
    iVar2 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_00793240)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
      FUN_006806ac(_FileHandle);
      if ((*(byte *)((&DAT_00793240)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        puVar1 = (undefined4 *)FUN_00677f42();
        *puVar1 = 9;
        local_20 = -1;
      }
      else {
        local_20 = FUN_0067939b(_FileHandle);
      }
      FUN_00679495();
      return local_20;
    }
  }
  puVar1 = (undefined4 *)FUN_00677f42();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_00677f4b();
  *puVar1 = 0;
  return -1;
}

