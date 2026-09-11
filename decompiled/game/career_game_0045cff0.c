/* spd-match: far pct=4.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00456e90();
int __cdecl FUN_0045ae10();
int __cdecl FUN_0045afd0();

undefined4 FUN_0045cff0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_ESI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  puVar2 = param_2;
  if (((*unaff_ESI == 1) && (10 < (int)param_2[0xe5])) && ((int)param_2[0xe5] < 0x11)) {
    FUN_0045ae10(unaff_ESI,param_1,param_2,0,0);
    return 1;
  }
  if ((int *)param_2[0xea] == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)param_2[0xea] + 4))();
  }
  uVar1 = puVar2[0xe4];
  iVar5 = FUN_00456e90(*puVar2,uVar4,0xff,0xff);
  if (iVar5 != -1) {
    uStack_1c = puVar2[0xe3];
    uStack_20 = 0;
    param_2 = (undefined4 *)0x47c34f80;
    uStack_10 = 1;
    uStack_c = 0;
    uStack_4 = 0;
    uStack_8 = 0;
    uStack_18 = uVar1;
    iStack_14 = iVar5;
    cVar3 = FUN_0045afd0(&uStack_10,0,&uStack_20,&param_3,&param_2,0,param_3,0);
    if (cVar3 != '\0') {
      puVar2[0xe5] = iVar5;
      unaff_ESI[1] = 0;
      *(undefined1 *)(unaff_ESI + 3) = 0;
      unaff_ESI[2] = 0;
      *unaff_ESI = 1;
      return 1;
    }
  }
  if (*unaff_ESI == 0) {
    *unaff_ESI = 1;
    unaff_ESI[1] = 0;
    *(undefined1 *)(unaff_ESI + 3) = 0;
    unaff_ESI[2] = 0;
  }
  FUN_0045ae10(unaff_ESI,param_1,puVar2,0,0);
  return 0;
}
