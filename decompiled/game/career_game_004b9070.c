/* spd-match: far pct=19.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B9070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b81f0();
int __cdecl FUN_004b8280();
int __cdecl FUN_004b8310();
int __cdecl FUN_004b83c0();
int __cdecl FUN_004b84a0();
int __cdecl FUN_004b8d50();
extern int DAT_00777b4c;
extern int _DAT_00758a1c;
extern void LAB_004b8560(void);
extern void LAB_004b85c0(void);
extern void LAB_004b8650(void);
extern void LAB_004b8690(void);
extern void LAB_004b86f0(void);
void __fastcall FUN_004b9070(int obj)

{

  int iVar1;
  
  iVar1 = 0;
  if (DAT_00777b4c == 4) {
    _DAT_00758a1c = 0;
  }
  do {
    iVar1 = iVar1 + 1;
    FUN_004b8d50(iVar1);
  } while (iVar1 < 4);
  *(undefined4 *)(obj + 0x84) = 1;
  *(undefined1 **)(obj + 0x60) = &LAB_004b8560;
  FUN_004b81f0();
  *(undefined4 *)(obj + 0x90) = 2;
  *(undefined1 **)(obj + 100) = &LAB_004b85c0;
  FUN_004b8280();
  *(undefined4 *)(obj + 0x98) = 3;
  *(undefined1 **)(obj + 0x68) = &LAB_004b8650;
  FUN_004b8310();
  *(undefined4 *)(obj + 0x9c) = 4;
  *(undefined1 **)(obj + 0x6c) = &LAB_004b8690;
  FUN_004b83c0();
  if (DAT_00777b4c != 4) {
    *(undefined4 *)(obj + 0xa0) = 5;
    *(undefined1 **)(obj + 0x70) = &LAB_004b86f0;
    FUN_004b84a0();
    FUN_004b8d50(5);
  }
  return;
}
