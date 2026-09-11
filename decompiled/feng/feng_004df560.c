/* Decompiled from Speed.exe @ 004df560 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004df560(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c37fc;
  local_4 = 0;
  param_1[0x10] = 0;
  pcVar4 = "DEMO_DISC_MARKETING_BLURB";
  param_2 = -1;
  uVar2 = 0x44;
  do {
    param_2 = param_2 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar4 = pcVar4 + 1;
  } while (*pbVar1 != 0);
  FUN_0053e9e0(&DAT_00740420,&param_2,1,&LAB_004df530,0,0);
  if (param_1[3] != 0) {
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      iVar3 = FUN_004ffb70();
      if (iVar3 != 0) goto LAB_004df611;
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ef050(0x505e82bf);
  }
LAB_004df611:
  FUN_004f6910(iVar3);
  ExceptionList = local_c;
  return param_1;
}

