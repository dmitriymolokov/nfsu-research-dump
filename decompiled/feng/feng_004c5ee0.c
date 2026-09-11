/* spd-match: far pct=56.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C5EE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00733ff8;
extern int DAT_0075f244;
extern unsigned char *DAT_007677a8;
extern unsigned int uRam00000000;
void __fastcall FUN_004c5ee0(int obj)

{
  uint uVar1;

  uVar1 = **(uint **)(*(int *)(obj + 0x40) + 8);
  if (((0xff < uVar1) || ((&DAT_00733ff8)[uVar1] == 0)) &&
     ((DAT_007677a8 == 0 ||
      (((uint *)(DAT_007677a8 + 0x58a0) == (uint *)0x0 ||
       (uVar1 != *(uint *)(DAT_007677a8 + 0x58a0))))))) {
    uRam00000000 = 4;
    return;
  }
  (&DAT_0075f244)[uVar1] = 4;
  return;
}
