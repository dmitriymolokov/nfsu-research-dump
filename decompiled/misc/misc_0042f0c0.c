/* spd-match: far pct=7.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

int __cdecl FUN_0040b780();
int __cdecl FUN_0040bc10();
int __cdecl FUN_0042a5c0();
int __cdecl FUN_0042ee40();
int __cdecl FUN_0042eee0();
int __cdecl FUN_0042f020();
int __cdecl FUN_004831c0();
int __cdecl FUN_00483b90();
int __cdecl FUN_00564bd0();
int __cdecl FUN_00564db0();
int __cdecl FUN_00567370();
int __cdecl FUN_00593d40();
int __cdecl FUN_005abda2();
int __cdecl FUN_00674898();
extern int DAT_006b7a40;
extern int DAT_006b7a60;
extern int DAT_006cc7a4;
extern int DAT_00706230;
extern int DAT_0073b3ba;
extern int _DAT_006b7a4c;
extern int _DAT_00706230;
extern int _DAT_00706234;
extern int _DAT_00706238;
int unaff_EDI;
int unaff_ESI;

void FUN_0042f0c0(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint3 uVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int unaff_EBX;
  float unaff_ESI;
  int iVar11;
  undefined4 unaff_EDI;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 *puStack_e8;
  int iStack_e4;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  uVar5 = (uint3)uStack_104;
  FUN_0042a5c0();
  FUN_0040bc10();
  cVar6 = FUN_0042ee40();
  if (cVar6 == '\0') {
    sVar9 = *(short *)(unaff_EBX + 0x1c6);
    uVar7 = FUN_00674898();
    *(undefined2 *)(unaff_EBX + 0x1c6) = uVar7;
    sVar8 = FUN_00674898();
    *(short *)(unaff_EBX + 0x1c4) = *(short *)(unaff_EBX + 0x1c4) + sVar8;
    FUN_00564bd0();
    FUN_00564bd0();
    local_100 = (float)(int)sVar9 * local_100;
    local_fc = (float)(int)sVar9 * local_fc;
  }
  else {
    FUN_005abda2(&local_100,*(int *)(unaff_EBX + 0x1dc) + 0x60,local_50);
    local_100 = local_100 - _DAT_00706230;
    local_fc = local_fc - _DAT_00706234;
    local_f8 = local_f8 - _DAT_00706238;
    FUN_00567370();
    fVar3 = local_fc * local_fc;
    fVar1 = local_100 * local_100;
    uVar7 = FUN_00564db0(local_100,local_fc);
    *(undefined2 *)(unaff_EBX + 0x1c4) = uVar7;
    uVar7 = FUN_00564db0(SQRT(fVar1 + fVar3),local_f8);
    *(undefined2 *)(unaff_EBX + 0x1c6) = uVar7;
  }
  iVar11 = *(int *)(unaff_EBX + 0x1dc);
  fVar3 = DAT_006cc7a4;
  if (iVar11 != 0) {
    iVar2 = *(int *)(unaff_EBX + 4);
    fVar3 = *(float *)(iVar2 + 0x60) - *(float *)(iVar11 + 0x60);
    fVar1 = *(float *)(iVar2 + 100) - *(float *)(iVar11 + 100);
    fVar4 = *(float *)(iVar2 + 0x68) - *(float *)(iVar11 + 0x68);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  }
  *(float *)(unaff_EBX + 0x238) = fVar3;
  uStack_104 = (float)(uint)(uint3)uStack_104;
  cVar6 = FUN_0042ee40();
  if ((cVar6 == '\0') || ((&DAT_0073b3ba)[*(int *)(unaff_EBX + 8) * 0x18c] == '\0')) {
    *(undefined2 *)(unaff_EBX + 0x1c8) = 0x32dc;
  }
  else {
    sVar9 = FUN_00564db0(fVar3,DAT_006b7a60);
    uStack_104 = (float)CONCAT13(1,uVar5);
    *(short *)(unaff_EBX + 0x1c8) = sVar9 << 1;
  }
  fStack_f0 = _DAT_006b7a4c * local_100 + _DAT_00706230;
  fStack_ec = _DAT_006b7a4c * local_fc + _DAT_00706234;
  puStack_e8 = (undefined4 *)(unsigned int)(_DAT_006b7a4c * local_f8 + _DAT_00706238);
  FUN_004831c0(fStack_f0,fStack_ec,puStack_e8);
  FUN_00593d40(param_1,0,0);
  FUN_00593d40(param_1,0,0);
  FUN_00593d40(param_1,0,0);
  puVar14 = *(undefined4 **)(unaff_EBX + 0x1e4);
  uStack_b8 = puVar14[0x18];
  uStack_c0 = *puVar14;
  uStack_bc = puVar14[0xc];
  puVar14 = &uStack_c0;
  puVar13 = &uStack_c0;
  FUN_005abda2(puVar13,puVar14,local_90);
  local_fc = DAT_006b7a40 * unaff_ESI + _DAT_00706230;
  local_f8 = DAT_006b7a40 * fVar3 + _DAT_00706234;
  fStack_f4 = DAT_006b7a40 * uStack_104 + _DAT_00706238;
  FUN_004831c0(local_fc,local_f8,fStack_f4);
  FUN_00593d40(param_1,0,0);
  FUN_00593d40(param_1,0,0);
  FUN_00593d40(param_1,0,0);
  if ((char)((uint)unaff_EDI >> 0x18) == '\0') {
    pfVar12 = *(float **)(unaff_EBX + 0x1e0);
    fStack_f4 = pfVar12[0x18];
    local_f8 = pfVar12[0xc];
    local_fc = *pfVar12;
    FUN_005abda2(&uStack_bc,&local_fc,auStack_9c);
  }
  else {
    iVar11 = *(int *)(unaff_EBX + 0x1dc);
    uStack_b8 = *(undefined4 *)(iVar11 + 100);
    uStack_bc = *(undefined4 *)(iVar11 + 0x60);
    uStack_b4 = *(undefined4 *)(iVar11 + 0x68);
  }
  local_fc = 0.0;
  local_f8 = 0.0;
  fStack_f4 = 1.0;
  FUN_0040b780(&local_fc);
  FUN_00483b90(*(undefined4 *)(unaff_EBX + 0x27c),unaff_EBX + 0x1f0,*(undefined4 *)(unaff_EBX + 4));
  iVar11 = unaff_EBX + 0x230;
  uStack_e0 = CONCAT22(uStack_de,
                        *(undefined2 *)(*(int *)(*(int *)(unaff_EBX + 0x27c) + 0x1c) + 0xc4));
  pfVar12 = &DAT_006b7a40;
  do {
    fVar1 = *pfVar12;
    local_fc = unaff_ESI * fVar1 + _DAT_00706230;
    local_f8 = fVar3 * fVar1 + _DAT_00706234;
    fStack_f4 = fVar1 * uStack_104 + _DAT_00706238;
    FUN_005abda2(&local_fc,&local_fc,auStack_9c);
    FUN_0042f020();
    iVar11 = iVar11 + 0x10;
    pfVar12 = pfVar12 + 1;
  } while ((int)pfVar12 < 0x6b7a4c);
  FUN_005abda2(auStack_ac,&DAT_00706230,auStack_9c);
  uStack_dc = 0;
  puStack_e8 = puVar14;
  iStack_e4 = iVar11;
  FUN_005abda2(&puStack_e8,&puStack_e8,auStack_a8);
  uVar10 = FUN_0042eee0(unaff_EBX);
  *(undefined4 *)(unaff_EBX + 0x1dc) = uVar10;
  *(undefined4 *)(unaff_EBX + 0x1d8) = *(undefined4 *)(unaff_EBX + 0x1d0);
  *(undefined4 *)(unaff_EBX + 0x1d4) = *(undefined4 *)(unaff_EBX + 0x1cc);
  return;
}
