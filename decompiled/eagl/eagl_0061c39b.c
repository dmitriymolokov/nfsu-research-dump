/* Decompiled from Speed.exe @ 0061c39b */
/* Module: EAGL */
/* Ghidra DecompileAll */
/* M2 Pass B: ternary cap → push4/pop eax; monotonic p[0..3] writes */


void __thiscall
FUN_0061c39b(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  param_5 = (param_5 > 4) ? 4 : param_5;
  param_1[6] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}
