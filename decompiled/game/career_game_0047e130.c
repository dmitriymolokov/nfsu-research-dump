/* Decompiled from Speed.exe @ 0047e130 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_0047e130(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int local_a8;
  byte *local_a0;
  
  local_a8 = 0;
  do {
    iVar5 = 0;
    piVar4 = (int *)0x0;
    if (local_a8 == 0) {
      iVar5 = *param_1;
      piVar4 = param_1 + 1;
    }
    else if (local_a8 == 1) {
      iVar5 = param_1[0x201];
      piVar4 = param_1 + 0x202;
    }
    else if (local_a8 == 2) {
      iVar5 = param_1[0x222];
      piVar4 = param_1 + 0x223;
    }
    else if (local_a8 == 3) {
      iVar5 = param_1[0x243];
      piVar4 = param_1 + 0x244;
    }
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_0047f9e0();
        pbVar3 = param_2;
        pbVar6 = local_a0;
        do {
          bVar2 = *pbVar6;
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 & 0x5f;
          }
          bVar1 = *pbVar3;
          pbVar6 = pbVar6 + 1;
          if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
            bVar1 = bVar1 & 0x5f;
          }
          pbVar3 = pbVar3 + 1;
        } while (((bVar2 != 0) && (bVar1 != 0)) && (bVar2 == bVar1));
        if (bVar2 == bVar1) {
          return piVar4[iVar7];
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    local_a8 = local_a8 + 1;
    if (4 < local_a8) {
      return 0;
    }
  } while( true );
}

