/* spd-match: far pct=17.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B8FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b8310();
int __cdecl FUN_004b83c0();
int __cdecl FUN_004b84a0();
int __cdecl FUN_004b8d50();
extern int DAT_00777b4c;
extern int _DAT_007589d8;
extern void LAB_004b8650(void);
extern void LAB_004b8690(void);
extern void LAB_004b86f0(void);
void __fastcall FUN_004b8fe0(int obj)

{

  int iVar1;
  
  iVar1 = 0;
  if (DAT_00777b4c == 4) {
    _DAT_007589d8 = 0;
  }
  do {
    iVar1 = iVar1 + 1;
    FUN_004b8d50(iVar1);
  } while (iVar1 < 2);
  *(undefined4 *)(obj + 0x98) = 1;
  *(undefined1 **)(obj + 0x60) = &LAB_004b8650;
  FUN_004b8310();
  *(undefined4 *)(obj + 0x9c) = 2;
  *(undefined1 **)(obj + 100) = &LAB_004b8690;
  FUN_004b83c0();
  if (DAT_00777b4c != 4) {
    *(undefined4 *)(obj + 0xa0) = 3;
    *(undefined1 **)(obj + 0x68) = &LAB_004b86f0;
    FUN_004b84a0();
    FUN_004b8d50(3);
  }
  return;
}
