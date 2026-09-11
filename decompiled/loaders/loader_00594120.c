/* spd-match: far pct=13.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00594120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00593ff0();
int __cdecl FUN_005940a0();
extern void LAB_005941e3(void);
undefined4 __fastcall FUN_00594120(int obj, undefined4 param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;

  int iVar2;
  
  if ((obj == 0) || (*(int *)(obj + 0x14) * 8 + -0x44 <= *(int *)(obj + 8))) {
    return 0;
  }
  *(int *)(obj + 0x20) = *(int *)(obj + 0x20) + 1;
  piVar1 = (int *)(obj + 0x30 + param_2 * 0x24);
  if ((piVar1[4] != 0) && (piVar1[2] == param_4)) {
    if ((piVar1[3] != (1 << ((byte)*piVar1 & 0x1f)) + -1) && (piVar1[5] == param_3)) {
      iVar2 = piVar1[3] + 1;
      piVar1[3] = iVar2;
      FUN_00593ff0(obj,iVar2,*piVar1);
      goto LAB_005941e3;
    }
  }
  FUN_00593ff0(obj,param_2,4);
  iVar2 = *(int *)(obj + 8) + 4;
  *(int *)(obj + 8) = iVar2;
  piVar1[4] = iVar2;
  FUN_00593ff0(obj,0,*piVar1);
  piVar1[3] = 0;
  *(int *)(obj + 8) = *(int *)(obj + 8) + *piVar1;
  piVar1[5] = param_3;
  FUN_00593ff0(obj,param_3,param_4);
  *(int *)(obj + 8) = *(int *)(obj + 8) + param_4;
  piVar1[2] = param_4;
LAB_005941e3:
  if (*(int *)(obj + 0x1c) != 0) {
    *(int *)(obj + 4) = *(int *)(obj + 4) + 1;
  }
  if ((*(int *)(obj + 0x14) * 8 + -0x44 <= *(int *)(obj + 8)) &&
     (*(int *)(obj + 0x1c) != 0)) {
    FUN_005940a0();
  }
  return 1;
}
