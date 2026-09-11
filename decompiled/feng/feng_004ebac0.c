/* spd-match: far pct=21.28 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EBAC0 */
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
void __fastcall FUN_004ebac0(int val, char *param_1, int param_2, undefined4 param_3)

{
  char cVar1;
  int iVar2;

  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  DAT_00735da0 = DAT_00735da0 + 1;
  if ((param_2 == 0) && (DAT_00735ba8 = *param_1, DAT_00735ba8 != '\0')) {
    pcVar5 = &DAT_00735ba8;
    do {
      cVar1 = (param_1 + -0x735ba7)[(int)pcVar5];
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
  }
  iVar2 = DAT_0073578c;
  _DAT_00777c28 = 0x639;
  _DAT_00777c2c = 0;
  _DAT_00777c14 = param_3;
  _DAT_00777c18 = param_3;
  _DAT_00777c24 = 0;
  _DAT_00777c1c = 0;
  _DAT_00777c10 = 0;
  if (DAT_0073578c != 0) {
    _DAT_00777c20 = param_2;
    if ((val == 0) || (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 0x18);
    }
    FUN_004f08f0(*(undefined4 *)(iVar2 + 8),uVar4,0xff);
    DAT_00735d9c = 0;
    DAT_00735d9d = 1;
    return;
  }
  DAT_00735d9c = 0;
  DAT_00735d9d = 1;
  _DAT_00777c10 = 0;
  _DAT_00777c1c = 0;
  _DAT_00777c20 = param_2;
  _DAT_00777c24 = 0;
  _DAT_00777c28 = 0x639;
  _DAT_00777c2c = 0;
  return;
}
