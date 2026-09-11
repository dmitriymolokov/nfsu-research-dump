/* Decompiled from Speed.exe @ 005c5ec1 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005c5ec1(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x38);
  if (iVar1 == 0) {
    FUN_005b1f01(param_1 + 4,param_1 + 0x60,0x5e6,"unexpected #endif");
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x38) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_005c5234(1);
  return 0;
}

