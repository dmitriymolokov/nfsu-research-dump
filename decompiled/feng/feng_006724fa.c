/* spd-match: far pct=7.54 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_13/attempt2_fp_overlay */
#include "ghidra_compat.h"

int __cdecl FUN_00679ecd();
extern int DAT_006eb440;
extern int DAT_006eb720;
extern int DAT_006ebc00;
extern int DAT_00717acc;
extern int _DAT_006eb440;
int unaff_retaddr;

void FUN_006724fa(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  uint unaff_retaddr;
  _TIME_ZONE_INFORMATION local_bc;
  _FILETIME local_10;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  FUN_00679ecd();
  *(short *)((int)param_1 + 6) = (short)(DAT_006ebc00 / 0x3c);
  GetSystemTimeAsFileTime(&local_10);
  DVar6 = local_10.dwHighDateTime;
  DVar5 = local_10.dwLowDateTime;
  iVar2 = __aulldiv(local_10.dwLowDateTime,local_10.dwHighDateTime,600000000,0);
  if (iVar2 != DAT_00717acc) {
    DVar3 = GetTimeZoneInformation(&local_bc);
    DVar5 = local_10.dwLowDateTime;
    DVar6 = local_10.dwHighDateTime;
    DAT_00717acc = iVar2;
    if (DVar3 == 0xffffffff) {
      _DAT_006eb440 = 0xffffffff;
    }
    else if (((DVar3 == 2) &&
              ((*(unsigned short *)((unsigned char *)&local_bc.DaylightDate + 2)) != 0)) &&
             (local_bc.DaylightBias != 0))
    {
      _DAT_006eb440 = 1;
    }
    else {
      _DAT_006eb440 = 0;
    }
  }
  *(undefined2 *)(param_1 + 2) = DAT_006eb440;
  uVar7 = __aulldiv(DVar5,DVar6,10000,0);
  uVar1 = __aullrem(uVar7,1000,0);
  *(undefined2 *)(param_1 + 1) = uVar1;
  uVar4 = __aulldiv(DVar5 + 0x2ac18000,DVar6 + 0xfe624e21 + (uint)(0xd53e7fff < DVar5),10000000,0);
  *param_1 = uVar4;
  return;
}
