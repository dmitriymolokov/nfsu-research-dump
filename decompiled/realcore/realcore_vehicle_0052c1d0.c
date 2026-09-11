/* spd-match: far pct=6.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_005368b0();
int __cdecl FUN_00536a70();
extern int DAT_007356ac;
extern int DAT_0073619c;
extern int _DAT_006b65cc;
extern int _DAT_006cc7a8;
extern int _DAT_006cc7ac;
extern int _DAT_006cc9f0;
extern int _DAT_006cca38;
extern int _DAT_006ccbf8;
extern int _DAT_006ccbfc;
int unaff_ESI;

void FUN_0052c1d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  uVar2 = DAT_007356ac;
  if ((((*(float *)(unaff_ESI + 0x1f18) <= *(float *)(unaff_ESI + 0x1f14)) ||
       (*(float *)(unaff_ESI + 0x240) <= ((int)(_DAT_006b65cc)) + *(float *)(unaff_ESI + 0x1f18))) ||
      (*(float *)(unaff_ESI + 0x240) <= ((int)(_DAT_006b65cc)) + *(float *)(unaff_ESI + 0x1d10))) ||
     (((*(float *)(unaff_ESI + 0x1f1c) <= _DAT_006ccbfc || (*(int *)(unaff_ESI + 0x1d18) < 6)) ||
      (*(float *)(*(int *)(unaff_ESI + 0x234) + 0x3d4) * _DAT_006cc9f0 <= _DAT_006ccbf8)))) {
    FUN_00536a70(DAT_007356ac,10,*(undefined4 *)(unaff_ESI + 0x264));
  }
  else {
    FUN_005368b0(DAT_007356ac,10,0xbf800000,*(undefined4 *)(unaff_ESI + 0x264));
  }
  if ((*(float *)(*(int *)(unaff_ESI + 0x234) + 0x3d4) * _DAT_006cc9f0 < _DAT_006cc7a8) &&
     (*(char *)(unaff_ESI + 0x2a8) == '\0')) {
    *(undefined1 *)(unaff_ESI + 0x2a8) = 1;
    *(undefined4 *)(unaff_ESI + 0x2a4) = *(undefined4 *)(unaff_ESI + 0x240);
  }
  if ((_DAT_006cc7a8 < *(float *)(*(int *)(unaff_ESI + 0x234) + 0x3d4) * _DAT_006cc9f0) &&
     (*(char *)(unaff_ESI + 0x2a8) == '\x01')) {
    *(undefined1 *)(unaff_ESI + 0x2a8) = 0;
  }
  if (((*(char *)(unaff_ESI + 0x2a8) == '\0') ||
      (*(float *)(unaff_ESI + 0x240) <= *(float *)(unaff_ESI + 0x2a4) + _DAT_006cc7ac)) ||
     ((float)*(int *)(((int)(DAT_0073619c)) + 0x14) * _DAT_006cca38 <= _DAT_006cc7ac)) {
    FUN_00536a70(uVar2,0xb,*(undefined4 *)(unaff_ESI + 0x264));
  }
  else {
    FUN_005368b0(uVar2,0xb,0xbf800000,*(undefined4 *)(unaff_ESI + 0x264));
  }
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x234) + 0x18);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x60);
    if ((iVar1 != 6) && (iVar1 != 7)) {
      FUN_00536a70(uVar2,7,*(undefined4 *)(unaff_ESI + 0x264));
      return;
    }
    FUN_005368b0(uVar2,7,0xbf800000,*(undefined4 *)(unaff_ESI + 0x264));
  }
  return;
}
