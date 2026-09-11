/* spd-match: far pct=4.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D5580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f68c0();
int __cdecl FUN_004f9240();
int __cdecl FUN_00520e90();
int __cdecl FUN_0059fb80();
extern int DAT_007356a8;
extern int DAT_00758b58;
void __fastcall FUN_004d5580(int val, int param_1)

{
  char cVar1;

  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char local_10 [16];
  
  iVar3 = *(int *)(param_1 + 0xa8);
  iVar7 = *(int *)(iVar3 + 0x10);
  piVar2 = &DAT_00758b58;
  uVar6 = 0;
  do {
    piVar4 = piVar2;
    if ((*piVar2 == iVar7) || (piVar4 = piVar2 + 2, piVar2[2] == iVar7)) break;
    uVar6 = uVar6 + 0x10;
    piVar2 = piVar2 + 4;
  } while (uVar6 < 0xd0);
  uVar6 = (uint)*(byte *)(piVar4 + 1);
  if (val == -0x6edfbf62) {
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < 0) {
      uVar6 = 3;
    }
  }
  else if ((val == -0x4a68e40f) && (uVar6 = uVar6 + 1, 3 < uVar6)) {
    uVar6 = 0;
  }
  *(char *)(piVar4 + 1) = (char)uVar6;
  *(char *)(iVar3 + 0x14) = (char)uVar6;
  switch((char)piVar4[1]) {
  case '\0':
    break;
  case '\x01':
    break;
  case '\x02':
    break;
  case '\x03':;
  }
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar7 = 0x10;
  pcVar5 = local_10;
  do {
    cVar1 = pcVar5[iVar3 - (int)local_10];
    iVar7 = iVar7 + -1;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar7 != 0);
  FUN_004f68c0(0x80,local_10);
  FUN_004f9240(param_1 + 0x98);
  FUN_00520e90(DAT_007356a8,0,1);
  return;
}
