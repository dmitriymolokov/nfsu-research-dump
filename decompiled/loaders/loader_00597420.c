/* spd-match: far pct=13.05 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_7/buckets/loaders_p1/batches/20260724T154532Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0(...);
int __cdecl FUN_0040bd40(...);
int __cdecl FUN_00468f70(...);
int __cdecl FUN_0046aa40(...);
int __cdecl FUN_00579190(...);
int __cdecl FUN_00584b10(...);
int __cdecl FUN_00597390(...);
int __cdecl FUN_00597670(...);
int __cdecl FUN_00597730(...);
int __cdecl FUN_005977f0(...);
int __cdecl FUN_00597b80(...);
int __cdecl FUN_005980d0(...);
int __cdecl FUN_00674898(...);
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern int DAT_00736200;
extern int DAT_0073ad34;
extern int _DAT_006ef290;

struct ThisCallBox {
  void FUN_00597420(void *param_2, undefined4 param_3, undefined4 param_4);
};
void ThisCallBox::FUN_00597420(void *param_2, undefined4 param_3, undefined4 param_4) {
  float fVar1;
  int iVar2;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [12];
  float fStack_64;
  undefined1 auStack_5c [48];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  
  FUN_00468f70(param_2);
  if (*(char *)((int)((int *)this) + 0x4c2) != '\0') {
    FUN_00584b10();
    *(undefined4 *)(((int *)this)[0x1b] + 0x130) = 1;
    local_78 = 0.0;
    if ((*(int *)(((int *)this)[0x112] + 8) == -0x6739fdc4) ||
       (*(int *)(((int *)this)[0x112] + 8) == -0x7538f18a)) {
      local_78 = 1.4013e-45;
    }
    iVar2 = FUN_00674898();
    iVar2 = iVar2 + 1;
    local_74 = (float)(unsigned int)param_2 / (float)iVar2;
    if (0 < iVar2) {
      do {
        if (local_78 != 0.0) {
          FUN_00597390();
        }
        FUN_0046aa40(((int *)this) + 0x50,local_74);
        FUN_0040bd40();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00597b80();
    FUN_00597670();
    iVar2 = FUN_005980d0();
    if (iVar2 != 0) {
      ((int *)this)[0x5b] = DAT_0073ad34;
    }
  }
  FUN_00597420(local_70,((int *)this)[0x56] + 0xb0,((int *)this)[0x1b] + 0x30);
  FUN_00401cd0();
  iVar2 = ((int *)this)[0x1b];
  fStack_2c = *(float *)(iVar2 + 0x20) - fStack_7c;
  uStack_20 = 0x3f800000;
  fStack_28 = *(float *)(iVar2 + 0x24) - local_78;
  fStack_64 = *(float *)(iVar2 + 0x28) - local_74;
  fStack_24 = fStack_64 - (float)((int *)this)[0x5d];
  iVar2 = (**(code **)(*((int *)this) + 0x68))();
  if ((iVar2 == 0) || (((byte)DAT_006f08a4 & 1) != 0)) {
    iVar2 = ((int *)this)[0x128];
    ((int *)this)[0x114] = 1;
    if (iVar2 == 0) {
      FUN_00401cd0();
    }
    else {
      FUN_00401cd0();
      if (*(int *)(iVar2 + 0xe4) == 0) {
        FUN_00579190();
      }
    }
  }
  else {
    ((int *)this)[0x114] = 0;
  }
  fStack_2c = fStack_7c + fStack_2c;
  uStack_20 = 0x3f800000;
  fStack_28 = fStack_28 + local_78;
  fStack_24 = local_74 + fStack_24;
  FUN_00597730(((int *)this),auStack_5c);
  if (DAT_00736200 == 0) {
    FUN_005977f0();
  }
  if (((*(char *)((int)((int *)this) + 0x4c2) != '\0') && ((float)((int *)this)[0x57] == DAT_006cc7a4)) &&
     (fVar1 = (float)((int *)this)[0x5d] - _DAT_006ef290 * (float)(unsigned int)param_2, ((int *)this)[0x5d] = (int)fVar1,
     fVar1 < DAT_006cc7a4)) {
    ((int *)this)[0x5d] = 0;
  }
  return;
}
