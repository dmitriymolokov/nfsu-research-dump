/* Decompiled from Speed.exe @ 005f7a5c */
/* Module: EAGL */
/* Ghidra DecompileModule */


uint __thiscall FUN_005f7a5c(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xffffff;
  if (param_1[1] < uVar1 * param_2 + uVar1) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 0;
  }
  else if (param_3 != (int *)0x0) {
    *param_3 = param_1[2] + uVar1 * param_2 * 4;
  }
  return uVar1;
}

