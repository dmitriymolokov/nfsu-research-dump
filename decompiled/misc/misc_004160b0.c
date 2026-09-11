/* spd-match: far pct=7.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004160B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00415f90();
int __cdecl FUN_004164d0();
int __cdecl FUN_004169b0();
extern int DAT_00700e74;
extern int DAT_00700e78;
extern int DAT_00700e7c;
extern int DAT_00700e80;
extern int DAT_00700e8c;
extern int DAT_00700e90;
extern int DAT_00700e94;
extern int DAT_00700e98;
extern int DAT_00700e9c;
extern int DAT_00700ea0;
extern int DAT_00700ea4;
extern int DAT_00700ea8;
extern int DAT_00700eb0;
extern int DAT_00700eb4;
void __fastcall FUN_004160b0(int obj)

{

  *(undefined1 *)(obj + 0x2b4) = 0;
  FUN_00415f90(0xbb6ac59a,0x72e05b95,DAT_00700e74,0);
  FUN_00415f90(0x4b853ca2,0x72e05b95,DAT_00700e74,1);
  FUN_00415f90(0xa611a8cc,0x40f25307,DAT_00700e78,2);
  FUN_00415f90(0x8b088614,0x40f25307,DAT_00700e78,3);
  FUN_00415f90(0x8fe84e38,0xdf815d72,DAT_00700e7c,4);
  FUN_00415f90(0xafb3d900,0xdf815d72,DAT_00700e7c,5);
  FUN_00415f90(0xfd872d2b,0x9e8ca9d6,DAT_00700e80,6);
  FUN_00415f90(0x73fc2fe5,0x9e8ca9d6,DAT_00700e80,7);
  FUN_00415f90(0xa46ea687,0x1f86c18,DAT_00700eb4,0x18);
  FUN_00415f90(0x2df9a3cd,0x1f86c18,DAT_00700eb4,0x19);
  FUN_00415f90(0x4eac79b9,0x76c8daca,DAT_00700eb0,0x1a);
  FUN_00415f90(0xbb833bd1,0x76c8daca,DAT_00700eb0,0x1b);
  FUN_00415f90(0x9f6badfd,0x99278529,DAT_00700e8c,8);
  FUN_00415f90(0x15e0b0b7,0x99278529,DAT_00700e8c,9);
  FUN_00415f90(0xf08e374e,0xff2e6b0d,DAT_00700e90,10);
  FUN_00415f90(0xe1fdd3f7,0xff2e6b0d,DAT_00700e90,0xb);
  FUN_00415f90(0x3820a0d1,0x8c99b2fd,DAT_00700e9c,0xc);
  FUN_00415f90(0xae95a38b,0x8c99b2fd,DAT_00700e9c,0xd);
  FUN_00415f90(0x7dba07db,0x9b9cf87,DAT_00700ea0,0xe);
  FUN_00415f90(0xf42f0a95,0x9b9cf87,DAT_00700ea0,0xf);
  FUN_00415f90(0x71fd7547,0x5d2af1f3,DAT_00700e94,0x10);
  FUN_00415f90(0xe8727801,0x5d2af1f3,DAT_00700e94,0x11);
  FUN_00415f90(0x73eda200,0xd9869c6c,DAT_00700ea4,0x12);
  FUN_00415f90(0xea62a4ba,0xd9869c6c,DAT_00700ea4,0x13);
  FUN_00415f90(0x8d8ae227,0x8df2a852,DAT_00700ea8,0x14);
  FUN_00415f90(0x3ffe4e1,0x8df2a852,DAT_00700ea8,0x15);
  FUN_00415f90(0xa3d21cb6,0xae5c3f41,DAT_00700e98,0x16);
  FUN_00415f90(0x1a471f70,0xae5c3f41,DAT_00700e98,0x17);
  *(float *)(obj + 0x5c) = (float)*(int *)(obj + 0x230);
  if (*(float *)(obj + 0x54) < (float)*(int *)(obj + 0x230)) {
    *(undefined4 *)(obj + 0x5c) = *(undefined4 *)(obj + 0x54);
  }
  if (*(float *)(obj + 0x5c) < *(float *)(obj + 0x58)) {
    *(undefined4 *)(obj + 0x5c) = *(undefined4 *)(obj + 0x58);
  }
  *(float *)(obj + 0x98) = (float)*(int *)(obj + 600);
  if (*(float *)(obj + 0x90) < (float)*(int *)(obj + 600)) {
    *(undefined4 *)(obj + 0x98) = *(undefined4 *)(obj + 0x90);
  }
  if (*(float *)(obj + 0x98) < *(float *)(obj + 0x94)) {
    *(undefined4 *)(obj + 0x98) = *(undefined4 *)(obj + 0x94);
  }
  *(float *)(obj + 0xd4) = (float)*(int *)(obj + 0x298);
  if (*(float *)(obj + 0xcc) < (float)*(int *)(obj + 0x298)) {
    *(undefined4 *)(obj + 0xd4) = *(undefined4 *)(obj + 0xcc);
  }
  if (*(float *)(obj + 0xd4) < *(float *)(obj + 0xd0)) {
    *(undefined4 *)(obj + 0xd4) = *(undefined4 *)(obj + 0xd0);
  }
  *(float *)(obj + 0x110) = (float)*(int *)(obj + 0x240);
  if (*(float *)(obj + 0x108) < (float)*(int *)(obj + 0x240)) {
    *(undefined4 *)(obj + 0x110) = *(undefined4 *)(obj + 0x108);
  }
  if (*(float *)(obj + 0x110) < *(float *)(obj + 0x10c)) {
    *(undefined4 *)(obj + 0x110) = *(undefined4 *)(obj + 0x10c);
  }
  (**(code **)(*(int *)(obj + 0x40) + 0x10))();
  (**(code **)(*(int *)(obj + 0x7c) + 0x10))();
  (**(code **)(*(int *)(obj + 0xf4) + 0x10))();
  (**(code **)(*(int *)(obj + 0xb8) + 0x10))();
  FUN_004169b0();
  FUN_004164d0();
  return;
}
