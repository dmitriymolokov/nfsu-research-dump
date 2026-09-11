/* spd-match: far pct=12.73 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_00673533(...);
extern void LAB_005b21b5(...);
extern void LAB_005b21ce(...);
extern void LAB_005b21d3(...);
extern void LAB_005b2217(...);

struct ThisCallBox {
  void FUN_005b212b(undefined4 param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_005b212b(undefined4 param_2, undefined4 *param_3) {
  char *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 local_104 [256];
  
  switch(*param_3) {
  case 0:
    break;
  case 1:
    puVar3 = param_3 + 2;
    goto LAB_005b21ce;
  case 2:
    uVar2 = CONCAT44(param_3[2],"integer \'%u\'");
    goto LAB_005b21d3;
  case 3:
    uVar2 = CONCAT44(param_3[2],"integer \'%dl\'");
    goto LAB_005b21d3;
  case 4:
    uVar2 = CONCAT44(param_3[2],"integer \'%uul\'");
    goto LAB_005b21d3;
  case 5:
    uVar2 = *(undefined8 *)(param_3 + 2);
    pcVar1 = "float \'%g\'";
    goto LAB_005b21b5;
  case 6:
    uVar2 = *(undefined8 *)(param_3 + 2);
    pcVar1 = "float \'%gh\'";
    goto LAB_005b21b5;
  case 7:
    uVar2 = *(undefined8 *)(param_3 + 2);
    pcVar1 = "float \'%gf\'";
    goto LAB_005b21b5;
  case 8:
    uVar2 = *(undefined8 *)(param_3 + 2);
    pcVar1 = "float \'%gl\'";
LAB_005b21b5:
    FUN_00673533(local_104,0x100,pcVar1,uVar2);
    goto LAB_005b2217;
  case 9:
    puVar3 = (undefined4 *)param_3[2];
LAB_005b21ce:
    uVar2 = CONCAT44(puVar3,"token \'%s\'");
LAB_005b21d3:
    FUN_00673533(local_104,0x100,uVar2);
    goto LAB_005b2217;
  case 10:
    break;
  default:
    break;
  case 0xc:
    break;
  case 0xd:;
  }
  FUN_00673533(local_104,0x100);
LAB_005b2217:
  FUN_005b1f01(((undefined4)this),param_3,param_2,"syntax error : unexpected %s",local_104);
  return;
}
