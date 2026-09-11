/* Decompiled from Speed.exe @ 0064e710 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064e710(int param_1,int param_2)

{
  undefined1 local_d4 [42];
  undefined2 local_aa;
  
  FUN_0064f4b0(local_d4);
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  if (param_1 != 0) {
    return 0xfffffffb;
  }
  local_aa = (undefined2)param_2;
  FUN_0064f530(local_d4);
  return 0;
}

