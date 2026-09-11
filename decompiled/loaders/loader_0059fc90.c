/* Decompiled from Speed.exe @ 0059fc90 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059fc90(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  FUN_004f68c0(param_1);
  if ((DAT_006ee6f0 != 0) && (DAT_006ee6f0 != 7)) {
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      if (*param_2 == '.') {
        *param_2 = ',';
      }
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

