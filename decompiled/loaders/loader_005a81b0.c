/* spd-match: far pct=3.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_005a7e70();
int __cdecl FUN_005a7f70();
int __cdecl FUN_005a8000();
extern int DAT_006ee1e4;
extern int DAT_00731aa0;
extern int DAT_00732320;
extern int DAT_00732324;
extern int DAT_00732328;
extern int DAT_00733730;

int FUN_005a81b0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  DAT_00732320 = (((int)DAT_00732324) + -1) / 3 + 0x1e;
  pbVar1 = ((int)DAT_00733730) + DAT_00732328;
  iVar3 = ((int)DAT_00732328) / (((int)DAT_00732324) << 2);
  local_2c = DAT_00733730;
  if (iVar3 < 0x65) {
    local_18 = 1;
  }
  else {
    local_18 = iVar3 / 100;
  }
  local_14 = (((int)DAT_006ee1e4) >> 3) << 6;
  iVar5 = local_14 >> 6;
  local_24 = 0x400;
  if (iVar5 < 2) {
    iVar5 = 0;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      (&DAT_00731aa0)[iVar6] = ((iVar5 * iVar5 - iVar6 * iVar6) * 0x100) / (iVar5 * iVar5) << 10;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  iVar6 = ((int)DAT_00732328) / 499;
  if (((int)DAT_00732328) % 499 == 0) {
    iVar6 = ((int)DAT_00732328) / 0x1eb;
    if (((int)DAT_00732328) % 0x1eb == 0) {
      iVar6 = ((int)DAT_00732328) / 0x1e7;
      local_28 = (-(uint)(((int)DAT_00732328) % 0x1e7 != 0) & 0xffffffc0) + 0x7dc;
    }
    else {
      local_28 = 0x7ac;
    }
  }
  else {
    local_28 = 0x7cc;
  }
  local_1c = 0;
  if (0 < iVar3) {
    do {
      bVar2 = *local_2c;
      iVar6 = (uint)local_2c[3] << 4;
      iVar7 = (uint)local_2c[2] << 4;
      iVar4 = (uint)local_2c[1] << 4;
      FUN_005a7e70((uint)bVar2 << 4,iVar4,iVar7,iVar6);
      FUN_005a7f70(iVar4,iVar7,iVar6);
      if (iVar5 != 0) {
        FUN_005a8000((uint)bVar2 << 4,iVar4,iVar7,iVar6);
      }
      for (local_2c = local_2c + local_28; pbVar1 <= local_2c; local_2c = local_2c + -DAT_00732328)
      {
      }
      local_1c = local_1c + 1;
      iVar6 = local_1c / local_18;
      if (local_1c % local_18 == 0) {
        local_24 = local_24 - local_24 / ((int)DAT_00732320);
        iVar6 = (int)((longlong)local_14 * 0x77777777);
        iVar5 = (int)((ulonglong)((longlong)local_14 * 0x77777777) >> 0x20) - local_14;
        local_14 = local_14 + ((iVar5 >> 4) - (iVar5 >> 0x1f));
        iVar5 = local_14 >> 6;
        if (iVar5 < 2) {
          iVar5 = 0;
        }
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            iVar6 = (((iVar5 * iVar5 - iVar4 * iVar4) * 0x100) / (iVar5 * iVar5)) * local_24;
            (&DAT_00731aa0)[iVar4] = iVar6;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
      }
    } while (local_1c < iVar3);
  }
  return iVar6;
}
