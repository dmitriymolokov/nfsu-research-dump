/* spd-match: far pct=22.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00546310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00730028;
extern int DAT_00730078;
extern int DAT_00730079;
extern int DAT_0073007a;
extern int DAT_0073007b;
extern int DAT_0073009c;
extern int DAT_0073009d;
extern int DAT_0073009e;
extern int DAT_0073009f;
extern int DAT_007300c0;
extern int DAT_007300c1;
extern int DAT_007300c2;
extern int DAT_007300c3;
extern int DAT_007300e4;
extern int DAT_007300e5;
extern int DAT_007300e6;
extern int DAT_007300e7;
extern int DAT_00735510;
extern int DAT_00735514;
extern int DAT_00735518;
extern int _DAT_00730048;
extern int _DAT_0073004c;
extern int _DAT_00730050;
extern int _DAT_00730054;
extern int _DAT_00730058;
extern int _DAT_0073005c;
extern int _DAT_00730060;
extern int _DAT_00730064;
extern int _DAT_00730068;
extern int _DAT_0073006c;
extern int _DAT_00730070;
extern int _DAT_00730074;
extern int _DAT_0073007c;
extern int _DAT_00730080;
extern int _DAT_00730084;
extern int _DAT_00730088;
extern int _DAT_0073008c;
extern int _DAT_00730090;
extern int _DAT_00730094;
extern int _DAT_00730098;
extern int _DAT_007300a0;
extern int _DAT_007300a4;
extern int _DAT_007300a8;
extern int _DAT_007300ac;
extern int _DAT_007300b0;
extern int _DAT_007300b4;
extern int _DAT_007300b8;
extern int _DAT_007300bc;
extern int _DAT_007300c4;
extern int _DAT_007300c8;
extern int _DAT_007300cc;
extern int _DAT_007300d0;
extern int _DAT_007300d4;
extern int _DAT_007300d8;
extern int _DAT_007300dc;
extern int _DAT_007300e0;
extern int _DAT_007300e8;
extern int _DAT_007300ec;
extern int _DAT_00740400;
extern int _DAT_00740404;
extern int _DAT_00740408;
void __fastcall FUN_00546310(int val)

{

  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = (int *)0x0;
  DAT_00735518 = (int *)0x0;
  if ((val != 0) && (piVar1 = DAT_00735510, iVar3 = DAT_00735514, 0 < DAT_00735514)) {
    do {
      if (piVar1[1] == val) {
        piVar2 = piVar1;
      }
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 0x44;
    } while (iVar3 != 0);
    DAT_00735518 = piVar2;
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 2) {
        _DAT_00740400 = piVar2[8];
        _DAT_00740404 = piVar2[9];
        _DAT_00740408 = piVar2[10];
      }
      else {
        DAT_00735518 = (int *)0x0;
        _DAT_00740400 = 0;
        _DAT_00740404 = 0;
        _DAT_00740408 = 0;
      }
      puVar4 = &DAT_00730028;
      for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      _DAT_00730048 = 0;
      _DAT_0073004c = 0;
      _DAT_00730050 = 0;
      _DAT_00730054 = 0;
      _DAT_00730058 = 0;
      _DAT_0073005c = 0;
      _DAT_00730070 = 0;
      _DAT_00730074 = 0;
      _DAT_00730060 = 0;
      _DAT_0073007c = 0;
      _DAT_00730084 = 0;
      _DAT_007300a0 = 0;
      _DAT_007300c4 = 0;
      DAT_00730028 = 2;
      _DAT_00730064 = 1;
      _DAT_00730068 = 0x3f800000;
      _DAT_0073006c = 0x42700000;
      DAT_00730078 = 0xff;
      DAT_00730079 = 200;
      DAT_0073007a = 100;
      DAT_0073007b = 0x80;
      _DAT_00730080 = 0;
      _DAT_00730088 = 1;
      _DAT_0073008c = 0x3f000000;
      _DAT_00730090 = 0x43a00000;
      _DAT_00730094 = 0;
      _DAT_00730098 = 0;
      DAT_0073009c = 0x82;
      DAT_0073009d = 0x9f;
      DAT_0073009e = 0x7a;
      DAT_0073009f = 0x80;
      _DAT_007300a4 = 0;
      _DAT_007300a8 = 2;
      _DAT_007300ac = 1;
      _DAT_007300b0 = 0x3f333333;
      _DAT_007300b4 = 0x44480000;
      _DAT_007300b8 = 0xc1100000;
      _DAT_007300bc = 0x41e00000;
      DAT_007300c0 = 0x9f;
      DAT_007300c1 = 0x7a;
      DAT_007300c2 = 0x4b;
      DAT_007300c3 = 0x80;
      _DAT_007300c8 = 0x3e4ccccd;
      _DAT_007300cc = 2;
      _DAT_007300d0 = 1;
      _DAT_007300d4 = 0x3e99999a;
      _DAT_007300d8 = 0x44480000;
      _DAT_007300dc = 0x41e00000;
      _DAT_007300e0 = 0x41100000;
      DAT_007300e4 = 0xa6;
      DAT_007300e5 = 0x77;
      DAT_007300e6 = 0x48;
      DAT_007300e7 = 0x80;
      _DAT_007300e8 = 0x4000;
      _DAT_007300ec = 0x3e4ccccd;
      return;
    }
  }
  _DAT_00740400 = 0;
  _DAT_00740404 = 0;
  _DAT_00740408 = 0;
  return;
}
