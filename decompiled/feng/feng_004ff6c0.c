/* Decompiled from Speed.exe @ 004ff6c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004ff6c0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  if (uVar1 <= param_2) {
    *(uint *)(param_1 + 0x88) = uVar1 - 1;
    return;
  }
  *(uint *)(param_1 + 0x88) = param_2;
  return;
}

