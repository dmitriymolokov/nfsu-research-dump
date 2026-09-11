/* spd-match: far pct=3.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_004fbaf0();
int __cdecl FUN_004fca20();
int __cdecl FUN_004fcb20();
int __cdecl FUN_00502b90();
int __cdecl FUN_00502bf0();
extern unsigned char *PTR_FUN_006c17f0;
extern void LAB_00685883(void);
void *ExceptionList;
int _param_3;

undefined4 * FUN_00502970(undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685883;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  *param_1 = &PTR_FUN_006c17f0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 1;
  FUN_00502b90();
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  FUN_00502bf0(param_1);
  if (param_3 == '\0') {
    if (param_1[7] != 0) {
      iVar4 = 0;
      uVar3 = 0;
      do {
        FUN_004fcb20(param_1[8] + iVar4);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (uVar3 < (uint)param_1[7]);
    }
  }
  else {
    _param_3 = 0;
    if (param_1[7] != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar4 + param_1[8]) = *(undefined1 *)(iVar4 + *(int *)(param_2 + 0x20));
        *(undefined1 *)(iVar4 + 1 + param_1[8]) =
             *(undefined1 *)(iVar4 + 1 + *(int *)(param_2 + 0x20));
        *(undefined1 *)(iVar4 + 2 + param_1[8]) =
             *(undefined1 *)(iVar4 + 2 + *(int *)(param_2 + 0x20));
        *(undefined1 *)(iVar4 + 3 + param_1[8]) =
             *(undefined1 *)(iVar4 + 3 + *(int *)(param_2 + 0x20));
        uVar3 = *(uint *)(iVar4 + 4 + param_1[8]);
        *(uint *)(iVar4 + 4 + param_1[8]) =
             uVar3 ^ ((*(int *)(iVar4 + 4 + *(int *)(param_2 + 0x20)) << 8) >> 8 ^ uVar3) & 0xffffff
        ;
        *(undefined1 *)(iVar4 + 7 + param_1[8]) =
             *(undefined1 *)(iVar4 + 7 + *(int *)(param_2 + 0x20));
        iVar1 = iVar4 + 8 + *(int *)(param_2 + 0x20);
        iVar2 = param_1[8];
        *(undefined4 *)(iVar4 + 0xc + iVar2) =
             *(undefined4 *)(iVar4 + 0xc + *(int *)(param_2 + 0x20));
        iVar2 = iVar4 + 8 + iVar2;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
        iVar1 = iVar4 + 0x28 + *(int *)(param_2 + 0x20);
        iVar2 = iVar4 + 0x28 + param_1[8];
        if (iVar1 == 0) {
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined1 *)(iVar2 + 4) = 0;
        }
        else {
          if (*(char *)(iVar2 + 4) == '\0') {
            FUN_004fca20();
          }
          *(int *)(iVar2 + 8) = iVar1;
          *(undefined1 *)(iVar2 + 4) = 1;
        }
        _param_3 = _param_3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (_param_3 < (uint)param_1[7]);
    }
  }
  FUN_004fbaf0(param_1 + 9,*(undefined4 *)(param_2 + 0x24));
  puVar5 = *(undefined4 **)(param_2 + 0x28);
  puVar6 = (undefined4 *)param_1[10];
  for (uVar3 = param_1[9] * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  ExceptionList = local_c;
  return param_1;
}
