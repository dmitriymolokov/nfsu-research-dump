/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EB950 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f08f0();
int __cdecl FUN_004f3f90();
extern int DAT_0073578c;
extern int DAT_00735ba8;
extern int DAT_00735d9c;
extern int DAT_00735d9d;
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
void __fastcall FUN_004eb950(int val, undefined4 *param_1)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0073578c;
  DAT_00735ba8 = 0;
  _DAT_00777c28 = param_1[6];
  _DAT_00777c2c = param_1[7];
  _DAT_00777c14 = param_1[1];
  _DAT_00777c18 = param_1[2];
  _DAT_00777c20 = param_1[4];
  _DAT_00777c24 = param_1[5];
  _DAT_00777c1c = param_1[3];
  _DAT_00777c10 = *param_1;
  DAT_00735da0 = DAT_00735da0 + 1;
  if (DAT_0073578c != 0) {
    if ((val == 0) || (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x18);
    }
    FUN_004f08f0(*(undefined4 *)(iVar1 + 8),uVar3,0xff);
    DAT_00735d9c = 0;
    DAT_00735d9d = 0;
    return;
  }
  DAT_00735ba8 = 0;
  DAT_00735d9c = 0;
  DAT_00735d9d = 0;
  return;
}
