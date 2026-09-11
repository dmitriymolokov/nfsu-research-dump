/* spd-match: far pct=19.44 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041FC00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00402cf0();
int __cdecl FUN_00425af0();
int __cdecl FUN_00467010();
int __cdecl FUN_004682c0();
int __cdecl FUN_0046a6e0();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_00574fd0();
int __cdecl FUN_00585ec0();
int __cdecl FUN_0058a050();
int __cdecl FUN_00593620();
int __cdecl FUN_00593980();
int __cdecl FUN_00595f70();
int __cdecl FUN_00598510();
int __cdecl FUN_005aa9f0();
extern int DAT_007183b4;
extern int DAT_00736158;
extern int DAT_0073615c;
extern int DAT_00736200;
extern int DAT_0078e9e0;
void __fastcall FUN_0041fc00(int obj, undefined4 *param_1)

{

  int iVar1;
  char cVar2;
  int iVar3;
  int local_8;
  
  iVar1 = (int)param_1;
  FUN_00571ea0(0,"World");
  FUN_00571c20(obj,(int)param_1 + 0x2d0,4,4,0);
  FUN_00571c20(obj,(int)param_1 + 0x2d4,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2e0,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2e4,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2e8,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2ec,4,4,1);
  FUN_00571c20(obj,(int)param_1 + 0x280,0xc,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x290,0xc,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2c0,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2c4,4,0xffffffff,0);
  FUN_00571c20(obj,(int)param_1 + 0x2f4,4,4,0);
  FUN_00571c20(obj,(int)param_1 + 0x2f8,4,4,0);
  if (*(char *)(obj + 0x3d) != '\0') {
    FUN_0058a050();
    FUN_00402cf0(&DAT_0078e9e0);
    FUN_00593980();
    DAT_007183b4 = 1;
    FUN_00574fd0();
  }
  FUN_00585ec0();
  local_8 = 0;
  if (0 < *(int *)((int)param_1 + 0x18)) {
    param_1 = (undefined4 *)((int)param_1 + 0x28);
    do {
      FUN_00425af0(*param_1);
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < *(int *)(iVar1 + 0x18));
  }
  if (*(int *)(iVar1 + 0x2f0) != 0) {
    FUN_00598510(obj);
  }
  if (*(char *)(obj + 0x3d) != '\0') {
    if (DAT_00736200 == 0) {
      FUN_004682c0();
    }
    else {
      FUN_00593620();
    }
  }
  FUN_00595f70();
  FUN_0046a6e0();
  FUN_00571ea0(0,"AllCollisionBodies");
  iVar1 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar1 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0x58 + obj);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  FUN_00467010();
  iVar1 = DAT_0073615c;
  iVar3 = DAT_00736158;
  if (0 < DAT_0073615c) {
    do {
      FUN_005aa9f0(iVar3);
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 0x170;
    } while (iVar1 != 0);
  }
  iVar1 = *(char *)(obj + 0x40) * 0x10;
  *(int *)(iVar1 + obj + 0x58) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0x58 + obj);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
