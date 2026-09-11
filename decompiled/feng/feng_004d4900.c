/* Decompiled from Speed.exe @ 004d4900 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d4900(void)

{
  int iVar1;
  char *pcVar2;
  
  switch(DAT_00735e20) {
  case 0:
    pcVar2 = "Audio";
    break;
  case 1:
    pcVar2 = "Camera";
    break;
  case 2:
    pcVar2 = (char *)&PTR_DAT_006cae38;
    break;
  case 3:
    pcVar2 = "Controller";
    break;
  case 4:
    pcVar2 = "Display";
    break;
  default:
    goto switchD_004d490e_caseD_5;
  case 6:
    pcVar2 = "EATrax";
    break;
  case 8:
    pcVar2 = "SavingOptions";
    break;
  case 9:
    pcVar2 = "Credits";
    break;
  case 10:
    pcVar2 = "GameTrailers";
  }
  FUN_004f68c0(0x20,pcVar2);
switchD_004d490e_caseD_5:
  iVar1 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    FUN_004fd230();
    FUN_004f5ed0(iVar1);
  }
  return;
}

