/* spd-match: far pct=14.46 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00406f00();
int __cdecl FUN_00407760();
extern unsigned char *DAT_007187c8;
extern int DAT_00736508;
extern char stack0x00000000;
extern char stack0xfffffd70;

void FUN_00406b10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int **ppiVar5;
  int *apiStack_2a0 [2];
  undefined4 uStack_288;
  int iStack_160;
  char acStack_15c [16];
  undefined1 auStack_14c [328];
  
  if (DAT_007187c8 != (int *)0x0) {
    apiStack_2a0[1] = DAT_007187c8;
    apiStack_2a0[0] = (int *)0x406b3a;
    (**(code **)(*DAT_007187c8 + 100))();
    apiStack_2a0[0] = (int *)0x0;
    iVar2 = (**(code **)(*DAT_007187c8 + 0x28))(DAT_007187c8,0x14,auStack_14c);
    if (iVar2 < 0) {
      if ((iVar2 == -0x7ff8fff4) || (iVar2 == -0x7ff8ffe2)) {
        (**(code **)(*DAT_007187c8 + 0x1c))(DAT_007187c8);
        return;
      }
    }
    else {
      puVar3 = (undefined1 *)0x0;
      if (&stack0x00000000 != (undefined1 *)0x290) {
        pcVar4 = acStack_15c;
        while( true ) {
          uVar1 = *(undefined4 *)(pcVar4 + -4);
          ppiVar5 = apiStack_2a0;
          for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppiVar5 = (int *)0x0;
            ppiVar5 = ppiVar5 + 1;
          }
          apiStack_2a0[0] = (int *)0x13c;
          iVar2 = (**(code **)(*DAT_007187c8 + 0x38))(DAT_007187c8,apiStack_2a0,uVar1,1);
          if ((-1 < iVar2) && (*pcVar4 < '\0')) break;
          puVar3 = puVar3 + 1;
          pcVar4 = pcVar4 + 0x14;
          if (&stack0xfffffd70 <= puVar3) {
            return;
          }
        }
        if ((&iStack_160)[(int)puVar3 * 5] != 1) {
          FUN_00406f00(param_1,uStack_288);
          return;
        }
        *(undefined4 *)(param_1 + 0x23c) = 0;
        DAT_00736508 = 0;
        FUN_00407760(0);
        FUN_00407760(1);
      }
    }
  }
  return;
}
