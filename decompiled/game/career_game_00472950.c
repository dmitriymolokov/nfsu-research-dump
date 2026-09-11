/* spd-match: far pct=9.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00472950 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0046ac10();
int __cdecl FUN_00471de0();
extern int DAT_006cc7a4;
extern int _DAT_006b71e4;
extern int _DAT_006b71e8;
extern void LAB_004729a1(void);
extern void LAB_004729da(void);
extern void LAB_00472a7e(void);
float10 __fastcall FUN_00472950(int obj)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;

  float10 fVar4;
  
  if (*(char *)(obj + 0x240) == '\0') goto LAB_00472a7e;
  iVar1 = *(int *)(obj + 0x244);
  if (*(int *)(iVar1 + 0x10) == 2) {
    if ((*(char *)(iVar1 + 0x1d0) == '\0') || (*(float *)(iVar1 + 0x1d4) <= DAT_006cc7a4)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 == *(char *)(obj + 0x241)) goto LAB_004729a1;
LAB_004729da:
    uVar3 = FUN_0046ac10();
    *(undefined1 *)(obj + 0x241) = uVar3;
    *(undefined4 *)(obj + 0x138) = 0;
  }
  else {
LAB_004729a1:
    iVar1 = *(int *)(obj + 0x248);
    if (*(int *)(iVar1 + 0x10) == 2) {
      if ((*(char *)(iVar1 + 0x1d0) == '\0') || (*(float *)(iVar1 + 0x1d4) <= DAT_006cc7a4)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar2 != *(char *)(obj + 0x241)) goto LAB_004729da;
    }
  }
  fVar4 = (float10)FUN_00471de0();
  *(float *)(obj + 0x10) = (float)fVar4;
  *(undefined4 *)(obj + 0x20) = *(undefined4 *)(obj + 0xe0);
  *(undefined4 *)(obj + 0x24) = *(undefined4 *)(obj + 0xe4);
  *(undefined4 *)(obj + 0x28) = *(undefined4 *)(obj + 0xe8);
  *(undefined4 *)(obj + 0x30) = *(undefined4 *)(obj + 0xf0);
  *(undefined4 *)(obj + 0x34) = *(undefined4 *)(obj + 0xf4);
  *(undefined4 *)(obj + 0x38) = *(undefined4 *)(obj + 0xf8);
  *(bool *)(obj + 0x15) =
       *(float *)(obj + 0x10) < _DAT_006b71e4 != (*(float *)(obj + 0x10) == _DAT_006b71e4);
  if (*(float *)(obj + 0x10) < _DAT_006b71e8 != (*(float *)(obj + 0x10) == _DAT_006b71e8)) {
    *(undefined1 *)(obj + 0x14) = 1;
    *(undefined1 *)(obj + 0x240) = 0;
    return (float10)*(float *)(obj + 0x10);
  }
  *(undefined1 *)(obj + 0x14) = 0;
  *(undefined1 *)(obj + 0x240) = 0;
LAB_00472a7e:
  return (float10)*(float *)(obj + 0x10);
}
