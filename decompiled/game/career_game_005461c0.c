/* spd-match: far pct=7.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0053e400();
int __cdecl FUN_00545c10();
extern int DAT_0073551c;
extern unsigned char *DAT_00740418;
extern void LAB_0054621d(void);

int FUN_005461c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = DAT_00740418;
  if (param_1 != 0) {
    piVar5 = (int *)FUN_0040a880();
    for (; piVar1 != piVar5; piVar1 = (int *)*piVar1) {
      if (param_3 == 0) {
        if (((piVar1[0x1c] != 0) && (iVar6 = *(int *)(piVar1[0x1c] + 0x74), iVar6 != 0)) &&
           (iVar6 = FUN_0053e400(param_1,iVar6,0), iVar6 != 0)) {
          iVar6 = *(int *)(iVar6 + 4);
          goto LAB_0054621d;
        }
      }
      else {
        iVar6 = FUN_00545c10(param_1);
LAB_0054621d:
        if (iVar6 != 0) {
          iVar2 = *piVar1;
          piVar5 = (int *)piVar1[1];
          *piVar5 = iVar2;
          *(int **)(iVar2 + 4) = piVar5;
          piVar4 = DAT_00740418;
          piVar5 = DAT_00740418 + 1;
          DAT_00740418 = piVar1;
          *piVar5 = (int)piVar1;
          piVar1[1] = (int)&DAT_00740418;
          *piVar1 = (int)piVar4;
          *(undefined1 *)(iVar6 + 0x53) = 1;
          return iVar6;
        }
      }
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_0073551c;
    if (DAT_0073551c == 0) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return iVar6;
}
