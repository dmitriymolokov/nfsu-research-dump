/* Decompiled from Speed.exe @ 006805ec */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_00793224) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    piVar1 = (int *)((&DAT_00793240)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_006eb1b8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00680648;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00680648:
      *(undefined4 *)(iVar3 + (&DAT_00793240)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_00677f42();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_00677f4b();
  *puVar2 = 0;
  return -1;
}

