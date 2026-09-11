/* Decompiled from Speed.exe @ 005e91a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005e91a0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_1 == 0x46580200) || (*param_1 == 0x54580100)) {
    iVar1 = FUN_005d7113(param_1,0x434c5846,param_2,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (iVar1 == 1) {
      return 1;
    }
    iVar1 = FUN_005d7113(param_1,0x54494c43,param_3,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (iVar1 == 1) {
      return 1;
    }
    if ((*param_2 != 0) && (*param_3 != 0)) {
      return 0;
    }
  }
  return -0x7fffbffb;
}

