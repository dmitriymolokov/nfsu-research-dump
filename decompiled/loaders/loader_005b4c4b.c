/* Decompiled from Speed.exe @ 005b4c4b */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005b4c4b(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((byte *)((uint)param_2 & 0x7fffffff) == param_2) {
    for (uVar2 = *(uint *)(param_1 + 0x120); uVar2 != 0; uVar2 = *(uint *)(uVar2 + 0x34)) {
      if (param_2 == (byte *)0x0) {
        iVar4 = *(int *)(uVar2 + 0x20);
LAB_005b4cc7:
        if (iVar4 == 0) {
          return uVar2;
        }
      }
      else {
        pbVar6 = *(byte **)(uVar2 + 0x20);
        pbVar3 = param_2;
        if (pbVar6 != (byte *)0x0) {
          do {
            bVar1 = *pbVar3;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_005b4cc0:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_005b4cc7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_005b4cc0;
            pbVar6 = pbVar6 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
          goto LAB_005b4cc7;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    piVar5 = (int *)~(uint)param_2;
    if (((*piVar5 == 3) && (piVar5[6] == 0)) && (piVar5[4] == -1)) {
      uVar2 = -(uint)(*(int *)(piVar5[1] + 0x44) != 0) & (uint)piVar5;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

