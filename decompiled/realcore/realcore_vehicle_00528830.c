/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00528830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005283f0();
int __cdecl FUN_00528700();
int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
int __cdecl FUN_005326f0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f7220;
extern unsigned char *DAT_007356a8;
extern int _DAT_006b65d4;
extern int _DAT_006b65d8;
extern int _DAT_006b65dc;
extern int _DAT_006cc79c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8e8;
int unaff_ESI;
undefined4 __fastcall FUN_00528830(int obj)

{
  float fVar1;
  float fVar2;

  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  float10 extraout_ST0;
  float10 fVar6;
  
  if (*(char *)(obj + 0xc) != '\0') {
    if (*(int *)(obj + 0x234) == 0) {
      FUN_00528700(0,0,0,0,0);
      return 0;
    }
    if (*(char *)(DAT_007356a8 + 0x84) == '\0') {
      if (*(float *)(*(int *)(obj + 4) + 0x1278) <= _DAT_006cc79c) {
        fVar1 = *(float *)(obj + 0x2c0) - _DAT_006b65dc;
      }
      else {
        fVar1 = *(float *)(*(int *)(obj + 4) + 0x1278) + *(float *)(obj + 0x2c0);
      }
      *(float *)(obj + 0x2c0) = fVar1;
    }
    iVar4 = *(int *)(obj + 8);
    fVar1 = *(float *)(obj + 0x2c0);
    if (*(float *)(obj + 0x2c0) <= DAT_006cc7a4) {
      fVar1 = DAT_006cc7a4;
    }
    if (*(float *)(iVar4 + 0x10) < fVar1) {
      fVar1 = *(float *)(iVar4 + 0x10);
    }
    *(float *)(obj + 0x2c0) = fVar1;
    iVar3 = FUN_00674898();
    fVar1 = (float)(iVar3 + -1000) * _DAT_006cc79c;
    fVar2 = DAT_006cc7a4;
    if ((DAT_006cc7a4 < fVar1) && (fVar2 = fVar1, _DAT_006cc7bc < fVar1)) {
      fVar2 = _DAT_006cc7bc;
    }
    fVar2 = (_DAT_006cc7bc - _DAT_006b65d8) * fVar2 + _DAT_006b65d8;
    fVar1 = fVar2 * *(float *)(iVar4 + 0x10);
    fVar6 = extraout_ST0;
    if (extraout_ST0 <= (float10)DAT_006cc7a4) {
      fVar6 = (float10)DAT_006cc7a4;
    }
    if ((float10)fVar1 < fVar6) {
      fVar6 = (float10)fVar1;
    }
    *(float *)(obj + 0x2c0) = (float)fVar6;
    if ((fVar6 == (float10)fVar2 * (float10)*(float *)(iVar4 + 0x10)) &&
       (*(char *)(obj + 0x2cc) == '\0')) {
      *(undefined1 *)(obj + 0x2cc) = 1;
      FUN_00532640();
      FUN_00532670(0,0,1000,0);
      FUN_00532670(0,_DAT_006b65d4 * _DAT_006cc8e8,2000,0);
    }
    else if ((fVar6 != (float10)*(float *)(iVar4 + 0x10)) && (*(char *)(obj + 0x2cc) != '\0')) {
      *(undefined1 *)(obj + 0x2cc) = 0;
    }
    *(float *)(obj + 0x2c4) =
         *(float *)(obj + 0x2c0) / *(float *)(*(int *)(obj + 8) + 0x10);
    FUN_00674898();
    (**(code **)(*(int *)(obj + 0x20) + 0x28))(*(int *)(*(int *)(obj + 4) + 0x234) + 0x60,0);
    FUN_005283f0(obj,3);
    if (*(char *)(obj + 0x2cc) != '\0') {
      FUN_005326f0(fVar2);
      iVar4 = FUN_00674898();
      unaff_ESI = (&DAT_006f7220)[iVar4] * unaff_ESI >> 0xf;
    }
    iVar4 = *(int *)(*(int *)(obj + 4) + 0x6c);
    iVar3 = *(int *)(*(int *)(obj + 4) + 0x2ac);
    if (unaff_ESI < 0) {
      unaff_ESI = 0;
    }
    else if (0x7fff < unaff_ESI) {
      unaff_ESI = 0x7fff;
    }
    *(int *)(*(int *)(obj + 0x234) + 8) = unaff_ESI;
    iVar5 = FUN_00674898();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0x2000 < iVar5) {
      iVar5 = 0x2000;
    }
    *(int *)(*(int *)(obj + 0x234) + 0xc) = iVar5;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    *(int *)(*(int *)(obj + 0x234) + 0x10) = iVar4;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    *(int *)(*(int *)(obj + 0x234) + 0x14) = iVar3;
    if (**(int **)(obj + 0x234) != 0) {
      FUN_0064bc30(*(int **)(obj + 0x234) + 1);
    }
  }
  return 0;
}
