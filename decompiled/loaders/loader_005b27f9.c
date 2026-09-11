/* Decompiled from Speed.exe @ 005b27f9 */
/* Module: Loader */
/* Ghidra DecompileAll */


char * __thiscall FUN_005b27f9(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_2 < *(char **)(param_1 + 4)) && (*param_2 == '\'')) {
    iVar1 = FUN_005b2560(param_2 + 1,param_3);
    if ((iVar1 != 0) &&
       ((pcVar2 = param_2 + 1 + iVar1, pcVar2 < *(char **)(param_1 + 4) && (*pcVar2 == '\'')))) {
      return pcVar2 + (1 - (int)param_2);
    }
  }
  return (char *)0x0;
}

