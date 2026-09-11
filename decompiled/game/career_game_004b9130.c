/* spd-match: far pct=42.11 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B9130 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b83c0();
int __cdecl FUN_004b84a0();
int __cdecl FUN_004b8d50();
extern int DAT_00777b4c;
extern int _DAT_00758aa0;
extern void LAB_004b8690(void);
extern void LAB_004b86f0(void);
void __fastcall FUN_004b9130(int obj)

{

  if (DAT_00777b4c == 4) {
    _DAT_00758aa0 = 0;
  }
  FUN_004b8d50(1);
  *(undefined4 *)(obj + 0x9c) = 1;
  *(undefined1 **)(obj + 0x60) = &LAB_004b8690;
  FUN_004b83c0();
  if (DAT_00777b4c != 4) {
    *(undefined4 *)(obj + 0xa0) = 2;
    *(undefined1 **)(obj + 100) = &LAB_004b86f0;
    FUN_004b84a0();
    FUN_004b8d50(2);
  }
  return;
}
