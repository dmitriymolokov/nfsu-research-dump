/* spd-match: far pct=2.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0070100c;
extern unsigned char *DAT_00701020;
extern unsigned char *DAT_0071b7b0;
extern int DAT_0071b7b4;
extern int DAT_0071b7b8;
extern int DAT_0071b7bc;
extern int DAT_0071b7c0;
extern unsigned char *DAT_00736368;
extern int _DAT_0071b7b0;
int unaff_EDI;

void FUN_00410c50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  int iStack_1c;
  
  _DAT_0071b7b0 = 0;
  DAT_0071b7b4 = 0;
  DAT_0071b7b8 = 0;
  DAT_0071b7bc = 0;
  iStack_1c = 0x16;
  DAT_0071b7c0 = 0;
  iVar1 = (**(code **)(*DAT_00736368 + 0x18))(DAT_00736368,0);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*DAT_00736368 + 0x1c))(DAT_00736368,0,0x16,iVar3,&iStack_1c);
      if (iVar2 == 0) {
        iVar2 = 0;
        do {
          if ((iStack_1c == *(int *)(&DAT_0070100c + iVar2)) &&
             (unaff_EDI == *(int *)(&DAT_00701020 + iVar2))) {
            *(undefined4 *)(&DAT_0071b7b0 + iVar2) = 1;
          }
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x14);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}
