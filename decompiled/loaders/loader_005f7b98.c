/* Decompiled from Speed.exe @ 005f7b98 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005f7b98(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xff000000;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else if ((uVar1 == 0x30000000) || (uVar1 == 0x35000000)) {
    uVar2 = 1;
  }
  else if ((uVar2 & 0xf0000000) == 0x40000000) {
    uVar2 = 4;
  }
  else {
    uVar2 = uVar2 & 0xffffff;
  }
  if (param_1[3] < uVar2 * param_2 + uVar2) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    uVar2 = 0;
  }
  else if (param_3 != (int *)0x0) {
    *param_3 = param_1[4] + uVar2 * param_2 * 4;
  }
  return uVar2;
}

