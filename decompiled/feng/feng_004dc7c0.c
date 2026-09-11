/* spd-match: far pct=8.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DC7C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004f5ed0();
int __cdecl FUN_004f6850();
extern int DAT_0073578c;
int unaff_EBX;
void __fastcall FUN_004dc7c0(undefined4 val, undefined4 param_1, undefined4 *param_2)

{

  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  *(undefined4 *)(unaff_EBX + 0x4c) = val;
  puVar2 = (undefined4 *)(unaff_EBX + 0x50);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(unaff_EBX + 0x44) == 0) {
    FUN_00495f00(*(undefined4 *)(unaff_EBX + 0x50));
  }
  else {
    FUN_004f6850(*(int *)(unaff_EBX + 0x44));
  }
  FUN_00495f00(*(undefined4 *)(unaff_EBX + 0x54));
  FUN_00495f00(*(undefined4 *)(unaff_EBX + 0x5c));
  if (DAT_0073578c != 0) {
    FUN_004f5ed0(DAT_0073578c);
  }
  return;
}
