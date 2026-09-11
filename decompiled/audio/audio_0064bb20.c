/* spd-match: far pct=4.35 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0064b4c0();
extern unsigned char *DAT_00713c54;
int unaff_retaddr;

int FUN_0064bb20(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 *unaff_retaddr;
  
  *param_3 = 0;
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    return -6;
  }
  if (iVar1 != puVar2[2]) {
    param_1[1] = -3;
    *param_1 = 0;
    return -3;
  }
  piVar3 = (**(int * (**)())*DAT_00713c54)(0x10,4,0xffffffff);
  if (piVar3 != (int *)0x0) {
    *piVar3 = (int)puVar2;
    puVar2 = (undefined4 *)*puVar2;
    piVar3[1] = 1;
    piVar3[2] = 0;
    piVar3[3] = 0;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      (*(code *)puVar2[2])(piVar3,unaff_ESI,puVar2[3]);
    }
    FUN_0064b4c0(unaff_ESI);
    *unaff_retaddr = piVar3;
    return 0;
  }
  return -1;
}
