/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00597B80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00440740();
int __cdecl FUN_00468820();
extern int DAT_0073ad34;
extern int _DAT_006b5a70;
extern int _DAT_006b5a74;
extern int _DAT_006b5a78;
extern int _DAT_006b5a7c;
extern int _DAT_006cca38;
extern unsigned char *_DAT_0073446c;
void __fastcall FUN_00597b80(int obj)

{
  int iVar1;

  int iVar2;
  
  iVar1 = DAT_0073ad34;
  if ((_DAT_006b5a7c < (float)(DAT_0073ad34 - *(int *)(obj + 0x16c)) * _DAT_006cca38) &&
     (*(char *)(obj + 0x1c) != '\0')) {
    iVar2 = FUN_00468820(0);
    if ((_DAT_006b5a78 < (float)(iVar1 - *(int *)(iVar2 + 8)) * _DAT_006cca38) &&
       ((iVar1 = *(int *)(obj + 0x6c),
        SQRT(*(float *)(iVar1 + 0xa8) * *(float *)(iVar1 + 0xa8) +
             *(float *)(iVar1 + 0xa4) * *(float *)(iVar1 + 0xa4) +
             *(float *)(iVar1 + 0xa0) * *(float *)(iVar1 + 0xa0)) < _DAT_006b5a70 &&
        (SQRT(*(float *)(iVar1 + 200) * *(float *)(iVar1 + 200) +
              *(float *)(iVar1 + 0xc4) * *(float *)(iVar1 + 0xc4) +
              *(float *)(iVar1 + 0xc0) * *(float *)(iVar1 + 0xc0)) < _DAT_006b5a74)))) {
      *(undefined1 *)(obj + 0x4c2) = 0;
      *(undefined1 *)(obj + 0x1d) = 0;
      _DAT_0073446c = _DAT_0073446c + -1;
      FUN_00440740();
      return;
    }
  }
  return;
}
