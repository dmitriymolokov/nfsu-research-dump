/* spd-match: far pct=8.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00429CF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void m375_vec3_mul(float *dst, float *src, void *mtx);

int __cdecl FUN_00424ba0();
int __cdecl FUN_00424e50();
int __cdecl FUN_00440a40();
int __cdecl FUN_005673e0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006b7bf0;
extern int _DAT_006cc7dc;
extern int _DAT_006cc90c;
extern int _DAT_007000ac;
float10 __fastcall FUN_00429cf0(int * obj, float param_1, float *param_2, float *param_3, char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float fStack_d4;
  int iStack_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_64;
  undefined1 auStack_5c [4];
  float fStack_58;
  
  local_88 = *(float *)(obj + 0x3d4);
  local_c4 = *(float *)((char *)obj + 0x540);
  iVar7 = *(int *)(obj + 0x20);
  local_cc = ((*(float *)(iVar7 + 0x268) + *(float *)(iVar7 + 0x264)) * ((int)_DAT_006b7bf0) * local_88) /
             *(float *)(iVar7 + 0x110) + _DAT_007000ac;
  FUN_00424ba0();
  local_b0 = 0.0;
  local_ac = 0.0;
  local_a8 = 0.0;
  uVar5 = FUN_00424e50();
  iVar7 = 0;
  do {
    local_b8 = -*(float *)(iVar7 + 0x20 + *(int *)(obj + 0x20));
    local_c0 = 0.0;
    local_bc = 0.0;
    m375_vec3_mul(&local_c0,&local_c0,(void *)uVar5);
    m375_vec3_mul(&local_cc,&local_cc,(void *)auStack_5c);
    iVar7 = iVar7 + 0x30;
    local_b0 = local_c0 * ((int)_DAT_006cc90c) + local_b0;
    local_ac = local_bc * ((int)_DAT_006cc90c) + local_ac;
    local_a8 = local_b8 * ((int)_DAT_006cc90c) + local_a8;
  } while (iVar7 < 0xc0);
  fStack_9c = *(float *)(obj + 0x74);
  fStack_a0 = *(float *)(obj + 0x70);
  fStack_98 = *(float *)(obj + 0x78);
  fStack_58 = -local_cc;
  fVar6 = (float)FUN_00674898();
  fVar4 = local_c4;
  fStack_64 = (float)(int)fVar6;
  fVar1 = fStack_64 * param_1;
  local_cc = fVar6;
  fVar8 = (float10)FUN_00440a40(local_c4,&local_b0,0,0,0);
  if ((float10)DAT_006cc7a4 <= (float10)local_a8 - fVar8) {
    fStack_d4 = (float)((float10)local_a8 - fVar8);
  }
  else {
    fStack_d4 = 0.0;
  }
  local_c4 = fStack_d4;
  if (fStack_d4 <= DAT_006cc7a4) {
    fStack_c8 = 0.0;
    fStack_84 = 0.0;
  }
  else {
    fStack_84 = -fVar1;
    fStack_c8 = fVar1;
  }
  iStack_d0 = 1;
  fVar1 = fStack_c8;
  if (1 < (int)fVar6) {
    do {
      local_cc = ((float)iStack_d0 * param_1) / fStack_64;
      fVar1 = local_cc - fStack_84;
      fVar2 = DAT_006cc7a4 * fVar1 * ((int)_DAT_006cc7dc);
      local_c0 = (fStack_a0 + fVar2) * fVar1 + local_b0;
      local_bc = (fVar2 + fStack_9c) * fVar1 + local_ac;
      local_b8 = (fStack_58 * fVar1 * ((int)_DAT_006cc7dc) + fStack_98) * fVar1 + local_a8;
      fVar8 = (float10)FUN_00440a40(fVar4,&local_c0,0,&fStack_80,0);
      fStack_8c = (float)((float10)local_b8 - fVar8);
      if ((float10)local_b8 - fVar8 <= (float10)DAT_006cc7a4) {
        if (param_4 != '\0') break;
        local_a8 = (float)fVar8;
        local_ac = local_bc;
        local_b0 = local_c0;
        fVar1 = fStack_7c * fStack_98 - fStack_78 * fStack_9c;
        fVar3 = fStack_78 * fStack_a0 - fStack_98 * fStack_80;
        fVar2 = fStack_9c * fStack_80 - fStack_7c * fStack_a0;
        fStack_a0 = fVar3 * fStack_78 - fVar2 * fStack_7c;
        fStack_9c = fVar2 * fStack_80 - fStack_78 * fVar1;
        fStack_98 = fStack_7c * fVar1 - fVar3 * fStack_80;
        FUN_005673e0(local_88);
        fStack_84 = local_cc;
      }
      else {
        fStack_d4 = fStack_8c + fStack_d4;
        if (local_c4 <= fStack_8c) {
          local_c4 = fStack_8c;
        }
        if (fStack_c8 <= fVar1) {
          fStack_c8 = fVar1;
        }
      }
      iStack_d0 = iStack_d0 + 1;
      fVar1 = fStack_c8;
    } while (iStack_d0 < (int)fVar6);
  }
  fStack_c8 = fVar1;
  if (param_2 != (float *)0x0) {
    *param_2 = local_c4;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fStack_c8;
  }
  return (float10)fStack_d4 / (float10)iStack_d0;
}
