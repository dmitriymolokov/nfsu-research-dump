/* Decompiled from Speed.exe @ 00490730 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00490730(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 0x14) != '\0') {
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0xc) + iVar4);
        piVar2 = *(int **)(*(int *)(param_2 + 0xc) + iVar4 + 4);
        *piVar2 = iVar1;
        *(int **)(iVar1 + 4) = piVar2;
        _DAT_0078e9d0 = _DAT_0078e9d0 + -1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc0;
      } while (iVar3 < *(int *)(param_2 + 0x10));
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}

