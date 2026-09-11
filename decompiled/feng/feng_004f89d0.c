/* spd-match: far pct=4.99 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0049fc90();
int __cdecl FUN_004f7260();
int __cdecl FUN_004f73f0();
int __cdecl FUN_004f75b0();
int __cdecl FUN_004f87f0();
int __cdecl FUN_004f8b80();
int __cdecl FUN_00593ec0();
int __cdecl FUN_00674898();
extern int DAT_0073ad38;
extern int _DAT_006cc7ac;
extern int _DAT_006cc7bc;
extern int _DAT_006cc974;
extern int _DAT_006ccc00;
extern int _DAT_006ccc20;
extern int _DAT_006ccc58;
extern int _DAT_006ccdc8;
extern int _DAT_006ccdcc;
extern int _DAT_006ccdd0;
extern int _DAT_006ccdd4;

void FUN_004f89d0(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int unaff_EDI;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_004f8b80(unaff_EDI,**(undefined4 **)(unaff_EDI + 0x10));
  FUN_00593ec0(DAT_0073ad38,0,0);
  if (_DAT_006ccc00 < *(float *)(unaff_EDI + 0x38)) {
    *(undefined4 *)(unaff_EDI + 0x38) = 0;
  }
  iVar3 = *(int *)(unaff_EDI + 0xc);
  uVar2 = FUN_0049fc90();
  local_10 = (float)(uint)*(byte *)(iVar3 + 0x17);
  local_c = (float)(int)local_10;
  local_8 = 0x437f0000;
  FUN_004f7260(&local_10,local_4);
  if ((_DAT_006ccdc8 < local_10) && (local_10 < _DAT_006cc7ac)) {
    if (_DAT_006ccc00 < *(float *)(unaff_EDI + 0x38)) {
      *(undefined4 *)(unaff_EDI + 0x38) = 0;
    }
    if (*(float *)(unaff_EDI + 0x38) <= _DAT_006cc7bc) {
      fVar1 = *(float *)(unaff_EDI + 0x38);
    }
    else {
      fVar1 = ((int)_DAT_006ccc00) - *(float *)(unaff_EDI + 0x38);
    }
    fVar1 = fVar1 * local_c * ((int)_DAT_006ccc20) + _DAT_006ccdd4;
    if (_DAT_006cc974 < fVar1) {
      fVar1 = _DAT_006cc974;
    }
    iVar3 = *(int *)(unaff_EDI + 0xc);
    fVar1 = ((int)_DAT_006ccdd0) * fVar1 + _DAT_006ccdcc;
    if (*(char *)(iVar3 + 0x19) == '\0') {
      *(float *)(unaff_EDI + 0x38) = *(float *)(unaff_EDI + 0x38) + _DAT_006ccc58;
    }
    else {
      FUN_004f73f0(fVar1 * *(float *)(iVar3 + 0x1c),fVar1 * *(float *)(iVar3 + 0x20));
      *(float *)(unaff_EDI + 0x38) = *(float *)(unaff_EDI + 0x38) + _DAT_006ccc58;
    }
  }
  if (*(char *)(*(int *)(unaff_EDI + 0xc) + 0x19) != '\0') {
    iVar3 = FUN_00674898();
    FUN_004f75b0(iVar3 << 0x18 | uVar2 & 0xffffff);
    FUN_004f87f0();
    return;
  }
  FUN_004f87f0();
  return;
}
