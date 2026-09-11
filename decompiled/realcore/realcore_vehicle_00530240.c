/* spd-match: far pct=16.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0052fb00();
int __cdecl FUN_0052fb30();
extern int DAT_006f1dd8;
extern void LAB_00530270(void);

void __fastcall FUN_00530240(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int unaff_ESI;
  int *piVar4;
  
  if (DAT_006f1dd8 != 0) {
    piVar1 = (int *)(unaff_ESI + 0x24);
    for (piVar4 = *(int **)(unaff_ESI + 0x24); (piVar4 != piVar1 && (piVar4 != (int *)0x0));
        piVar4 = (int *)*piVar4) {
    }
    if (*piVar1 == 0) goto LAB_00530270;
    piVar4 = (int *)(*piVar1 + -0x210);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(unaff_ESI + -0x1ec);
      }
      if (piVar4 == piVar3) {
        return;
      }
      if ((piVar4[0x87] == param_2) && (*(char *)((int)piVar4 + 0x351) == '\0')) break;
      if (piVar4[0x84] == 0) {
LAB_00530270:
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(piVar4[0x84] + -0x210);
      }
    }
    if ((char)piVar4[0x86] == '\0') {
      (**(code **)(*piVar4 + 0x2c))(param_2);
    }
    if ((*(char *)((int)piVar4 + 0x34e) == '\0') && (cVar2 = FUN_0052fb30(unaff_ESI), cVar2 == '\0')
       ) {
      cVar2 = (**(code **)(*piVar4 + 0x44))();
      if (cVar2 == '\0') {
                    
                    
        (**(code **)(*piVar4 + 0x4c))();
        return;
      }
      FUN_0052fb00();
    }
  }
  return;
}
