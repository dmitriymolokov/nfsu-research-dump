/* Decompiled from Speed.exe @ 004c4c60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c4c60(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char local_180 [128];
  char local_100 [256];
  
  iVar4 = *(int *)(param_1 + 0x4c);
  uVar3 = FUN_004c49f0(param_1);
  FUN_00495f00(uVar3);
  FUN_004bbc90((int)*(char *)(*(int *)(iVar4 + 8) + 0x7b));
  if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
     (uVar3 = DAT_0076026c, DAT_0073440c != '\0')) {
    uVar3 = 1000000000;
  }
  FUN_004f6850("Cash: %d",uVar3);
  uVar3 = FUN_00674898();
  FUN_004f6850("Entry Fee: %d",uVar3);
  uVar3 = FUN_004f42f0("EVENT_%d_TITLE",**(undefined4 **)(iVar4 + 8));
  FUN_00495f00(uVar3);
  iVar6 = *(int *)(*(int *)(iVar4 + 8) + 8);
  if (((iVar6 != 0) && (iVar6 != 3)) && (iVar6 != 5)) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004c4df0:
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xc73329b8);
      }
    }
    else {
      iVar4 = FUN_004f65d0();
      if (iVar4 == 0) goto LAB_004c4df0;
      iVar4 = FUN_004ffb70();
      if (iVar4 == 0) goto LAB_004c4df0;
    }
    FUN_004f6910(iVar4);
    goto LAB_004c4e12;
  }
  cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x7a);
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  iVar6 = 0x80;
  pcVar5 = local_180;
  do {
    cVar2 = pcVar5[iVar4 - (int)local_180];
    iVar6 = iVar6 + -1;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar6 != 0);
  FUN_004f6850(local_180,(int)cVar1);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_004c4da4:
    if (DAT_0073578c != 0) {
      uVar3 = FUN_004ef050(0xc73329b8);
      FUN_004f6970(uVar3);
      goto LAB_004c4e12;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004f65d0();
    if (iVar4 == 0) goto LAB_004c4da4;
    iVar4 = FUN_004ffb70();
    if (iVar4 == 0) goto LAB_004c4da4;
  }
  FUN_004f6970(iVar4);
LAB_004c4e12:
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  iVar6 = 0x100;
  pcVar5 = local_100;
  do {
    cVar1 = pcVar5[iVar4 - (int)local_100];
    iVar6 = iVar6 + -1;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar6 != 0);
  uVar3 = FUN_005a1da0(0x6f);
  FUN_004f6850(local_100,uVar3);
  return;
}

