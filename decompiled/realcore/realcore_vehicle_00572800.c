/* spd-match: far pct=12.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00572800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00572d20();
extern unsigned char *DAT_006f08a4;
extern int DAT_006f1a08;
extern int DAT_006f1a0c;
extern int DAT_0073459c;
extern int _DAT_006f1a10;
extern int _DAT_006f1a14;
void __fastcall FUN_00572800(int obj)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x20);
  if (((iVar1 == 0) && (DAT_0073459c != 0)) && (DAT_006f08a4 == *(int *)(obj + 0x1c) + -1)) {
    *(undefined4 *)(obj + 0x20) = 1;
    *(undefined1 *)(obj + 0x2c) = 0xab;
    *(undefined1 *)(obj + 0x2d) = 0;
    *(undefined1 *)(obj + 0x2e) = 0;
    *(undefined1 *)(obj + 0x2f) = 0;
    *(undefined1 *)(obj + 0x30) = 0;
    *(undefined1 *)(obj + 0x31) = 0;
    *(undefined1 *)(obj + 0x32) = 4;
    *(undefined1 *)(obj + 0x33) = 0;
    *(undefined1 *)(obj + 0x34) = 0;
    *(undefined1 *)(obj + 0x35) = 0;
    *(undefined1 *)(obj + 0x36) = 0;
    *(undefined1 *)(obj + 0x37) = 4;
    *(undefined1 *)(obj + 0x38) = 0;
    *(undefined1 *)(obj + 0x39) = 0;
    *(undefined1 *)(obj + 0x3a) = 0;
    *(undefined1 *)(obj + 0x3b) = 0;
    *(undefined1 *)(obj + 0x3c) = 4;
    *(undefined1 *)(obj + 0x3d) = 0;
    *(undefined1 *)(obj + 0x3e) = 0;
    *(undefined1 *)(obj + 0x3f) = 0;
    *(undefined1 *)(obj + 0x40) = 0;
    *(undefined1 *)(obj + 0x41) = 0;
    *(undefined1 *)(obj + 0x42) = 0;
    *(undefined1 *)(obj + 0x43) = 9;
    *(undefined4 *)(obj + 0x24) = 0;
    *(undefined4 *)(obj + 0x28) = 0x18;
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(obj + 0x20) = 2;
    DAT_0073459c = 0;
    return;
  }
  if (iVar1 == 2) {
    if ((DAT_006f08a4 == *(int *)(obj + 0x54)) && (*(int *)(obj + 0x10) != 0)) {
      *(int *)(obj + 0x1c) = *(int *)(obj + 0x1c) + 0xd3;
      FUN_00572d20();
      FUN_00572d20();
      FUN_00572d20();
      FUN_00572d20();
      DAT_006f1a08 = DAT_006f08a4 + 1;
      DAT_006f1a0c = DAT_006f08a4 + 0x34;
      _DAT_006f1a10 = DAT_006f08a4 + 0x69;
      _DAT_006f1a14 = DAT_006f08a4 + 0x9e;
      *(undefined1 *)(obj + 0x2c) = 0x7b;
      *(undefined1 *)(obj + 0x2d) = 0;
      *(undefined1 *)(obj + 0x2e) = 0;
      *(undefined1 *)(obj + 0x2f) = 0;
      *(undefined1 *)(obj + 0x30) = 0;
      *(undefined1 *)(obj + 0x31) = 0;
      *(undefined1 *)(obj + 0x32) = 0;
      *(undefined1 *)(obj + 0x33) = 0;
      *(undefined1 *)(obj + 0x34) = 0;
      *(undefined1 *)(obj + 0x35) = 0;
      *(undefined1 *)(obj + 0x36) = 0;
      *(undefined1 *)(obj + 0x37) = 0;
      *(undefined1 *)(obj + 0x38) = 9;
      *(undefined4 *)(obj + 0x24) = 0;
      *(undefined4 *)(obj + 0x28) = 0xd;
      *(undefined4 *)(obj + 0x20) = 3;
      return;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(obj + 0x28) <= *(int *)(obj + 0x24))) {
    DAT_0073459c = 1;
    *(undefined4 *)(obj + 0x20) = 0;
  }
  return;
}
