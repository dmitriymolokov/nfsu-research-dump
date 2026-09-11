/* spd-match: far pct=7.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_004016e0();
extern int DAT_007349c8;
extern int DAT_00736550;
extern int _DAT_006cc8bc;
extern int _DAT_006ccdf8;
extern int _DAT_007301d0;
extern int _DAT_007364fc;
extern int _DAT_0078eb94;

void __fastcall FUN_00408010(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  LARGE_INTEGER local_10;
  LARGE_INTEGER local_8;
  
  param_1 = (int *)*param_1;
  if (DAT_00736550 != 0) {
    QueryPerformanceCounter(&local_8);
    uVar2 = DAT_007349c8;
    iVar3 = __allshr();
    local_10.s.LowPart = iVar3 - _DAT_007364fc;
    if ((int)local_10.s.LowPart < 0) {
      local_10.s.LowPart = 0;
    }
    local_8.s.LowPart =
         (DWORD)((float)(1 << ((byte)uVar2 & 0x1f)) * (float)(int)local_10.s.LowPart * _DAT_007301d0
                * _DAT_006cc8bc);
    QueryPerformanceCounter(&local_10);
    _DAT_007364fc = __allshr();
    _DAT_0078eb94 = ((int)(_DAT_0078eb94)) + (float)local_8.s.LowPart;
    if (_DAT_006ccdf8 < _DAT_0078eb94) {
      _DAT_0078eb94 = 0.0;
      FUN_004016e0(0);
    }
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    iVar3 = *param_1;
    param_1[6] = 0;
    piVar1 = (int *)param_1[1];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
  }
  return;
}
