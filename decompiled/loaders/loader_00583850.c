/* spd-match: far pct=21.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00583850 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00455c50();
int __cdecl FUN_00458f10();
int __cdecl FUN_00583910();
extern int DAT_006fbf18;
extern int DAT_0077a4b0;
extern char stack0xfffffff0;
int unaff_EDI;
void __fastcall FUN_00583850(int obj)

{

  undefined4 unaff_EDI;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(**(int **)(obj + 0x3f8) + 8))(obj + 0x2c);
  if (DAT_006fbf18 == *(short *)(*(int *)(obj + 4) + 10)) {
    FUN_00455c50(&DAT_0077a4b0,*(int *)(obj + 0x3f8) + 0x20);
  }
  uStack_8 = 0;
  uStack_c = 0;
  FUN_00583910(&uStack_c,&stack0xfffffff0);
  (**(code **)(**(int **)(obj + 8) + 0x3c))(*(int *)(obj + 0x3f8) + 0x20);
  (**(code **)(**(int **)(obj + 8) + 0x38))
            (uStack_c,0,unaff_EDI,*(undefined1 *)(*(int *)(obj + 0x3f8) + 0x1f1));
  FUN_00458f10(0,0);
  return;
}
