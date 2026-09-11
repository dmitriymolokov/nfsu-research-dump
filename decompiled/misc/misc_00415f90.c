/* spd-match: far pct=8.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00415F90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f5ed0();
int __cdecl FUN_004f5f80();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6670();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0073578c;
int unaff_EBX;
void __fastcall FUN_00415f90(int val, undefined4 param_1, undefined4 param_2, int param_3, int param_4)

{

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  
  if ((-1 < param_4) && (param_4 < 0x20)) {
    if (val < param_3) {
      param_3 = val;
    }
    if (val == 0) {
      if (DAT_0073578c != 0) {
        FUN_004f5f80(DAT_0073578c,0);
      }
      uVar1 = FUN_004f65d0();
      uVar2 = FUN_004f6670();
      uVar3 = FUN_004f6670();
      if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
        FUN_004f0700(0x317ecc0e,uVar3,uVar1,uVar2,0);
      }
    }
    else if (*(char *)(unaff_EBX + 0x2b4) == '\0') {
      if (DAT_0073578c != 0) {
        FUN_004f5ed0(DAT_0073578c);
      }
      *(undefined1 *)(unaff_EBX + 0x2b4) = 1;
    }
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(param_1);
      }
    }
    *(int *)(unaff_EBX + 0x130 + param_4 * 4) = iVar4;
    *(undefined4 *)(unaff_EBX + 0x1b0 + param_4 * 4) = param_2;
    *(int *)(unaff_EBX + 0x230 + param_4 * 4) = param_3;
  }
  return;
}
