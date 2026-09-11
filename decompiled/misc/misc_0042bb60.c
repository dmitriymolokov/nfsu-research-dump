/* spd-match: far pct=12.28 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2107 */
#include "ghidra_compat.h"

int __cdecl FUN_00401db0();
int __cdecl FUN_0042b040();
int __cdecl FUN_0042ed40();
int __cdecl FUN_004368e0();
int __cdecl FUN_0043dd10();
int __cdecl FUN_00490730();
int __cdecl FUN_00565ce0();
int __cdecl FUN_0058d0d0();
extern int DAT_007183b4;
extern int DAT_007361b4;
extern int DAT_007361bc;
extern unsigned char *DAT_007361c4;
extern void LAB_00688b57(void);
void *ExceptionList;

void FUN_0042bb60(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00688b57;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_0042ed40(0,0);
  if (*(undefined4 **)(param_1 + 0x95c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x95c))(1);
  }
  piVar3 = *(int **)(param_1 + 0x90);
  if (piVar3 != (int *)0x0) {
    if (*piVar3 != 0) {
      FUN_00565ce0();
    }
    _free(piVar3);
  }
  if (*(void **)(param_1 + 0x55c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x55c));
  }
  if (*(void **)(param_1 + 0x5c0) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x5c0));
  }
  if (*(undefined4 **)(param_1 + 0x5c4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c4))(1);
  }
  pvVar1 = *(void **)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5cc) = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0042b040(pvVar1);
    _free(pvVar1);
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x2a8);
  if (pvVar1 != (void *)0x0) {
    FUN_0058d0d0(pvVar1);
    _free(pvVar1);
  }
  if (*(undefined4 **)(param_1 + 0xa8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xa8))(1);
  }
  DAT_007361c4 = DAT_007361c4 + -1;
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  ((undefined4 *)(unsigned int)(&DAT_007361bc))[(int)(unsigned int)DAT_007361c4] = 0;
  ((undefined4 *)(unsigned int)(&DAT_007361b4))[*(int *)(param_1 + 0x10)] = 0;
  DAT_007183b4 = 1;
  _free(*(void **)(param_1 + 0x1e0));
  _free(*(void **)(param_1 + 0x1e4));
  pvVar1 = *(void **)(param_1 + 0x130);
  if (pvVar1 != (void *)0x0) {
    FUN_00490730();
    pvVar2 = *(void **)((int)pvVar1 + 0xc);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar2,0xc0,*(int *)((int)pvVar2 + -0x10),FUN_00401db0);
      _free((int *)((int)pvVar2 + -0x10));
    }
    _free(pvVar1);
  }
  _free(*(void **)(param_1 + 0x108));
  (*(unsigned char *)&(local_8)) = (unsigned char)2;
  FUN_0043dd10();
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),1);
  FUN_004368e0();
  _free(*(void **)(param_1 + 0x8ec));
  _free(*(void **)(param_1 + 0x8f0));
  iVar4 = *(int *)(param_1 + 0x870);
  if (0 < iVar4) {
    piVar3 = (int *)(param_1 + 0x5f0);
    do {
      *(char *)(*piVar3 + 8) = *(char *)(*piVar3 + 8) + -1;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ExceptionList = local_10;
  return;
}
