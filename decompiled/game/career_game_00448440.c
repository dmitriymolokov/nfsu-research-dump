/* Decompiled from Speed.exe @ 00448440 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_00448440(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = DAT_0077a928;
  iVar4 = FUN_0040a880();
  do {
    if (iVar3 == iVar4) {
      return 0;
    }
    pcVar5 = param_1;
    do {
      cVar1 = pcVar5[(iVar3 - (int)param_1) + 0x18];
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return iVar3;
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

