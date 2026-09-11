/* Decompiled from Speed.exe @ 0064e780 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064e780(int param_1,undefined4 param_2)

{
  undefined1 local_d4 [46];
  undefined1 local_a6;
  
  FUN_0064f4b0(local_d4);
  if (param_1 == 0) {
    local_a6 = (undefined1)param_2;
  }
  else {
    if (param_1 != 3) {
      return 0xfffffffb;
    }
    DAT_00713cc4 = param_2;
  }
  FUN_0064f530(local_d4);
  return 0;
}

