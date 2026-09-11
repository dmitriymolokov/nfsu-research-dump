/* spd-match: far pct=10.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_00713d9a;
extern int DAT_00713db7;
extern unsigned char *DAT_00713db8;
extern int DAT_00714060;
extern int DAT_00714068;
extern unsigned char *DAT_00714070;
extern int DAT_0071407c;

int FUN_00653de0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  if (DAT_00714068 != 0) {
    piVar2 = DAT_00714070;
    iVar1 = (**(code **)(*DAT_00714070 + 0x10))(DAT_00714070,local_4,0);
    if (iVar1 == 0) {
      iVar1 = DAT_00714060 - ((uint)piVar2 >> 1) / ((uint)DAT_00713db8 + (uint)DAT_00713db7);
      if (iVar1 < 0) {
        iVar1 = iVar1 + DAT_0071407c;
      }
      return (iVar1 * 1000) / (int)(uint)DAT_00713d9a;
    }
  }
  return 0;
}
