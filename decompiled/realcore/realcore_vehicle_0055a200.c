/* Decompiled from Speed.exe @ 0055a200 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0055a200(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0055b5d0();
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd4));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd8));
  if (*(int *)(*(int *)(param_1 + 0x40) + 0xe0) == 0) {
    uVar2 = 0x193f3e;
  }
  else {
    uVar2 = 0x5b5ad1c9;
  }
  FUN_00495f00(uVar2);
  if (*(char *)(*(int *)(param_1 + 0x40) + 0xdc) == '\0') {
    FUN_00495f00(0x2c119933);
  }
  else {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f6850(iVar1);
  }
  FUN_00495f00(0x353f3237);
  return;
}

