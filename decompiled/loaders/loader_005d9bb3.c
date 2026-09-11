/* Decompiled from Speed.exe @ 005d9bb3 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005d9bb3(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined1 local_1c [4];
  uint local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_8 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 3)) {
    local_10 = 0;
  }
  else {
    for (local_c = *(int *)(iVar2 + 0x1c); local_c != 0; local_c = *(int *)(local_c + 0xc)) {
      iVar2 = *(int *)(local_c + 8);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 5)) && (*(int *)(iVar2 + 0x10) == 2)) {
        pbVar3 = *(byte **)(*(int *)(iVar2 + 0x14) + 0x18);
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_005d9c36:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_005d9c3b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_005d9c36;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005d9c3b:
        if (((iVar4 == 0) && (iVar2 = *(int *)(iVar2 + 0x18), *(int *)(iVar2 + 0x3c) != 0)) &&
           ((*(byte *)(iVar2 + 0x18) & 2) == 0)) {
          uVar5 = 0;
          if ((*(int *)(iVar2 + 0x1c) != 0) &&
             (iVar4 = FUN_005d7700(*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x18),0,local_1c),
             uVar5 = local_18, iVar4 < 0)) {
            uVar5 = 0xffffffff;
          }
          if ((((uVar5 & 0xffff0000) == 0) ||
              ((uVar5 & 0xffff0000) == (*(uint *)(param_1 + 0x10) & 0xffff0000))) &&
             ((((uVar5 & 0xffff) == 0 || ((uVar5 & 0xffff) == (*(uint *)(param_1 + 0x10) & 0xffff)))
              && ((local_8 == 0xffffffff || (local_8 < uVar5)))))) {
            local_10 = iVar2;
            local_8 = uVar5;
          }
        }
      }
    }
  }
  return local_10;
}

