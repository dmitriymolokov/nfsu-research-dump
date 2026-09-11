/* Decompiled from Speed.exe @ 004c0aa0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c0aa0(void)

{
  int iVar1;
  char *pcVar2;
  
  switch(DAT_00777cb8) {
  case 0:
    pcVar2 = "MU_PAUSE_AUDIO";
    break;
  case 1:
    pcVar2 = "MU_PAUSE_CAMERA";
    break;
  case 2:
    pcVar2 = "MU_PAUSE_CAR";
    break;
  case 3:
    pcVar2 = "MU_PAUSE_CONTROLLER";
    break;
  case 4:
    pcVar2 = "MU_PAUSE_DISPLAY";
    break;
  case 5:
    pcVar2 = "MU_PAUSE_HUD";
    break;
  case 6:
    pcVar2 = "MU_PAUSE_TRAX";
    break;
  case 7:
    pcVar2 = "MU_PAUSE_DEBUG";
    break;
  default:
    pcVar2 = "LANGUAGE_MU_PAUSE_";
  }
  FUN_004f68c0(0x20,pcVar2);
  FUN_004fd230();
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  return;
}

