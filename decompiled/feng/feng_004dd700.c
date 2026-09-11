/* Decompiled from Speed.exe @ 004dd700 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dd700(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  byte local_20;
  byte local_1f [31];
  
  iVar3 = 0;
  iVar7 = 0;
  do {
    iVar3 = iVar3 + 1;
    FUN_004f68c0(0x20,"CButton_%d",iVar3);
    iVar8 = -1;
    if (*(int *)(&DAT_006f8ff8 + (iVar7 + DAT_00758974) * 4) == 0) {
      pbVar5 = &local_20;
      bVar2 = local_20;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        pbVar1 = pbVar5 + 1;
        iVar8 = iVar8 * 0x21 + (uint)bVar2;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(iVar8);
        }
      }
      FUN_004f6910(iVar4);
    }
    else {
      pbVar5 = &local_20;
      bVar2 = local_20;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar8 = iVar8 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      if (((((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
           (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
          ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(iVar8), iVar4 != 0)))) &&
         (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar4 + 0x18) == 5)) {
        uVar6 = *(undefined4 *)(iVar4 + 0x60);
        iVar8 = *(int *)(iVar4 + 0x5c);
        if (0 < iVar8) {
          do {
            FUN_004f6970(uVar6);
            uVar6 = *(undefined4 *)(extraout_EDX + 4);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      FUN_00416bb0(*(undefined4 *)(&DAT_006f8ff8 + (iVar7 + DAT_00758974) * 4));
    }
    iVar7 = iVar7 + 5;
  } while (iVar7 < 0x37);
  return;
}

