/* Decompiled from Speed.exe @ 004d8500 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d8500(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x6c);
  do {
    if (*piVar2 == 0) {
LAB_004d8541:
      *(undefined1 *)(iVar3 + 0xaac + param_1) = 0;
    }
    else {
      cVar1 = FUN_004d8180();
      if (cVar1 == '\0') goto LAB_004d8541;
      cVar1 = FUN_004d8180();
      if (cVar1 != '\0') {
        cVar1 = FUN_004d8370();
        *(char *)(iVar3 + 0xaac + param_1) = (cVar1 != '\0') + '\x01';
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0xb;
  } while (iVar3 < 10);
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x224);
  do {
    if (*piVar2 == 0) {
LAB_004d8591:
      *(undefined1 *)(iVar3 + 0xab6 + param_1) = 0;
    }
    else {
      cVar1 = FUN_004d8180();
      if (cVar1 == '\0') goto LAB_004d8591;
      cVar1 = FUN_004d8180();
      if (cVar1 != '\0') {
        cVar1 = FUN_004d8370();
        *(char *)(iVar3 + 0xab6 + param_1) = (cVar1 != '\0') + '\x01';
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0xb;
  } while (iVar3 < 0x14);
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x594);
  do {
    if (*piVar2 == 0) {
LAB_004d85e1:
      *(undefined1 *)(iVar3 + 0xaca + param_1) = 0;
    }
    else {
      cVar1 = FUN_004d8180();
      if (cVar1 == '\0') goto LAB_004d85e1;
      cVar1 = FUN_004d8180();
      if (cVar1 != '\0') {
        cVar1 = FUN_004d8370();
        *(char *)(iVar3 + 0xaca + param_1) = (cVar1 != '\0') + '\x01';
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0xb;
    if (0x1d < iVar3) {
      return;
    }
  } while( true );
}

