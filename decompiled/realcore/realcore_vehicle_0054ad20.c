/* Decompiled from Speed.exe @ 0054ad20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0054ad20(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_EDI;
  
  iVar3 = 0xc;
  pcVar2 = unaff_EDI;
  do {
    cVar1 = pcVar2[param_1 - (int)unaff_EDI];
    iVar3 = iVar3 + -1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 != 0);
  *(uint *)(unaff_EDI + 100) = *(uint *)(unaff_EDI + 100) | 1;
  return;
}

