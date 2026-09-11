/* Decompiled from Speed.exe @ 004a5a30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a5a30(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *local_10;
  byte local_8;
  byte local_7 [7];
  
  iVar4 = 0;
  local_10 = (int *)(param_1 + 0x24);
  do {
    iVar4 = iVar4 + 1;
    FUN_00565da0("heat_%d",iVar4);
    iVar7 = -1;
    pbVar6 = &local_8;
    bVar3 = local_8;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar7 = iVar7 * 0x21 + (uint)bVar3;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a5b01;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) goto LAB_004a5af0;
    if (DAT_0073578c == 0) {
LAB_004a5b4f:
      iVar5 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_0073578c + 8);
      if (iVar2 == 0) {
LAB_004a5b01:
        if ((DAT_0073578c == 0) || (iVar5 = FUN_004ef050(iVar7), iVar5 == 0)) goto LAB_004a5b4f;
      }
      else {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar2 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar2 + 0xec);
          if (iVar5 == 0) goto LAB_004a5b01;
        }
LAB_004a5af0:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) goto LAB_004a5b01;
      }
      if (*(int *)(iVar5 + 0x18) != 1) goto LAB_004a5b4f;
      FUN_004a9900(iVar5);
    }
    *local_10 = iVar5;
    local_10 = local_10 + 1;
    if (7 < iVar4) {
      return;
    }
  } while( true );
}

