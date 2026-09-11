/* spd-match: far pct=9.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040BEF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040f3d0();
extern unsigned char *DAT_0073636c;
extern int DAT_007363e8;
extern unsigned char *DAT_0073640c;
extern int DAT_00736450;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc914;
extern int _DAT_006ccba4;
int unaff_ESI;
void __fastcall FUN_0040bef0(int obj, int param_1)

{
  float fVar1;
  float fVar2;

  int unaff_ESI;
  undefined4 uVar3;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_d0 = *(float *)(obj + 0x10) * _DAT_006cc914 - _DAT_006cc7bc;
  local_c8 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_88 = 0x3f800000;
  local_c4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x83),
                                        *(undefined1 *)(obj + 0x80)),
                               *(undefined1 *)(obj + 0x81)),*(undefined1 *)(obj + 0x82));
  local_c0 = *(float *)(obj + 0x50);
  local_bc = *(float *)(obj + 0x54);
  local_b8 = *(undefined4 *)(obj + 0x58);
  local_cc = -(*(float *)(obj + 0x14) * _DAT_006ccba4 - _DAT_006cc7bc);
  local_b0 = *(float *)(obj + 0x20) * _DAT_006cc914 - _DAT_006cc7bc;
  local_a4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x87),
                                        *(undefined1 *)(obj + 0x84)),
                               *(undefined1 *)(obj + 0x85)),*(undefined1 *)(obj + 0x86));
  local_a0 = *(float *)(obj + 0x5c);
  local_9c = *(float *)(obj + 0x60);
  local_98 = *(undefined4 *)(obj + 100);
  local_ac = -(*(float *)(obj + 0x24) * _DAT_006ccba4 - _DAT_006cc7bc);
  local_90 = *(float *)(obj + 0x30) * _DAT_006cc914 - _DAT_006cc7bc;
  local_84 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x8b),
                                        *(undefined1 *)(obj + 0x88)),
                               *(undefined1 *)(obj + 0x89)),*(undefined1 *)(obj + 0x8a));
  local_80 = *(float *)(obj + 0x68);
  local_7c = *(float *)(obj + 0x6c);
  local_8c = -(*(float *)(obj + 0x34) * _DAT_006ccba4 - _DAT_006cc7bc);
  local_78 = *(undefined4 *)(obj + 0x70);
  local_70 = *(float *)(obj + 0x40) * _DAT_006cc914 - _DAT_006cc7bc;
  local_68 = 0x3f800000;
  local_6c = -(*(float *)(obj + 0x44) * _DAT_006ccba4 - _DAT_006cc7bc);
  local_64 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(obj + 0x8f),
                                        *(undefined1 *)(obj + 0x8c)),
                               *(undefined1 *)(obj + 0x8d)),*(undefined1 *)(obj + 0x8e));
  local_60 = *(float *)(obj + 0x74);
  local_5c = *(float *)(obj + 0x78);
  local_58 = *(undefined4 *)(obj + 0x7c);
  local_b4 = local_b8;
  local_94 = local_98;
  local_74 = local_78;
  local_54 = local_58;
  if (param_1 != 0) {
    if (unaff_ESI != 0x61) {
      fVar1 = _DAT_006cc7dc / (float)(int)*(short *)(param_1 + 0x44);
      local_c0 = local_c0 + fVar1;
      fVar2 = _DAT_006cc7dc / (float)(int)*(short *)(param_1 + 0x46);
      local_bc = local_bc + fVar2;
      local_a0 = local_a0 - fVar1;
      local_9c = local_9c + fVar2;
      local_80 = local_80 - fVar1;
      local_7c = local_7c - fVar2;
      local_60 = fVar1 + local_60;
      local_5c = local_5c - fVar2;
    }
    FUN_0040f3d0(param_1);
  }
  if (DAT_00736450 != 0) {
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0xd0))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0x40),DAT_00736450);
  }
  if (unaff_ESI == 0x61) {
    if (*(int *)(DAT_0073640c + 0xc) == 0) {
      (**(code **)(*DAT_0073636c + 0x10c))(DAT_0073636c,0,0x18,0x100);
      uVar3 = 0x20142;
    }
    else {
      (**(code **)(*DAT_0073636c + 0x10c))(DAT_0073636c,0,0x18,0x103);
      uVar3 = 0x10142;
    }
    (**(code **)(*DAT_0073636c + 0x164))(DAT_0073636c,uVar3);
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 0;
    local_54 = 0x3f800000;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    (**(code **)(*DAT_0073636c + 0xb0))(DAT_0073636c,0x10,&local_68);
  }
  DAT_007363e8 = 0;
  (**(code **)(*DAT_0073636c + 0x14c))(DAT_0073636c,6,2,&local_d0,0x20);
  if (unaff_ESI == 0x61) {
    (**(code **)(*DAT_0073636c + 0x10c))(DAT_0073636c,0,0x18,2);
  }
  return;
}
