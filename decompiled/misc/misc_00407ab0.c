/* Decompiled from Speed.exe @ 00407ab0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00407ab0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puStack_38;
  undefined4 local_18 [6];
  
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[0] = 0x18;
  puStack_38 = local_18;
  local_18[2] = *(undefined4 *)(param_1 + 0x18);
  local_18[1] = 0x10;
  local_18[3] = 2;
  local_18[4] = 0xffffff9c;
  local_18[5] = 100;
  (**(code **)(*param_2 + 0x18))(param_2,4);
  (**(code **)(*param_2 + 0x18))(param_2,2,&puStack_38);
  return 1;
}

