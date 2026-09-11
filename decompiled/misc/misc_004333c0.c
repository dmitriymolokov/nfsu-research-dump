/* spd-match: far pct=39.91 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004333C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004338c0();
extern int _DAT_006cc9f8;
void __fastcall FUN_004333c0(int obj, int *param_1)

{

  int *piVar1;
  int iVar2;
  
  *param_1 = obj;
  *(int **)(obj + 0x1c) = param_1;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  piVar1 = param_1 + 0xe;
  iVar2 = 5;
  param_1[7] = (int)(*(float *)(*param_1 + 0x810) * _DAT_006cc9f8);
  do {
    piVar1[-5] = 0;
    *piVar1 = 0;
    piVar1[5] = 0;
    piVar1[10] = 0x7fffffff;
    piVar1[0xf] = 0x7fffffff;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = param_1 + 0x38;
  iVar2 = 0xb;
  do {
    piVar1[-0x16] = 0;
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = -0x40800000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x135) = 0;
  param_1[0x4e] = 1;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_004338c0();
  return;
}
