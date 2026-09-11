/* spd-match: far pct=16.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_0040a880();
int __cdecl FUN_00445d00();
int __cdecl FUN_00458f10();
int __cdecl FUN_005697b0();
int __cdecl FUN_00574fd0();
int __cdecl FUN_00577d80();
int __cdecl FUN_00578880();
int __cdecl FUN_00579510();
int __cdecl FUN_00589ba0();
int __cdecl FUN_0058a000();
int __cdecl FUN_00593880();
int __cdecl FUN_00595bf0();
int __cdecl FUN_00598360();
int __cdecl FUN_00598440();
extern int DAT_006f089c;
extern int DAT_006f08a0;
extern int DAT_006f08a4;
extern int DAT_006f227c;
extern int DAT_0073457c;
extern int DAT_007345c0;
extern int DAT_00735ee4;
extern int DAT_007361f8;
extern int DAT_007372c8;
extern int DAT_007372cc;
extern int DAT_0073ad34;
extern int _DAT_006f0898;
extern int _DAT_00734578;
extern int _DAT_00734580;
extern void LAB_0045a920(void);
extern void LAB_00686e23(void);
void *ExceptionList;
int _local_4;

int FUN_0041f6e0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00686e23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  iVar4 = param_1 + 8;
  *(int *)iVar4 = iVar4;
  *(int *)(param_1 + 0xc) = iVar4;
  iVar4 = param_1 + 0x10;
  *(int *)iVar4 = iVar4;
  *(int *)(param_1 + 0x14) = iVar4;
  local_4 = 2;
  uStack_3 = 0;
  _eh_vector_constructor_iterator_
            ((void *)(param_1 + 0x300),0x50,0x14,(_func_void_void_ptr *)&LAB_0045a920,FUN_0040a880);
  local_4 = 3;
  _eh_vector_constructor_iterator_
            ((void *)(param_1 + 0x940),0x50,0x14,(_func_void_void_ptr *)&LAB_0045a920,FUN_0040a880);
  *(undefined4 *)(param_1 + 0x13f4) = 0;
  *(undefined4 *)(param_1 + 0x13f8) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x1250);
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_00458f10(0,0);
  *(undefined4 *)(param_1 + 0x15b4) = 0;
  *(undefined4 *)(param_1 + 0x15b8) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x1410);
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_00458f10(0,0);
  *(undefined4 *)(param_1 + 0x1774) = 0;
  *(undefined4 *)(param_1 + 0x1778) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x15d0);
  for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_00458f10(0,0);
  DAT_007361f8 = param_1;
  DAT_0073ad34 = 4000;
  _DAT_006f0898 = 0x3f800000;
  DAT_006f089c = 1;
  DAT_006f08a0 = 1;
  _DAT_00734578 = 0;
  DAT_0073457c = 0;
  _DAT_00734580 = 0;
  DAT_006f08a4 = 0;
  uVar7 = DAT_006f227c % 0x7fffffff;
  uVar5 = DAT_006f227c ^ 0x1d872b41;
  uVar1 = uVar5 >> 5 ^ uVar5;
  DAT_006f227c = uVar1 << 0x1b ^ uVar1 ^ uVar5;
  *(undefined4 *)(param_1 + 0x2f4) = 1;
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(uint *)(param_1 + 0x2d0) = uVar7;
  puVar8 = (undefined4 *)(param_1 + 0x280);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  pvVar2 = _malloc(0x1a0);
  local_4 = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00598440();
  }
  _local_4 = CONCAT31(uStack_3,4);
  *(undefined4 *)(param_1 + 0x2f0) = uVar3;
  FUN_005697b0();
  FUN_0058a000();
  FUN_00589ba0();
  FUN_00593880();
  FUN_00574fd0();
  DAT_00735ee4 = 0;
  FUN_00445d00();
  iVar4 = 0;
  if (0 < DAT_007372c8) {
    iVar6 = 0;
    do {
      *(undefined2 *)(iVar6 + 0x1a + DAT_007372cc) = 0;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0xb4;
    } while (iVar4 < DAT_007372c8);
  }
  FUN_00595bf0();
  FUN_00598360();
  FUN_00579510();
  FUN_00578880(0,0);
  if (DAT_007345c0 != 0) {
    FUN_00577d80();
  }
  pvVar2 = _malloc(8);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1794) = 0;
  }
  else {
    *(void **)pvVar2 = pvVar2;
    *(void **)((int)pvVar2 + 4) = pvVar2;
    *(void **)(param_1 + 0x1794) = pvVar2;
  }
  ExceptionList = local_c;
  return param_1;
}
