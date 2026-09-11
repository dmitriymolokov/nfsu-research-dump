/* Decompiled from Speed.exe @ 004f9a60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f9a60(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte local_20;
  byte local_1f [31];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar4 = iVar4 + 1;
      FUN_004f68c0(0x20,"Crumb_0%d",iVar4);
      iVar8 = -1;
      pbVar6 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar8 = iVar8 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar3 = *pbVar1;
      }
      iVar7 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004f9b29:
        if (iVar7 == 0) {
LAB_004f9b3a:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar8);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar7 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_004f9b29;
            goto LAB_004f9b12;
          }
          goto LAB_004f9b3a;
        }
LAB_004f9b12:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar5 == 0))
        goto LAB_004f9b29;
      }
      FUN_004f6910(iVar5);
    } while (iVar4 < *(int *)(param_1 + 0x4c));
  }
  return;
}

