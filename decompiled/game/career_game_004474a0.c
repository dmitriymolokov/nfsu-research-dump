/* spd-match: far pct=17.03 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_00421170();
int __cdecl FUN_004f3e50();
int __cdecl FUN_0057c3b0();
int __cdecl FUN_0057c5a0();
extern int DAT_006f227c;
extern int DAT_00734574;
extern int DAT_0073459c;
extern int DAT_007345a0;
extern int DAT_007345a4;
extern int DAT_007361f8;

void FUN_004474a0(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if (DAT_007361f8 != 0) {
    uVar7 = FUN_00421170(DAT_007361f8);
  }
  uVar6 = FUN_004f3e50();
  uVar4 = DAT_00734574;
  uVar3 = DAT_006f227c;
  uVar8 = ((int)DAT_00734574) + ((int)DAT_006f227c) + uVar6 + uVar7;
  bVar2 = false;
  if (DAT_0073459c == 0) {
    if (DAT_007345a0 == 0) {
      return;
    }
    FUN_0057c3b0(uVar8 & 0xffff,0x10,4);
  }
  else {
    sVar5 = FUN_0057c5a0(4);
    if (sVar5 != (short)uVar8) {
      bVar2 = true;
    }
  }
  if (DAT_0073459c == 0) {
    if ((((DAT_007345a0 != 0) && (FUN_0057c3b0(uVar7 & 0xffff,0x10,4), DAT_007345a0 != 0)) &&
        (FUN_0057c3b0(uVar6 & 0xffff,0x10,4), DAT_007345a0 != 0)) &&
       (FUN_0057c3b0(uVar3 & 0xffff,0x10,4), DAT_007345a0 != 0)) {
      FUN_0057c3b0(uVar4 & 0xffff,0x10,4);
    }
  }
  else {
    FUN_0057c5a0(4);
    FUN_0057c5a0(4);
    FUN_0057c5a0(4);
    FUN_0057c5a0(4);
  }
  if (!bVar2) {
    return;
  }
  if (DAT_0073459c != 0) {
    DAT_007345a4 = 0;
    DAT_0073459c = 0;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
