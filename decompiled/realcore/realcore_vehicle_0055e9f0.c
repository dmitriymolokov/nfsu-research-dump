/* Decompiled from Speed.exe @ 0055e9f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_0055e9f0(char *param_1)

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
  param_1 = param_1 + iVar3 + -2;
  iVar3 = 0;
  cVar2 = *param_1;
  while (((cVar2 != '\0' && ('/' < cVar2)) && (cVar2 < ':'))) {
    param_1 = param_1 + 1;
    iVar3 = cVar2 + -0x30 + iVar3 * 10;
    cVar2 = *param_1;
  }
  return iVar3;
}

