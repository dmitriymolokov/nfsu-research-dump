/* spd-match: far pct=13.10 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00403A00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_007404a0;
extern unsigned char *DAT_00740500;
extern unsigned char *DAT_00740560;
void __fastcall FUN_00403a00(int obj)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (DAT_00740500 != 0) {
    uVar1 = *(undefined4 *)(DAT_00740500 + 0x44);
    uVar2 = *(undefined4 *)(DAT_00740500 + 0x48);
    *(undefined4 *)(obj + 0x10) = *(undefined4 *)(DAT_00740500 + 0x40);
    *(undefined4 *)(obj + 0x14) = uVar1;
    *(undefined4 *)(obj + 0x18) = uVar2;
  }
  if (DAT_00740560 != 0) {
    uVar1 = *(undefined4 *)(DAT_00740560 + 0x44);
    uVar2 = *(undefined4 *)(DAT_00740560 + 0x48);
    *(undefined4 *)(obj + 0x20) = *(undefined4 *)(DAT_00740560 + 0x40);
    *(undefined4 *)(obj + 0x24) = uVar1;
    *(undefined4 *)(obj + 0x28) = uVar2;
  }
  if (DAT_007404a0 != 0) {
    uVar1 = *(undefined4 *)(DAT_007404a0 + 0x44);
    uVar2 = *(undefined4 *)(DAT_007404a0 + 0x48);
    *(undefined4 *)(obj + 0x30) = *(undefined4 *)(DAT_007404a0 + 0x40);
    *(undefined4 *)(obj + 0x34) = uVar1;
    *(undefined4 *)(obj + 0x38) = uVar2;
  }
  return;
}
