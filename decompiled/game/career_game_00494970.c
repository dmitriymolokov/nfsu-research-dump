/* Decompiled from Speed.exe @ 00494970 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_00494970(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c7ad8;
  FUN_004f81a0(param_1 + 0x10,"font_a(22)");
  puVar1 = _malloc(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_006c186c;
    puVar1[3] = 0;
    puVar1[4] = "Option 1 a";
    piVar3 = puVar1 + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12];
  puVar1 = param_1 + 0x11;
  *puVar2 = piVar3;
  param_1[0x12] = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = (int)puVar1;
  puVar2 = _malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_006c186c;
    puVar2[3] = 1;
    puVar2[4] = "Option 1 b";
    piVar3 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12];
  *puVar2 = piVar3;
  param_1[0x12] = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = (int)puVar1;
  puVar2 = _malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_006c186c;
    puVar2[3] = 2;
    puVar2[4] = "Option 1 c";
    piVar3 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12];
  *puVar2 = piVar3;
  param_1[0x12] = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = (int)puVar1;
  puVar2 = _malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_006c186c;
    puVar2[3] = 3;
    puVar2[4] = "Option 1 d";
    piVar3 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12];
  *puVar2 = piVar3;
  param_1[0x12] = piVar3;
  piVar3[1] = (int)puVar2;
  *piVar3 = (int)puVar1;
  puVar2 = _malloc(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_006c186c;
    puVar2[3] = 4;
    puVar2[4] = "Option 1 e";
    piVar3 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12];
  *puVar2 = piVar3;
  param_1[0x12] = piVar3;
  *piVar3 = (int)puVar1;
  piVar3[1] = (int)puVar2;
  FUN_004f8240();
  ExceptionList = local_c;
  return param_1;
}

