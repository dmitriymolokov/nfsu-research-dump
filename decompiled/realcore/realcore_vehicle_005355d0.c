/* spd-match: far pct=5.49 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_006f1dd8;
extern int DAT_006f4c70;
extern int DAT_00744228;
extern unsigned char *PTR_s_FX_WIND_006f81c8;
extern void LAB_00684d4b(void);
void *ExceptionList;

void FUN_005355d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  LARGE_INTEGER local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d4b;
  local_c = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 4) = 1;
    QueryPerformanceCounter(&local_14);
    uVar3 = __allshr();
    puVar2[0x38] = uVar3;
    *(undefined1 *)((int)puVar2 + 0x11) = 0;
    puVar2[5] = param_2;
    FUN_0064b510(&param_1);
    FUN_0064b580();
    iVar4 = (**(code **)*param_1)(0x20,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    param_2 = iVar4;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar4 + 4);
      *puVar1 = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0x1000;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      iVar5 = FUN_0064c1a0(&DAT_00744228,puVar1,iVar4);
      if (iVar5 < 0) {
        FUN_0064c000(&PTR_s_FX_WIND_006f81c8);
        FUN_0064c1a0(&DAT_00744228,puVar1,iVar4);
      }
    }
    puVar2[0x3d] = iVar4;
    uStack_4 = 0xffffffff;
    uVar7 = 0;
    piVar6 = puVar2 + 0x40;
    do {
      piVar6[0x84] = uVar7 & 1;
      (**(code **)(*piVar6 + 0x10))(&DAT_006f4c70);
      (**(code **)(*piVar6 + 0x24))();
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x88;
    } while ((int)uVar7 < 2);
  }
  ExceptionList = local_c;
  return;
}
