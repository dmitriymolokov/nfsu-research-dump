/* spd-match: far pct=7.07 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006f1dd8;
extern void LAB_005300ac(void);

void __fastcall FUN_00530090(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  if (DAT_006f1dd8 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_005300ac;
    piVar3 = (int *)(*(int *)(param_1 + 0x24) + -0x210);
    while( true ) {
      if (param_1 == -0x24) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(param_1 + -0x1ec);
      }
      if (piVar3 == piVar2) {
        return;
      }
      if (piVar3[0x87] == param_2) break;
      if (piVar3[0x84] == 0) {
LAB_005300ac:
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[0x84] + -0x210);
      }
    }
    if (((char)piVar3[0xd4] == '\0') && (cVar1 = (**(code **)(*piVar3 + 0x48))(), cVar1 != '\0')) {
      *(undefined1 *)((int)piVar3 + 0x21b) = 1;
    }
  }
  return;
}
