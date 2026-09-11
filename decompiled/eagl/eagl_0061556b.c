/* spd-match: far pct=10.53 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0061556B */
#include <windows.h>
typedef unsigned int uint;
uint* __fastcall FUN_0061556b(int ecx_val, int param_1, uint param_2, int param_3, uint* param_4, int* param_5, uint param_6) {
  int local_var[12];
  int* esi = (int*)param_1;
  int iVar9 = *(int*)(ecx_val + 0x14);
  int idx = **(int**)(param_3 + 0x10);
  int iVar1 = *(int*)(iVar9 + idx * 4);
  if (*(uint*)(iVar1 + 0x38) == 0xffffffff) return 0;
  local_var[0] = *(int*)(iVar1 + 0x2c);
  if (param_4) *param_4 = *(uint*)(iVar1 + 0x38);
  return (uint*)0x0;
}
