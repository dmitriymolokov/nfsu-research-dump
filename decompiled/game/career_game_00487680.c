/* Decompiled from Speed.exe @ 00487680 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00487680(undefined4 *param_1)

{
  undefined1 auStack_ac [92];
  undefined1 local_50 [76];
  
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  FUN_00674898();
  FUN_0040b930();
  thunk_FUN_005ac68f(param_1,param_1,local_50);
  FUN_00674898();
  FUN_0040b990(param_1,param_1);
  FUN_0040bb20(param_1,param_1);
  FUN_0040bc10();
  FUN_00674898();
  FUN_00483860(auStack_ac);
  FUN_0040b780(auStack_ac);
  return;
}

