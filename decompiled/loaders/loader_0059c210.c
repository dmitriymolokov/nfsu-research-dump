/* spd-match: far pct=4.55 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_00455c50(...);
int __cdecl FUN_00455d60(...);
int __cdecl FUN_00456ce0(...);
int __cdecl FUN_00456de0(...);
int __cdecl FUN_00457060(...);
int __cdecl FUN_00458b90(...);
int __cdecl FUN_00458cc0(...);
int __cdecl FUN_00458f10(...);
int __cdecl FUN_0045a1e0(...);
int __cdecl FUN_0045a4c0(...);
int __cdecl FUN_0059bae0(...);
int __cdecl FUN_0059c1b0(...);
int __cdecl FUN_0059c460(...);
int __cdecl FUN_0059c600(...);
int __cdecl FUN_005a5340(...);
int __cdecl FUN_005a6700(...);
extern int DAT_006fbf18;
extern int DAT_0077a4b0;
extern int DAT_0077a6d8;
extern int _DAT_006b5a10;
extern int _DAT_006b5a18;
extern int _DAT_006cc7bc;
extern int _DAT_006ccab0;

struct ThisCallBox {
  void FUN_0059c210(float param_2);
};
void ThisCallBox::FUN_0059c210(float param_2) {
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 auStack_1d0 [105];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = (**(code **)(*((int *)this) + 0x40))();
  if (iVar4 != ((int *)this)[0x15]) {
    FUN_00457060(((int *)this) + 0x11);
    FUN_005a5340();
    ((int *)this)[3] = ((int *)this)[3] & 0xfffffffe;
    ((int *)this)[4] = ((int *)this)[4] & 0xfffffffe;
    ((int *)this)[5] = ((int *)this)[5] & 0xfffffffe;
    ((int *)this)[6] = ((int *)this)[6] & 0xfffffffe;
    ((int *)this)[7] = ((int *)this)[7] & 0xfffffffe;
    ((int *)this)[8] = ((int *)this)[8] & 0xfffffffe;
    ((int *)this)[9] = ((int *)this)[9] & 0xfffffffe;
    ((int *)this)[10] = ((int *)this)[10] & 0xfffffffe;
  }
  ((int *)this)[0x15] = iVar4;
  FUN_00458cc0(iVar4);
  FUN_0059c460();
  uStack_2c = 0;
  uStack_28 = 0;
  puVar5 = auStack_1d0;
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_00458f10(0,0);
  uStack_1e0 = 0;
  if (*(int *)(((int *)this)[0x11] + 4) == 0) {
    if (*(float *)(((int *)this)[1] + 0x3d0) < _DAT_006b5a10) {
      fVar6 = (float10)FUN_00458b90(*(undefined2 *)(((int *)this)[1] + 0x3b4));
      FUN_00456de0((float)fVar6);
    }
    else {
      FUN_0045a1e0(auStack_1d0);
    }
  }
  else {
    fStack_1dc = 0.0;
    uStack_1d4 = FUN_0059c1b0(((int *)this)[0x13]);
    fStack_1d8 = 0.0;
    uStack_1e0 = FUN_005a6700(&uStack_1e0,&fStack_1dc,uStack_1d4);
    cVar3 = FUN_0059bae0(((int *)this) + 0x12,((int *)this) + 0x18);
    if (cVar3 == '\0') {
      fStack_1d8 = (float)((int *)this)[0x17];
    }
    else if (_DAT_006ccab0 < param_2) {
      fStack_1d8 = (fStack_1dc - (float)((int *)this)[0x16]) / param_2;
    }
    fVar1 = _DAT_006cc7bc - _DAT_006b5a18;
    ((int *)this)[0x18] = ((int *)this)[0x12];
    fVar2 = _DAT_006b5a18;
    ((int *)this)[0x16] = (int)fStack_1dc;
    ((int *)this)[0x19] = ((int *)this)[0x13];
    ((int *)this)[0x1a] = ((int *)this)[0x14];
    fStack_1d8 = fVar2 * fStack_1d8 + fVar1 * (float)((int *)this)[0x17];
    ((int *)this)[0x17] = (int)fStack_1d8;
    if (*(float *)(((int *)this)[1] + 0x3d0) < _DAT_006b5a10) {
      FUN_00456ce0(auStack_1d0);
    }
    else {
      FUN_0059c600(((int *)this),auStack_1d0,fStack_1d8,fStack_1dc,uStack_1d4);
      FUN_0045a4c0();
    }
  }
  (**(code **)(*(int *)((int *)this)[2] + 0x3c))(auStack_1d0);
  if (DAT_006fbf18 == *(short *)(((int *)this)[1] + 10)) {
    FUN_00455c50(&DAT_0077a4b0,&uStack_1d4);
    FUN_00455d60(&DAT_0077a6d8,((int *)this)[0x11],uStack_1e4);
  }
  return;
}
