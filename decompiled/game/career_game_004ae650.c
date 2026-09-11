/* Decompiled from Speed.exe @ 004ae650 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae650(int param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = FUN_004ae530(param_2);
  uVar5 = DAT_00735e90;
  uVar4 = DAT_006fb044;
  if (iVar6 != 0) {
    uVar9 = *(uint *)(param_1 + 0x1328);
    iVar6 = *(int *)(param_1 + 0x1330);
    fVar1 = *(float *)(param_1 + 0x1334);
    uVar2 = DAT_007355b4;
    uVar3 = DAT_007355b4;
    for (iVar7 = *(int *)(param_1 + 0x132c); DAT_007355b4 = uVar3, iVar7 != 0; iVar7 = iVar7 + -1) {
      DAT_007355b4 = uVar2 + 0x40;
      if (DAT_007355b4 < DAT_007355b8) {
        uVar8 = DAT_007355b4;
        if (uVar2 != 0) {
          FUN_00401cd0();
          *(float *)(uVar2 + 0x30) = -fVar1;
          *(undefined4 *)(uVar2 + 0x34) = uVar5;
          *(undefined4 *)(uVar2 + 0x38) = uVar4;
          iVar10 = 0;
          iVar11 = uVar9 * 0x2e0 + 0xd50 + param_1 + iVar6 * 0x18;
          do {
            FUN_0040c910(param_2,iVar11,uVar2,0,0);
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 0x48;
            uVar8 = DAT_007355b4;
          } while (iVar10 < 10);
        }
      }
      else {
        DAT_007355c8 = DAT_007355c8 + 0x40;
        DAT_007355c4 = 1;
        uVar8 = uVar2;
        DAT_007355b4 = uVar3;
      }
      uVar9 = uVar9 + 1 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      fVar1 = fVar1 + _DAT_006cc9f8;
      uVar2 = uVar8;
      uVar3 = DAT_007355b4;
    }
  }
  return;
}

