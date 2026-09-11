/* spd-match: far pct=5.87 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0060b913 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4  FUN_0060b913(int param_1,int param_2,uint param_3,uint param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  int local_28 [8];
  int local_8;
  
  bVar9 = (param_4 & 0x10000) != 0;
  local_8 = param_1;
  if (bVar9) {
    local_28[4] = 0;
  }
  uVar3 = (uint)bVar9;
  if ((param_4 & 0x20000) != 0) {
    local_28[uVar3 + 4] = 1;
    uVar3 = uVar3 + 1;
  }
  if ((param_4 & 0x40000) != 0) {
    local_28[uVar3 + 4] = 2;
    uVar3 = uVar3 + 1;
  }
  if ((param_4 & 0x80000) != 0) {
    local_28[uVar3 + 4] = 3;
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  local_28[0] = -1;
  local_28[1] = 0xffffffff;
  local_28[2] = 0xffffffff;
  uVar3 = 0;
  local_28[3] = 0xffffffff;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    do {
      iVar2 = uVar3 + 4;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      local_28[local_28[iVar2]] = *(int *)(*(int *)(iVar4 + *(int *)(param_2 + iVar1) * 4) + 0xc);
    } while (uVar3 < param_3);
  }
  if ((*(uint *)(local_8 + 0x30) & 0xffff) == 0x104) {
    uVar3 = 0;
    puVar7 = (undefined4 *)&DAT_006df4f8;
    do {
      iVar4 = FUN_0060dde6(local_28,puVar7);
      if (iVar4 != 0) {
        piVar8 = (int *)&DAT_006df4f8 + uVar3 * 4;
        if (piVar8 != (int *)0x0) goto LAB_0060ba57;
        break;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar3 < 5);
    FUN_005fbec8(local_8,*(undefined4 *)(*(int *)(local_8 + 0x98) + 0x34),0x11b5,
                 "cannot map swizzle to ps_1_4");
    uVar5 = 0x80004005;
  }
  else {
    piVar8 = &DAT_006df528;
    iVar4 = FUN_0060dde6(local_28,&DAT_006df528);
    if (iVar4 == 0) {
      piVar8 = &DAT_006df538;
      iVar4 = FUN_0060dde6(local_28,&DAT_006df538);
      if (((iVar4 == 0) && (iVar4 = FUN_0060dde6(local_28,&DAT_006df518), iVar4 != 0)) &&
         ((param_4 & 0xf0000) == 0x80000)) {
        piVar8 = &DAT_006df518;
      }
    }
LAB_0060ba57:
    uVar6 = 0;
    uVar3 = 0x10;
    do {
      iVar4 = *piVar8;
      piVar8 = piVar8 + 1;
      uVar6 = uVar6 | iVar4 << ((byte)uVar3 & 0x1f);
      uVar3 = uVar3 + 2;
    } while (uVar3 < 0x18);
    *param_5 = uVar6;
    uVar5 = 0;
  }
  return uVar5;
}

