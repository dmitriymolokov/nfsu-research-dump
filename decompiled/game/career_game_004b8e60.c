/* spd-match: far pct=21.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B8E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004b81f0();
int __cdecl FUN_004b8310();
int __cdecl FUN_004b83c0();
int __cdecl FUN_004b84a0();
int __cdecl FUN_004b8d50();
extern int DAT_00777b4c;
extern int _DAT_00758998;
extern void LAB_004b8560(void);
extern void LAB_004b8650(void);
extern void LAB_004b8690(void);
extern void LAB_004b86f0(void);
void __fastcall FUN_004b8e60(int obj)

{

  int iVar1;
  
  if (DAT_00777b4c == 4) {
    iVar1 = 0;
    _DAT_00758998 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_004b8d50(iVar1);
    } while (iVar1 < 2);
    *(undefined4 *)(obj + 0x84) = 1;
    *(undefined1 **)(obj + 0x60) = &LAB_004b8560;
    FUN_004b81f0();
    *(undefined4 *)(obj + 0x9c) = 2;
    *(undefined1 **)(obj + 100) = &LAB_004b8690;
    FUN_004b83c0();
    return;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004b8d50(iVar1);
  } while (iVar1 < 4);
  *(undefined4 *)(obj + 0x84) = 1;
  *(undefined1 **)(obj + 0x60) = &LAB_004b8560;
  FUN_004b81f0();
  *(undefined4 *)(obj + 0x98) = 2;
  *(undefined1 **)(obj + 100) = &LAB_004b8650;
  FUN_004b8310();
  *(undefined4 *)(obj + 0x9c) = 3;
  *(undefined1 **)(obj + 0x68) = &LAB_004b8690;
  FUN_004b83c0();
  *(undefined4 *)(obj + 0xa0) = 4;
  *(undefined1 **)(obj + 0x6c) = &LAB_004b86f0;
  FUN_004b84a0();
  return;
}
