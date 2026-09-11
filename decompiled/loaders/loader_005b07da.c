/* Decompiled from Speed.exe @ 005b07da */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b07da(int param_1,int *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  
  piVar6 = param_4;
  piVar2 = (int *)*param_4;
  piVar3 = (int *)*param_2;
  if (((piVar3[1] == piVar2[1]) && (iVar7 = *piVar3, iVar7 == *piVar2)) && (piVar3[4] == piVar2[4]))
  {
    if (*(int *)(piVar3[2] + param_1) == 0) {
      local_14 = (byte *)0x0;
    }
    else {
      local_14 = (byte *)((int *)(piVar3[2] + param_1) + 1);
    }
    if (*(int *)(piVar2[2] + param_3) == 0) {
      local_c = (byte *)0x0;
    }
    else {
      local_c = (byte *)((int *)(piVar2[2] + param_3) + 1);
    }
    if (*(int *)(piVar3[3] + param_1) == 0) {
      local_18 = (byte *)0x0;
    }
    else {
      local_18 = (byte *)((int *)(piVar3[3] + param_1) + 1);
    }
    if (*(int *)(piVar2[3] + param_3) == 0) {
      local_10 = (byte *)0x0;
    }
    else {
      local_10 = (byte *)((int *)(piVar2[3] + param_3) + 1);
    }
    if (local_14 != (byte *)0x0) {
      if (local_c == (byte *)0x0) {
        return -0x7fffbffb;
      }
      do {
        bVar1 = *local_14;
        bVar8 = bVar1 < *local_c;
        if (bVar1 != *local_c) {
LAB_005b08b8:
          local_c = (byte *)((1 - (uint)bVar8) - (uint)(bVar8 != 0));
          goto joined_r0x005b08bf;
        }
        if (bVar1 == 0) break;
        bVar1 = local_14[1];
        bVar8 = bVar1 < local_c[1];
        if (bVar1 != local_c[1]) goto LAB_005b08b8;
        local_14 = local_14 + 2;
        local_c = local_c + 2;
      } while (bVar1 != 0);
      local_c = (byte *)0x0;
    }
joined_r0x005b08bf:
    if (local_c == (byte *)0x0) {
      if (local_18 != (byte *)0x0) {
        if (local_10 == (byte *)0x0) {
          return -0x7fffbffb;
        }
        do {
          bVar1 = *local_18;
          bVar8 = bVar1 < *local_10;
          if (bVar1 != *local_10) {
LAB_005b08fe:
            local_10 = (byte *)((1 - (uint)bVar8) - (uint)(bVar8 != 0));
            goto joined_r0x005b0905;
          }
          if (bVar1 == 0) break;
          bVar1 = local_18[1];
          bVar8 = bVar1 < local_10[1];
          if (bVar1 != local_10[1]) goto LAB_005b08fe;
          local_18 = local_18 + 2;
          local_10 = local_10 + 2;
        } while (bVar1 != 0);
        local_10 = (byte *)0x0;
      }
joined_r0x005b0905:
      if ((local_10 == (byte *)0x0) && (iVar4 = piVar3[1], -1 < iVar4)) {
        if (iVar4 < 4) {
          if ((piVar3[5] == piVar2[5]) && (piVar3[6] == piVar2[6])) {
            *param_2 = (int)(piVar3 + 7);
            *param_4 = *param_4 + 0x1c;
            return 0;
          }
        }
        else {
          if (iVar4 == 4) {
            if ((4 < iVar7) && ((iVar7 < 10 || ((0xe < iVar7 && (iVar7 < 0x11)))))) {
              *param_5 = 1;
            }
            *param_2 = *param_2 + 0x14;
            *param_4 = *param_4 + 0x14;
            return 0;
          }
          if ((iVar4 == 5) && (uVar5 = piVar3[5], uVar5 == piVar2[5])) {
            param_4 = (int *)0x0;
            *param_2 = (int)(piVar3 + 6);
            *piVar6 = *piVar6 + 0x18;
            if (uVar5 == 0) {
              return 0;
            }
            do {
              iVar7 = FUN_005b07da(param_1,param_2,param_3,piVar6,param_5);
              if (iVar7 < 0) {
                return iVar7;
              }
              param_4 = (int *)((int)param_4 + 1);
            } while (param_4 < uVar5);
            return iVar7;
          }
        }
      }
    }
  }
  return -0x7fffbffb;
}

