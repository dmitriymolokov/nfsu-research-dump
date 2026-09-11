/* spd-match: far pct=12.77 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004EBD60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f08f0(...);
int __cdecl FUN_004f3f90(...);
extern int DAT_0073578c;
extern int DAT_00735d9c;
extern unsigned char *DAT_00735da0;
extern int DAT_00746104;
extern int _DAT_00777c10;
extern int _DAT_00777c14;
extern int _DAT_00777c18;
extern int _DAT_00777c1c;
extern int _DAT_00777c20;
extern int _DAT_00777c24;
extern int _DAT_00777c28;
extern int _DAT_00777c2c;

struct ThisCallBox {
  void FUN_004ebd60(int val, undefined4 param_2);
};
void ThisCallBox::FUN_004ebd60(int val, undefined4 param_2)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0073578c;
  _DAT_00777c20 = param_2;
  DAT_00735da0 = DAT_00735da0 + 1;
  _DAT_00777c28 = 0x541389e5;
  _DAT_00777c2c = 0;
  _DAT_00777c24 = 0;
  _DAT_00777c1c = 0;
  _DAT_00777c10 = 0;
  if (DAT_0073578c != 0) {
    _DAT_00777c14 = ((undefined4)this);
    _DAT_00777c18 = ((undefined4)this);
    if ((val == 0) || (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x18);
    }
    FUN_004f08f0(*(undefined4 *)(iVar1 + 8),uVar3,0xff);
    DAT_00735d9c = 0;
    return;
  }
  DAT_00735d9c = 0;
  _DAT_00777c10 = 0;
  _DAT_00777c14 = ((undefined4)this);
  _DAT_00777c18 = ((undefined4)this);
  _DAT_00777c1c = 0;
  _DAT_00777c24 = 0;
  _DAT_00777c28 = 0x541389e5;
  _DAT_00777c2c = 0;
  return;
}
