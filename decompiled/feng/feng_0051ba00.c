/* spd-match: far pct=11.02 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0051BA00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00744ab0;
extern unsigned char *DAT_00744ab4;
extern int DAT_00762de9;

struct ThisCallBox {
  void FUN_0051ba00(int val, int param_2, int param_3);
};
void ThisCallBox::FUN_0051ba00(int val, int param_2, int param_3)

{
  byte *pbVar1;

  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (((0 < ((int)this)) && ((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2 < val / ((int)this))) &&
     (0x514 < param_2)) {
    pcVar5 = "MAGAZINE_TASK_1";
    iVar4 = -1;
    uVar2 = 0x4d;
    do {
      iVar4 = iVar4 * 0x21 + uVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar5 = pcVar5 + 1;
    } while (*pbVar1 != 0);
    iVar3 = 0;
    do {
      if ((&DAT_00744ab0)[iVar3 * 2] == iVar4) {
        (&DAT_00762de9)[*(int *)(&DAT_00744ab4 + iVar3 * 8) * 0x454] = 1;
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1b);
    DAT_00762de9 = 1;
  }
  return;
}
