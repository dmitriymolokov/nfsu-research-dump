/* spd-match: far pct=16.13 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004663D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_004663d0(int obj)

{
  char cVar1;
  uint uVar2;

  uVar2 = *(uint *)(obj + 100);
  cVar1 = *(char *)(*(int *)(uVar2 + 600) + 0x15);
  if (cVar1 == '\0') {
    return (uint)(*(char *)(*(int *)(uVar2 + 0x25c) + 0x15) == '\x04');
  }
  if (cVar1 == '\x04') {
    return CONCAT31((int3)((uint)*(int *)(uVar2 + 0x25c) >> 8),
                    *(char *)(*(int *)(uVar2 + 0x25c) + 0x15) == '\0');
  }
  return uVar2 & 0xffffff00;
}
