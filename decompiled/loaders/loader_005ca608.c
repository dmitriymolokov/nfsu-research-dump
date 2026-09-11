/* Decompiled from Speed.exe @ 005ca608 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005ca608(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar6 = (int *)(*(int *)(param_1 + 0x1c) + 0x20);
    do {
      piVar3 = (int *)(*piVar6 + *(int *)(param_1 + 0x2c));
      pbVar5 = param_2;
      if ((*piVar3 == 0) || (pbVar4 = (byte *)(piVar3 + 1), pbVar4 == (byte *)0x0)) {
LAB_005ca66b:
        if (pbVar5 == (byte *)0x0) break;
      }
      else if (param_2 != (byte *)0x0) {
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_005ca65e:
            pbVar5 = (byte *)((1 - (uint)bVar7) - (uint)(bVar7 != 0));
            goto LAB_005ca66b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_005ca65e;
          pbVar4 = pbVar4 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        pbVar5 = (byte *)0x0;
        goto LAB_005ca66b;
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 0x2b;
    } while (local_8 < *(uint *)(param_1 + 0x18));
  }
  if (*(uint *)(param_1 + 0x18) == local_8) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~(local_8 * 0xac + *(int *)(param_1 + 0x1c));
  }
  return uVar2;
}

