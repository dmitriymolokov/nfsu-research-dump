/* spd-match: far pct=2.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A0B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f42f0();
int __cdecl FUN_0051ad30();
extern int DAT_00744ab0;
extern unsigned char *DAT_00744ab4;
extern void LAB_005a0b73(void);
void __fastcall FUN_005a0b40(int obj, int param_1)

{
  byte *pbVar1;

  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = "MAGAZINE_TASK_1";
  uVar2 = 0x4d;
  iVar5 = -1;
  do {
    iVar5 = iVar5 * 0x21 + uVar2;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar2 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  iVar3 = 0;
  do {
    if ((&DAT_00744ab0)[iVar3 * 2] == iVar5) {
      iVar5 = *(int *)(&DAT_00744ab4 + iVar3 * 8);
      goto LAB_005a0b73;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1b);
  iVar5 = 0;
LAB_005a0b73:
  param_1 = (iVar5 + obj) * 0x454 + param_1;
  *(undefined1 *)(param_1 + 0x13a9) = 1;
  if ((((obj == 0xf) || (obj == 0xe)) || (obj == 0xd)) || (obj == 0xc)) {
    uVar4 = FUN_004f42f0("MAGAZINE_TASK_%d",obj + 1,param_1 + 0x13a8);
    FUN_0051ad30(uVar4);
  }
  return;
}
