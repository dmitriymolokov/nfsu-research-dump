/* Decompiled from Speed.exe @ 0051c7b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0051c7b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x104) + 0x2ac);
    if ((-1 < iVar1) && (iVar1 < 0x1a)) {
      *(undefined ***)(param_1 + 0xa8) = &PTR_s__Doomsday__006f4d08 + iVar1 * 4;
      return;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}

