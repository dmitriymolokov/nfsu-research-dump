/* Decompiled from Speed.exe @ 00429100 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00429100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            ,undefined1 param_6,undefined1 param_7)

{
  if (*(float *)(param_1 + 0x84c) + *(float *)(param_1 + 0x848) + *(float *)(param_1 + 0x850) <
      (float)(DAT_0073ad34 - *(int *)(param_1 + 0x844)) * _DAT_006cca38) {
    *(int *)(param_1 + 0x844) = DAT_0073ad34;
    *(undefined4 *)(param_1 + 0x848) = param_2;
    *(undefined4 *)(param_1 + 0x850) = param_3;
    *(undefined4 *)(param_1 + 0x84c) = param_4;
    *(undefined1 *)(param_1 + 0x83e) = param_5;
    *(undefined1 *)(param_1 + 0x83f) = param_6;
    *(undefined1 *)(param_1 + 0x840) = param_7;
  }
  return;
}

