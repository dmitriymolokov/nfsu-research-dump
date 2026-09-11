/* spd-match: far pct=9.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00628c90();
int __cdecl FUN_00629140();
int __cdecl FUN_00634150();
extern int DAT_006cc7a4;
extern char stack0xffffffc8;
extern char stack0xffffffd8;
int unaff_retaddr;

void __fastcall FUN_00633640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  undefined4 *unaff_retaddr;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  piVar6 = (int *)FUN_00634150();
  iVar1 = *piVar6;
  cVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  if (cVar5 != '\0') {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(float *)(param_1 + 0x28) == DAT_006cc7a4) {
      *unaff_retaddr = *(undefined4 *)(iVar1 + 0x10);
      unaff_retaddr[1] = uVar2;
      unaff_retaddr[2] = uVar3;
      unaff_retaddr[3] = uVar4;
    }
    else {
      FUN_00628c90(iVar1,0);
      cVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(uStack_4,iVar1,0);
      if (cVar5 != '\0') {
        FUN_00629140(*(undefined4 *)(param_1 + 0x28),&stack0xffffffc8,&stack0xffffffd8,uStack_c);
        return;
      }
    }
  }
  return;
}
