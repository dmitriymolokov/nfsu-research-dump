/* Decompiled from Speed.exe @ 004faff0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004faff0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = FUN_00674898();
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  return;
}

