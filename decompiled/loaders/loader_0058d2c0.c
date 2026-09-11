/* Decompiled from Speed.exe @ 0058d2c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_0058d2c0(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  if (((param_1 != (int *)0x0) && (param_2 != (byte *)0x0)) &&
     (iVar2 = param_1[3], *param_1 == 0x504d4f43)) {
    uVar5 = 1;
    pbVar7 = (byte *)(param_1 + 4);
    pbVar3 = param_2;
    if (*(short *)((int)param_1 + 6) != 1) {
      while (pbVar7 != (byte *)((int)param_1 + iVar2)) {
        if (uVar5 == 1) {
          uVar5 = *pbVar7 | 0x10000 | (uint)pbVar7[1] << 8;
          pbVar7 = pbVar7 + 2;
        }
        iVar8 = (-(uint)((byte *)((int)param_1 + iVar2) + -0x20 < pbVar7) & 0xfffffff1) + 0x10;
        do {
          if ((uVar5 & 1) == 0) {
            *pbVar3 = *pbVar7;
            pbVar3 = pbVar3 + 1;
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar1 = *pbVar7;
            pbVar4 = pbVar3 + -((bVar1 & 0xf0) << 4 | (uint)pbVar7[1]);
            pbVar7 = pbVar7 + 2;
            *pbVar3 = *pbVar4;
            pbVar3[1] = pbVar4[1];
            pbVar3[2] = pbVar4[2];
            pbVar3 = pbVar3 + 3;
            pbVar4 = pbVar4 + 3;
            uVar6 = bVar1 & 0xf;
            if ((bVar1 & 0xf) != 0) {
              do {
                *pbVar3 = *pbVar4;
                pbVar3 = pbVar3 + 1;
                pbVar4 = pbVar4 + 1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
          }
          uVar5 = uVar5 >> 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      return (int)pbVar3 - (int)param_2;
    }
    for (uVar5 = iVar2 - 0x10U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar5 = iVar2 - 0x10U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      param_2 = param_2 + 1;
    }
    return iVar2 + -0x10;
  }
  return 0;
}

