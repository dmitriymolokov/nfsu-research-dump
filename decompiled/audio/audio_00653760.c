/* spd-match: far pct=3.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00653440();
int __cdecl FUN_00654cd0();
extern unsigned char *DAT_00714068;
extern unsigned char *DAT_0071408c;
extern unsigned char *DAT_00714090;
extern unsigned char *DAT_00714094;
extern unsigned char *DAT_00714098;
extern unsigned char *DAT_0071409c;
extern unsigned char *DAT_007140a0;
extern unsigned char *DAT_007140a4;
extern unsigned char *DAT_007140a8;
extern int DAT_007140aa;
extern int DAT_007140ab;
extern char stack0xffffffa4;

undefined4 FUN_00653760(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_4c [4];
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined2 local_38;
  undefined2 local_36;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined2 *local_14;
  
  iVar5 = param_1 * 0x20;
  local_40 = *(int *)(&DAT_0071408c + iVar5);
  if (local_40 == 0) {
    return 0;
  }
  local_44 = *(undefined4 *)(&DAT_00714090 + iVar5);
  local_48 = *(int *)(&DAT_00714098 + iVar5);
  iVar3 = 0x10;
  if ((&DAT_007140ab)[iVar5] != '\b') {
    iVar3 = param_1;
  }
  iVar2 = local_48;
  if (0 < *(int *)(&DAT_007140a0 + iVar5)) {
    iVar2 = (*(int *)(&DAT_007140a0 + iVar5) - *(int *)(&DAT_0071409c + iVar5)) + 1;
  }
  iVar4 = iVar3 >> 3;
  iVar2 = iVar4 * iVar2;
  FUN_00654cd0(&local_24,0x24);
  local_38 = 1;
  local_36 = 1;
  local_34 = (uint)*(ushort *)(&DAT_007140a8 + iVar5);
  local_30 = local_34 * iVar4;
  local_14 = &local_38;
  puVar1 = (undefined4 *)(&DAT_00714094 + iVar5);
  local_24 = 0x24;
  local_20 = 0x480b0;
  local_2c = CONCAT22((short)iVar3,(short)iVar4);
  local_28 = 0;
  local_1c = iVar2;
  iVar3 = (**(code **)(*DAT_00714068 + 0xc))(DAT_00714068,&local_24,puVar1,0);
  if (iVar3 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = auStack_4c;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x2c))
                      ((int *)*puVar1,0,iVar2,&stack0xffffffa4,puVar6,0,0,0);
    if (iVar3 == 0) {
      FUN_00653440(uVar9,uVar8,(int)(char)(&DAT_007140aa)[iVar5],
                   *(undefined4 *)(&DAT_0071409c + iVar5),*(undefined4 *)(&DAT_007140a0 + iVar5),
                   *(undefined4 *)(&DAT_007140a4 + iVar5),uVar7,puVar6,
                   (int)(char)(&DAT_007140ab)[iVar5]);
      iVar5 = (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1,puVar6,iVar2,0,0);
      if (iVar5 != 0) {
        return 0;
      }
    }
    return local_2c;
  }
  return 0;
}
