/* spd-match: far pct=6.15 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040F7C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040f6e0();
int __cdecl FUN_00674898();
extern unsigned char *DAT_0073636c;
extern unsigned char *DAT_0073640c;
extern int _DAT_006cc8f0;
extern int _DAT_00701098;
extern int _DAT_0070109c;
extern int _DAT_007010a0;
void __fastcall FUN_0040f7c0(float * obj, undefined4 param_1)

{
  float fVar1;

  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_f0 [12];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_90 [12];
  undefined1 auStack_84 [12];
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if ((*DAT_0073640c == 5) && (DAT_0073640c[3] != 0)) {
    fVar1 = _DAT_00701098 * obj[0x4b];
    FUN_0040f6e0();
    iVar2 = FUN_00674898();
    uVar3 = FUN_00674898();
    uVar4 = FUN_00674898();
    uVar5 = FUN_00674898();
    local_bc = obj[0x14];
    local_b8 = obj[0x18];
    local_b0 = obj[0x11];
    local_ac = obj[0x15];
    local_a0 = obj[0x12];
    local_a8 = obj[0x19];
    local_9c = obj[0x16];
    local_98 = obj[0x1a];
    local_c0 = obj[0x10];
    local_f0[0] = *obj * _DAT_006cc8f0;
    local_b4 = 0;
    local_a4 = 0;
    local_94 = 0.0;
    local_f0[1] = obj[1] * _DAT_006cc8f0;
    local_f0[2] = obj[2] * _DAT_006cc8f0;
    local_f0[4] = obj[4] * _DAT_006cc8f0;
    local_f0[5] = obj[5] * _DAT_006cc8f0;
    iVar7 = 0;
    local_f0[6] = obj[6] * _DAT_006cc8f0;
    local_f0[8] = obj[8] * _DAT_006cc8f0;
    local_f0[9] = obj[9] * _DAT_006cc8f0;
    iVar6 = 0;
    local_f0[10] = obj[10] * _DAT_006cc8f0;
    do {
      local_74 = _DAT_0070109c * *(float *)((int)local_f0 + iVar6);
      local_54 = 0;
      local_50 = 0;
      local_70 = _DAT_0070109c * *(float *)((int)local_f0 + iVar6 + 4);
      local_4c = 0;
      local_6c = _DAT_0070109c * *(float *)((int)local_f0 + iVar6 + 8);
      local_78 = 3;
      local_64 = _DAT_007010a0 * *(float *)((int)local_f0 + iVar6);
      local_60 = _DAT_007010a0 * *(float *)((int)local_f0 + iVar6 + 4);
      local_5c = _DAT_007010a0 * *(float *)((int)local_f0 + iVar6 + 8);
      local_48 = fVar1;
      FUN_0040f7c0(local_90,(int)&local_c0 + iVar6,param_1);
      fStack_44 = -local_9c;
      fStack_40 = -local_98;
      fStack_3c = -local_94;
      (**(code **)(*DAT_0073636c + 0xcc))(DAT_0073636c,iVar7,auStack_84);
      (**(code **)(*DAT_0073636c + 0xd4))(DAT_0073636c,iVar7,1);
      iVar6 = iVar6 + 0x10;
      iVar7 = iVar7 + 1;
    } while (iVar6 < 0x30);
    (**(code **)(*(int *)DAT_0073640c[6] + 0x68))
              ((int *)DAT_0073640c[6],DAT_0073640c[0x13],
               ((iVar2 << 8 | uVar3) << 8 | uVar4) << 8 | uVar5);
    return;
  }
  (**(code **)(*(int *)DAT_0073640c[6] + 0x90))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x12],obj + 0x48,10);
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
            ((int *)DAT_0073640c[6],DAT_0073640c[0xf],obj + 0x30);
  return;
}
