/* spd-match: far pct=26.51 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004672A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00465700();
extern unsigned char *DAT_00736004;
extern unsigned char *DAT_00736088;
void __fastcall FUN_004672a0(int obj)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  puVar2 = *(undefined4 **)(obj + 0x264);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00465700();
    iVar4 = DAT_00736088;
    iVar3 = *(int *)(DAT_00736088 + 0x18);
    *puVar2 = *(undefined4 *)(DAT_00736088 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar3 + -1;
    *(undefined4 **)(iVar4 + 0x10) = puVar2;
  }
  *(undefined4 *)(obj + 0x264) = 0;
  DAT_00736004 = DAT_00736004 + -1;
  pcVar1 = (char *)(*(int *)(obj + 600) + 0x1c);
  *pcVar1 = *pcVar1 + -1;
  *(char *)(*(int *)(obj + 0x25c) + 0x1c) = *(char *)(*(int *)(obj + 0x25c) + 0x1c) + -1;
  return;
}
