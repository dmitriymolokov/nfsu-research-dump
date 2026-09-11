/* Decompiled from Speed.exe @ 005bcfe4 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005bcfe4(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_24 [4];
  uint local_20;
  undefined1 local_18 [4];
  uint local_14;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = param_1;
  if ((param_3 == 0) || (*(int *)(param_2 + 0x1c) == 0)) {
    if ((param_3 == 0) != (*(int *)(param_2 + 0x1c) == 0)) {
      local_8 = 2;
    }
  }
  else {
    iVar4 = FUN_005d7700(*(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x18),0,local_18);
    if ((iVar4 < 0) || (iVar4 = FUN_005d7700(*(undefined4 *)(param_3 + 0x18),0,local_24), iVar4 < 0)
       ) {
      pbVar8 = *(byte **)(*(int *)(param_2 + 0x1c) + 0x18);
      pbVar5 = *(byte **)(param_3 + 0x18);
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_005bd097:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005bd09c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_005bd097;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_005bd09c:
      if (iVar4 != 0) {
        return -1;
      }
    }
    else if (local_14 != local_20) {
      if (((local_20 ^ local_14) & 0xffff0000) != 0) {
        return -1;
      }
      if (((local_14 & 0xffff) != 0) && ((local_20 & 0xffff) != 0)) {
        return -1;
      }
      local_8 = 2 - (uint)((local_20 & 0xffff) != 0);
    }
  }
  iVar4 = *(int *)(param_2 + 0x24);
  param_2 = param_4;
  if (iVar4 != 0) {
    do {
      piVar1 = (int *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 0xc);
      bVar9 = false;
      if ((iVar4 != 0) && (*(int *)(*(int *)(iVar4 + 8) + 4) == 0xb)) {
        iVar4 = *(int *)(iVar4 + 0xc);
        bVar9 = true;
      }
      if (((param_5 & 0x10) == 0) || ((*(byte *)(*(int *)(*piVar1 + 0x18) + 0x1c) & 0x40) != 0)) {
        if (param_2 == 0) {
          if (!bVar9) {
            return -1;
          }
        }
        else {
          iVar7 = *(int *)(*piVar1 + 0x18);
          uVar3 = *(undefined4 *)(iVar7 + 0x20);
          if (*(int *)(param_2 + 8) == 0) {
            param_3 = 0;
          }
          else {
            param_3 = *(undefined4 *)(*(int *)(param_2 + 8) + 0x10);
          }
          if ((*(byte *)(iVar7 + 0x1c) & 0x10) != 0) {
            iVar6 = FUN_005bbe7f(uVar3,param_3,0);
            if (iVar6 == 0) {
              return -1;
            }
            iVar6 = FUN_005bbcbb(uVar3,param_3);
            local_8 = local_8 + iVar6;
          }
          if ((*(byte *)(iVar7 + 0x1c) & 0x20) != 0) {
            iVar7 = FUN_005ba70c(param_3);
            if (iVar7 != 0) {
              return -1;
            }
            iVar7 = FUN_005bbe7f(param_3,uVar3,0);
            if (iVar7 == 0) {
              return -1;
            }
            iVar7 = FUN_005bbcbb(param_3,uVar3);
            local_8 = local_8 + iVar7;
          }
          param_2 = *(int *)(param_2 + 0xc);
        }
      }
    } while (iVar4 != 0);
  }
  if (param_2 != 0) {
    return -1;
  }
  return local_8;
}

