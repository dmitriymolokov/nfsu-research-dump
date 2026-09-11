/* spd-match: far pct=8.63 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_int */
#include "ghidra_compat.h"

int __cdecl FUN_00401c80();
int __cdecl FUN_00524870();
int __cdecl FUN_00524da0();
int __cdecl FUN_00525410();
int __cdecl FUN_005256f0();
int __cdecl FUN_00564a50();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_00674898();
extern int DAT_006b669c;
extern int DAT_006f4f00;
extern int DAT_006f4f04;
extern unsigned char *DAT_007356a8;
extern unsigned char *DAT_007356ac;
extern int _DAT_006b66a0;
extern int _DAT_006cc7ac;
extern void LAB_00525679(void);
extern void LAB_00684d8b(void);
void *ExceptionList;

void __fastcall FUN_00525480(int *param_1)

{
  float10 fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  int *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  piVar4 = (int *)(unsigned int)(param_1[0xc1]);
  ExceptionList = &local_c;
  fVar5 = (float10)FUN_00525410();
  if (piVar4 == (int *)0x0) {
    local_14 = (int *)(unsigned int)((float)fVar5);
    fVar1 = (float10)(unsigned int)(DAT_006b669c);
    iVar2 = FUN_00524da0(0x40a00000);
    if (((iVar2 != 0) && (fVar1 < fVar5)) &&
       ((float)(unsigned int)(param_1[0xc3]) + _DAT_006cc7ac < (float)(unsigned int)(param_1[0x90]))) {
      FUN_00401c80(((float)(unsigned int)(local_14) - DAT_006b669c) / (_DAT_006b66a0 - DAT_006b669c),0,0x3f800000);
      FUN_00674898();
      iVar2 = DAT_006f4f04;
      local_14 = (int *)(unsigned int)((DAT_006f4f00 - DAT_006f4f04));
      piVar4 = param_1 + 0xc6;
      iVar3 = FUN_00674898();
      *piVar4 = iVar3 + iVar2;
      (**(code **)(*param_1 + 0x38))(piVar4,9);
      *piVar4 = (*(int *)(uintptr_t)(((uintptr_t)DAT_007356ac + 0x3e1c) * (uintptr_t)(*piVar4))) >> 0xf;
      FUN_00564a50(3);
      iVar2 = FUN_005256f0(0x18);
      iVar3 = 0;
      local_c = (void *)0x0;
      if (iVar2 != 0) {
        iVar2 = param_1[0x1b];
        uVar6 = 0;
        FUN_00564a50(3,iVar2,0);
        iVar3 = FUN_00524870(iVar2,uVar6);
      }
      param_1[0xc1] = iVar3;
      param_1[0xc3] = param_1[0x90];
      ExceptionList = local_14;
      return;
    }
    ExceptionList = local_c;
    return;
  }
  if (fVar5 <= (float10)(unsigned int)(DAT_006b669c)) {
    if (*piVar4 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    local_10 = local_14;
  }
  else {
    local_14 = (int *)0x0;
    if ((*piVar4 == 0) || (FUN_0064b7d0(&local_14), local_14 != (int *)0x1)) {
      if (*(char *)(DAT_007356a8 + 0x84) == '\0') {
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1[0xc1] + 8) = 0;
      if (*(int *)(unsigned int)(param_1[0xc1]) == 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_0064bc30((int *)(unsigned int)(param_1[0xc1] + 1));
      ExceptionList = local_c;
      return;
    }
    piVar4 = (int *)(unsigned int)(param_1[0xc1]);
    if (piVar4 == (int *)0x0) goto LAB_00525679;
    if (*piVar4 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_10);
    FUN_0064b580();
  }
  (**(code **)(*local_10 + 4))(piVar4);
  FUN_0064b5a0();
LAB_00525679:
  param_1[0xc1] = 0;
  ExceptionList = local_c;
  return;
}
