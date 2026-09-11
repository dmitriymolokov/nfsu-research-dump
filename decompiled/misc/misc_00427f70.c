/* Decompiled from Speed.exe @ 00427f70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00427f70(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,float param_6,
                 char param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  float local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (DAT_007372b4 == 0) {
      local_24 = *(float *)(param_3 + 0x38);
    }
    else {
      local_24 = DAT_007372b0 - *(float *)(param_3 + 0x38);
    }
    FUN_004422b0(param_8,param_9);
    local_18 = *(undefined4 *)(param_3 + 8);
    FUN_004441b0(param_3,local_24);
    uVar1 = FUN_00564db0(param_6 * *(float *)(param_3 + 0xc),param_6 * *(float *)(param_3 + 0x10));
    FUN_00427c50(local_20,param_4,uVar1);
    FUN_00443a10(&DAT_007372b0,param_1 + 0x60);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(param_2,param_3,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))();
    uVar1 = DAT_006b7b5c;
    if (param_5 == '\0') {
      *(undefined4 *)(param_1 + 0x884) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x884) = DAT_0073ad34;
      *(undefined4 *)(param_1 + 0x888) = uVar1;
    }
    if (param_7 != '\0') {
      *(undefined4 *)(param_1 + 0x880) = 2;
    }
  }
  return;
}

