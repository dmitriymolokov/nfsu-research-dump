/* Decompiled from Speed.exe @ 0044ad00 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044ad00(int param_1)

{
  undefined4 uVar1;
  
  *(float *)(param_1 + 0x3f0) =
       (float)(int)*(short *)(*(int *)(param_1 + 4) + 8) * _DAT_006b7700 * _DAT_006ccc2c;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x58))();
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x410) = 0;
  uVar1 = FUN_00442200(*(undefined4 *)(*(int *)(param_1 + 4) + 0x814));
  *(undefined4 *)(param_1 + 0x474) = uVar1;
  return;
}

