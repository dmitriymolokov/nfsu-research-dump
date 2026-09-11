/* Decompiled from Speed.exe @ 0054b170 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0054b170(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_2 != (char *)0x0) && (DAT_0073505d = *param_2, DAT_0073505d != '\0')) {
    pcVar2 = &DAT_0073505d;
    do {
      cVar1 = (param_2 + -0x73505c)[(int)pcVar2];
      pcVar2 = pcVar2 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

