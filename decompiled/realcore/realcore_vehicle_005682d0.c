/* Decompiled from Speed.exe @ 005682d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005682d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_00567eb0(unaff_ESI,(undefined4 *)(unaff_ESI + 0x40));
  uVar4 = CONCAT44(0x20,*(undefined4 *)(unaff_ESI + 0x40));
  puVar3 = &DAT_006bc43c;
  FUN_004f6850();
  FUN_004f6850(&DAT_006bc43c,*(undefined4 *)(unaff_ESI + 0x44),0x20,puVar3,uVar4);
  FUN_004f6850(&DAT_006bc43c,*(undefined4 *)(unaff_ESI + 0x48),0x20);
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x4c));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x50));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x58));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x5c));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x60));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 100));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x68));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x6c));
  FUN_004f6850(&DAT_006ca778,*(undefined4 *)(unaff_ESI + 0x70));
  FUN_004f6850("%.1f -- %.1f",(double)_DAT_0073498c,(double)_DAT_00734990);
  if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
     (uVar1 = DAT_0076026c, DAT_0073440c != '\0')) {
    uVar1 = 1000000000;
  }
  FUN_004f6850(&DAT_006ca778,uVar1);
  FUN_004f6850(&DAT_006ca778,DAT_00760270);
  FUN_004f6850(&DAT_006ca778,DAT_00760274);
  FUN_004f6850(&DAT_006ca778,DAT_00760278);
  uVar1 = FUN_005685d0();
  FUN_004f6850(&DAT_006ca778,uVar1);
  iVar2 = FUN_005685d0();
  FUN_004f6850(&DAT_006ca778,iVar2 + DAT_00760278);
  uVar1 = FUN_005a1340();
  FUN_004f6850(&DAT_006ca778,uVar1);
  uVar1 = FUN_005a1340();
  FUN_004f6850(&DAT_006ca778,uVar1);
  uVar1 = FUN_005a1340();
  FUN_004f6850(&DAT_006ca778,uVar1);
  uVar1 = FUN_005a1340();
  FUN_004f6850(&DAT_006ca778,uVar1);
  FUN_004f6850(&DAT_006cc568,(&PTR_DAT_006f1fa0)[DAT_00734978]);
  return;
}

