/* spd-match: far pct=20.97 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A67A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_004a6360();
int __cdecl FUN_004a64b0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
extern int DAT_006cc7a4;
extern int DAT_006fbf14;
extern int DAT_007361a4;
extern int DAT_0078a320;
extern int DAT_0078a345;
extern int _DAT_006cca38;
void __fastcall FUN_004a67a0(int obj, undefined4 param_1, int param_2)

{

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(obj + 0x18) & *(uint *)(obj + 0x10)) != 0 ||
      (*(uint *)(obj + 0x1c) & *(uint *)(obj + 0x14)) != 0) {
    iVar2 = *(int *)(param_2 + 4);
    if ((DAT_006fbf14 == 0) && (*(int *)(param_2 + 0x10) == 0)) {
      iVar1 = FUN_0041ffe0();
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
    }
    if ((((*(int *)(iVar2 + 0x20) == -0x2a0) || (*(int *)(iVar2 + 0x3f0) == 0)) ||
        (*(int *)(iVar2 + 0x3f0) == 0x7fffffff)) ||
       ((float)*(int *)(iVar2 + 0x3f0) * _DAT_006cca38 <= DAT_006cc7a4)) {
      FUN_004f6910(*(undefined4 *)(obj + 100));
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(obj + 0x20) = *(undefined4 *)(*(int *)(iVar2 + 0x20) + 0x2a4);
      FUN_004f6970(*(undefined4 *)(obj + 100));
      uVar3 = 1;
    }
    FUN_004a6360(uVar3,6);
    FUN_004a6360(0,4);
    FUN_004a6360(0,2);
    FUN_004a64b0(obj);
    if ((DAT_0078a320 == 2) && ((DAT_0078a345 != '\0' || (DAT_007361a4 != 0)))) {
      FUN_004a6360(0,2);
      FUN_004a6360(0,4);
      FUN_004a6360(0,6);
    }
  }
  return;
}
