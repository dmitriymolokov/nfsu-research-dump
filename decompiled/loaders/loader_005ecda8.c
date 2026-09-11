/* Decompiled from Speed.exe @ 005ecda8 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005ece5b) */

int FUN_005ecda8(int param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *extraout_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM3_Qb;
  undefined8 uVar9;
  
  iVar2 = param_1;
  if (7 < param_3) {
    uVar6 = param_3 & 0xfffffff8;
    puVar3 = param_2;
    do {
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = FUN_005eccb7();
      puVar3 = (undefined8 *)uVar9;
      *extraout_ECX = uVar7;
      extraout_ECX[1] = uVar8;
      extraout_ECX[2] = in_XMM3_Qa;
      extraout_ECX[3] = in_XMM3_Qb;
    } while ((int)((ulonglong)uVar9 >> 0x20) != 8);
    param_3 = param_3 - uVar6;
    param_2 = (undefined8 *)((int)param_2 + uVar6 * 2);
    param_1 = param_1 + uVar6 * 4;
  }
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(ushort *)((int)param_2 + uVar6 * 2);
      uVar4 = (uint)uVar1;
      uVar5 = uVar4 & 0x7c00;
      if (uVar5 < 0x401) {
        uVar5 = 0x400;
      }
      *(float *)(param_1 + uVar6 * 4) =
           (float)(-(uint)((uVar1 & 0x7c00) != 0) & 0x400 | uVar4 & 0x3ff) *
           (float)((uVar5 + 0x19800) * 0x2000 | (uVar4 & 0xffff8000) << 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return iVar2;
}

