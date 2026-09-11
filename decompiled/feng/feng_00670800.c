/* spd-match: far pct=12.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0066fb20();

int FUN_00670800(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if ((*(int *)(param_1 + 0xbc) != 4) && (*(int *)(param_1 + 0xbc) != 5)) {
    return -2;
  }
  iVar3 = *(int *)(param_1 + 0xe4);
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((iVar3 + *(int *)(param_1 + 0xdc)) % iVar1 == *(int *)(param_1 + 0xe8)) {
    return 0;
  }
  if (param_3 == 0) {
    return (((iVar1 - *(int *)(param_1 + 0xe8)) + iVar3) % iVar1) / *(int *)(param_1 + 0xdc) + 1;
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0xf0) + iVar3);
  *puVar5 = param_3;
  if (*(int *)(param_1 + 0xdc) + 0x800U < param_3 + 4) {
    return -6;
  }
  puVar6 = puVar5 + 4;
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(char *)puVar6 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  puVar5[2] = *(uint *)(param_1 + 0xf4);
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  puVar5[3] = *(int *)(param_1 + 0xd8) - 1;
  DVar2 = GetTickCount();
  puVar5[1] = DVar2;
  *(int *)(param_1 + 0xe4) =
       (*(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xe4)) % *(int *)(param_1 + 0xe0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1910));
  FUN_0066fb20();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1910));
  iVar3 = (((*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe8)) + *(int *)(param_1 + 0xe0)) %
          *(int *)(param_1 + 0xe0)) / *(int *)(param_1 + 0xdc);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}
