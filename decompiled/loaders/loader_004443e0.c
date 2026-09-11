/* spd-match: far pct=13.57 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004443E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006f3dac;
void __fastcall FUN_004443e0(int obj)

{

  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(obj + 0xf0) = 0;
  *(undefined4 *)(obj + 0xf4) = 0;
  *(undefined4 *)(obj + 0x134) = 0;
  *(undefined4 *)(obj + 0x138) = 0;
  *(undefined2 *)(obj + 0xe6) = 0xffff;
  *(undefined2 *)(obj + 0x12a) = 0xffff;
  iVar1 = 0;
  *(undefined1 *)(obj + 0x15c) = 0;
  *(undefined1 *)(obj + 0x160) = 0;
  _DAT_006f3dac = 1;
  *(undefined1 *)(obj + 0x15d) = 0;
  *(undefined1 *)(obj + 0x15e) = 0;
  *(undefined1 *)(obj + 0x15f) = 0;
  *(undefined1 *)(obj + 0x161) = 0;
  *(undefined4 *)(obj + 0x16c) = 0;
  *(undefined4 *)(obj + 0x170) = 0;
  if (0 < *(int *)(obj + 0x17c)) {
    piVar2 = (int *)(obj + 0x180);
    do {
      *(undefined1 *)(*piVar2 + 0xb) = 0;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(obj + 0x17c));
  }
  *(undefined4 *)(obj + 0x17c) = 0;
  return;
}
