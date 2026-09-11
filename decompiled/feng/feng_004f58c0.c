/* Decompiled from Speed.exe @ 004f58c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 fn_004f58c0(int param_1)

{
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_004f6910(param_1);
    if ((*(uint *)(param_1 + 0x1c) & 0x10000000) != 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xefffffff;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return 1;
}

