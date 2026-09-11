/* Decompiled from Speed.exe @ 0060b24d */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0060b24d(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = (uint)*(byte *)(param_1 + 0x51);
  *param_2 = uVar2;
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    if (uVar2 != 0) {
      return 0x80004005;
    }
    *param_3 = 0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    if (uVar1 != 2) {
      return 0x80004005;
    }
    if (uVar2 != 0) {
      return 0x80004005;
    }
    *param_3 = 9;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
  }
  return 0;
}

