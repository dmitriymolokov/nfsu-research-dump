/* spd-match: far pct=13.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066B290 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066b1a0();
int unaff_ESI;
void __fastcall FUN_0066b290(int obj, int param_1)

{

  DWORD DVar1;
  undefined4 *unaff_ESI;
  
  DVar1 = GetTickCount();
  *(DWORD *)(obj + 0xb8) = DVar1 - 1000;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0x10:
    if (*(int *)(obj + 0x80) == 2) {
      *(undefined4 *)(obj + 0x70) = *unaff_ESI;
      *(undefined4 *)(obj + 0x74) = unaff_ESI[1];
      *(undefined4 *)(obj + 0x78) = unaff_ESI[2];
      *(undefined4 *)(obj + 0x7c) = unaff_ESI[3];
      *(undefined4 *)(obj + 0x80) = 3;
    }
    FUN_0066b1a0(0x12);
    return;
  case 0x11:
    if (*(int *)(obj + 0x80) == 1) {
      *(undefined4 *)(obj + 0x70) = *unaff_ESI;
      *(undefined4 *)(obj + 0x74) = unaff_ESI[1];
      *(undefined4 *)(obj + 0x78) = unaff_ESI[2];
      *(undefined4 *)(obj + 0x7c) = unaff_ESI[3];
      return;
    }
    break;
  case 0x12:
    if (*(int *)(obj + 0x80) == 1) {
      *(undefined4 *)(obj + 0x80) = 3;
      return;
    }
    break;
  case 0x14:
    if (*(int *)(obj + 0x80) == 3) {
      *(undefined4 *)(obj + 0x80) = 4;
    }
  }
  return;
}
