/* Decompiled from Speed.exe @ 00667690 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00667690(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint unaff_retaddr;
  undefined1 local_124 [288];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  pcVar2 = (char *)FUN_006672e0();
  if (param_4 < 0) {
    *pcVar2 = '-';
    pcVar2 = pcVar2 + 1;
    param_4 = -param_4;
  }
  pcVar3 = pcVar2 + 0x1f;
  *pcVar3 = '\0';
  for (; 0 < param_4; param_4 = param_4 / 10) {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = (char)(param_4 % 10) + '0';
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar3 = pcVar3 + -1;
    *pcVar3 = '0';
    cVar1 = *pcVar3;
    if (cVar1 == '\0') goto LAB_00667710;
  }
  do {
    *pcVar2 = cVar1;
    cVar1 = pcVar3[1];
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
LAB_00667710:
  *pcVar2 = '\0';
  FUN_00667300(param_1,param_2,local_124);
  return;
}

