/* spd-match: far pct=7.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00587830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00564b10();
int __cdecl FUN_00564db0();
int __cdecl FUN_00565230();
int __cdecl FUN_00567370();
int __cdecl FUN_005872b0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern unsigned char *DAT_006ef2f4;
extern int DAT_006f0874;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
extern int _DAT_006f0794;
extern int _DAT_006f0878;
extern char stack0xffffff44;
void __fastcall FUN_00587830(int obj)

{
  float fVar1;

  char extraout_DL;
  char cVar2;
  float10 fVar3;
  float local_b4;
  float fStack_7c;
  undefined4 uStack_78;
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  
  cVar2 = '\0';
  if ((DAT_006cc7a4 < *(float *)(obj + 0x108)) && (*(int *)(obj + 0x10c) == 0)) {
    cVar2 = '\x01';
    *(float *)(obj + 0x118) = _DAT_006f0878 * *(float *)(obj + 0x118);
  }
  fVar1 = SQRT(*(float *)(obj + 0x118) * *(float *)(obj + 0x118) +
               *(float *)(obj + 0x11c) * *(float *)(obj + 0x11c));
  local_b4 = *(float *)(&DAT_006ef2f4 + *(int *)(obj + 0x150) * 0x94) *
             *(float *)(*(int *)(obj + 0x18) + 0xc) * *(float *)(obj + 0x180) *
             *(float *)(obj + 0x17c) * *(float *)(obj + 0x178) * *(float *)(obj + 0x158) *
             _DAT_006f0794;
  if (*(int *)(*(int *)(obj + 0x20) + 0x3c0) == 1) {
    fVar3 = (float10)FUN_005872b0();
    local_b4 = (float)(fVar3 * (float10)local_b4);
    cVar2 = extraout_DL;
  }
  if ((fVar1 <= local_b4) || (fVar1 <= _DAT_006cc8bc)) {
    if (cVar2 != '\0') {
      *(float *)(obj + 0x118) = *(float *)(obj + 0x118) / _DAT_006f0878;
    }
  }
  else {
    *(float *)(obj + 0x118) = (local_b4 / fVar1) * *(float *)(obj + 0x118);
    *(float *)(obj + 0x11c) = *(float *)(obj + 0x11c) * (local_b4 / fVar1);
  }
  if ((local_b4 <= _DAT_006cc8bc) ||
     (*(float *)(obj + 0x168) = fVar1 / local_b4, _DAT_006cc7bc < fVar1 / local_b4)) {
    *(undefined4 *)(obj + 0x168) = 0x3f800000;
  }
  if ((*(char *)(obj + 0x154) != '\0') || (*(int *)(obj + 0x10c) != 0)) {
    *(undefined4 *)(obj + 0x168) = 0x3f800000;
  }
  if (*(char *)(obj + 0x155) == '\0') {
    *(undefined4 *)(obj + 0x168) = 0;
  }
  FUN_00565230();
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  FUN_00587830(local_70,obj + 0xf0,local_50);
  FUN_00564db0(fStack_7c,uStack_78);
  FUN_00674898();
  fVar3 = (float10)FUN_00564b10();
  if (_DAT_006cc7bc < ABS(fStack_7c)) {
    *(float *)(obj + 0x118) =
         (float)((float10)*(float *)(obj + 0x118) -
                fVar3 * (float10)*(float *)(obj + 0x11c) * (float10)_DAT_006cc7dc);
  }
  if (((DAT_006f0874 != 1) && (DAT_006f0874 != 2)) && (DAT_006f0874 == 3)) {
    FUN_00567370();
  }
  uStack_6c = *(undefined4 *)(obj + 0x118);
  uStack_68 = *(undefined4 *)(obj + 0x11c);
  uStack_64 = *(undefined4 *)(obj + 0x158);
  FUN_00587830(obj + 0x120,&uStack_6c,&stack0xffffff44);
  return;
}
