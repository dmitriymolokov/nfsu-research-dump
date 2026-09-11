/* Decompiled from Speed.exe @ 005ca6c9 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005ca6c9(undefined4 param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar2 = FUN_005ca526(param_2,1);
  if (iVar2 != 0) {
    param_2 = 0;
    if (*(int *)(iVar2 + 0x2c) != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x30) + 0x20);
      do {
        piVar3 = (int *)(*(int *)(extraout_ECX + 0x2c) + *piVar6);
        pbVar5 = param_3;
        if ((*piVar3 == 0) || (pbVar4 = (byte *)(piVar3 + 1), pbVar4 == (byte *)0x0)) {
LAB_005ca741:
          if (pbVar5 == (byte *)0x0) break;
        }
        else if (param_3 != (byte *)0x0) {
          do {
            bVar1 = *pbVar4;
            bVar7 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_005ca734:
              pbVar5 = (byte *)((1 - (uint)bVar7) - (uint)(bVar7 != 0));
              goto LAB_005ca741;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar7 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_005ca734;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          pbVar5 = (byte *)0x0;
          goto LAB_005ca741;
        }
        param_2 = param_2 + 1;
        piVar6 = piVar6 + 0xf;
      } while (param_2 < *(uint *)(iVar2 + 0x2c));
    }
    if (*(uint *)(iVar2 + 0x2c) != param_2) {
      return ~(param_2 * 0x3c + *(int *)(iVar2 + 0x30));
    }
  }
  return 0;
}

