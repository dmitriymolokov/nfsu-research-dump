/* spd-match: far pct=7.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00542C20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567450();
extern int DAT_006b6348;
extern int DAT_006b634c;
undefined4 __fastcall FUN_00542c20(float * obj, int param_1, int param_2)

{
  float fVar1;

  int unaff_EDI;
  float fVar2;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 local_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00542c20((float *)0, local_50,param_1);
  uStack_4c = 0;
  uStack_3c = 0;
  uStack_2c = 0;
  uStack_1c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (obj != (float *)0x0) {
    fStack_68 = *obj - *(float *)(param_1 + 0x30);
    fStack_64 = obj[1] - *(float *)(param_1 + 0x34);
    fStack_5c = 1.0;
    fStack_60 = obj[2] - *(float *)(param_1 + 0x38);
    FUN_00542c20(&fStack_68,&fStack_68,auStack_58);
    fVar1 = SQRT(fStack_68 * fStack_68 + fStack_64 * fStack_64 + fStack_60 * fStack_60 + fStack_5c +
                 fStack_5c);
    fVar2 = DAT_006b6348;
    if ((DAT_006b6348 <= fVar1) && (fVar2 = fVar1, DAT_006b634c < fVar1)) {
      fVar2 = DAT_006b634c;
    }
    fStack_5c = 0.0;
    FUN_00567450();
    *(undefined4 *)(unaff_EDI + 0xcc) = 0x3f800000;
    fStack_60 = fVar2 * fStack_60;
    *(float *)(unaff_EDI + 200) = fStack_60;
    *(float *)(unaff_EDI + 0xc0) = fVar2 * fStack_68;
    *(float *)(unaff_EDI + 0xc4) = fVar2 * fStack_64;
  }
  if ((param_2 != 0) && (obj != (float *)0x0)) {
    FUN_00542c20(unaff_EDI + 0xe0,param_1,param_2);
    *(undefined4 *)(unaff_EDI + 0xec) = 0;
    *(undefined4 *)(unaff_EDI + 0xfc) = 0;
    *(undefined4 *)(unaff_EDI + 0x10c) = 0;
    *(undefined4 *)(unaff_EDI + 0x110) = *(undefined4 *)(unaff_EDI + 0xc0);
    *(undefined4 *)(unaff_EDI + 0x114) = *(undefined4 *)(unaff_EDI + 0xc4);
    *(undefined4 *)(unaff_EDI + 0x118) = *(undefined4 *)(unaff_EDI + 200);
    *(undefined4 *)(unaff_EDI + 0x11c) = 0;
  }
  return 1;
}
