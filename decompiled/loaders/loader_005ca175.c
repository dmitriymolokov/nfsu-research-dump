/* Decompiled from Speed.exe @ 005ca175 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005ca175(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_8;
  
  if ((byte *)((uint)param_2 & 0xffff) != param_2) {
    if ((byte *)((uint)param_2 & 0x7fffffff) == param_2) {
      local_8 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x24);
        do {
          if (piVar3[5] == 0) {
            iVar4 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          piVar5 = (int *)(iVar4 + *(int *)(iVar4 + 8 + *piVar3));
          pbVar7 = param_2;
          if ((*piVar5 == 0) || (pbVar6 = (byte *)(piVar5 + 1), pbVar6 == (byte *)0x0)) {
joined_r0x005ca20e:
            if (pbVar7 == (byte *)0x0) break;
          }
          else if (param_2 != (byte *)0x0) {
            do {
              bVar1 = *pbVar6;
              bVar8 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005ca1fe:
                pbVar7 = (byte *)((1 - (uint)bVar8) - (uint)(bVar8 != 0));
                goto joined_r0x005ca20e;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005ca1fe;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            pbVar7 = (byte *)0x0;
            goto joined_r0x005ca20e;
          }
          local_8 = local_8 + 1;
          piVar3 = piVar3 + 0x11;
        } while (local_8 < *(uint *)(param_1 + 0x10));
      }
      if (local_8 != *(uint *)(param_1 + 0x10)) {
        return local_8 * 0x44 + *(int *)(param_1 + 0x14);
      }
    }
    else {
      piVar3 = (int *)~(uint)param_2;
      if ((((*piVar3 == 3) && ((uint)piVar3[1] < *(uint *)(param_1 + 0x88))) && (piVar3[2] == 0)) &&
         ((piVar3[3] == 0 && (piVar3[6] == -1)))) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x8c) + piVar3[1] * 4);
        return ~-(uint)((*(byte *)(uVar2 + 0x20) & 4) != 0) & uVar2;
      }
    }
  }
  return 0;
}

