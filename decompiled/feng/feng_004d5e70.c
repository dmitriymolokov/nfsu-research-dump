/* Decompiled from Speed.exe @ 004d5e70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d5e70(undefined4 param_1,int param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(param_2 + 8);
  if (piVar5 != (int *)(param_2 + 8)) {
    do {
      iVar1 = piVar5[2];
      if (iVar1 != 0) {
        iVar3 = -1;
        if ((param_3 != (byte *)0x0) && (bVar2 = *param_3, bVar2 != 0)) {
          iVar3 = -1;
          pbVar4 = param_3;
          do {
            if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
              bVar2 = bVar2 - 0x20;
            }
            iVar3 = iVar3 * 0x21 + (uint)bVar2;
            bVar2 = pbVar4[1];
            pbVar4 = pbVar4 + 1;
          } while (bVar2 != 0);
        }
        for (iVar6 = *(int *)(iVar1 + 0x4c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
          if (*(int *)(iVar6 + 0x30) == iVar3) {
            if (iVar6 != 0) {
              if (iVar6 != *(int *)(iVar1 + 0x54)) {
                *(int *)(iVar1 + 0x54) = iVar6;
                FUN_004ff030(iVar1);
                *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
              }
              *(undefined4 *)(iVar6 + 0x10) = 0;
            }
            break;
          }
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(param_2 + 8));
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar3 = -1;
    if (param_3 != (byte *)0x0) {
      bVar2 = *param_3;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        pbVar4 = param_3 + 1;
        param_3 = param_3 + 1;
        bVar2 = *pbVar4;
      }
    }
    iVar6 = *(int *)(iVar1 + 0x4c);
    if (iVar6 != 0) {
      while (*(int *)(iVar6 + 0x30) != iVar3) {
        iVar6 = *(int *)(iVar6 + 4);
        if (iVar6 == 0) {
          return;
        }
      }
      if (iVar6 != 0) {
        if (iVar6 != *(int *)(iVar1 + 0x54)) {
          *(int *)(iVar1 + 0x54) = iVar6;
          FUN_004ff030(iVar1);
          *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
        }
        *(undefined4 *)(iVar6 + 0x10) = 0;
      }
    }
  }
  return;
}

