/* spd-match: far pct=20.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0047b6d0();
int __cdecl FUN_0061eee0();
extern int DAT_00737300;
extern unsigned char *DAT_00737304;
extern unsigned char *PTR_FUN_006dfa9c;

undefined4 FUN_005a4de0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*param_1 == 0xe34009) {
    puVar3 = _malloc(0x24);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[8] = 0;
    }
    uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
    iVar1 = (param_1[1] - uVar6) + 8 + (int)param_1;
    iVar4 = (*(code *)PTR_FUN_006dfa9c)(0x2c,"EAGL::DynamicLoader CAnimSkeleton");
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0061eee0(uVar6,iVar1,0);
    }
    puVar3[6] = uVar5;
    puVar3[7] = iVar1;
    puVar3[5] = 1;
    FUN_0047b6d0();
    *DAT_00737304 = puVar3;
    puVar2 = puVar3;
    puVar3[1] = DAT_00737304;
    DAT_00737304 = puVar2;
    *puVar3 = &DAT_00737300;
    return 1;
  }
  return 0;
}
