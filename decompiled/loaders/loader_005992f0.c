/* Decompiled from Speed.exe @ 005992f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005994a4) */
/* WARNING: Removing unreachable block (ram,0x0059957d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005992f0(int param_1,undefined4 param_2,int param_3,float param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined2 extraout_var;
  float10 fVar6;
  undefined4 local_78;
  undefined1 local_60 [24];
  undefined4 local_48;
  int local_44;
  int local_40;
  float local_3c;
  undefined2 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00686a03;
  local_1c = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_1c;
  cVar1 = FUN_00456fe0();
  local_2c = (uint)(cVar1 == '\0');
  local_30 = FUN_0044d3e0();
  local_34 = (undefined4 *)0x0;
  local_38 = 0;
  fVar6 = (float10)FUN_00442590();
  local_3c = (float)fVar6;
  if (local_2c == 0) {
    local_40 = param_3;
  }
  else {
    local_40 = param_3 + -6;
  }
  local_44 = local_40;
  local_48 = FUN_0059b620();
  FUN_004ad8d0();
  FUN_004ad8d0();
  if (local_2c == 0) {
    local_34 = (undefined4 *)FUN_00424f40();
    local_38 = FUN_00564db0(*local_34,local_34[1]);
  }
  else {
    local_34 = (undefined4 *)FUN_00421a90();
    local_38 = FUN_00564db0(*local_34,local_34[1]);
  }
  FUN_00424f30(0,local_3c);
  FUN_0041e4c0();
  uVar3 = FUN_00424c50();
  uVar2 = FUN_0059b590(uVar3);
  *(undefined1 *)(param_1 + 0x17) = uVar2;
  iVar4 = FUN_004134a0(&PTR_DAT_006cae38,0);
  local_14 = 0;
  if (iVar4 == 0) {
    local_78 = 0;
  }
  else {
    fVar6 = (float10)FUN_00442570();
    local_78 = FUN_00425350(iVar4,param_1,local_60,CONCAT22(extraout_var,local_38),(float)fVar6);
  }
  local_14 = 0xffffffff;
  local_28 = local_78;
  FUN_00426110();
  FUN_00425fe0();
  piVar5 = (int *)FUN_0041f5d0();
  (**(code **)(*piVar5 + 0x10))(local_30,param_2,local_44);
  FUN_00583250();
  *(undefined1 *)(piVar5 + 0x136) = (undefined1)local_48;
  FUN_00583270();
  if (param_5 == 0) {
    FUN_0044aa10(4);
  }
  else {
    FUN_0044aa10(5);
  }
  if (_DAT_006ccb7c < param_4) {
    FUN_004081f0(param_4);
    FUN_005673e0();
  }
  FUN_00424dd0();
  FUN_00424cf0();
  FUN_00432d30(0);
  FUN_00426110();
  ExceptionList = local_1c;
  return local_28;
}

