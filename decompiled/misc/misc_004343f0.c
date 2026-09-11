/* spd-match: far pct=12.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004343F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004334a0();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
extern int DAT_006cae4c;
void __fastcall FUN_004343f0(int obj, int param_1)

{

  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char local_5;
  int local_4;
  
  FUN_00571ea0(0,&DAT_006cae4c);
  FUN_00571c20(obj,param_1,1,4,1);
  FUN_00571c20(obj,param_1 + 8,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x10,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 4,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x14,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x1c,4,0xffffffff,0);
  FUN_00571c20(obj,param_1 + 0x20,4,0xffffffff,0);
  if ((*(char *)(obj + 0x3e) != '\0') || (*(char *)(obj + 0x3f) != '\0')) {
    FUN_00571c20(obj,param_1 + 0x24,1,4,0);
  }
  FUN_00571c20(obj,param_1 + 0x28,1,4,0);
  FUN_00571c20(obj,param_1 + 0x2c,1,1,0);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    local_4 = param_1 + 0x30;
    piVar3 = (int *)(param_1 + 0x520);
    do {
      FUN_004334a0();
      iVar2 = (*piVar3 - param_1) + -0x30;
      local_5 = ((char)(iVar2 / 0x13c) + (char)(iVar2 >> 0x1f)) -
                (char)((longlong)iVar2 * 0x67b23a55 >> 0x3f);
      FUN_00571c20(obj,&local_5,1,1,1);
      *piVar3 = local_5 * 0x13c + 0x30 + param_1;
      iVar4 = iVar4 + 1;
      local_4 = local_4 + 0x13c;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  if ((*(char *)(obj + 0x3e) != '\0') || (*(char *)(obj + 0x3f) != '\0')) {
    FUN_00571c20(obj,param_1 + 0x530,1,4,0);
  }
  iVar4 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar4 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar4 + 0xc);
  cVar1 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
