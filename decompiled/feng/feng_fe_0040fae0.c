/* spd-match: far pct=8.99 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040FAE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00674898();
extern int DAT_00700e74;
extern unsigned char *DAT_0073636c;
extern unsigned char *DAT_0073640c;
extern int _DAT_006cc7b8;
extern int _DAT_006cc7dc;
extern int _DAT_007010a8;
extern int _DAT_007070d4;
void __fastcall FUN_0040fae0(uint val, int param_1)

{
  float stack0xfffffee0_local;
  float stack0xfffffee8_local;
  int iVar1;
  int *piVar2;

  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_18;
  
  local_110 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x30);
  local_10c = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x30);
  local_108 = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x30);
  local_104 = *(float *)(param_1 + 0x50);
  local_e0 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x40) - local_110;
  local_dc = *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x40) - local_10c;
  local_d8 = *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x40) - local_108;
  local_d4 = *(float *)(param_1 + 0x54) - local_104;
  local_100 = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x5c);
  local_fc = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x5c);
  local_f8 = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x5c);
  local_c0 = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x6c) - local_100;
  local_bc = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x6c) - local_fc;
  local_b8 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x6c) - local_f8;
  local_f0 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) * ((int)_DAT_006cc7dc);
  local_ec = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x80) * ((int)_DAT_006cc7dc);
  local_e8 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x80) * ((int)_DAT_006cc7dc);
  local_d0 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x90) * ((int)_DAT_006cc7dc) - local_f0;
  local_cc = *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x90) * ((int)_DAT_006cc7dc) - local_ec;
  local_c8 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x90) * ((int)_DAT_006cc7dc) - local_e8;
  if (((val & 0x100) == 0) || (DAT_00700e74 == 0)) {
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 0.0;
    local_d0 = 0.0;
    local_cc = 0.0;
    local_c8 = 0.0;
  }
  else if (-1 < (char)val) {
    local_110 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    local_104 = 0.0;
    local_e0 = 0.0;
    local_dc = 0.0;
    local_d8 = 0.0;
    local_d4 = 0.0;
    local_100 = 0.0;
    local_fc = 0.0;
    local_f8 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
    local_b8 = 0.0;
  }
  local_b4 = 0;
  local_c4 = 0;
  local_e4 = 0;
  local_f4 = 0;
  if ((*(int *)DAT_0073640c == 5) && (DAT_0073640c[3] != 0)) {
    local_ac = 0x3f800000;
    local_b0 = 0x3f800000;
    local_a0 = 0;
    local_a8 = 0x3f800000;
    local_68 = local_e0 * ((int)_DAT_006cc7dc) + local_110;
    local_a4 = 0x3f800000;
    local_98 = 0;
    local_9c = 0;
    local_94 = 0x3f800000;
    local_5c = 0x3f800000;
    local_64 = local_dc * ((int)_DAT_006cc7dc) + local_10c;
    local_3c = 0x3f800000;
    local_60 = local_d8 * ((int)_DAT_006cc7dc) + local_108;
    local_90 = local_c0 * ((int)_DAT_006cc7dc) + local_100;
    local_58 = 0x3f800000;
    local_8c = local_bc * ((int)_DAT_006cc7dc) + local_fc;
    local_4c = 0x3f800000;
    local_30 = 0;
    local_54 = 0x3f800000;
    local_88 = local_b8 * ((int)_DAT_006cc7dc) + local_f8;
    local_38 = 0;
    local_50 = 0x3f800000;
    local_80 = local_d0 * ((int)_DAT_006cc7dc) + local_f0;
    local_34 = 0;
    local_2c = 0x3f800000;
    local_7c = local_cc * ((int)_DAT_006cc7dc) + local_ec;
    local_78 = local_c8 * ((int)_DAT_006cc7dc) + local_e8;
    local_28 = _DAT_007010a8 * *(float *)(param_1 + 0x58);
    if (local_28 < _DAT_006cc7b8) {
      local_28 = 0.1;
    }
    local_48 = local_90;
    local_44 = local_8c;
    local_40 = local_88;
    local_18 = local_60;
    (**(code **)(*DAT_0073636c + 0xc4))(DAT_0073636c,&local_68);
    piVar2 = DAT_0073636c;
    iVar1 = *DAT_0073636c;
    iVar3 = FUN_00674898();
    uVar4 = FUN_00674898();
    uVar5 = FUN_00674898();
    uVar6 = FUN_00674898();
    (**(code **)(iVar1 + 0xe4))(piVar2,0x3c,((iVar3 << 8 | uVar4) << 8 | uVar5) << 8 | uVar6);
    return;
  }
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x14],&local_110);
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))((int *)DAT_0073640c[6],DAT_0073640c[0x15],&local_ec)
  ;
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x16],(float *)&stack0xfffffee8_local);
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))((int *)DAT_0073640c[6],DAT_0073640c[0x17],&local_e4)
  ;
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x19],(float *)&stack0xfffffee0_local);
  (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x1a],&local_10c);
  (**(code **)(*(int *)DAT_0073640c[6] + 0x78))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x18],_DAT_007070d4 * *(float *)(param_1 + 0x58));
  (**(code **)(*(int *)DAT_0073640c[6] + 0x78))
            ((int *)DAT_0073640c[6],DAT_0073640c[0x1b],*(undefined4 *)(param_1 + 0x7c));
  return;
}
