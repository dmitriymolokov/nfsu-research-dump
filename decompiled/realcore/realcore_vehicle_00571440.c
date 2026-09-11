/* Decompiled from Speed.exe @ 00571440 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00571440(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  
  uVar3 = DAT_006f1d40;
  uVar6 = 0;
  if (DAT_006f1d40 != 0) {
    pfVar4 = (float *)FUN_004081f0();
    pfVar5 = (float *)FUN_0041f5e0();
    do {
      iVar1 = uVar6 * 0x68 + 0x19e0 + *(int *)(param_2 + 0x4d4);
      *(undefined4 *)(iVar1 + 0x14) = (&DAT_006f1d34)[uVar6];
      *(undefined4 *)(iVar1 + 0x24) = (&DAT_006f1d0c)[uVar6];
      fVar2 = _DAT_006cc8a8;
      if (uVar6 == 0) {
        fVar2 = _DAT_006cc7bc;
      }
      *(float *)(iVar1 + 0x28) = fVar2 * *pfVar4;
      fVar2 = _DAT_006cc8a8;
      if (uVar6 == 0) {
        fVar2 = _DAT_006cc7bc;
      }
      *(float *)(iVar1 + 0x2c) = fVar2 * pfVar4[1];
      fVar2 = _DAT_006cc8a8;
      if (uVar6 == 0) {
        fVar2 = _DAT_006cc7bc;
      }
      uVar6 = uVar6 + 1;
      *(float *)(iVar1 + 0x30) = fVar2 * pfVar4[2];
      *(float *)(iVar1 + 0x18) =
           *(float *)(iVar1 + 0x28) * *(float *)(uVar6 * 4 + 0x6f1d28) + *pfVar5;
      *(float *)(iVar1 + 0x1c) =
           *(float *)(uVar6 * 4 + 0x6f1d28) * *(float *)(iVar1 + 0x2c) + pfVar5[1];
      *(float *)(iVar1 + 0x20) =
           *(float *)(iVar1 + 0x30) * *(float *)(uVar6 * 4 + 0x6f1d28) + pfVar5[2];
      *(undefined4 *)(iVar1 + 0x34) = (&DAT_006f1d10)[uVar6];
      *(undefined4 *)(iVar1 + 0x38) = (&DAT_0073464c)[uVar6];
      *(float *)(iVar1 + 0x3c) = (float)*(ushort *)((int)&DAT_006f1d38 + uVar6 * 2 + 2);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(uVar6 * 4 + 0x6f1d20);
      *(undefined2 *)(iVar1 + 0x44) = 0;
    } while (uVar6 < uVar3);
  }
  return;
}

