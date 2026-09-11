/* spd-match: far pct=12.20 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A6EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736198;
void __fastcall FUN_004a6eb0(int obj, int param_1)

{
  int iVar1;

  iVar1 = DAT_00736198;
  *(undefined4 *)(obj + 0x18) = 0;
  *(bool *)(obj + 8) = *(char *)(*(int *)(param_1 + 0xc) * 0x20 + 6 + iVar1) != '\0';
  *(undefined4 *)(obj + 0xc) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(obj + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(obj + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(obj + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0xc) * 0x20 + iVar1);
  *(undefined4 *)(obj + 0x18) = 0;
  *(undefined1 *)(obj + 0x20) = 0;
  *(bool *)(obj + 0x21) = *(int *)(param_1 + 0x10) == 4;
  return;
}
