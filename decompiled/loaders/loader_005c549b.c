/* Decompiled from Speed.exe @ 005c549b */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005c549b(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((param_3 == 0) || (param_2 != 0)) {
    *(int *)(param_1 + 100) = param_2;
    *(int *)(param_1 + 0x68) = param_3;
    iVar1 = FUN_005b1a04(param_2,param_3,0,1,param_4,param_5);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -0x7789f794;
  }
  return iVar1;
}

