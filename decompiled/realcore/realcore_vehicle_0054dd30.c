/* Decompiled from Speed.exe @ 0054dd30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0054dd30(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 uStack_107;
  
  *unaff_EBX = 0;
  FUN_0054df00();
  iVar2 = FUN_00449e20();
  if (iVar2 != 0) {
    FUN_00449e20();
    FUN_00667950();
  }
  iVar2 = FUN_00449d80();
  if (iVar2 != 0) {
    FUN_00449d80();
    FUN_00667950();
  }
  switch(DAT_00734998) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  default:
    goto switchD_0054dda0_default;
  }
  FUN_00567ce0();
switchD_0054dda0_default:
  FUN_00667950();
  puVar3 = &uStack_107;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  FUN_00565da0(&DAT_006ca778,DAT_00734994);
  FUN_00667950();
  uVar1 = FUN_00438ae0();
  FUN_00565da0(&DAT_006ca778,uVar1);
  FUN_00667950();
  return;
}

