/* Decompiled from Speed.exe @ 004dbf90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dbf90(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_004dbad0();
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) && (*(int *)(unaff_EBX + 0xaf4) != 0)) {
    FUN_004f7260(&local_14,&local_18);
    FUN_004f7140(local_14,local_18);
    local_10 = *(undefined4 *)(iVar2 + 0x14);
    local_c = *(undefined4 *)(iVar2 + 0x18);
    local_8 = *(undefined4 *)(iVar2 + 0x1c);
    local_4 = *(undefined4 *)(iVar2 + 0x20);
    local_8 = FUN_00674898();
    local_c = FUN_00674898();
    local_10 = FUN_00674898();
    FUN_004f7620();
    switch(*(undefined4 *)(iVar2 + 0x24)) {
    case 0:
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      return;
    case 1:
    case 2:
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      cVar1 = FUN_004d8270();
      if ((cVar1 == '\0') && (DAT_00735e12 == '\0')) {
        FUN_00495fc0();
        FUN_00495fc0();
        uVar3 = FUN_005a08f0();
        FUN_004f6850(&DAT_006ca778,uVar3);
        return;
      }
      FUN_00495f70();
      FUN_00495f70();
      return;
    case 3:
    case 4:
    case 5:
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      cVar1 = FUN_004d82f0();
      if ((cVar1 == '\0') && (DAT_00735e12 == '\0')) {
        FUN_00495fc0();
        FUN_00495fc0();
        uVar3 = FUN_005a08f0();
        FUN_004f6850(&DAT_006ca778,uVar3);
        return;
      }
      FUN_00495f70();
      FUN_00495f70();
    }
  }
  return;
}

