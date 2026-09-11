/* Decompiled from Speed.exe @ 004151c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004151c0(void)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int unaff_EBX;
  int iVar7;
  byte local_20;
  byte local_1f [31];
  
  iVar4 = 0;
  do {
    iVar1 = iVar4 + 1;
    FUN_004f68c0(0x20,"Res_%02d",iVar1);
    iVar7 = -1;
    pbVar5 = &local_20;
    bVar3 = local_20;
    if (iVar4 == *(int *)(unaff_EBX + 0x7c)) {
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar7 = iVar7 * 0x21 + (uint)bVar3;
        pbVar2 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
        bVar3 = *pbVar2;
      }
      if (((((*(int *)(unaff_EBX + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
           (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
          ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(iVar7), iVar4 != 0)))) &&
         (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar4 + 0x18) == 5)) {
        uVar6 = *(undefined4 *)(iVar4 + 0x60);
        iVar4 = *(int *)(iVar4 + 0x5c);
        if (0 < iVar4) {
          do {
            FUN_004f6970(uVar6);
            uVar6 = *(undefined4 *)(extraout_EDX + 4);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    else {
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar2 = pbVar5 + 1;
        iVar7 = iVar7 * 0x21 + (uint)bVar3;
        pbVar5 = pbVar5 + 1;
        bVar3 = *pbVar2;
      }
      if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
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
    iVar4 = iVar1;
  } while (iVar1 < 5);
  return;
}

