/* spd-match: far pct=9.51 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b2b74(...);
int __cdecl FUN_005d9188(...);
int __cdecl FUN_005d91a1(...);
int __cdecl FUN_005e505d(...);
extern void LAB_005b5132(...);
extern void LAB_005b5134(...);
extern void LAB_005b5163(...);
extern void LAB_005b516a(...);

struct ThisCallBox {
  float FUN_005b4ef1(int param_2, undefined4 param_3, int *param_4, undefined4 param_5);
};
float ThisCallBox::FUN_005b4ef1(int param_2, undefined4 param_3, int *param_4, undefined4 param_5) {
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float *pfVar5;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  float local_8;
  
  local_8 = 0.0;
  local_c = (int *)0x0;
  FUN_005d9188();
  local_10 = *(int *)(*(int *)(param_2 + 0x2c) + 0x28);
  if (local_10 != 0) {
    if ((*(int *)(local_10 + 4) == 0xc) && (*(int *)(local_10 + 0x1c) == 0)) {
      while (iVar1 = *(int *)(local_10 + 0x20), iVar1 != 0) {
        if ((((*(int *)(iVar1 + 4) != 1) || (iVar1 = *(int *)(iVar1 + 8), iVar1 == 0)) ||
            (*(int *)(iVar1 + 4) != 0xc)) || (local_10 = iVar1, *(int *)(iVar1 + 0x1c) != 0)) break;
      }
      if (((*(int *)(local_10 + 0x1c) == 0) && (local_14 = *(int *)(local_10 + 0x20), local_14 != 0)
          ) && ((*(int *)(local_14 + 4) == 1 &&
                ((*(int *)(local_14 + 8) != 0 && (*(int *)(*(int *)(local_14 + 8) + 4) == 0xd))))))
      {
        pfVar5 = (float *)(*(int *)(((int)this) + 0x118) + *(int *)(param_2 + 0x3c));
        do {
          if (((*(int *)(local_14 + 4) != 1) || (iVar1 = *(int *)(local_14 + 8), iVar1 == 0)) ||
             (*(int *)(iVar1 + 4) != 0xd)) goto LAB_005b5163;
          iVar2 = *(int *)(iVar1 + 0x10);
          if (iVar2 == 0) {
            fVar4 = (float)(uint)(*(int *)(iVar1 + 0x18) != 0);
LAB_005b5132:
            *pfVar5 = fVar4;
LAB_005b5134:
            pfVar5 = pfVar5 + 1;
          }
          else {
            if ((iVar2 == 1) || (iVar2 == 2)) {
              fVar4 = *(float *)(iVar1 + 0x18);
              goto LAB_005b5132;
            }
            if (iVar2 == 3) {
              *pfVar5 = (float)*(double *)(iVar1 + 0x18);
              goto LAB_005b5134;
            }
            if (iVar2 != 4) {
              if (iVar2 != 5) {
                FUN_005b1f01(((int)this) + 0xc,local_10 + 0x30,0,
                             "ID3DXEffectCompiler::CompileEffect: Unrecognized value type");
                goto LAB_005b5163;
              }
              piVar3 = *(int **)(iVar1 + 0x18);
              if (piVar3 == (int *)0x0) {
                local_18 = 0;
                param_2 = 0;
              }
              else {
                local_18 = (**(code **)(*piVar3 + 0xc))(piVar3);
                param_2 = (**(code **)(**(int **)(iVar1 + 0x18) + 0x10))(*(int **)(iVar1 + 0x18));
              }
              local_8 = *pfVar5;
              local_8 = (float)FUN_005b2b74(&local_8,4,0);
              if (-1 < (int)local_8) {
                local_8 = (float)FUN_005b2b74(&param_2,4,0);
joined_r0x005b503e:
                if ((-1 < (int)local_8) &&
                   (local_8 = (float)FUN_005b2b74(local_18,param_2,0), -1 < (int)local_8)) {
                  *param_4 = *param_4 + 1;
                  goto LAB_005b5134;
                }
              }
              break;
            }
            iVar1 = *(int *)(iVar1 + 0x18);
            if (((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xc)) && (*(int *)(iVar1 + 0x1c) == 0x1b))
            {
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 8))(local_c);
                local_c = (int *)0x0;
              }
              local_8 = (float)FUN_005e505d(((int)this) + 8,*(undefined4 *)(((int)this) + 0xf8),iVar1,0,
                                            param_5,&local_c,0);
              if ((int)local_8 < 0) {
                FUN_005b1f01(((int)this) + 0xc,local_10 + 0x30,0,
                             "ID3DXEffectCompiler::CompileEffect: There was an error compiling HLL shader parameter"
                            );
              }
              else {
                if (local_c == (int *)0x0) {
                  local_18 = 0;
                  param_2 = 0;
                }
                else {
                  local_18 = (**(code **)(*local_c + 0xc))(local_c);
                  param_2 = (**(code **)(*local_c + 0x10))(local_c);
                }
                local_8 = *pfVar5;
                local_8 = (float)FUN_005b2b74(&local_8,4,0);
                if (-1 < (int)local_8) {
                  local_8 = (float)FUN_005b2b74(&param_2,4,0);
                  goto joined_r0x005b503e;
                }
              }
              break;
            }
          }
          local_14 = *(int *)(local_14 + 0xc);
        } while (local_14 != 0);
        goto LAB_005b516a;
      }
    }
LAB_005b5163:
    local_8 = -2.29659e-41;
  }
LAB_005b516a:
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  FUN_005d91a1();
  return local_8;
}
