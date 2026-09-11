/* spd-match: far pct=10.37 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00565CE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005653c0();
int __cdecl FUN_00565850();
int __cdecl FUN_00565b30();
extern unsigned char *DAT_007301d4;
extern int DAT_007349a0;
extern int DAT_007349a4;
extern int DAT_007349b0;
void __fastcall FUN_00565ce0(int obj)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;

  if (obj != 0) {
    if (((DAT_007349a0 != 0) && (DAT_007349a4 % DAT_007349a0 == 0)) &&
       ((&DAT_007301d4)[*(byte *)(obj + -0x10)] != 0)) {
      FUN_00565850((&DAT_007301d4)[*(byte *)(obj + -0x10)],1);
    }
    if (*(short *)(obj + -0xe) != 0x2222) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar1 = *(byte *)(obj + -0xf);
    piVar2 = *(int **)(obj + -0x14);
    *(undefined2 *)(obj + -0xe) = 0;
    iVar3 = *(int *)(obj + -0x18);
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_005653c0((obj + -0x18) - (uint)bVar1,*(undefined4 *)(obj + -0xc));
    if ((DAT_007349b0 == 0) || (*(int *)(DAT_007301d4 + 0x1c) == 0)) {
      FUN_00565b30();
      return;
    }
  }
  return;
}
