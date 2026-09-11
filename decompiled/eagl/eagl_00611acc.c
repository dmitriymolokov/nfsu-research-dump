/* Decompiled from Speed.exe @ 00611acc */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00611acc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_24 [32];
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar1 = FUN_0061a5d9(param_2,param_3);
  }
  else {
    FUN_0067101f(local_24,"c_$zz%d",param_2);
    iVar1 = FUN_005e7078(local_24,param_2,1);
    if (-1 < iVar1) {
      iVar1 = FUN_005e54f8(local_24);
      *(undefined4 *)(iVar1 + 0xc) = 1;
      *(undefined4 *)(iVar1 + 0x10) = *param_3;
      *(undefined4 *)(iVar1 + 0x14) = param_3[1];
      *(undefined4 *)(iVar1 + 0x18) = param_3[2];
      *(undefined4 *)(iVar1 + 0x1c) = param_3[3];
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}

