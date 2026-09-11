/* Decompiled from Speed.exe @ 004b92a0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined4 FUN_004b92a0(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  sVar1 = *(short *)(*(int *)(unaff_EDI + 0xc) + 0x6c);
  if (sVar1 < 0x44c) {
    uVar2 = FUN_004f42f0("TRACK_%d",(int)sVar1);
    return uVar2;
  }
  if (sVar1 < 0x4b0) {
    uVar2 = FUN_004f42f0("SPRINT_TRACKS_BACK");
    uVar3 = FUN_004f42f0("SPRINT_TRACKS_BACK2");
    switch(*(undefined2 *)(*(int *)(unaff_EDI + 0xc) + 0x6c)) {
    case 0x44d:
    case 0x44e:
    case 0x452:
    case 0x453:
    case 0x454:
    case 0x455:
      return uVar3;
    case 0x44f:
    case 0x450:
    case 0x451:
      return uVar2;
    }
  }
  else {
    if (sVar1 < 0x514) {
      uVar2 = FUN_004f42f0("TRACK_%d",(int)sVar1);
      return uVar2;
    }
    if (sVar1 < 0x519) {
      uVar2 = FUN_004f42f0("DRIFT_TRACKS_BACK");
      return uVar2;
    }
    uVar2 = FUN_004f42f0("DRIFT_TRACKS_BACK2");
  }
  return uVar2;
}

