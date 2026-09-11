/* spd-match: far pct=4.34 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_00532840();
int __cdecl FUN_00583f20();
int __cdecl FUN_00674898();
extern int _DAT_006b6490;
extern int _DAT_006b6494;
extern int _DAT_006b6498;
extern int _DAT_006b649c;
extern int _DAT_006b64a0;
extern int _DAT_006b64a4;
extern int _DAT_006b64a8;
extern int _DAT_006b64ac;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc9f0;
extern int _DAT_006ccbfc;
extern int _DAT_006ccc78;
extern int _DAT_00705858;
extern int _DAT_0070585c;
extern unsigned char *PTR_DAT_00705840;
int unaff_ESI;

void FUN_0052d8b0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (*(int *)(unaff_ESI + 0x14) == 1) {
    fVar6 = *(float *)(*(int *)(*(int *)(unaff_ESI + 0x10) + 0x234) + 0x3d4) * ((int)_DAT_006cc9f0);
    FUN_00583f20(&PTR_DAT_00705840,fVar6);
    iVar2 = FUN_00674898(fVar4,fVar5);
    _DAT_00705858 = fVar6;
    fVar5 = (float)(iVar2 * 0x7fff >> 0xf);
    fVar4 = SQRT(*(float *)(unaff_ESI + 0x60) * *(float *)(unaff_ESI + 0x60) +
                 *(float *)(unaff_ESI + 100) * *(float *)(unaff_ESI + 100)) * ((int)_DAT_006b6490);
    if (_DAT_006b6498 < fVar4) {
      fVar4 = _DAT_006b6498;
    }
    fVar4 = (((int)_DAT_006b649c) + _DAT_006cc7bc) * (fVar4 + _DAT_006cc7bc) * fVar5;
    fVar6 = SQRT(*(float *)(unaff_ESI + 0x68) * *(float *)(unaff_ESI + 0x68) +
                 *(float *)(unaff_ESI + 0x6c) * *(float *)(unaff_ESI + 0x6c)) * ((int)_DAT_006b6490);
    if (_DAT_006b6498 < fVar6) {
      fVar6 = _DAT_006b6498;
    }
    fVar1 = (*(float *)(unaff_ESI + 0x98) + *(float *)(unaff_ESI + 0x8c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006b6494) * ((int)_DAT_006b649c);
    if (_DAT_006b649c < fVar1) {
      fVar1 = _DAT_006b649c;
    }
    fVar5 = (fVar1 + _DAT_006cc7bc) * (fVar6 + _DAT_006cc7bc) * fVar5;
    if (_DAT_006ccc78 < fVar5) {
      fVar5 = 32000.0;
    }
    if (_DAT_006ccc78 < fVar4) {
      fVar4 = 32000.0;
    }
    FUN_00532840(fVar4,fVar5);
    fVar6 = SQRT(*(float *)(unaff_ESI + 0x68) * *(float *)(unaff_ESI + 0x68) +
                 *(float *)(unaff_ESI + 0x6c) * *(float *)(unaff_ESI + 0x6c)) * ((int)_DAT_006b64a0);
    if (_DAT_006b64a8 < fVar6) {
      fVar6 = _DAT_006b64a8;
    }
    fVar1 = (*(float *)(unaff_ESI + 0x98) + *(float *)(unaff_ESI + 0x8c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006b64a4) * ((int)_DAT_006b64ac);
    if (_DAT_006b64ac < fVar1) {
      fVar1 = _DAT_006b64ac;
    }
    fVar6 = (fVar1 + _DAT_006cc7bc) * (fVar6 + _DAT_006cc7bc) * ((int)_DAT_0070585c);
    if (_DAT_006ccbfc < fVar6) {
      fVar6 = 6000.0;
    }
  }
  uVar3 = FUN_00674898(fVar4,fVar5,fVar6);
  *(undefined4 *)(unaff_ESI + 0x1f0) = uVar3;
  uVar3 = FUN_00674898();
  *(undefined4 *)(unaff_ESI + 0x1ec) = uVar3;
  uVar3 = FUN_00674898();
  *(undefined4 *)(unaff_ESI + 0x1f8) = uVar3;
  uVar3 = FUN_00674898();
  *(undefined4 *)(unaff_ESI + 500) = uVar3;
  return;
}
