/* Decompiled from Speed.exe @ 00549ca0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


char * FUN_00549ca0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x68) == 0) {
    return "";
  }
  iVar3 = 0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(unaff_EDI + 0x68) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0064c660(*(undefined4 *)(unaff_EDI + 0x6c));
    }
    if (iVar1 <= iVar4) break;
    if ((*(int *)(unaff_EDI + 0x68) == 0) || (iVar1 = FUN_00666f30(DAT_0073d8d4,iVar4), iVar1 == 0))
    {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)(iVar1 + 0x1c);
    }
    if ((*param_1 == *pcVar2) && (param_1[1] == pcVar2[1])) {
      if (iVar3 == param_2) {
        return pcVar2;
      }
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  return "";
}

