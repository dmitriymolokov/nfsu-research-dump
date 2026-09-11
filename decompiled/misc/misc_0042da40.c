/* spd-match: far pct=9.45 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_0041f6a0(...);
int __cdecl FUN_00420050(...);
int __cdecl FUN_00421a30(...);
int __cdecl FUN_0042c450(...);
int __cdecl FUN_0042c640(...);
int __cdecl FUN_0042c6d0(...);
int __cdecl FUN_0042ddc0(...);
int __cdecl FUN_00492470(...);
int __cdecl FUN_00492560(...);
int __cdecl FUN_00492c00(...);
extern int DAT_006b6bc4;
extern int DAT_006b6bcc;
extern int DAT_006b7a74;
extern int DAT_006b7a78;
extern int DAT_006b7a7c;
extern int DAT_006b7a80;
extern int DAT_006b7a84;
extern int DAT_006b7ab0;
extern int DAT_006cc7a4;
extern int DAT_00700b3c;
extern int DAT_00700b44;
extern int DAT_0073457c;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_007361f8;
extern int DAT_0073ad34;
extern int DAT_0073ad3c;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int DAT_0078a3fa;
extern int DAT_0078a3fb;
extern int _DAT_006b6bc8;
extern int _DAT_006b7a88;
extern int _DAT_006b7a8c;
extern int _DAT_006cc7bc;
extern int _DAT_006cca38;
extern int _DAT_0073654c;
extern void LAB_0042da30(...);
extern void LAB_0042dc52(...);

struct ThisCallBox {
  undefined4 FUN_0042da40(int param_2, char param_3, undefined4 param_4, char param_5);
};
undefined4 ThisCallBox::FUN_0042da40(int param_2, char param_3, undefined4 param_4, char param_5) {
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  if ((((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) || (DAT_0078a346 != '\0')) ||
     ((DAT_007361a0 != 0 || (*DAT_007361f0 == 9)))) {
    return 0;
  }
  if (param_3 == '\0') {
    iVar2 = FUN_00421a30();
    if ((iVar2 != 0) &&
       ((float)(unsigned int)(DAT_0073ad34 - *(int *)(((int)this) + 0x70 + param_2 * 4)) * _DAT_006cca38 <
        _DAT_006b7a88)) {
      return 0;
    }
  }
  else {
    iVar2 = FUN_00421a30();
    if ((iVar2 != 0) &&
       ((float)(unsigned int)(DAT_0073ad34 - *(int *)(((int)this) + 0x70)) * _DAT_006cca38 < _DAT_006b7a8c)) {
      return 0;
    }
  }
  if (*DAT_0073619c != 4) {
    return 0;
  }
  if (param_2 < 0) {
    return 0;
  }
  if (7 < param_2) {
    return 0;
  }
  if (DAT_007361c4 == 2) {
    return 0;
  }
  if (((param_2 == 6) || (param_2 == 7)) && (DAT_0078a3fa == '\0')) {
    return 0;
  }
  if ((((param_2 == 1) || (param_2 == 2)) || ((param_2 == 3 || ((param_2 == 4 || (param_2 == 5))))))
     && (DAT_0078a3fb == '\0')) {
    return 0;
  }
  if ((&DAT_00700b3c)[*(int *)(((int)this) + 0x60)] != '\0') {
    FUN_0042ddc0(0);
  }
  iVar2 = 0;
  if (0 < DAT_007361c4) {
    do {
      if ((&DAT_00700b44)[*(int *)((&DAT_007361bc)[iVar2] + 0x60)] != '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_007361c4);
  }
  *(undefined4 *)(((int)this) + 0xa0) = DAT_0073ad3c;
  if (param_3 == '\0') {
    *(int *)(((int)this) + 0x70 + param_2 * 4) = DAT_0073ad34;
  }
  switch(param_2 + -1) {
  case 0:
    iVar2 = FUN_0041f6a0();
    if (iVar2 != 0) {
      return 0;
    }
    FUN_0042c6d0(((int)this),0xd,1);
    fVar3 = (float10)(unsigned int)(DAT_006b6bcc) + (float10)(unsigned int)(_DAT_006b6bc8) + (float10)(unsigned int)(DAT_006b6bc4);
    goto LAB_0042dc52;
  case 1:
    iVar2 = FUN_0041f6a0();
    if (iVar2 != 0) {
      return 0;
    }
    if (*(char *)(((int)this) + 0x4ac) != '\0') {
      return 0;
    }
    iVar2 = FUN_00492470(*(undefined4 *)(((int)this) + 4));
    *(int *)(((int)this) + 0x90) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0042c6d0(((int)this),0xe,1);
    cVar1 = FUN_00492c00();
    if (cVar1 != '\0') {
      FUN_0042c450();
      return 0;
    }
    fVar3 = (float10)FUN_00492560();
LAB_0042dc52:
    iVar2 = (unsigned int)(DAT_007361f8);
    *(float *)(DAT_007361f8 + 0x2d4) = (float)(fVar3 - (float10)(unsigned int)(DAT_0073457c));
    *(undefined1 **)(iVar2 + 0x2e8) = (unsigned char *)(unsigned int)&LAB_0042da30;
    *(int *)(iVar2 + 0x2ec) = ((int)this);
    break;
  case 2:
    FUN_00420050(DAT_006b7a7c,DAT_006b7a74,&LAB_0042da30,((int)this));
    break;
  case 3:
    FUN_00420050(DAT_006b7a7c,DAT_006b7a78,&LAB_0042da30,((int)this));
    break;
  case 4:
    FUN_00420050(DAT_006b7a84,DAT_006b7a80,&LAB_0042da30,((int)this));
    break;
  case 5:
    FUN_00420050(DAT_006b7ab0,DAT_006b7a74,&LAB_0042da30,((int)this));
    iVar2 = FUN_0041f6a0();
    if (iVar2 == 0) {
      FUN_0042c6d0(((int)this),0xf,1);
    }
    FUN_0042c640();
    break;
  case 6:
    FUN_00420050(DAT_006b7ab0,DAT_006b7a74,&LAB_0042da30,((int)this));
    iVar2 = FUN_0041f6a0();
    if (iVar2 == 0) {
      FUN_0042c6d0(((int)this),0x10,1);
    }
  }
  _DAT_0073654c = 1;
  *(undefined1 *)(((int)this) + 0x270) = 1;
  *(int *)(((int)this) + 0x60) = param_2;
  *(char *)(((int)this) + 0x98) = param_5;
  if (param_5 != '\0') {
    *(undefined4 *)(((int)this) + 0x9c) = DAT_006cc7a4;
    return 1;
  }
  *(undefined4 *)(((int)this) + 0x9c) = _DAT_006cc7bc;
  return 1;
}
