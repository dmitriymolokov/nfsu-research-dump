/* spd-match: far pct=17.39 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AA5E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004aa4d0();
int __cdecl FUN_004ac220();
int __cdecl FUN_004ac460();
int __cdecl FUN_005a0a00();
extern int DAT_006f1da4;
extern int DAT_006f1da8;
void __fastcall FUN_004aa5e0(int val)

{

  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_004aa4d0(val == 0);
  *(undefined4 *)(unaff_EBX + 0xeeec) = 0;
  *(undefined1 *)(unaff_EBX + 0xeef0) = 1;
  *(undefined4 *)(unaff_EBX + 0x210) = 0;
  puVar2 = (undefined4 *)(unaff_EBX + 0x214);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uVar3 = DAT_006f1da8;
  if (val == 0) {
    uVar3 = DAT_006f1da4;
  }
  FUN_004ac460(unaff_EBX + 0x364,uVar3);
  FUN_004ac220();
  FUN_005a0a00();
  puVar2 = (undefined4 *)(unaff_EBX + 0xeef4);
  for (iVar1 = 0x294; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(unaff_EBX + 0xeee8) = 0;
  return;
}
