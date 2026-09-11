/* spd-match: far pct=10.02 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2224_field_3_1/batches/20260724T133006Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_0040bc10();
int __cdecl FUN_00424ba0();
int __cdecl FUN_00481160();
extern int DAT_007372b0;
int unaff_EBX;

void FUN_004812b0(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  int iVar6;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (param_3 == '\0') {
    iVar6 = param_2 * 0x4c + param_1;
    bVar3 = *(byte *)(param_2 * 0x4c + 0xd5 + param_1) ^ 1;
    *(byte *)(iVar6 + 0xd5) = bVar3;
    local_70 = *(undefined4 *)(iVar6 + 0xf4);
    local_6c = *(undefined4 *)(iVar6 + 0xf8);
    local_68 = *(undefined4 *)(iVar6 + 0xfc);
    local_60 = *(undefined4 *)(iVar6 + 0x100);
    local_5c = *(undefined4 *)(iVar6 + 0x104);
    local_58 = *(undefined4 *)(iVar6 + 0x108);
  }
  else {
    iVar6 = param_2 * 0x4c + param_1;
    pbVar1 = (byte *)(iVar6 + 0xd4);
    *pbVar1 = *pbVar1 ^ 1;
    bVar3 = *pbVar1;
    local_70 = *(undefined4 *)(iVar6 + 0xdc);
    local_6c = *(undefined4 *)(iVar6 + 0xe0);
    local_68 = *(undefined4 *)(iVar6 + 0xe4);
    local_60 = *(undefined4 *)(iVar6 + 0xe8);
    local_5c = *(undefined4 *)(iVar6 + 0xec);
    local_58 = *(undefined4 *)(iVar6 + 0xf0);
  }
  uVar2 = *(uint *)(param_1 + 0xcb0);
  uStack_78 = CONCAT13(bVar3 != 0,(undefined3)uStack_78);
  uVar5 = ((int)param_2 < 1) - 1 & param_2;
  uVar4 = uVar5;
  if ((int)uVar5 > (int)uVar2) {
    uVar4 = uVar2;
  }
  if (SBORROW4(uVar4,uVar2) == ((int)uVar5 <= (int)uVar2 && (int)(uVar5 - uVar2) < 0)) {
    local_74 = DAT_007372b0;
  }
  else {
    local_74 = *(undefined4 *)(uVar4 * 0x4c + 0xd8 + param_1);
  }
  FUN_00481160(param_1,local_74);
  FUN_00424ba0();
  if (bVar3 != 0) {
    FUN_0040bc10();
  }
  FUN_004812b0(&local_70,&local_70,local_50);
  uVar2 = *(uint *)(param_1 + 0xcb0);
  uVar5 = param_2 + 1 & ((int)(param_2 + 1) < 1) - 1;
  uVar4 = uVar5;
  if ((int)uVar5 > (int)uVar2) {
    uVar4 = uVar2;
  }
  if (SBORROW4(uVar4,uVar2) == ((int)uVar5 <= (int)uVar2 && (int)(uVar5 - uVar2) < 0)) {
    uStack_80 = DAT_007372b0;
  }
  else {
    uStack_80 = *(undefined4 *)(uVar4 * 0x4c + 0xd8 + param_1);
  }
  FUN_00481160(param_1,uStack_80);
  FUN_00424ba0();
  if ((*((unsigned char *)&(uStack_84) + 3)) != '\0') {
    FUN_0040bc10();
  }
  FUN_004812b0(&local_6c,&local_6c,&local_5c);
  if (param_3 == '\0') {
    *(undefined4 *)(iVar6 + 0xf4) = unaff_EBX;
    *(undefined4 *)(iVar6 + 0xf8) = uStack_84;
    *(undefined4 *)(iVar6 + 0xfc) = uStack_80;
    *(undefined4 *)(iVar6 + 0x100) = uStack_78;
    *(undefined4 *)(iVar6 + 0x104) = local_74;
    *(undefined4 *)(iVar6 + 0x108) = local_70;
  }
  else {
    *(undefined4 *)(iVar6 + 0xdc) = unaff_EBX;
    *(undefined4 *)((param_2 + 3) * 0x4c + param_1) = uStack_80;
    *(undefined4 *)(iVar6 + 0xe0) = uStack_84;
    *(undefined4 *)(iVar6 + 0xe8) = uStack_78;
    *(undefined4 *)(iVar6 + 0xec) = local_74;
    *(undefined4 *)(iVar6 + 0xf0) = local_70;
  }
  FUN_00481160(param_1,*(undefined4 *)(param_1 + 0xcc0));
  return;
}
