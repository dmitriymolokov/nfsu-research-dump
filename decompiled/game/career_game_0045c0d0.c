/* spd-match: far pct=3.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_005a6860();
extern int DAT_006cc7a4;
extern int _DAT_006b74c0;
extern int _DAT_006b74c4;
extern int _DAT_006b74c8;
extern int _DAT_006b74cc;
extern int _DAT_006b74d0;
extern int _DAT_006b74d4;
extern int _DAT_006ccc9c;
extern void LAB_0045c27b(void);
int unaff_EDI;

int FUN_0045c0d0(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int *unaff_EDI;
  bool bVar11;
  ushort uVar12;
  float10 fVar13;
  float local_1c;
  float local_18;
  
  iVar9 = (int)(char)unaff_EDI[0xe2];
  fVar2 = *(float *)(param_2 + 0x10);
  iVar3 = unaff_EDI[0xe5];
  fVar4 = *(float *)(param_2 + 0xc);
  if ((iVar3 < 0) || (4 < iVar3)) {
    if ((iVar3 < 0xb) || (0x10 < iVar3)) {
      local_1c = 0.0;
    }
    else {
      local_1c = *(float *)(param_2 + -0x14 + iVar3 * 4);
    }
  }
  else {
    local_1c = *(float *)(param_2 + 0x14);
  }
  iVar5 = *(int *)(unaff_EDI[0xea] + 8 + *(int *)(param_2 + 0x30) * 4);
  fVar6 = (float)unaff_EDI[iVar9 * 0xe + 6];
  fVar7 = (float)unaff_EDI[iVar9 * 0xe + 5];
  if ((iVar3 < 0) || (4 < iVar3)) {
    if ((iVar3 < 0xb) || (0x10 < iVar3)) {
      local_18 = 0.0;
    }
    else {
      local_18 = (float)unaff_EDI[iVar9 * 0xe + iVar3 + -3];
    }
  }
  else {
    local_18 = (float)unaff_EDI[iVar9 * 0xe + 7];
  }
  fVar13 = (float10)FUN_005a6860(iVar3,0xbf800000);
  fVar1 = (float)fVar13;
  bVar11 = DAT_006cc7a4 < (fVar2 - fVar6) - (((int)(_DAT_006b74d4)) + fVar7 + fVar4);
  iVar10 = 3;
  if ((*(int *)(*(int *)(*unaff_EDI + 0x14) + 4) != 3) || (_DAT_006b74c8 <= local_1c)) {
    if ((ABS(local_18) < _DAT_006b74c4 == (ABS(local_18) == _DAT_006b74c4)) ||
       (((ABS(local_1c) < _DAT_006b74c4 == (ABS(local_1c) == _DAT_006b74c4) ||
         (*(float *)(param_2 + 0x10) - (float)unaff_EDI[(char)unaff_EDI[0xe2] * 0xe + 6] <=
          _DAT_006b74d0)) || (ABS(fVar1) < _DAT_006ccc9c)))) {
      if ((ABS(local_18 - local_1c) < _DAT_006b74cc) && (bVar11)) {
        iVar10 = 1;
        goto LAB_0045c27b;
      }
      uVar12 = (ushort)(local_18 < local_1c) << 8 | (ushort)(local_18 == local_1c) << 0xe;
    }
    else {
      uVar12 = (ushort)(fVar1 < DAT_006cc7a4) << 8 | (ushort)(fVar1 == DAT_006cc7a4) << 0xe;
    }
    if (uVar12 != 0) {
      iVar10 = 2;
    }
  }
LAB_0045c27b:
  fVar2 = (float)unaff_EDI[iVar9 * 0xe + 4] + *(float *)(param_2 + 8) + _DAT_006b74c0;
  if ((iVar3 < 0) || (4 < iVar3)) {
    fVar4 = DAT_006cc7a4;
    if ((10 < iVar3) && (iVar3 < 0x11)) {
      fVar4 = *(float *)(iVar5 + -8 + iVar3 * 4);
    }
  }
  else {
    fVar4 = *(float *)(iVar5 + 0x20);
  }
  bVar8 = fVar4 <= local_1c - fVar2;
  if ((iVar3 < 0) || (4 < iVar3)) {
    fVar4 = DAT_006cc7a4;
    if ((10 < iVar3) && (iVar3 < 0x11)) {
      fVar4 = *(float *)(iVar5 + 0x14 + iVar3 * 4);
    }
  }
  else {
    fVar4 = *(float *)(iVar5 + 0x3c);
  }
  fVar2 = fVar2 + local_1c;
  if (((iVar10 != 2) && (iVar10 != 1)) || (bVar8)) {
    if (((iVar10 == 3) || (iVar10 == 1)) && ((fVar4 < fVar2 && ((bVar8 && (bVar11)))))) {
      return 2;
    }
  }
  else if ((fVar2 <= fVar4) && (bVar11)) {
    return 3;
  }
  return iVar10;
}
