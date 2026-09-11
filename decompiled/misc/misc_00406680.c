/* spd-match: far pct=10.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00406680 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736508;
int unaff_ESI;
void __fastcall FUN_00406680(int obj, int param_1)

{
  int *piVar1;

  int iVar2;
  int unaff_ESI;
  int *piVar3;
  
  piVar1 = (int *)(obj + 0x244);
  iVar2 = 0;
  piVar3 = piVar1;
  do {
    if (unaff_ESI == *piVar3) {
      *(undefined1 *)(iVar2 + 0x264 + obj) = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 4);
  switch(*(undefined4 *)(obj + 0x23c)) {
  case 1:
    *(int *)(obj + 0x248) = unaff_ESI;
    *(int *)(obj + 600) = param_1;
    if ((*(int *)(obj + 0x24c) == unaff_ESI) && (*(int *)(obj + 0x25c) != param_1)) {
      *(int *)(obj + 0x260) = -param_1;
      *(undefined4 *)(obj + 0x23c) = 0;
      DAT_00736508 = 0;
      *(int *)(obj + 0x250) = unaff_ESI;
      *(undefined1 *)(obj + 0x267) = 1;
      *(undefined1 *)(obj + 0x268) = 1;
      return;
    }
    *(undefined1 *)(obj + 0x265) = 1;
    break;
  case 2:
    *(int *)(obj + 0x24c) = unaff_ESI;
    *(int *)(obj + 0x25c) = param_1;
    if ((unaff_ESI == *(int *)(obj + 0x248)) && (param_1 != *(int *)(obj + 600))) {
      *(int *)(obj + 0x260) = param_1;
      *(undefined4 *)(obj + 0x23c) = 0;
      DAT_00736508 = 0;
      *(int *)(obj + 0x250) = unaff_ESI;
      *(undefined1 *)(obj + 0x267) = 1;
      *(undefined1 *)(obj + 0x268) = 1;
      return;
    }
    *(undefined1 *)(obj + 0x266) = 1;
    break;
  case 3:
    *piVar1 = unaff_ESI;
    *(undefined4 *)(obj + 0x23c) = 0;
    DAT_00736508 = 0;
    *(int *)(obj + 0x254) = -param_1;
    *(undefined1 *)(obj + 0x264) = 1;
    return;
  case 4:
    *piVar1 = unaff_ESI;
    *(undefined4 *)(obj + 0x23c) = 0;
    DAT_00736508 = 0;
    *(int *)(obj + 0x254) = param_1;
    *(undefined1 *)(obj + 0x264) = 1;
    return;
  default:
    goto switchD_004066b4_default;
  }
  *(undefined1 *)(obj + 0x268) = 0;
switchD_004066b4_default:
  *(undefined4 *)(obj + 0x23c) = 0;
  DAT_00736508 = 0;
  return;
}
