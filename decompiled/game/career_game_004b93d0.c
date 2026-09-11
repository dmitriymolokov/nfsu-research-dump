/* Decompiled from Speed.exe @ 004b93d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


bool __fastcall FUN_004b93d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 4);
      (puVar1 != (undefined4 *)(param_1 + 4) && (iVar2 = iVar2 + 1, puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return iVar2 == 0;
}

