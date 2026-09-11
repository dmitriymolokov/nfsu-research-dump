/* spd-match: far pct=5.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006b7468;
extern int _DAT_006cc7dc;
extern void LAB_0045e820(void);
int unaff_EDI;

void FUN_0045e7b0(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  int unaff_EDI;
  
  pfVar6 = (float *)(*(int *)(unaff_EDI + 0x1f0) + 0x374);
  iVar7 = 4;
  fVar3 = DAT_006cc7a4;
  do {
    fVar1 = *pfVar6;
    if (DAT_006cc7a4 == _DAT_006b7468) {
LAB_0045e820:
      fVar3 = fVar1 + fVar3;
    }
    else {
      fVar4 = -_DAT_006b7468;
      if (-_DAT_006b7468 < fVar1) {
        fVar4 = fVar1;
      }
      if (_DAT_006b7468 < fVar4) {
        fVar4 = _DAT_006b7468;
      }
      if (fVar1 != fVar4) goto LAB_0045e820;
    }
    pfVar6 = pfVar6 + 2;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      if (*(float *)(*(int *)(unaff_EDI + 0x1f0) + 0x3d0) < DAT_006cc7a4) {
        fVar3 = -fVar3;
      }
      iVar7 = *(int *)(unaff_EDI + 0x240);
      uVar2 = *(undefined4 *)(iVar7 + 0x7c);
      *(float *)(iVar7 + 0x7c) = fVar3;
      *(undefined4 *)(iVar7 + 0x80) = uVar2;
      fVar3 = fVar3 - *(float *)(iVar7 + 0x80);
      fVar1 = (fVar3 * ((int)_DAT_006cc7dc) + *(float *)(iVar7 + 0x80)) * param_1;
      fVar3 = fVar3 / param_1;
      if (*(byte *)(iVar7 + 6) < *(byte *)(iVar7 + 5)) {
        *(byte *)(iVar7 + 6) = *(byte *)(iVar7 + 6) + 1;
      }
      fVar4 = param_1 + *(float *)(iVar7 + 8);
      pfVar6 = (float *)(*(int *)(iVar7 + 0x10) + (uint)*(byte *)(iVar7 + 7) * 4);
      *(float *)(iVar7 + 8) = fVar4;
      *(float *)(iVar7 + 8) = fVar4 - *pfVar6;
      *pfVar6 = param_1;
      bVar5 = *(char *)(iVar7 + 7) + 1;
      *(byte *)(iVar7 + 7) = bVar5;
      *(float *)(iVar7 + 0xc) = *(float *)(iVar7 + 8) / (float)*(byte *)(iVar7 + 6);
      if (*(byte *)(iVar7 + 5) <= bVar5) {
        *(undefined1 *)(iVar7 + 7) = 0;
      }
      if (*(byte *)(iVar7 + 0x2e) < *(byte *)(iVar7 + 0x2d)) {
        *(byte *)(iVar7 + 0x2e) = *(byte *)(iVar7 + 0x2e) + 1;
      }
      fVar4 = fVar1 + *(float *)(iVar7 + 0x30);
      pfVar6 = (float *)(*(int *)(iVar7 + 0x38) + (uint)*(byte *)(iVar7 + 0x2f) * 4);
      *(float *)(iVar7 + 0x30) = fVar4;
      *(float *)(iVar7 + 0x30) = fVar4 - *pfVar6;
      *pfVar6 = fVar1;
      bVar5 = *(char *)(iVar7 + 0x2f) + 1;
      *(byte *)(iVar7 + 0x2f) = bVar5;
      *(float *)(iVar7 + 0x34) = *(float *)(iVar7 + 0x30) / (float)*(byte *)(iVar7 + 0x2e);
      if (*(byte *)(iVar7 + 0x2d) <= bVar5) {
        *(undefined1 *)(iVar7 + 0x2f) = 0;
      }
      if (*(byte *)(iVar7 + 0x56) < *(byte *)(iVar7 + 0x55)) {
        *(byte *)(iVar7 + 0x56) = *(byte *)(iVar7 + 0x56) + 1;
      }
      fVar1 = fVar3 + *(float *)(iVar7 + 0x58);
      pfVar6 = (float *)(*(int *)(iVar7 + 0x60) + (uint)*(byte *)(iVar7 + 0x57) * 4);
      *(float *)(iVar7 + 0x58) = fVar1;
      *(float *)(iVar7 + 0x58) = fVar1 - *pfVar6;
      *pfVar6 = fVar3;
      bVar5 = *(char *)(iVar7 + 0x57) + 1;
      *(byte *)(iVar7 + 0x57) = bVar5;
      *(float *)(iVar7 + 0x5c) = *(float *)(iVar7 + 0x58) / (float)*(byte *)(iVar7 + 0x56);
      if (*(byte *)(iVar7 + 0x55) <= bVar5) {
        *(undefined1 *)(iVar7 + 0x57) = 0;
      }
      return;
    }
  } while( true );
}
