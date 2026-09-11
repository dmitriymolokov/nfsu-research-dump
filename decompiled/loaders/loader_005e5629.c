/* Decompiled from Speed.exe @ 005e5629 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005e5629(undefined4 param_1,undefined4 param_2,short param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  if (param_3 == 1) {
LAB_005e566e:
    FUN_005b1fca(*param_6,param_6[0xc],param_4 + 5000,&DAT_006cc568,param_5);
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 5) goto LAB_005e566e;
      if (param_3 != 6) {
        return 0;
      }
    }
    FUN_005b1f01(*param_6,param_6[0xc],param_4 + 5000,&DAT_006cc568,param_5);
    param_6[0x13] = 1;
  }
  return 0;
}

