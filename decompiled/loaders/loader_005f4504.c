/* Decompiled from Speed.exe @ 005f4504 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_005f4504(ulonglong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = &local_44;
  switch(((param_6 != (undefined4 *)0x0) << 1 | param_5 != (undefined4 *)0x0) << 1 |
         param_4 != (undefined4 *)0x0) {
  case '\0':
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_8 = 0x3f800000;
    local_1c = 0x3f800000;
    local_30 = 0x3f800000;
    local_44 = 0x3f800000;
    break;
  case '\x01':
    puVar1 = param_4;
    break;
  case '\x02':
    puVar1 = param_5;
    break;
  case '\x03':
    FastExitMediaState();
    FUN_005f4338(&local_44,param_5,param_4);
    FastExitMediaState();
    break;
  case '\x04':
    puVar1 = param_6;
    break;
  case '\x05':
    FastExitMediaState();
    FUN_005f4338(&local_44,param_6,param_4);
    FastExitMediaState();
    break;
  case '\x06':
    FastExitMediaState();
    FUN_005f4338(&local_44,param_6,param_5);
    FastExitMediaState();
    break;
  case '\a':
    FastExitMediaState();
    FUN_005f4338(&local_44,param_6,param_5);
    FUN_005f4338(&local_44,&local_44,param_4);
    FastExitMediaState();
  }
  FUN_005f42ad(param_1,param_2,puVar1);
  if (param_3 != (undefined8 *)0x0) {
    FastExitMediaState();
    uVar4 = param_3[2];
    uVar5 = PackedIntToFloatingDwordConv(*param_3,*param_3);
    uVar6 = PackedIntToFloatingDwordConv(param_3[1],param_3[1]);
    uVar2 = PackedFloatingADD(*param_1 ^ DAT_006a0808,_DAT_006a0810);
    uVar6 = PackedFloatingMUL(uVar6,DAT_006a0818);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar7 = PackedFloatingSUB(CONCAT44(uVar8,uVar8),uVar4);
    uVar2 = PackedFloatingMUL(uVar2,uVar6);
    uVar6 = PackedFloatingMUL((ulonglong)(uint)param_1[1],uVar7);
    uVar4 = PackedFloatingADD(uVar6,uVar4);
    uVar3 = PackedFloatingADD(uVar2,uVar5);
    *param_1 = uVar3;
    *(int *)(param_1 + 1) = (int)uVar4;
    FastExitMediaState();
  }
  return param_1;
}

