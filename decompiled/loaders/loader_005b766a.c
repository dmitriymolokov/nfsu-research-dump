/* Decompiled from Speed.exe @ 005b766a */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005b766a(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    uVar4 = *(uint *)(param_1 + 0x120);
    if (uVar4 != 0) {
      do {
        piVar7 = (int *)(*(int *)(*(int *)(*(int *)(uVar4 + 4) + 0x40) + *(int *)(uVar4 + 0x18) +
                                  *(int *)(param_1 + 0x118) + 0xc) + *(int *)(param_1 + 0x118));
        pbVar8 = param_3;
        if ((*piVar7 == 0) || (pbVar5 = (byte *)(piVar7 + 1), pbVar5 == (byte *)0x0)) {
LAB_005b76e5:
          if (pbVar8 == (byte *)0x0) break;
        }
        else if (param_3 != (byte *)0x0) {
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_005b76d8:
              pbVar8 = (byte *)((1 - (uint)bVar9) - (uint)(bVar9 != 0));
              goto LAB_005b76e5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_005b76d8;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          pbVar8 = (byte *)0x0;
          goto LAB_005b76e5;
        }
        uVar4 = *(uint *)(uVar4 + 0x34);
      } while (uVar4 != 0);
      if (uVar4 != 0) {
LAB_005b77ed:
        return ~uVar4;
      }
    }
  }
  else {
    iVar2 = FUN_005b7369(param_2,1);
    if ((((iVar2 != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(iVar2 + 0x18) +
                  *(int *)(param_1 + 0x118), *(int *)(iVar3 + 4) == 5)) &&
        ((*(int *)(iVar2 + 0x10) != -1 || (*(int *)(iVar3 + 0x10) == 0)))) &&
       ((uVar4 = *(uint *)(iVar3 + 0x14), *(int *)(iVar2 + 8) != 0 ||
        (iVar3 = FUN_005b618f(iVar2,uVar4), -1 < iVar3)))) {
      param_2 = 0;
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 8) + 0x18);
        do {
          piVar6 = (int *)(*(int *)(*(int *)(piVar7[-5] + 0x40) + *(int *)(param_1 + 0x118) +
                                    *piVar7 + 0xc) + *(int *)(param_1 + 0x118));
          pbVar8 = param_3;
          if ((*piVar6 == 0) || (pbVar5 = (byte *)(piVar6 + 1), pbVar5 == (byte *)0x0)) {
joined_r0x005b77cb:
            if (pbVar8 == (byte *)0x0) break;
          }
          else if (param_3 != (byte *)0x0) {
            do {
              bVar1 = *pbVar5;
              bVar9 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_005b77b9:
                pbVar8 = (byte *)((1 - (uint)bVar9) - (uint)(bVar9 != 0));
                goto joined_r0x005b77cb;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar9 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_005b77b9;
              pbVar5 = pbVar5 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            pbVar8 = (byte *)0x0;
            goto joined_r0x005b77cb;
          }
          param_2 = param_2 + 1;
          piVar7 = piVar7 + 8;
        } while (param_2 < uVar4);
      }
      if (param_2 != uVar4) {
        uVar4 = param_2 * 0x20 + *(int *)(iVar2 + 8);
        goto LAB_005b77ed;
      }
    }
  }
  return 0;
}

