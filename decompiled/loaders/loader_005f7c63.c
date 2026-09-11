/* Decompiled from Speed.exe @ 005f7c63 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005f7c63(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    uVar1 = 0;
  }
  return uVar1;
}

