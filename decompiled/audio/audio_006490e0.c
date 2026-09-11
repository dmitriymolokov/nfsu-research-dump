/* Decompiled from Speed.exe @ 00649028 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00649028(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint _NewValue;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_3c;
  int local_2c;
  int local_1c;
  int local_18;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00649910();
  local_2c = 0;
  local_c = 0;
  local_8 = 0;
  if (param_1[6] != 0) {
    uVar2 = FUN_005a4520();
    local_2c = FUN_00649443(uVar2);
    local_c = local_2c + param_1[4] * param_1[5];
    iVar3 = param_1[4] * 5 * param_1[5];
    local_8 = local_2c + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
  }
  if (param_1[3] != 0) {
    iVar3 = FUN_00649401(iVar1 + 0xc,4);
    param_1[2] = iVar3;
    param_1[1] = (int)(_DAT_006cc844 / ((float)param_1[2] / _DAT_006ccd08));
    iVar3 = FUN_00649401(iVar1 + 0x10,2);
    param_1[4] = iVar3;
    iVar3 = FUN_00649401(iVar1 + 0x12,2);
    param_1[5] = iVar3;
    iVar3 = FUN_00648cd0();
    iVar3 = *(int *)(iVar3 + 0xc);
    for (local_18 = 0; local_18 < iVar3 + 1; local_18 = local_18 + 1) {
      FUN_00649930(param_1[4],param_1[5]);
    }
    param_1[3] = 0;
  }
  _NewValue = __control87(0,0);
  __control87(0x10000,0x30000);
  iVar3 = FUN_00649469(param_2);
  if (iVar3 == 0x4d41446b) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
    }
    param_1[6] = 0;
    local_1c = FUN_00649628();
    FUN_00649d90(iVar1 + 0x18,0,(int)*(char *)(iVar1 + 0x15));
  }
  else {
    iVar3 = FUN_00649469(param_2);
    if (iVar3 == 0x4d41446d) {
      local_1c = FUN_00649628();
      FUN_00649d90(iVar1 + 0x18,1,(int)*(char *)(iVar1 + 0x15));
    }
    else {
      iVar3 = FUN_00649469(param_2);
      if (iVar3 != 0x4d414465) {
                    /* WARNING: Subroutine does not return */
        FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/decoder/cmn/rcmp_mad_codec.cpp",0xe0,
                     &DAT_006ca910);
      }
      local_1c = FUN_00649697();
      FUN_00649d90(iVar1 + 0x18,1,(int)*(char *)(iVar1 + 0x15));
    }
  }
  uVar2 = FUN_005a4520();
  iVar4 = FUN_00649443(uVar2);
  iVar1 = param_1[4];
  iVar3 = param_1[5];
  iVar5 = param_1[4] * 5 * param_1[5];
  for (local_18 = 0; local_18 < param_1[5]; local_18 = local_18 + 0x10) {
    for (local_3c = 0; local_3c < param_1[4]; local_3c = local_3c + 0x10) {
      iVar6 = local_18 * param_1[4] + local_3c;
      iVar7 = ((int)(local_18 * param_1[4] + (local_18 * param_1[4] >> 0x1f & 3U)) >> 2) +
              local_3c / 2;
      FUN_0064a28a(local_2c + iVar6,local_c + iVar7,local_8 + iVar7,iVar4 + iVar6,
                   iVar4 + iVar1 * iVar3 + iVar7,
                   iVar4 + ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + iVar7,param_1[4]);
    }
  }
  __control87(_NewValue,0xfffff);
  iVar1 = FUN_00649469(param_2);
  if (iVar1 == 0x4d41446d) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
    }
    param_1[6] = local_1c;
  }
  else {
    iVar1 = FUN_00649469(param_2);
    if (iVar1 == 0x4d41446b) {
      param_1[6] = local_1c;
    }
  }
  return local_1c;
}

