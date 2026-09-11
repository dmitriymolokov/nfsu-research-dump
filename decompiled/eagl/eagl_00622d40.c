/* Decompiled from Speed.exe @ 00622d40 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00622d40(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_4 == 0) {
    cVar1 = FUN_00620230();
  }
  else {
    cVar1 = FUN_00620240();
  }
  if (cVar1 == '\0') {
    param_3 = param_3 | 0x10;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  (**(code **)(*DAT_00709d80 + 0x60))
            (DAT_00709d80,*(undefined4 *)(param_1 + 8),param_3,0x65,0,param_1);
  return param_1;
}

