/* Decompiled from Speed.exe @ 004ae530 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ae530(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_ESI;
  int iVar7;
  
  uVar5 = 0;
  *(undefined4 *)(unaff_ESI + 0x1328) = 0;
  *(undefined4 *)(unaff_ESI + 0x132c) = 0;
  *(undefined4 *)(unaff_ESI + 0x1330) = 0;
  *(undefined4 *)(unaff_ESI + 0x1334) = 0;
  *(undefined4 *)(unaff_ESI + 0x1338) = 0;
  if ((*(int *)(unaff_ESI + 0x18) == 0) || (DAT_006fb038 == 0)) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 4);
  if ((iVar7 < 4) || (5 < iVar7)) {
    if ((iVar7 < 10) || (0xf < iVar7)) {
      if (iVar7 < 1) {
        return 0;
      }
      if (3 < iVar7) {
        return 0;
      }
      uVar6 = 0;
      iVar7 = DAT_006fb048;
    }
    else {
      uVar5 = 2;
      uVar6 = 1;
      iVar7 = DAT_006fb050;
    }
  }
  else {
    uVar5 = 1;
    uVar6 = 2;
    iVar7 = DAT_006fb04c;
  }
  iVar2 = FUN_00674898();
  uVar3 = iVar2 - iVar7 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar4 = uVar3 - 1 | 0xfffffffe;
    uVar3 = uVar4 + 1;
    if ((int)uVar3 < 0) {
      uVar3 = uVar4 + 3 + (-uVar3 - 1 & 0xfffffffe);
    }
  }
  uVar3 = uVar3 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  *(undefined4 *)(unaff_ESI + 0x1338) = uVar6;
  fVar1 = (float)iVar2 * _DAT_006cc9f8;
  *(uint *)(unaff_ESI + 0x1328) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x1330) = uVar5;
  *(int *)(unaff_ESI + 0x132c) = iVar7 * 2 + 1;
  *(float *)(unaff_ESI + 0x1334) =
       (*(float *)(unaff_ESI + 4) - fVar1) - (float)iVar7 * _DAT_006cc9f8;
  return 1;
}

