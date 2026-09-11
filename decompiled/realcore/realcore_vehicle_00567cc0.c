/* Decompiled from Speed.exe @ 00567cc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00567cc0(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = param_1[iVar1];
    }
  }
  return;
}

