/* Decompiled from Speed.exe @ 00567ca0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00567ca0(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    pcVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

