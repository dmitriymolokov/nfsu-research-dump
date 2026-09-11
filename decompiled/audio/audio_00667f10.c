/* Decompiled from Speed.exe @ 00667f10 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00667f10(char *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (char *)0x0) {
    return param_2;
  }
  uVar3 = 0;
  uVar2 = *(uint *)(&DAT_006ab3d8 + *param_1 * 4);
  while (uVar2 != 0) {
    uVar3 = uVar3 | uVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar2 = *(uint *)(&DAT_006ab3d8 + *pcVar1 * 4);
  }
  return uVar3;
}

