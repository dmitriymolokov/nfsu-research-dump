/* Decompiled from Speed.exe @ 00594330 */
/* Module: Loader */
/* Ghidra DecompileAll */


int * FUN_00594330(char *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  piVar3 = DAT_007377c8;
  piVar5 = (int *)FUN_0040a880();
  do {
    if (piVar3 == piVar5) {
      return (int *)0x0;
    }
    pcVar6 = param_1;
    do {
      cVar1 = pcVar6[(int)piVar3 + (0x14 - (int)param_1)];
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      iVar4 = *piVar3;
      piVar5 = (int *)piVar3[1];
      *piVar5 = iVar4;
      *(int **)(iVar4 + 4) = piVar5;
      *DAT_007377cc = (int)piVar3;
      piVar5 = piVar3;
      piVar3[1] = (int)DAT_007377cc;
      DAT_007377cc = piVar5;
      *piVar3 = (int)&DAT_007377c8;
      return piVar3;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}

