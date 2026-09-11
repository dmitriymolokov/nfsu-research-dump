/* Decompiled from Speed.exe @ 00667750 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00667750(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint unaff_retaddr;
  undefined1 local_124 [288];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  pcVar1 = (char *)FUN_006672e0();
  for (pcVar2 = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ0123"; (param_4 != 0 && (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if ((param_4 & 1) != 0) {
      *pcVar1 = *pcVar2;
      pcVar1 = pcVar1 + 1;
    }
    param_4 = (int)param_4 >> 1;
  }
  *pcVar1 = '\0';
  FUN_00667300(param_1,param_2,local_124);
  return;
}

