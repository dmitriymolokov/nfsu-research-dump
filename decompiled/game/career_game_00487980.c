/* Decompiled from Speed.exe @ 00487980 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall
FUN_00487980(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  *(undefined4 *)(param_1 + 200) = param_4;
  *(undefined4 *)(param_1 + 0xcc) = param_5;
  *(undefined4 *)(param_1 + 0xd0) = param_6;
  *(undefined4 *)(param_1 + 0xe0) = param_7;
  *(undefined4 *)(param_1 + 0xe4) = param_8;
  *(undefined4 *)(param_1 + 0xe8) = param_9;
  *(undefined4 *)(param_1 + 0xf0) = param_10;
  *(undefined4 *)(param_1 + 0xf8) = param_12;
  *(undefined4 *)(param_1 + 0xf4) = param_11;
  fVar1 = (float10)FUN_00488380(param_1,*(undefined4 *)(param_1 + 0x80),
                                *(undefined4 *)(param_1 + 0xc0));
  *(float *)(extraout_ECX + 0xc0) = (float)fVar1;
  fVar1 = (float10)FUN_00488380(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x84),
                                *(undefined4 *)(extraout_ECX + 0xc4));
  *(float *)(extraout_ECX_00 + 0xc4) = (float)fVar1;
  fVar1 = (float10)FUN_00488380(extraout_ECX_00,*(undefined4 *)(extraout_ECX_00 + 0x8c),
                                *(undefined4 *)(extraout_ECX_00 + 0xcc));
  *(float *)(extraout_ECX_01 + 0xcc) = (float)fVar1;
  FUN_00487ee0();
  return;
}

