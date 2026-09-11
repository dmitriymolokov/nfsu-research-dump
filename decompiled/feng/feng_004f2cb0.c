/* spd-match: far pct=18.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F2CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f1d80();
int __cdecl FUN_004f2000();
int __cdecl FUN_004f2280();
int __cdecl FUN_004f25f0();
int __cdecl FUN_00514b90();
extern void LAB_004f2cdd(void);
void __fastcall FUN_004f2cb0(int obj)

{

  undefined4 *puVar1;
  int unaff_EDI;
  
  if (*(int *)(obj + 0x18) == 7) {
    *(uint *)(obj + 0x1c) = *(uint *)(obj + 0x1c) | 0x2000000;
  }
  puVar1 = *(undefined4 **)(unaff_EDI + 0x10);
  do {
    if (puVar1 == (undefined4 *)(unaff_EDI + 0x10)) {
      puVar1 = (undefined4 *)0x0;
LAB_004f2cdd:
      switch(*(int *)(obj + 0x18)) {
      case 1:
        FUN_004f2000(unaff_EDI,obj);
        return;
      case 2:
        FUN_004f25f0(puVar1);
        return;
      case 7:
        FUN_004f1d80(unaff_EDI,obj,puVar1);
        break;
      case 9:
        FUN_004f2280(unaff_EDI,obj);
        return;
      }
      return;
    }
    if (puVar1[2] == obj) {
      if ((((uint)puVar1[3] >> 1 & 1) != 0) && ((*(uint *)(obj + 0x1c) & 0x2000000) == 0)) {
        FUN_00514b90(puVar1);
        return;
      }
      goto LAB_004f2cdd;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
