/* spd-match: far pct=5.68 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005893E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a9900();
int __cdecl FUN_005894e0();
int __cdecl FUN_0058a0a0();
void __fastcall FUN_005893e0(int obj, undefined4 param_1, undefined4 param_2, undefined4 *param_3, undefined4 param_4, undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;

  undefined4 uVar3;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x38) = param_1;
  *(undefined4 *)(unaff_EDI + 0xf0) = 0;
  *(undefined4 *)(unaff_EDI + 0x34) = param_2;
  *(int *)(unaff_EDI + 0x24) = obj;
  if (((*(uint *)(obj + 0x534) & 2) == 0) || ((*(uint *)(obj + 0x534) & 4) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(unaff_EDI + 0x28) = uVar3;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(unaff_EDI + 0x40) = *param_3;
  *(undefined4 *)(unaff_EDI + 0x44) = uVar3;
  *(undefined4 *)(unaff_EDI + 0x48) = uVar1;
  uVar3 = *param_3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(unaff_EDI + 0x60) = uVar3;
  *(undefined4 *)(unaff_EDI + 100) = uVar1;
  *(undefined4 *)(unaff_EDI + 0x68) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x58) = uVar2;
  *(undefined4 *)(unaff_EDI + 0x50) = uVar3;
  *(undefined4 *)(unaff_EDI + 0x54) = uVar1;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  *(undefined4 *)(unaff_EDI + 0x100) = *param_3;
  *(undefined4 *)(unaff_EDI + 0x104) = uVar3;
  *(undefined4 *)(unaff_EDI + 0x108) = uVar1;
  uVar3 = FUN_0058a0a0(param_3);
  *(undefined4 *)(unaff_EDI + 0x2c) = uVar3;
  uVar3 = FUN_004a9900(unaff_EDI);
  *(undefined4 *)(unaff_EDI + 0x30) = uVar3;
  FUN_005894e0(unaff_EDI,param_3,param_4,0,param_5);
  return;
}
