/* spd-match: far pct=13.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_00744220;
extern int _DAT_0073565c;
extern unsigned char *PTR_s_ENV_STATIC_006f81c0;
extern void LAB_00684e6b(void);
int unaff_EBP;
int unaff_EDI;
void *ExceptionList;

void FUN_00524f30(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *unaff_EBP;
  int unaff_EDI;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684e6b;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(unaff_EDI + 0x300);
  ExceptionList = &pvStack_c;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    if (*piVar2 != 0) {
      ExceptionList = &pvStack_c;
      FUN_0064bbd0();
    }
    FUN_0064b510(&param_1);
    FUN_0064b580();
    (**(code **)(*param_1 + 4))(piVar2);
    FUN_0064b5a0();
  }
  *(undefined4 *)(unaff_EDI + 0x300) = 0;
  FUN_0064b510(&local_10);
  FUN_0064b580();
  iVar3 = (**(code **)*local_10)(0x18,4,0xffffffff);
  FUN_0064b5a0();
  local_10 = (undefined4 *)0x0;
  puStack_8 = (undefined1 *)iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if ((int)piVar4 < 0) {
      piVar4 = (int *)0x0;
    }
    else if (0x32 < (int)piVar4) {
      piVar4 = (int *)0x32;
    }
    puVar1 = (undefined4 *)(iVar3 + 4);
    *puVar1 = piVar4;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0x1000;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar5 = FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
    if (iVar5 < 0) {
      FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
      FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
    }
  }
  _DAT_0073565c = *(undefined4 *)(unaff_EDI + 0x240);
  *(int *)(unaff_EDI + 0x300) = iVar3;
  *(undefined4 *)(unaff_EDI + 0x310) = _DAT_0073565c;
  FUN_00532640();
  FUN_00532670(0x3f800000,0x3f800000,1,0);
  *(undefined4 *)(unaff_EDI + 0x2ec) = 0x3f800000;
  *(undefined1 *)(unaff_EDI + 0x2f4) = 0;
  ExceptionList = unaff_EBP;
  return;
}
