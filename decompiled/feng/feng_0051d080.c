/* spd-match: far pct=8.87 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051D080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0051dd70();
int __cdecl FUN_0051ec40();
int __cdecl FUN_00536570();
int __cdecl FUN_0064e8e0();
extern int DAT_007356ac;
extern int DAT_0077a920;
void __fastcall FUN_0051d080(int obj)

{
  int iVar1;
  void *_Memory;

  if (DAT_0077a920 == 3) {
    FUN_0051dd70(obj);
  }
  else if (DAT_0077a920 == 6) {
    FUN_0051ec40();
  }
  if (*(int **)(obj + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0xa0) + 0xc))();
    if (*(undefined4 **)(obj + 0xa0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(obj + 0xa0))(1);
    }
    *(undefined4 *)(obj + 0xa0) = 0;
  }
  iVar1 = *(int *)(obj + 0x100);
  if (iVar1 != 0) {
    FUN_0064e8e0();
    if (*(void **)(iVar1 + 4) != (void *)0x0) {
      _free(*(void **)(iVar1 + 4));
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    if (*(void **)(iVar1 + 8) != (void *)0x0) {
      _free(*(void **)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  _Memory = DAT_007356ac;
  if (DAT_007356ac != (void *)0x0) {
    FUN_00536570(DAT_007356ac);
    _free(_Memory);
    DAT_007356ac = (void *)0x0;
  }
  if (*(undefined4 **)(obj + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0xc0))(1);
    *(undefined4 *)(obj + 0xc0) = 0;
  }
  if (*(undefined4 **)(obj + 0xbc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0xbc))(1);
    *(undefined4 *)(obj + 0xbc) = 0;
  }
  if (*(undefined4 **)(obj + 0x100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0x100))(1);
    *(undefined4 *)(obj + 0x100) = 0;
  }
  if (*(undefined4 **)(obj + 0x80) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0x80))(1);
    *(undefined4 *)(obj + 0x80) = 0;
  }
  if (*(undefined4 **)(obj + 0x104) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0x104))(1);
    *(undefined4 *)(obj + 0x104) = 0;
  }
  if (*(undefined4 **)(obj + 0xb4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(obj + 0xb4))(1);
    *(undefined4 *)(obj + 0xb4) = 0;
  }
  return;
}
