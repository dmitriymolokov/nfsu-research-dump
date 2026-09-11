/* spd-match: far pct=7.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_00429ba0();
int __cdecl FUN_0042a120();
int __cdecl FUN_004ad8d0();
int __cdecl FUN_0056dc30();
int __cdecl FUN_00570b90();
int __cdecl FUN_00571440();
extern int DAT_00734608;
extern int DAT_0073460c;
extern unsigned char *DAT_007361bc;
extern unsigned char *DAT_007361c0;
extern unsigned char *DAT_007361f8;
extern unsigned char *DAT_007404a4;
extern int _DAT_0073462c;

void FUN_00571050(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_218;
  undefined1 local_210 [256];
  undefined1 local_110 [268];
  
  iVar1 = *(int *)(param_1 + 0x40);
  _DAT_0073462c = 0;
  if (DAT_007361f8 != (int *)0x0) {
    piVar7 = (int *)*DAT_007361f8;
    local_218 = 99;
    if (piVar7 != DAT_007361f8) {
      do {
        if ((((*(int **)(iVar1 + 0x280) == piVar7) || ((char)piVar7[0x134] == '\0')) ||
            (iVar5 = FUN_00570b90(param_1), iVar5 != 0)) ||
           (((1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f) & piVar7[0x14d]) == 0 ||
            (local_218 < 1)))) {
          if (piVar7[6] != 0) {
            iVar5 = *(int *)(piVar7[6] + 0x18);
            puVar2 = (undefined4 *)(&DAT_007404a4)[iVar5 * 0x18];
            if (((puVar2 != &DAT_007404a4 + iVar5 * 0x18) && (puVar2 != (undefined4 *)0x0)) &&
               (puVar2 != (undefined4 *)0x4)) {
              if ((puVar2 == &DAT_007404a4 + iVar5 * 0x18) || (puVar2 == (undefined4 *)0x0)) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = puVar2 + -1;
              }
              cVar4 = (**(code **)(*piVar6 + 0x24))();
              if (cVar4 == '\0') {
                FUN_00571440(piVar7[0x135],piVar7);
              }
            }
          }
        }
        else {
          iVar5 = piVar7[0x135];
          FUN_00571440(iVar5,piVar7);
          local_218 = local_218 + -1;
          FUN_004010a0(local_110,0x40,4,FUN_004ad8d0);
          FUN_004010a0(local_210,0x40,4,FUN_004ad8d0);
          FUN_0042a120(piVar7);
          piVar3 = piVar7 + 0x138;
          piVar6 = piVar7 + 0x148;
          if ((piVar7[0x14c] & 1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f)) == 0) {
            piVar3 = piVar7 + 0x24;
            piVar6 = piVar7 + 0x14;
          }
          FUN_0056dc30(iVar5,param_1,piVar6,piVar3,local_110,local_210,0,0,0,DAT_0073460c,
                       DAT_00734608,0);
          if (((DAT_007361bc == 0) ||
              (((iVar5 = DAT_007361bc, *(int *)(param_1 + 4) != *(int *)(DAT_007361bc + 0x18) &&
                ((DAT_007361c0 == 0 ||
                 (iVar5 = DAT_007361c0, *(int *)(param_1 + 4) != *(int *)(DAT_007361c0 + 0x18)))))
               || (iVar5 = *(int *)(iVar5 + 0x60), iVar5 == 0)))) || ((iVar5 != 6 && (iVar5 != 7))))
          {
            FUN_00429ba0(param_1);
          }
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != DAT_007361f8);
    }
  }
  return;
}
