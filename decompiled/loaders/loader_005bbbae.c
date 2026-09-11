/* Decompiled from Speed.exe @ 005bbbae */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005bbbae(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_14 [4];
  int local_10;
  undefined4 local_8;
  
  if ((param_3 == 0) != (*(int *)(param_2 + 0x1c) == 0)) {
    return 0xffffffff;
  }
  local_8 = param_1;
  if (param_3 != 0) {
    iVar3 = FUN_005d7700(*(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x18),0,local_14);
    if ((iVar3 < 0) || (iVar3 = FUN_005d7700(*(undefined4 *)(param_3 + 0x18),0,local_20), iVar3 < 0)
       ) {
      pbVar5 = *(byte **)(*(int *)(param_2 + 0x1c) + 0x18);
      pbVar4 = *(byte **)(param_3 + 0x18);
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005bbc3f:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_005bbc44;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005bbc3f;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005bbc44:
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    else if (local_10 != local_1c) {
      return 0xffffffff;
    }
  }
  iVar3 = *(int *)(param_2 + 0x24);
  do {
    if (iVar3 == 0) {
LAB_005bbcac:
      if (param_4 != 0) {
        return 0xffffffff;
      }
      return 0;
    }
    if (param_4 == 0) {
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      goto LAB_005bbcac;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0x18);
    iVar2 = *(int *)(*(int *)(param_4 + 8) + 0x18);
    if (*(int *)(iVar3 + 0x1c) != *(int *)(iVar2 + 0x1c)) {
      return 0xffffffff;
    }
    uVar7 = FUN_005ba894(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar2 + 0x20));
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      return 0xffffffff;
    }
    do {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) break;
    } while (*(int *)(*(int *)(iVar3 + 8) + 4) != 5);
    do {
      param_4 = *(int *)(param_4 + 0xc);
      if (param_4 == 0) break;
    } while (*(int *)(*(int *)(param_4 + 8) + 4) != 5);
  } while( true );
}

