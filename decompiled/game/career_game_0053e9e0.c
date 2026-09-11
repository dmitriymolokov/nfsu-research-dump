/* spd-match: far pct=4.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0053e400();
int __cdecl FUN_0053e560();
int __cdecl FUN_0053e680();
int __cdecl FUN_0053e830();
int __cdecl FUN_00564990();
int __cdecl FUN_00565b60();
int __cdecl FUN_00565ce0();
extern void LAB_0053e9b0(void);
extern void LAB_00686b38(void);
void *ExceptionList;
int _param_6;

void FUN_0053e9e0(undefined4 param_1,int param_2,int param_3,code *param_4,undefined4 param_5,
                 undefined1 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int ****ppppiVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int ****ppppiVar9;
  int *piVar10;
  uint local_1c;
  int ***local_14;
  int ***local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_00686b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar6 = (undefined1 *)FUN_0053e680(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = param_6;
    *(code **)(puVar6 + 4) = param_4;
    *(undefined4 *)(puVar6 + 8) = param_5;
    local_14 = (int ***)&local_14;
    local_10 = (int ***)&local_14;
    local_4 = 0;
    iVar7 = FUN_00565b60(param_3 * 0x14,0,0,8);
    local_1c = 0x7fffffff;
    _param_6 = 0;
    if (0 < param_3) {
      piVar10 = (int *)(iVar7 + 8);
      do {
        uVar1 = *(undefined4 *)(param_2 + _param_6 * 4);
        iVar7 = FUN_0053e560(param_1,uVar1);
        if ((((iVar7 != 0) && (*(char *)(iVar7 + 0x8b) == '\0')) && (*(int *)(iVar7 + 0x9c) != 0))
           && (iVar8 = FUN_0053e400(uVar1,*(int *)(iVar7 + 0x9c),0), iVar8 != 0)) {
          uVar2 = *(uint *)(iVar8 + 4);
          piVar10[1] = iVar8;
          piVar10[2] = uVar2;
          *piVar10 = iVar7;
          if (uVar2 < local_1c) {
            local_1c = uVar2;
          }
          ppppiVar3 = (int ****)(piVar10 + -2);
          *local_10 = (int **)ppppiVar3;
          piVar10[-1] = (int)local_10;
          *ppppiVar3 = (int ***)&local_14;
          piVar10 = piVar10 + 5;
          local_10 = (int ***)ppppiVar3;
        }
        _param_6 = _param_6 + 1;
      } while (_param_6 < param_3);
    }
    FUN_00564990(&local_14,&LAB_0053e9b0);
    ppppiVar3 = (int ****)local_14;
    ppppiVar9 = (int ****)FUN_0040a880();
    for (; ppppiVar3 != ppppiVar9; ppppiVar3 = (int ****)*ppppiVar3) {
      FUN_0053e830(param_1,puVar6,ppppiVar3[2]);
    }
    local_10 = (int ***)&local_14;
    local_14 = (int ***)&local_14;
    FUN_00565ce0();
    if ((*(short *)(puVar6 + 2) == 0) && (param_4 != (code *)0x0)) {
      puVar6[1] = 0;
      (*param_4)(param_5);
    }
    if ((int ****)local_14 != &local_14) {
      do {
        pppiVar4 = (int ***)*local_14;
        pppiVar5 = (int ***)local_14[1];
        *pppiVar5 = (int **)pppiVar4;
        pppiVar4[1] = (int **)pppiVar5;
        _free(local_14);
      } while ((int ****)local_14 != &local_14);
    }
  }
  ExceptionList = local_c;
  return;
}
