/* spd-match: far pct=16.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EBCB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f08f0();
int __cdecl FUN_004f3f90();
extern int DAT_0073578c;
extern int DAT_00735ba8;
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
void __fastcall FUN_004ebcb0(int val, char *param_1, int param_2)

{
  char cVar1;
  int iVar2;

  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  DAT_00735da0 = DAT_00735da0 + 1;
  uVar5 = 0;
  if ((param_2 == 0) && (DAT_00735ba8 = *param_1, DAT_00735ba8 != '\0')) {
    pcVar4 = &DAT_00735ba8;
    do {
      cVar1 = (param_1 + -0x735ba7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  iVar2 = DAT_0073578c;
  _DAT_00777c28 = 0;
  _DAT_00777c2c = 0;
  _DAT_00777c14 = 0;
  _DAT_00777c18 = 0;
  _DAT_00777c24 = 0;
  _DAT_00777c1c = 0;
  _DAT_00777c10 = 0;
  _DAT_00777c20 = param_2;
  if (DAT_0073578c != 0) {
    if (val != 0) {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      if (iVar3 != 0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x18);
      }
    }
    FUN_004f08f0(*(undefined4 *)(iVar2 + 8),uVar5,0xff);
  }
  DAT_00735d9c = 1;
  return;
}
