/* Decompiled from Speed.exe @ 004ae7d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae7d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = FUN_004ae530(param_2);
  uVar7 = DAT_00735e90;
  uVar6 = DAT_006fb044;
  if (iVar8 != 0) {
    uVar9 = *(uint *)(param_1 + 0x1328);
    fVar2 = *(float *)(param_1 + 0x1334);
    uVar3 = *(undefined4 *)(param_1 + 0x1338);
    uVar5 = DAT_007355b4;
    for (iVar8 = *(int *)(param_1 + 0x132c); DAT_007355b4 = uVar5, iVar8 != 0; iVar8 = iVar8 + -1) {
      DAT_007355b4 = uVar5 + 0x40;
      if (DAT_007355b8 <= DAT_007355b4) {
        DAT_007355b4 = uVar5;
        DAT_007355c4 = 1;
        DAT_007355c8 = DAT_007355c8 + 0x40;
        return;
      }
      if (uVar5 == 0) {
        return;
      }
      FUN_00401cd0();
      *(float *)(uVar5 + 0x30) = -fVar2;
      puVar1 = (undefined4 *)(uVar9 * 0x2e0 + param_1 + 0x1020);
      *(undefined4 *)(uVar5 + 0x34) = uVar7;
      *(undefined4 *)(uVar5 + 0x38) = uVar6;
      for (puVar4 = (undefined4 *)*puVar1; (puVar4 != (undefined4 *)0x0 && (puVar4 != puVar1));
          puVar4 = (undefined4 *)*puVar4) {
        FUN_005447c0(param_2,puVar4,0x3f800000,0,uVar3,0);
      }
      uVar9 = uVar9 + 1 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      fVar2 = fVar2 + _DAT_006cc9f8;
      uVar5 = DAT_007355b4;
    }
  }
  return;
}

