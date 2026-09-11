/* spd-match: far pct=7.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004789D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00465150();
int __cdecl FUN_00465390();
int __cdecl FUN_00564fa0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_007000e4;
extern int DAT_007798e0;
extern int _DAT_006b7124;
extern int _DAT_006cc7bc;
extern int _DAT_006cc90c;
extern int _DAT_006cc9f8;
extern int _DAT_006ccb78;
extern int _DAT_006ffe50;
extern void LAB_00478b86(void);
extern void LAB_00478c9c(void);
extern void LAB_00478dae(void);
extern void LAB_00478ec4(void);
extern void LAB_00478f53(void);
void __fastcall FUN_004789d0(int obj, float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined2 uVar8;

  int iVar9;
  int iVar10;
  
  if (DAT_007798e0 != 0) goto LAB_00478f53;
  iVar10 = *(int *)(obj + 0x20);
  iVar9 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(iVar10 + 0x28);
  uVar7 = *(undefined4 *)(iVar10 + 0x20);
  *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar10 + 0x24);
  *(undefined4 *)(iVar9 + 0x20) = uVar7;
  *(undefined4 *)(iVar9 + 0x28) = uVar1;
  FUN_00401cd0();
  FUN_00465390();
  iVar10 = *(int *)(obj + 0x20);
  uVar7 = *(undefined4 *)(iVar10 + 0xa0);
  uVar1 = *(undefined4 *)(iVar10 + 0xa8);
  iVar9 = *(int *)(obj + 0x58);
  *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar10 + 0xa4);
  *(undefined4 *)(iVar9 + 0x30) = uVar7;
  *(undefined4 *)(iVar9 + 0x38) = uVar1;
  fVar2 = *(float *)(iVar10 + 0xa8);
  fVar3 = *(float *)(iVar10 + 0xa4);
  fVar4 = *(float *)(iVar10 + 0xa0);
  *(undefined1 *)(iVar9 + 0x420) = 0;
  *(float *)(iVar9 + 0x394) = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  iVar10 = *(int *)(obj + 0x20);
  iVar9 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(iVar10 + 200);
  uVar7 = *(undefined4 *)(iVar10 + 0xc0);
  *(undefined4 *)(iVar9 + 0x94) = *(undefined4 *)(iVar10 + 0xc4);
  *(undefined4 *)(iVar9 + 0x90) = uVar7;
  *(undefined4 *)(iVar9 + 0x98) = uVar1;
  iVar10 = *(int *)(obj + 0x58);
  FUN_00674898();
  FUN_00674898();
  uVar8 = FUN_00564fa0();
  *(undefined2 *)(iVar10 + 0x374) = uVar8;
  iVar10 = *(int *)(obj + 0x58);
  *(float *)(iVar10 + 0x390) =
       *(float *)(iVar10 + 0x50) * *(float *)(iVar10 + 0x30) +
       *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x54) +
       *(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x58);
  *(undefined2 *)(*(int *)(obj + 0x58) + 0x376) = *(undefined2 *)(*(int *)(obj + 4) + 0x1d0);
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b0) = *(undefined4 *)(*(int *)(obj + 0x38) + 0x28)
  ;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c0) = *(undefined4 *)(*(int *)(obj + 0x38) + 0x24)
  ;
  iVar10 = *(int *)(obj + 0x28);
  fVar2 = DAT_006cc7a4;
  if (*(float *)(*(int *)(iVar10 + 0x14) + 0x1c) <= *(float *)(iVar10 + 0x1c)) {
    fVar2 = *(float *)(*(int *)(iVar10 + 0x14) + 0x1c) - *(float *)(iVar10 + 0x1c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x300) = *(float *)(iVar10 + 0x1c) + fVar2;
  cVar5 = *(char *)(*(int *)(obj + 0x38) + 0x155);
  iVar10 = *(int *)(obj + 0x58);
  cVar6 = *(char *)(iVar10 + 0x310);
  *(char *)(iVar10 + 0x310) = cVar5;
  if (cVar6 == '\0') {
    if (cVar5 != '\0') {
      iVar9 = *(int *)(iVar10 + 0x38c) + 1;
LAB_00478b86:
      *(int *)(iVar10 + 0x38c) = iVar9;
    }
  }
  else if (cVar5 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x38c) + -1;
    goto LAB_00478b86;
  }
  iVar10 = *(int *)(*(int *)(obj + 0x38) + 0x150);
  iVar9 = *(int *)(obj + 0x58);
  *(int *)(iVar9 + 0x314) = iVar10;
  if (*(int *)(iVar9 + 0x324) < iVar10) {
    *(int *)(iVar9 + 0x324) = iVar10;
  }
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x354) =
       *(undefined4 *)(*(int *)(obj + 0x38) + 0x168);
  iVar10 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x38) + 0x100);
  *(undefined4 *)(iVar10 + 0x338) = *(undefined4 *)(*(int *)(obj + 0x38) + 0x104);
  *(undefined4 *)(iVar10 + 0x334) = uVar1;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2d0) =
       *(undefined4 *)(*(int *)(obj + 0x38) + 0x158);
  fVar2 = DAT_006cc7a4;
  if (*(char *)(*(int *)(obj + 0x38) + 0x155) != '\0') {
    fVar2 = *(float *)(*(int *)(obj + 0x38) + 0x15c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x2e0) = fVar2;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b4) = *(undefined4 *)(*(int *)(obj + 0x3c) + 0x28)
  ;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c4) = *(undefined4 *)(*(int *)(obj + 0x3c) + 0x24)
  ;
  iVar10 = *(int *)(obj + 0x2c);
  fVar2 = DAT_006cc7a4;
  if (*(float *)(*(int *)(iVar10 + 0x14) + 0x1c) <= *(float *)(iVar10 + 0x1c)) {
    fVar2 = *(float *)(*(int *)(iVar10 + 0x14) + 0x1c) - *(float *)(iVar10 + 0x1c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x304) = *(float *)(iVar10 + 0x1c) + fVar2;
  iVar10 = *(int *)(obj + 0x58);
  cVar5 = *(char *)(*(int *)(obj + 0x3c) + 0x155);
  cVar6 = *(char *)(iVar10 + 0x311);
  *(char *)(iVar10 + 0x311) = cVar5;
  if (cVar6 == '\0') {
    if (cVar5 != '\0') {
      iVar9 = *(int *)(iVar10 + 0x38c) + 1;
LAB_00478c9c:
      *(int *)(iVar10 + 0x38c) = iVar9;
    }
  }
  else if (cVar5 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x38c) + -1;
    goto LAB_00478c9c;
  }
  iVar10 = *(int *)(obj + 0x58);
  iVar9 = *(int *)(*(int *)(obj + 0x3c) + 0x150);
  *(int *)(iVar10 + 0x318) = iVar9;
  if (*(int *)(iVar10 + 0x328) < iVar9) {
    *(int *)(iVar10 + 0x328) = iVar9;
  }
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x358) =
       *(undefined4 *)(*(int *)(obj + 0x3c) + 0x168);
  iVar10 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x3c) + 0x100);
  *(undefined4 *)(iVar10 + 0x340) = *(undefined4 *)(*(int *)(obj + 0x3c) + 0x104);
  *(undefined4 *)(iVar10 + 0x33c) = uVar1;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2d4) =
       *(undefined4 *)(*(int *)(obj + 0x3c) + 0x158);
  fVar2 = DAT_006cc7a4;
  if (*(char *)(*(int *)(obj + 0x3c) + 0x155) != '\0') {
    fVar2 = *(float *)(*(int *)(obj + 0x3c) + 0x15c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x2e4) = fVar2;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2b8) = *(undefined4 *)(*(int *)(obj + 0x40) + 0x28)
  ;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2c8) = *(undefined4 *)(*(int *)(obj + 0x40) + 0x24)
  ;
  iVar10 = *(int *)(obj + 0x30);
  fVar2 = DAT_006cc7a4;
  if (*(float *)(*(int *)(iVar10 + 0x14) + 0x1c) <= *(float *)(iVar10 + 0x1c)) {
    fVar2 = *(float *)(*(int *)(iVar10 + 0x14) + 0x1c) - *(float *)(iVar10 + 0x1c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x308) = *(float *)(iVar10 + 0x1c) + fVar2;
  cVar5 = *(char *)(*(int *)(obj + 0x40) + 0x155);
  iVar10 = *(int *)(obj + 0x58);
  cVar6 = *(char *)(iVar10 + 0x312);
  *(char *)(iVar10 + 0x312) = cVar5;
  if (cVar6 == '\0') {
    if (cVar5 != '\0') {
      iVar9 = *(int *)(iVar10 + 0x38c) + 1;
LAB_00478dae:
      *(int *)(iVar10 + 0x38c) = iVar9;
    }
  }
  else if (cVar5 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x38c) + -1;
    goto LAB_00478dae;
  }
  iVar10 = *(int *)(*(int *)(obj + 0x40) + 0x150);
  iVar9 = *(int *)(obj + 0x58);
  *(int *)(iVar9 + 0x31c) = iVar10;
  if (*(int *)(iVar9 + 0x32c) < iVar10) {
    *(int *)(iVar9 + 0x32c) = iVar10;
  }
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x35c) =
       *(undefined4 *)(*(int *)(obj + 0x40) + 0x168);
  iVar10 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x40) + 0x100);
  *(undefined4 *)(iVar10 + 0x348) = *(undefined4 *)(*(int *)(obj + 0x40) + 0x104);
  *(undefined4 *)(iVar10 + 0x344) = uVar1;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2d8) =
       *(undefined4 *)(*(int *)(obj + 0x40) + 0x158);
  fVar2 = DAT_006cc7a4;
  if (*(char *)(*(int *)(obj + 0x40) + 0x155) != '\0') {
    fVar2 = *(float *)(*(int *)(obj + 0x40) + 0x15c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x2e8) = fVar2;
  *(undefined4 *)(*(int *)(obj + 0x58) + 700) = *(undefined4 *)(*(int *)(obj + 0x44) + 0x28);
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2cc) = *(undefined4 *)(*(int *)(obj + 0x44) + 0x24)
  ;
  iVar10 = *(int *)(obj + 0x34);
  fVar2 = DAT_006cc7a4;
  if (*(float *)(*(int *)(iVar10 + 0x14) + 0x1c) <= *(float *)(iVar10 + 0x1c)) {
    fVar2 = *(float *)(*(int *)(iVar10 + 0x14) + 0x1c) - *(float *)(iVar10 + 0x1c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x30c) = *(float *)(iVar10 + 0x1c) + fVar2;
  iVar10 = *(int *)(obj + 0x58);
  cVar5 = *(char *)(*(int *)(obj + 0x44) + 0x155);
  cVar6 = *(char *)(iVar10 + 0x313);
  *(char *)(iVar10 + 0x313) = cVar5;
  if (cVar6 == '\0') {
    if (cVar5 != '\0') {
      iVar9 = *(int *)(iVar10 + 0x38c) + 1;
LAB_00478ec4:
      *(int *)(iVar10 + 0x38c) = iVar9;
    }
  }
  else if (cVar5 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x38c) + -1;
    goto LAB_00478ec4;
  }
  iVar10 = *(int *)(obj + 0x58);
  iVar9 = *(int *)(*(int *)(obj + 0x44) + 0x150);
  *(int *)(iVar10 + 800) = iVar9;
  if (*(int *)(iVar10 + 0x330) < iVar9) {
    *(int *)(iVar10 + 0x330) = iVar9;
  }
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x360) =
       *(undefined4 *)(*(int *)(obj + 0x44) + 0x168);
  iVar10 = *(int *)(obj + 0x58);
  uVar1 = *(undefined4 *)(*(int *)(obj + 0x44) + 0x100);
  *(undefined4 *)(iVar10 + 0x350) = *(undefined4 *)(*(int *)(obj + 0x44) + 0x104);
  *(undefined4 *)(iVar10 + 0x34c) = uVar1;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x2dc) =
       *(undefined4 *)(*(int *)(obj + 0x44) + 0x158);
  fVar2 = DAT_006cc7a4;
  if (*(char *)(*(int *)(obj + 0x44) + 0x155) != '\0') {
    fVar2 = *(float *)(*(int *)(obj + 0x44) + 0x15c);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x2ec) = fVar2;
LAB_00478f53:
  iVar10 = *(int *)(obj + 0x48);
  fVar2 = DAT_006cc7a4;
  if (*(float *)(iVar10 + 0x9c) == DAT_006cc7a4) {
    fVar2 = *(float *)(iVar10 + 0x80) * *(float *)(iVar10 + 0x78);
  }
  *(float *)(*(int *)(obj + 0x58) + 0x39c) = fVar2;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x398) = *(undefined4 *)(*(int *)(obj + 0x4c) + 0x3c)
  ;
  *(uint *)(*(int *)(obj + 0x58) + 0x3a8) = (uint)(*(int *)(*(int *)(obj + 0x4c) + 0x44) == 3)
  ;
  *(undefined4 *)(*(int *)(obj + 0x58) + 0x3ac) = *(undefined4 *)(*(int *)(obj + 0x4c) + 0x70)
  ;
  fVar2 = *(float *)(*(int *)(obj + 0x48) + 0x14) * _DAT_006ccb78;
  fVar3 = _DAT_006b7124 / *(float *)(*(int *)(*(int *)(obj + 0x48) + 0x18) + 0xc);
  fVar4 = DAT_007000e4;
  if (DAT_007000e4 == _DAT_006cc9f8) {
    fVar4 = *(float *)(*(int *)(obj + 0x58) + 0x3a0);
  }
  if ((fVar2 - fVar4) / param_1 < fVar3) {
    fVar4 = DAT_007000e4;
    if (DAT_007000e4 == _DAT_006cc9f8) {
      fVar4 = *(float *)(*(int *)(obj + 0x58) + 0x3a0);
    }
    fVar4 = fVar3 * param_1 + fVar4;
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
  }
  *(float *)(*(int *)(obj + 0x58) + 0x3a0) = fVar2;
  if (DAT_007798e0 == 0) {
    param_1 = ABS(*(float *)(*(int *)(obj + 0x38) + 0x160));
    fVar3 = ABS(*(float *)(*(int *)(obj + 0x3c) + 0x160));
    fVar2 = ABS(*(float *)(*(int *)(obj + 0x40) + 0x160));
    fVar4 = ABS(*(float *)(*(int *)(obj + 0x44) + 0x160));
    if (param_1 <= fVar4) {
      param_1 = fVar4;
    }
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    param_1 = (_DAT_006cc7bc / _DAT_006ffe50) * param_1;
    fVar2 = (_DAT_006cc7bc / _DAT_006ffe50) * fVar2;
    if (_DAT_006cc7bc < param_1) {
      param_1 = 1.0;
    }
    if (_DAT_006cc7bc < fVar2) {
      fVar2 = _DAT_006cc7bc;
    }
    iVar10 = *(int *)(obj + 0x58);
    *(float *)(iVar10 + 0x388) = fVar2;
    *(float *)(iVar10 + 900) = param_1;
    iVar10 = 0;
    *(float *)(*(int *)(obj + 0x58) + 0x380) =
         (*(float *)(*(int *)(obj + 0x44) + 0x168) + *(float *)(*(int *)(obj + 0x38) + 0x168)
          + *(float *)(*(int *)(obj + 0x3c) + 0x168) +
         *(float *)(*(int *)(obj + 0x40) + 0x168)) * _DAT_006cc90c;
    uVar1 = *(undefined4 *)(obj + 0x58);
    do {
      FUN_00465150(uVar1);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
  }
  return;
}
