/* spd-match: far pct=12.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00429620 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401c60();
int __cdecl FUN_0041a250();
int __cdecl FUN_0041a450();
int __cdecl FUN_0041a640();
int __cdecl FUN_0041a680();
int __cdecl FUN_0041a6c0();
int __cdecl FUN_0041a8a0();
int __cdecl FUN_0041a8c0();
int __cdecl FUN_0041af40();
int __cdecl FUN_0041b150();
int __cdecl FUN_0041b210();
int __cdecl FUN_0041b5f0();
int __cdecl FUN_0041b670();
int __cdecl FUN_0041b830();
int __cdecl FUN_00436d60();
int __cdecl FUN_00587de0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_0071d89c;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_00736500;
extern int DAT_0073ad34;
extern unsigned char *DAT_0078eb64;
extern unsigned char *DAT_0078eb6c;
extern int _DAT_006b7be8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc908;
extern int _DAT_006cc964;
extern int _DAT_006cca10;
extern int _DAT_006cca38;
extern int _DAT_006ccaf0;
extern int _DAT_006ccd44;
extern int _DAT_006ccd54;
extern void LAB_0042993e(void);
void __fastcall FUN_00429620(int obj, int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;

  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  if (DAT_00736500 == 0) {
    return;
  }
  if ((&DAT_0071d89c)[obj] == 0) {
    return;
  }
  if (DAT_007361f0 == (int *)0x0) {
    return;
  }
  if (*DAT_007361f0 != 4) {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x21) == '\0') {
    FUN_0041a680();
    FUN_0041b5f0();
    FUN_0041a8a0(DAT_00736500);
    FUN_0041b830(DAT_00736500);
    FUN_0041b150(DAT_00736500);
    FUN_0041a250(DAT_00736500,0x1b92,0x1b92);
    return;
  }
  FUN_0041a450(DAT_00736500);
  fVar8 = (float10)FUN_00436d60();
  fVar1 = (float)fVar8;
  FUN_00401c60(0x3f800000,(float)(fVar8 * (float10)_DAT_006ccd54));
  FUN_00587de0();
  FUN_00587de0();
  if (ABS(fVar1) <= _DAT_006cc7bc) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00674898();
    if (iVar4 < 0x21b4) {
      if (iVar4 < -0x21b3) {
        iVar4 = -0x21b3;
      }
    }
    else {
      iVar4 = 0x21b3;
    }
  }
  FUN_0041a640(obj,iVar4);
  FUN_00674898();
  FUN_0041a6c0(DAT_00736500);
  if ((*(char *)(param_1 + 0x350) == '\0') && (*(char *)(param_1 + 0x351) == '\0')) {
    if (*(char *)(DAT_00736500 + 0x2220 + obj) != '\x01') {
      FUN_0041b670(DAT_00736500);
    }
  }
  else if (*(char *)(DAT_00736500 + 0x2220 + obj) == '\x01') {
    FUN_0041b830(DAT_00736500);
  }
  if (_DAT_006cc908 < ABS(*(float *)(&DAT_0078eb6c + obj * 4) - fVar1)) {
    fVar3 = (float)DAT_0073ad34 * _DAT_006cca38 - *(float *)(&DAT_0078eb64 + obj * 4);
    if (DAT_006cc7a4 <= fVar3) {
      if (_DAT_006cca10 <= fVar3) {
        *(float *)(&DAT_0078eb64 + obj * 4) = (float)DAT_0073ad34 * _DAT_006cca38;
        FUN_00401c60(0x3f800000,
                     ((*(float *)(&DAT_0078eb6c + obj * 4) - fVar1) - _DAT_006cc908) *
                     _DAT_006ccaf0);
        uVar5 = FUN_00674898();
        FUN_0041a8c0(uVar5);
      }
    }
    else {
      *(undefined4 *)(&DAT_0078eb64 + obj * 4) = 0;
    }
  }
  fVar3 = *(float *)(param_1 + 0x330) + *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x338) +
          *(float *)(param_1 + 0x33c);
  if (_DAT_006cc964 < fVar3) {
    FUN_00401c60(0x3f800000,fVar3 / _DAT_006b7be8);
    fVar3 = (float)DAT_0073ad34 * _DAT_006cca38 - *(float *)(&DAT_0078eb64 + obj * 4);
    if (DAT_006cc7a4 <= fVar3) {
      if (fVar3 < _DAT_006cca10) goto LAB_0042993e;
      *(float *)(&DAT_0078eb64 + obj * 4) = (float)DAT_0073ad34 * _DAT_006cca38;
    }
    else {
      *(undefined4 *)(&DAT_0078eb64 + obj * 4) = 0;
    }
    uVar5 = FUN_00674898();
    FUN_0041a8c0(uVar5);
  }
LAB_0042993e:
  iVar4 = *(int *)(param_1 + 0x354);
  iVar2 = *(int *)(param_1 + 0x358);
  switch(iVar4) {
  case 8:
    uVar6 = 0x50;
    break;
  case 9:
    uVar6 = 0x50;
    break;
  case 10:
    uVar6 = 0x5a;
    break;
  case 0xb:
    uVar6 = 100;
    break;
  default:
    uVar6 = 0;
    break;
  case 0xf:
    uVar6 = 0x28;
  }
  switch(iVar2) {
  case 8:
    uVar5 = 0;
    uVar6 = uVar6 + 0x50;
    break;
  case 9:
    uVar5 = 0;
    uVar6 = uVar6 + 0x50;
    break;
  case 10:
    uVar5 = 1;
    uVar6 = uVar6 + 0x5a;
    break;
  case 0xb:
    uVar5 = 1;
    uVar6 = uVar6 + 100;
    break;
  default:
    uVar5 = 0;
    break;
  case 0xf:
    uVar5 = 2;
    uVar6 = uVar6 + 0x28;
  }
  uVar6 = uVar6 / 2;
  uVar7 = FUN_00674898(uVar6);
  FUN_0041b210(DAT_00736500,uVar5,uVar7,uVar6);
  if (((iVar4 == 0xd) || (iVar2 == 0xd)) && (_DAT_006ccd44 < fVar1)) {
    FUN_0041af40(DAT_00736500,10000);
    *(float *)(&DAT_0078eb6c + obj * 4) = fVar1;
    return;
  }
  FUN_0041b150(DAT_00736500);
  *(float *)(&DAT_0078eb6c + obj * 4) = fVar1;
  return;
}
