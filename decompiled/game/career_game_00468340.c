/* spd-match: far pct=5.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00468340 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00466920();
extern unsigned char *DAT_00736008;
extern int DAT_00736030;
extern unsigned char *DAT_00736050;
extern int DAT_007377f0;
extern unsigned char *DAT_00779c70;
extern unsigned char *PTR_FUN_006c86a8;
undefined4 * __fastcall FUN_00468340(int val, undefined4 *param_1, undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  *param_1 = &PTR_FUN_006c86a8;
  *(short *)(param_1 + 6) = (short)val;
  *(undefined1 *)((int)param_1 + 0x15) = param_2;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = &DAT_007377f0;
  if (-1 < val) {
    FUN_00466920();
    *(undefined4 **)(DAT_00736050 + *(short *)(param_1 + 6) * 4) = param_1;
  }
  DAT_00736008 = DAT_00736008 + 1;
  if (DAT_00736030 < DAT_00736008) {
    DAT_00736030 = DAT_00736008;
  }
  param_1[9] = 0xcb18967f;
  param_1[10] = 0xcb18967f;
  param_1[0xb] = 0xcb18967f;
  param_1[0xc] = 0xcb18967f;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x17] = 0;
  iVar3 = (int)DAT_00779c70;
  piVar1 = param_1 + 1;
  piVar2 = (int *)((int)DAT_00779c70 + 4);
  DAT_00779c70 = piVar1;
  *piVar2 = (int)piVar1;
  param_1[2] = &DAT_00779c70;
  *piVar1 = iVar3;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  return param_1;
}
