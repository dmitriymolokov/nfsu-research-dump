/* Decompiled from Speed.exe @ 00438ec0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 * __thiscall
FUN_00438ec0(undefined4 *param_1,undefined1 param_2,undefined1 param_3,int param_4)

{
  FUN_00405550();
  FUN_00438860();
  FUN_00405550();
  FUN_00405550();
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined1 *)((int)param_1 + 5) = 0xff;
  param_1[0x69] = 0xbf800000;
  param_1[2] = 100;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = param_3;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0xbf800000;
  param_1[0x6f] = 0xbf800000;
  param_1[0x6a] = 0;
  FUN_00439810();
  FUN_00424cc0();
  if (param_4 == 0) {
    *(undefined4 *)((int)param_1 + 0x19) = 0;
    *(undefined4 *)((int)param_1 + 0x1d) = 0;
    *(undefined4 *)((int)param_1 + 0x21) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
  }
  else {
    FUN_00438fe0(param_4);
  }
  return param_1;
}

