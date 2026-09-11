/* Decompiled from Speed.exe @ 0041cf40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041cf40(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_007588d1 != '\0') {
    FUN_0041d8a0(&DAT_0078a478,"auto");
    FUN_0041c7a0();
  }
  FUN_004aa4d0(1);
  DAT_007677b0 = 0;
  DAT_007677b4 = 1;
  DAT_00758ad4 = 0;
  puVar2 = &DAT_00758ad8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_004ac460(&DAT_00758c28,DAT_006f1da4);
  FUN_004ac220();
  FUN_005a0a00();
  puVar2 = &DAT_007677b8;
  for (iVar1 = 0x294; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_007677ac = 0;
  FUN_004aa4d0(1);
  DAT_007677b0 = 1;
  FUN_0041d2a0(&DAT_0078a478,param_1);
  FUN_0041d8a0(&DAT_0078a478,"auto");
  FUN_0041c420(param_1);
  FUN_004aa670(0,1);
  FUN_0041c7a0();
  return;
}

