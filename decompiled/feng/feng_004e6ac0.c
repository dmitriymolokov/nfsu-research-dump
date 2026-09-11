/* Decompiled from Speed.exe @ 004e6ac0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e6ac0(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  FUN_004e6cd0(unaff_ESI,1,0x46fce6dd,0x763dfa6,0x548f2015,0x9f23571f);
  FUN_004e6cd0(unaff_ESI,2,0x49885419,0x687acde2,0x571a8d51,0xf31c6bdb);
  FUN_004e6cd0(unaff_ESI,4,0xf17e2c46,0x39b2b1c6,0x55dafa35,0x4848c0fd);
  FUN_004e6cd0(unaff_ESI,8,0xf17e2c46,0x29d3c9aa,0xd2a19b19,0xc50f61e1);
  FUN_004e6cd0(unaff_ESI,0x10,0x1c7fcf8b,0xdc18c4d4,0x2a1208c3,0x2503558d);
  FUN_004e6cd0(unaff_ESI,0x100,0xf17e2c46,0x558adf75,0xc8754fa4,0xbae3166c);
  FUN_004e6cd0(unaff_ESI,0x40,0xf17e2c46,0x9a51a74,0xec0a4663,0xde780d2b);
  FUN_004e6cd0(unaff_ESI,0x200,0xf17e2c46,0xe252e7ee,0xa7615a5d,0x99cf2125);
  FUN_004e6cd0(unaff_ESI,0x400,0xf17e2c46,0x186f46db,0xd611288a,0xc87eef52);
  FUN_004e6cd0(unaff_ESI,0x800,0xf17e2c46,0x976bd787,0x6749436,0xf8e25afe);
  FUN_004e6cd0(unaff_ESI,0x1000,0xf17e2c46,0xfd6189db,0xbdd6aeea,0xb04475b2);
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    iVar1 = FUN_004ffb70();
    if (iVar1 != 0) goto LAB_004e6c47;
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0xfd6189dc);
  }
LAB_004e6c47:
  FUN_004f6910(iVar1);
  FUN_004e6cd0(unaff_ESI,0x80,0x93d7df3f,0xf7015788,0xa16a1877,0x875d5bc1);
  FUN_004e6cd0(unaff_ESI,0x2000,0xf17e2c46,0x7014dc91,0xad7303c0,0x9fe0ca88);
  FUN_004e6cd0(unaff_ESI,0x4000,0xf17e2c46,0xc68d44c7,0x83a65176,0x7614183e);
  FUN_004e6cd0(unaff_ESI,0x8000,0xf17e2c46,0x68bc64c8,0x6e1d75b7,0x608b3c7f);
  return;
}

