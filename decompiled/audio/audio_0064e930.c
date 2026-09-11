/* Decompiled from Speed.exe @ 0064e930 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064e930(int param_1,uint *param_2)

{
  undefined1 local_d4 [46];
  byte local_a6;
  byte local_a3;
  
  FUN_0064f4b0(local_d4);
  if (param_1 == 0) {
    *param_2 = (uint)local_a6;
    return 0;
  }
  if (param_1 != 3) {
    return 0xfffffffb;
  }
  if (DAT_00713ee4 == '\x01') {
    *param_2 = (uint)local_a3;
    return 0;
  }
  *param_2 = DAT_00713cc4;
  return 0;
}

