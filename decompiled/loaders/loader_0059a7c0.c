/* Decompiled from Speed.exe @ 0059a7c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059a913) */
/* WARNING: Removing unreachable block (ram,0x0059a939) */

void FUN_0059a7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_30;
  undefined4 local_2c;
  
  cVar1 = FUN_00456fe0();
  uVar3 = FUN_0044d3e0();
  uVar2 = FUN_0059b620();
  iVar4 = FUN_0041f5d0();
  fVar5 = (float10)FUN_00442590();
  if (cVar1 == '\0') {
    local_2c = 0xbf800000;
    local_30 = param_4 + -6;
  }
  else {
    local_2c = 0x3f800000;
    local_30 = param_4;
  }
  uVar7 = 0;
  uVar6 = 0;
  FUN_0045ac50(0,0);
  FUN_0045ace0(uVar6,uVar7);
  FUN_0044d640(local_30);
  FUN_0059ba00(local_30);
  FUN_00583250();
  *(undefined1 *)(iVar4 + 0x4d8) = uVar2;
  *(undefined4 *)(iVar4 + 0x4dc) = param_5;
  FUN_00583270();
  FUN_00583d70();
  if (param_7 == 0) {
    FUN_0044aa10(4);
  }
  else {
    FUN_0044aa10(5);
  }
  FUN_00427f70(param_1,uVar3,param_2,param_6,0,local_2c,0,param_3,(float)fVar5);
  FUN_0042a810();
  FUN_00426110();
  FUN_0059b5d0(param_1);
  return;
}

