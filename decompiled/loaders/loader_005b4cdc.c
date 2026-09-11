/* Decompiled from Speed.exe @ 005b4cdc */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005b4cdc(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if ((byte *)((uint)param_2 & 0x7fffffff) == param_2) {
    for (iVar2 = *(int *)(param_1 + 0x124); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
      if (param_2 == (byte *)0x0) {
        iVar3 = *(int *)(iVar2 + 0x20);
LAB_005b4d43:
        if (iVar3 == 0) {
          return iVar2;
        }
      }
      else {
        pbVar5 = *(byte **)(iVar2 + 0x20);
        pbVar4 = param_2;
        if (pbVar5 != (byte *)0x0) {
          do {
            bVar1 = *pbVar4;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_005b4d3c:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_005b4d43;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_005b4d3c;
            pbVar5 = pbVar5 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
          goto LAB_005b4d43;
        }
      }
    }
    iVar2 = 0;
  }
  else if (*(int *)~(uint)param_2 == 2) {
    iVar2 = ((int *)~(uint)param_2)[1];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

