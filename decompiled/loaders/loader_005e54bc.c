/* Decompiled from Speed.exe @ 005e54bc */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005e54bc(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    do {
      iVar2 = FUN_00671b76((int)cVar1);
      uVar3 = uVar3 * 0x13 + iVar2;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    uVar3 = uVar3 % 7;
  }
  return uVar3;
}

