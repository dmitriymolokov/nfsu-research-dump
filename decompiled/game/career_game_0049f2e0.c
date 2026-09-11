/* Decompiled from Speed.exe @ 0049f2e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f2e0(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int extraout_EDX;
  int unaff_EBX;
  undefined1 local_20 [32];
  
  switch(*(undefined4 *)(unaff_EBX + 8)) {
  case 0:
    iVar3 = FUN_0049f1b0();
    cVar2 = FUN_0049f2b0();
    if (cVar2 != '\0') {
      *(int *)(unaff_EBX + 0x28) = *(int *)(unaff_EBX + 0x28) + *(int *)(extraout_EDX + 0x4c);
      if (*(undefined4 **)(unaff_EBX + 0xc) == *(undefined4 **)(unaff_EBX + 4)) {
        *(undefined4 *)(unaff_EBX + 8) = 1;
        *(int *)(unaff_EBX + 0x1c) = DAT_0073ad3c;
        FUN_004f6c30("Flashy",1);
      }
      else {
        *(undefined4 *)(unaff_EBX + 0xc) = **(undefined4 **)(unaff_EBX + 0xc);
        FUN_0049f120();
        FUN_004f6c30("Flashy",1);
      }
      FUN_004f6c30("Flashy",1);
    }
    FUN_004f6850(&DAT_006cc568,*(int *)(unaff_EBX + 0xc) + 0xc);
    FUN_004f6850(&DAT_006cc568,local_20);
    FUN_004f6850(&DAT_006ca778,*(int *)(unaff_EBX + 0x28) + iVar3);
    FUN_00495f70();
    FUN_00495f70();
    FUN_0049f690(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x34));
    return;
  case 1:
    FUN_00495fc0();
    FUN_00495f70();
    FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_EBX + 0x24));
    if (_DAT_006cc7dc < (float)(DAT_0073ad3c - *(int *)(unaff_EBX + 0x1c)) * _DAT_006cca38) {
      *(int *)(unaff_EBX + 0x20) = DAT_0073ad3c;
      *(undefined4 *)(unaff_EBX + 8) = 2;
      FUN_004f6c30("Flashy",1);
    }
    FUN_0049f690(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x34));
    return;
  case 2:
    FUN_00495fc0();
    fVar1 = (float)(DAT_0073ad3c - *(int *)(unaff_EBX + 0x20)) * _DAT_006cca38;
    if ((fVar1 <= DAT_006cc7a4) || (_DAT_006cc7dc <= fVar1)) {
      if ((fVar1 <= _DAT_006cc7dc) || (_DAT_006cc7ac <= fVar1)) {
        FUN_00565da0(&DAT_006ca778,*(int *)(unaff_EBX + 0x24) * *(int *)(unaff_EBX + 0x30));
        *(undefined4 *)(unaff_EBX + 8) = 3;
        FUN_0049f690(unaff_EBX,
                     *(int *)(unaff_EBX + 0x24) * *(int *)(unaff_EBX + 0x30) +
                     *(int *)(unaff_EBX + 0x34));
        FUN_004f6c30("Flashy",1);
      }
      else {
        iVar3 = FUN_00674898();
        FUN_00565da0(&DAT_006ca778,iVar3);
        FUN_0049f690(unaff_EBX,*(int *)(unaff_EBX + 0x34) + iVar3);
      }
    }
    else {
      FUN_00565da0(&DAT_006ca778,*(undefined4 *)(unaff_EBX + 0x28));
    }
    FUN_004f6850(&DAT_006cc568,local_20);
    return;
  case 3:
    FUN_00495fc0();
    FUN_00495fc0();
    FUN_004f6850(&DAT_006cc568,*(int *)(unaff_EBX + 0xc) + 0xc);
    FUN_004f6850(&DAT_006ca778,*(undefined4 *)(*(int *)(unaff_EBX + 0xc) + 0x4c));
    FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_EBX + 0x30));
    FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_EBX + 0x24));
    FUN_004f6850(&DAT_006ca778,*(int *)(unaff_EBX + 0x24) * *(int *)(unaff_EBX + 0x30));
    FUN_0049f690(unaff_EBX,
                 *(int *)(unaff_EBX + 0x24) * *(int *)(unaff_EBX + 0x30) +
                 *(int *)(unaff_EBX + 0x34));
  }
  return;
}

