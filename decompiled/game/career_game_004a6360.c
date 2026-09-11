/* Decompiled from Speed.exe @ 004a6360 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a6360(char param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int unaff_EBX;
  int iVar7;
  byte local_20;
  byte local_1f [31];
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar3 = iVar3 + 1;
      FUN_004f68c0(0x20,"NOS_bar_%d_%d",param_2,iVar3);
      iVar7 = -1;
      pbVar5 = &local_20;
      bVar2 = local_20;
      if (param_1 == '\0') {
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar5 + 1;
          iVar7 = iVar7 * 0x21 + (uint)bVar2;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if (((*(int *)(unaff_EBX + 8) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004ef050(iVar7);
          }
        }
        FUN_004f6910(iVar4);
      }
      else {
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar5 + 1;
          iVar7 = iVar7 * 0x21 + (uint)bVar2;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if (((((*(int *)(unaff_EBX + 8) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
             (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
            ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(iVar7), iVar4 != 0)))) &&
           (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar4 + 0x18) == 5)) {
          uVar6 = *(undefined4 *)(iVar4 + 0x60);
          iVar7 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar7) {
            do {
              FUN_004f6970(uVar6);
              uVar6 = *(undefined4 *)(extraout_EDX + 4);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
    } while (iVar3 < param_2);
  }
  return;
}

