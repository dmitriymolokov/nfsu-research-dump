/* Decompiled from Speed.exe @ 0066d390 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066d390(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x80) != 1) {
    FUN_00662ce0(param_2);
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_0066c060();
  *(undefined4 *)(param_1 + 0x70) = *param_3;
  *(undefined4 *)(param_1 + 0x74) = param_3[1];
  *(undefined4 *)(param_1 + 0x78) = param_3[2];
  *(undefined4 *)(param_1 + 0x7c) = param_3[3];
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  FUN_00663160(param_2,2,100,0,FUN_0066ce50);
  *(undefined4 *)(param_1 + 0x80) = 2;
  return 0;
}

