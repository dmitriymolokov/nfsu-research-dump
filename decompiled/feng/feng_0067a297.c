/* Decompiled from Speed.exe @ 0067a297 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0067a297(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint unaff_retaddr;
  undefined1 local_30 [24];
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  FUN_006818c6(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  pcVar1 = (char *)((uint)(local_18 == 0x2d) + param_2);
  FUN_00681795(pcVar1,param_3,&local_18);
  local_14 = local_14 + -1;
  if ((local_14 < -4) || (param_3 <= local_14)) {
    __cftoe2(param_3,param_4,1);
  }
  else {
    if (iVar2 < local_14) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_0067a193(param_2,param_3,1);
  }
  return;
}

