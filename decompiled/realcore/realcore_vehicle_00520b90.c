/* spd-match: far pct=11.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_int */
#include "ghidra_compat.h"

int __cdecl FUN_0051c5d0();
int __cdecl FUN_005256f0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
int __cdecl FUN_00674898();
extern int DAT_007349c8;
extern unsigned char *DAT_007356a8;
extern int DAT_007441f8;
extern int _DAT_006ccb64;
extern int _DAT_006ccb68;
extern int _DAT_006ccb6c;
extern int _DAT_007301d0;
extern unsigned char *PTR_s_FEDriveOn_006f81a8;
extern void LAB_00520e72(void);
extern void LAB_00684e2b(void);
void *ExceptionList;

void __fastcall FUN_00520b90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_18;
  LARGE_INTEGER local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  QueryPerformanceCounter(&local_14);
  uVar2 = DAT_007349c8;
  iVar3 = __allshr();
  local_18 = (int *)(unsigned int)((iVar3 - *(int *)(param_1 + 0x94)));
  if ((int)local_18 < 0) {
    local_18 = (int *)0x0;
  }
  local_14.s.LowPart = 1 << ((byte)uVar2 & 0x1f);
  local_18 = (int *)(unsigned int)(((float)(int)local_14.s.LowPart * (float)(int)local_18 * _DAT_007301d0));
  if (*(int *)(unsigned int)((param_1 + 0x90)) == 1) {
    if ((float)(unsigned int)(local_18) < _DAT_006ccb6c) {
      ExceptionList = local_c;
      return;
    }
    iVar3 = *(int *)(unsigned int)((param_1 + 0x8c));
    if (iVar3 == 0) {
      piVar4 = (int *)FUN_005256f0(0x14);
      local_4 = 0;
      local_14.s.LowPart = (DWORD)piVar4;
      if (piVar4 == (int *)0x0) {
        local_4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      else {
        iVar3 = *(int *)(unsigned int)((param_1 + 0x98));
        piVar1 = piVar4 + 1;
        *piVar1 = 0x32;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        piVar4[2] = iVar3;
        piVar4[3] = 0x1000;
        piVar4[4] = 0;
        iVar3 = FUN_0064c1a0(&DAT_007441f8,piVar1,piVar4);
        if (iVar3 < 0) {
          FUN_0064c000(&PTR_s_FEDriveOn_006f81a8);
          FUN_0064c1a0(&DAT_007441f8,piVar1,piVar4);
        }
        local_4 = 0xffffffff;
        *(int **)(unsigned int)((param_1 + 0x8c)) = piVar4;
      }
    }
    else {
      if (*(char *)(DAT_007356a8 + 0x84) == '\0') {
        iVar5 = *(int *)(unsigned int)((param_1 + 0x98));
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        *(int *)(iVar3 + 8) = iVar5;
      }
      else {
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      if (**(int **)(unsigned int)((param_1 + 0x8c)) != 0) {
        FUN_0064bc30(*(int **)(unsigned int)((param_1 + 0x8c) + 1));
      }
    }
  }
  if (*(int *)(unsigned int)((param_1 + 0x90)) != 2) {
    ExceptionList = local_c;
    return;
  }
  piVar4 = *(int **)(unsigned int)((param_1 + 0x8c));
  if ((piVar4 != (int *)0x0) && (*(char *)(DAT_007356a8 + 0x84) != '\0')) {
    piVar4[2] = 0;
    if (**(int **)(unsigned int)((param_1 + 0x8c)) == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_0064bc30(*(int **)(unsigned int)((param_1 + 0x8c) + 1));
    ExceptionList = local_c;
    return;
  }
  if ((float)(unsigned int)(local_18) < _DAT_006ccb68) {
    ExceptionList = local_c;
    return;
  }
  if (_DAT_006ccb64 <= (float)(unsigned int)(local_18)) {
    if (piVar4 == (int *)0x0) goto LAB_00520e72;
    if (*piVar4 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_18);
    FUN_0064b580();
    (**(code **)(*local_18 + 4))(piVar4);
  }
  else {
    iVar3 = FUN_00674898();
    if (0 < iVar3) {
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
      piVar4[1] = 0x32;
      *(undefined4 *)(*(int *)(unsigned int)((param_1 + 0x8c) + 0x10)) = 0;
      *(undefined4 *)(*(int *)(unsigned int)((param_1 + 0x8c) + 0xc)) = 0x1000;
      FUN_0051c5d0();
      if (**(int **)(unsigned int)((param_1 + 0x8c)) == 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_0064bc30(*(int **)(unsigned int)((param_1 + 0x8c) + 1));
      ExceptionList = local_c;
      return;
    }
    if (piVar4 == (int *)0x0) goto LAB_00520e72;
    if (*piVar4 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*(int *)(unsigned int)(local_14).s.LowPart + 4))(piVar4);
  }
  FUN_0064b5a0();
LAB_00520e72:
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  ExceptionList = local_c;
  return;
}
