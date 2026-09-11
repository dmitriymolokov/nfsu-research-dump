/* spd-match: far pct=8.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048C400 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004831c0();
int __cdecl FUN_00564b10();
int __cdecl FUN_00564db0();
int __cdecl FUN_00567370();
int __cdecl FUN_005673e0();
extern int DAT_006b6f54;
extern int DAT_00705ce0;
extern int DAT_007789e0;
extern int _DAT_006b6f64;
extern int _DAT_006b6f68;
int unaff_ESI;
void __fastcall FUN_0048c400(int obj)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;

  float unaff_ESI;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  undefined1 local_90 [4];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(obj + 0x20);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != 0)) {
    local_2c = *(float *)(iVar2 + 0x74);
    local_30 = *(float *)(iVar2 + 0x70);
    local_a0 = *(float *)(iVar2 + 0x80);
    local_28 = *(float *)(iVar2 + 0x78);
    local_9c = *(float *)(iVar2 + 0x84);
    local_98 = *(float *)(iVar2 + 0x88);
  }
  local_80 = local_a0 * ((int)_DAT_006b6f68) + local_30 * ((int)_DAT_006b6f64) + *(float *)(iVar1 + 0x1a0);
  local_7c = local_9c * ((int)_DAT_006b6f68) + local_2c * ((int)_DAT_006b6f64) + *(float *)(iVar1 + 0x1a4);
  local_78 = local_98 * ((int)_DAT_006b6f68) + local_28 * ((int)_DAT_006b6f64) + *(float *)(iVar1 + 0x1a8);
  FUN_004831c0(local_80,local_7c,local_78);
  local_70 = 1.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0;
  local_60 = 0.0;
  local_5c = 1.0;
  local_58 = 0.0;
  local_54 = 0;
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 1.0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 1.0;
  local_1c = *(undefined4 *)(*(int *)(obj + 0x20) + 0x1b4);
  local_20 = *(undefined4 *)(*(int *)(obj + 0x20) + 0x1b0);
  local_18 = 0;
  FUN_00567370();
  local_60 = local_4c * local_68 - local_48 * local_6c;
  local_5c = local_48 * local_70 - local_68 * local_50;
  local_58 = local_6c * local_50 - local_4c * local_70;
  local_50 = local_58 * local_6c - local_5c * local_68;
  local_4c = local_68 * local_60 - local_58 * local_70;
  local_48 = local_5c * local_70 - local_6c * local_60;
  local_3c = *(float *)(iVar1 + 0x1a4);
  local_40 = *(undefined4 *)(iVar1 + 0x1a0);
  local_38 = *(float *)(iVar1 + 0x1a8);
  local_34 = 1.0;
  FUN_0048c400(local_90,&DAT_00705ce0,&local_70);
  uVar9 = DAT_007789e0;
  fVar5 = (unaff_ESI * ((int)_DAT_006b6f68) + local_3c * ((int)_DAT_006b6f64) + local_9c) - fStack_8c;
  fVar6 = (fStack_a8 * ((int)_DAT_006b6f68) + local_38 * ((int)_DAT_006b6f64) + local_98) - fStack_88;
  fVar7 = (fStack_a4 * ((int)_DAT_006b6f68) + local_34 * ((int)_DAT_006b6f64) + fStack_94) - fStack_84;
  fVar3 = *(float *)(*(int *)(obj + 0x20) + 0x1ac);
  fVar10 = (float10)FUN_00564b10();
  fVar11 = (float)fVar10;
  fVar10 = (float10)FUN_00564b10();
  fVar10 = (float10)fVar3 / ((float10)fVar11 / fVar10);
  fVar11 = (float)fVar10;
  if ((float10)((int)DAT_006b6f54) < fVar10) {
    uVar8 = FUN_00564db0(DAT_006b6f54,fVar3);
    uVar9 = (uint)uVar8 << 1;
    fVar11 = DAT_006b6f54;
  }
  FUN_005673e0(fVar11);
  fStack_24 = fVar7 + fStack_84;
  FUN_004831c0(fVar5 + fStack_8c,fVar6 + fStack_88,fStack_24);
  pfVar4 = *(float **)(obj + 0x2c);
  pfVar4[2] = (float)(uVar9 & 0xffff);
  if ((float)(uVar9 & 0xffff) != *pfVar4) {
    *(undefined2 *)(pfVar4 + 0xb) = 2;
  }
  return;
}
