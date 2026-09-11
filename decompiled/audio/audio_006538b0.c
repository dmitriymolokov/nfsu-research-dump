/* spd-match: far pct=5.36 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00654cd0();
extern int DAT_006aaa1c;
extern int DAT_006aaa20;
extern int DAT_006aaa24;
extern int DAT_006aaa28;
extern int DAT_00714050;
extern int DAT_00714054;
extern unsigned char *DAT_00714068;
extern unsigned char *DAT_0071406c;
extern unsigned char *DAT_00714070;
extern int DAT_00714078;
extern int DAT_0071407c;
extern int DAT_00714080;
extern int DAT_00714084;
extern int DAT_00714088;

void FUN_006538b0(ushort param_1,uint param_2)

{
  int iVar1;
  undefined2 *puStack_54;
  int iStack_2c;
  undefined2 local_28;
  ushort local_26;
  uint local_24;
  int local_20;
  ushort local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = param_1 * 2;
  DAT_00714054 = (undefined1)local_1c;
  local_20 = local_1c * param_2;
  local_24 = param_2;
  local_1a = 0x10;
  local_16 = 0x10;
  local_10 = DAT_006aaa1c;
  local_c = DAT_006aaa20;
  local_26 = param_1;
  local_28 = 0xfffe;
  local_18 = 0x16;
  local_8 = DAT_006aaa24;
  local_4 = DAT_006aaa28;
  if (param_1 == 6) {
    local_14 = 0x3f;
  }
  else if (param_1 == 4) {
    local_14 = 0x33;
  }
  else if (param_1 < 3) {
    local_28 = 1;
    local_18 = 0;
  }
  puStack_54 = &local_28;
  iVar1 = (**(code **)(*DAT_0071406c + 0x38))(DAT_0071406c);
  if (-1 < iVar1) {
    if (DAT_00714070 != (int *)0x0) {
      (**(code **)(*DAT_00714070 + 8))(DAT_00714070);
      DAT_00714070 = (int *)0x0;
    }
    FUN_00654cd0(&puStack_54,0x24);
    DAT_0071407c = (uint)(iStack_2c * 500) / 1000 & 0xfffffff0;
    DAT_00714050 = (int)DAT_0071407c >> 1;
    DAT_00714078 = (local_24 & 0xffff) * DAT_0071407c;
    puStack_54 = (undefined2 *)0x24;
    DAT_00714084 = 0;
    DAT_00714088 = 0;
    DAT_00714080 = 0;
    (**(code **)(*DAT_00714068 + 0xc))(DAT_00714068,&puStack_54,&DAT_00714070,0);
  }
  return;
}
