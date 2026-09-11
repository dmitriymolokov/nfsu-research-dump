/* Decompiled from Speed.exe @ 00632c00 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00632c00(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_8;
  
  if (param_2 < DAT_006cc7a4) {
    fVar1 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar1 = param_2 - _DAT_006a7eb0;
  }
  local_8 = (int)ROUND(fVar1);
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) + -1 <= local_8) {
    local_8 = *(int *)(param_1 + 0x1c) + -2;
  }
  *(float *)(param_1 + 0x18) = param_2 - (float)local_8;
  iVar2 = *(int *)(param_1 + 0x20);
  if (local_8 == iVar2) {
    fVar1 = *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x38) =
         *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0x2c) +
         (_DAT_006cc7bc - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x28);
    goto LAB_00632d5c;
  }
  if (local_8 == iVar2 + 1) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
LAB_00632ccf:
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + local_8 * 4);
  }
  else {
    if (local_8 != iVar2 + -1) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + local_8 * 4);
      goto LAB_00632ccf;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0xc) + local_8 * 4);
  }
  *(int *)(param_1 + 0x20) = local_8;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x20) * 4);
  fVar4 = (float10)FUN_00633630();
  *(float *)(param_1 + 0x28) = (float)((float10)_DAT_006cc7bc / fVar4);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x50);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4 + *(int *)(param_1 + 0x20) * 4);
  fVar4 = (float10)FUN_00633630();
  *(float *)(param_1 + 0x2c) = (float)((float10)_DAT_006cc7bc / fVar4);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x50);
  fVar1 = *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x38) =
       *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0x2c) +
       (_DAT_006cc7bc - *(float *)(param_1 + 0x18)) / *(float *)(param_1 + 0x28);
LAB_00632d5c:
  *(float *)(param_1 + 0x40) =
       ((*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x3c)) / *(float *)(param_1 + 0x38)) *
       fVar1 - *(float *)(param_1 + 0x3c);
  return;
}

