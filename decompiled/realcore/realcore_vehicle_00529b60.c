/* spd-match: far pct=17.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_007441c8;
extern int _DAT_00735650;
extern unsigned char *PTR_s_PLAYER_CAR_006f8158;
extern void LAB_00684e2b(void);
extern char stack0xffffffe0;
int unaff_EBX;
void *ExceptionList;

void __fastcall FUN_00529b60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *unaff_EBX;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684e2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0064b510(&local_10);
  FUN_0064b580();
  piVar2 = (**(int * (**)())*local_10)(0x50,4,0xffffffff);
  FUN_0064b5a0();
  local_10 = (undefined4 *)0x0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1ef4);
    iVar5 = *(int *)(param_1 + 0x264);
    iVar4 = *(int *)(param_1 + 0x1efc);
    piVar1 = piVar2 + 1;
    *piVar1 = 0;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (7 < iVar3) {
      iVar3 = 7;
    }
    piVar2[2] = iVar3;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (4 < iVar4) {
      iVar4 = 4;
    }
    piVar2[3] = iVar4;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (3 < iVar5) {
      iVar5 = 3;
    }
    piVar2[4] = iVar5;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    iVar3 = FUN_0064c1a0(&DAT_007441c8,piVar1,piVar2);
    if (iVar3 < 0) {
      FUN_0064c000(&PTR_s_PLAYER_CAR_006f8158);
      FUN_0064c1a0(&DAT_007441c8,piVar1,piVar2);
    }
  }
  *(int **)(param_1 + 0x1760) = piVar2;
  local_10 = (undefined4 *)0xffffffff;
  if (*piVar2 == 0) {
    _DAT_00735650 = 0;
    ExceptionList = unaff_EBX;
    return;
  }
  FUN_0064b7d0(&stack0xffffffe0);
  _DAT_00735650 = 0;
  ExceptionList = unaff_EBX;
  return;
}
