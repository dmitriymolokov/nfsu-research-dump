/* spd-match: far pct=5.29 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142725Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_0042ad10();
int __cdecl FUN_00440740();
int __cdecl FUN_004834e0();
int __cdecl FUN_00490560();
int __cdecl FUN_00493c70();
int __cdecl FUN_00494180();
int __cdecl FUN_00564b10();
int __cdecl FUN_005829e0();
int __cdecl FUN_00582a90();
extern int DAT_006b6be4;
extern int DAT_006b6bec;
extern int DAT_006b6bf4;
extern int DAT_006b6c08;
extern int DAT_006cc7a4;
extern int DAT_006fbae0;
extern int DAT_006fbae4;
extern int DAT_006fbb0c;
extern int DAT_006fbb10;
extern int DAT_006fbb38;
extern int DAT_006fbb3c;
extern int DAT_0073457c;
extern int DAT_00735f5c;
extern int _DAT_006b6be8;
extern int _DAT_006b6bf0;
extern int _DAT_006b6bfc;
extern int _DAT_006b6c04;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8a8;
extern unsigned char *PTR_FUN_006c7b50;
extern unsigned char *PTR_s_ZONE_PREVIEW_006fbac0;
extern void LAB_00491218(void);
extern void LAB_00491261(void);
extern void LAB_004912a8(void);
extern void LAB_0049147b(void);
extern void LAB_004914c3(void);
extern void LAB_0049150a(void);
extern void LAB_004916ef(void);
extern void LAB_00491731(void);
extern void LAB_00491771(void);
extern void LAB_004917d6(void);
extern void LAB_00491813(void);
extern void LAB_00491854(void);
extern void LAB_004919f9(void);
extern void LAB_00491a3c(void);
extern void LAB_00491a7c(void);
extern void LAB_00491abf(void);
extern void LAB_00491b00(void);
extern void LAB_00491b64(void);
extern void LAB_00491d03(void);
extern void LAB_00491d4b(void);
extern void LAB_00491d92(void);
extern void LAB_00491f6a(void);
extern void LAB_00491fb2(void);
extern void LAB_00492003(void);
extern void LAB_0068636d(void);
void *ExceptionList;

undefined4 * FUN_00490ea0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  void *pvVar22;
  int iVar23;
  undefined4 *puVar24;
  bool bVar25;
  float10 fVar26;
  float10 fVar27;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0068636d;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004834e0();
  puVar24 = param_1 + 0x1b;
  *param_1 = &PTR_FUN_006c7b50;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x20] = 1;
  param_1[0x1d] = 2;
  *puVar24 = 100;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0x4000;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 1;
  param_1[0x29] = 2;
  param_1[0x27] = 100;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x2d] = 0x4000;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  puVar1 = param_1 + 0x33;
  param_1[0x38] = 1;
  param_1[0x35] = 2;
  *puVar1 = 100;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0x4000;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x44] = 1;
  param_1[0x41] = 2;
  param_1[0x3f] = 100;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x45] = 0x4000;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  pfVar7 = (float *)(unsigned int)(param_1 + 0x4b);
  *pfVar7 = 0.0;
  param_1[0x4c] = 0;
  pfVar2 = (float *)(unsigned int)(param_1 + 0x4d);
  *pfVar2 = 0.0;
  param_1[0x4e] = 0;
  uVar3 = (unsigned int)(DAT_006fbae0);
  (*(unsigned char *)&(local_14)) = 4;
  (*(unsigned int *)&(local_14) = (*(unsigned int *)&(local_14) & 0xffu) | (((unsigned int)(0)) << 8));
  param_1[0x56] = &DAT_006fbae4;
  param_1[0x57] = uVar3;
  uVar3 = (unsigned int)(DAT_006fbb0c);
  param_1[0x58] = &DAT_006fbb10;
  param_1[0x59] = uVar3;
  uVar3 = (unsigned int)(DAT_006fbb38);
  param_1[0x5a] = &DAT_006fbb3c;
  param_1[0x5b] = uVar3;
  param_1[0x4f] = puVar24;
  param_1[0x50] = 0;
  FUN_00490560(param_1 + 0x4f,&PTR_s_ZONE_PREVIEW_006fbac0);
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  FUN_00440740();
  fVar8 = ((int)_DAT_006cc7bc) / ((int)_DAT_006b6bfc);
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),6);
  param_1[0x14] = ((int)_DAT_006b6be8) * fVar8 * *(float *)(unsigned int)(param_3 + 0x10);
  param_1[0x15] = fVar8 * ((int)_DAT_006b6bf0) * *(float *)(unsigned int)(param_3 + 0x10);
  fVar8 = ((int)DAT_006b6be4) / (((int)(DAT_006b6be4)) + (float)(unsigned int)param_1[0x14]);
  fVar10 = (unsigned int)(_DAT_006b6c04) / *(float *)(unsigned int)(param_3 + 0x10);
  fVar9 = (((int)_DAT_006cc7bc) - fVar10) - fVar8;
  *pfVar7 = fVar9;
  param_1[0x4c] = fVar8 - fVar9 * ((int)DAT_006cc7a4);
  fVar10 = fVar10 + fVar8;
  fVar8 = ((int)_DAT_006cc7bc) - fVar10;
  *pfVar2 = fVar8;
  param_1[0x4e] = fVar10 - fVar8 * ((int)DAT_006cc7a4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00494180(param_1 + 0x5c,puVar24,puVar1,param_1 + 0x3f,pfVar7);
  FUN_00493c70(param_3,param_1 + 0x5c,puVar1,puVar24,param_1 + 0x27,pfVar7,pfVar2,param_1 + 0x17,4);
  iVar23 = param_1[7];
  uVar3 = *(undefined4 *)(iVar23 + 100);
  uVar4 = *(undefined4 *)(iVar23 + 0x68);
  param_1[0x110] = *(undefined4 *)(iVar23 + 0x60);
  param_1[0x111] = uVar3;
  param_1[0x112] = uVar4;
  iVar23 = param_1[7];
  uVar3 = *(undefined4 *)(iVar23 + 0x44);
  uVar4 = *(undefined4 *)(iVar23 + 0x48);
  param_1[0x10c] = *(undefined4 *)(iVar23 + 0x40);
  param_1[0x10d] = uVar3;
  param_1[0x10e] = uVar4;
  iVar23 = param_1[7];
  iVar5 = param_1[0x35];
  fVar8 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x1e0) + *(float *)(unsigned int)(iVar23 + 0x40);
  fVar9 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x1e4) + *(float *)(unsigned int)(iVar23 + 0x44);
  fVar10 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x1e8) + *(float *)(unsigned int)(iVar23 + 0x48);
  fVar11 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x200) + *(float *)(unsigned int)(iVar23 + 0x60);
  fVar12 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x204) + *(float *)(unsigned int)(iVar23 + 100);
  fVar13 = (unsigned int)(DAT_0073457c) * *(float *)(unsigned int)(iVar23 + 0x208) + *(float *)(unsigned int)(iVar23 + 0x68);
  if (iVar5 == 0) {
LAB_00491218:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar5 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar5 == 2) goto LAB_00491218;
  }
  FUN_005829e0((*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c]) * fVar14);
  iVar23 = param_1[0x35];
  if (iVar23 == 0) {
LAB_00491261:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491261;
  }
  FUN_00582a90((*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c]) * fVar14);
  iVar23 = param_1[0x35];
  if (iVar23 == 0) {
LAB_004912a8:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_004912a8;
  }
  iVar23 = param_1[7];
  fVar17 = (unsigned int)(DAT_006b6be4) * *(float *)(unsigned int)(iVar23 + 0x1e0);
  fVar15 = *(float *)(unsigned int)(iVar23 + 0x1e4) * ((int)DAT_006b6be4);
  fVar16 = *(float *)(unsigned int)(iVar23 + 0x1e8) * ((int)DAT_006b6be4);
  fVar14 = ((((float)(unsigned int)param_1[0x4c] + *pfVar7) - (*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c])) /
           (float)(unsigned int)param_1[0x14]) * fVar14 * ((int)DAT_006b6be4);
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar18 = (unsigned int)(DAT_006b6be4);
  param_1[0xb] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar18;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar18;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar18;
  iVar23 = param_1[0xb];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar6 = (float *)(unsigned int)param_1[0xb];
  *pfVar6 = fVar8;
  if (fVar8 != pfVar6[2]) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xc] = fVar9;
  if (fVar9 != pfVar6[0xe]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x18] = fVar10;
  if (fVar10 != pfVar6[0x1a]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xb];
  *(float *)(unsigned int)(iVar23 + 4) = fVar17;
  if (fVar17 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar15;
  if (fVar15 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar16;
  if (fVar16 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar6 = (float *)(unsigned int)param_1[0xb];
  pfVar6[2] = local_70;
  if (local_70 != *pfVar6) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xe] = local_6c;
  if (local_6c != pfVar6[0xc]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x1a] = local_68;
  if (local_68 != pfVar6[0x18]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xb];
  *(float *)(unsigned int)(iVar23 + 0x3c) = local_5c * fVar14;
  *(float *)(unsigned int)(iVar23 + 0xc) = local_60 * fVar14;
  *(float *)(unsigned int)(iVar23 + 0x6c) = local_58 * fVar14;
  iVar23 = param_1[0x29];
  if (iVar23 == 0) {
LAB_0049147b:
    fVar15 = (float)(param_1[0x28] + -1);
  }
  else if (iVar23 == 1) {
    fVar15 = (float)(unsigned int)(float)(unsigned int)param_1[0x28];
  }
  else {
    fVar15 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_0049147b;
  }
  FUN_005829e0((*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e]) * fVar15);
  iVar23 = param_1[0x29];
  if (iVar23 == 0) {
LAB_004914c3:
    fVar15 = (float)(param_1[0x28] + -1);
  }
  else if (iVar23 == 1) {
    fVar15 = (float)(unsigned int)(float)(unsigned int)param_1[0x28];
  }
  else {
    fVar15 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_004914c3;
  }
  FUN_00582a90((*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e]) * fVar15);
  iVar23 = param_1[0x29];
  if (iVar23 == 0) {
LAB_0049150a:
    fVar15 = (float)(param_1[0x28] + -1);
  }
  else if (iVar23 == 1) {
    fVar15 = (float)(unsigned int)(float)(unsigned int)param_1[0x28];
  }
  else {
    fVar15 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_0049150a;
  }
  iVar23 = param_1[7];
  fVar20 = (unsigned int)(DAT_006b6be4) * *(float *)(unsigned int)(iVar23 + 0x200);
  fVar18 = *(float *)(unsigned int)(iVar23 + 0x204) * ((int)DAT_006b6be4);
  fVar19 = *(float *)(unsigned int)(iVar23 + 0x208) * ((int)DAT_006b6be4);
  fVar15 = ((((float)(unsigned int)param_1[0x4e] + *pfVar2) - (*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e])) /
           (float)(unsigned int)param_1[0x14]) * fVar15 * ((int)DAT_006b6be4);
  fVar16 = local_60 * fVar14 * fVar15;
  fVar17 = local_5c * fVar14 * fVar15;
  fVar15 = local_58 * fVar14 * fVar15;
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar14 = (unsigned int)(DAT_006b6be4);
  param_1[0xc] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar14;
  iVar23 = param_1[0xc];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar6 = (float *)(unsigned int)param_1[0xc];
  *pfVar6 = fVar11;
  if (fVar11 != pfVar6[2]) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xc] = fVar12;
  if (fVar12 != pfVar6[0xe]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x18] = fVar13;
  if (fVar13 != pfVar6[0x1a]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xc];
  *(float *)(unsigned int)(iVar23 + 4) = fVar20;
  if (fVar20 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar18;
  if (fVar18 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar19;
  if (fVar19 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar6 = (float *)(unsigned int)param_1[0xc];
  pfVar6[2] = local_70;
  if (local_70 != *pfVar6) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xe] = local_6c;
  if (local_6c != pfVar6[0xc]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x1a] = local_68;
  if (local_68 != pfVar6[0x18]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xc];
  *(float *)(unsigned int)(iVar23 + 0x3c) = fVar17;
  *(float *)(unsigned int)(iVar23 + 0xc) = fVar16;
  *(float *)(unsigned int)(iVar23 + 0x6c) = fVar15;
  iVar23 = param_1[0x35];
  if (iVar23 == 0) {
LAB_004916ef:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_004916ef;
  }
  FUN_005829e0(((float)(unsigned int)param_1[0x4c] + *pfVar7) * fVar14);
  iVar23 = param_1[0x35];
  if (iVar23 == 0) {
LAB_00491731:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491731;
  }
  FUN_00582a90(((float)(unsigned int)param_1[0x4c] + *pfVar7) * fVar14);
  iVar23 = param_1[0x35];
  if (iVar23 == 0) {
LAB_00491771:
    fVar14 = (float)(param_1[0x34] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x34];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491771;
  }
  iVar23 = param_1[0x41];
  fVar14 = ((((float)(unsigned int)param_1[0x4c] + *pfVar7) - (*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c])) /
           (float)(unsigned int)param_1[0x14]) * fVar14 * ((int)DAT_006b6bec);
  fVar20 = fVar20 * fVar14;
  fVar18 = fVar18 * fVar14;
  fVar19 = fVar19 * fVar14;
  if (iVar23 == 0) {
LAB_004917d6:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_004917d6;
  }
  FUN_005829e0(((float)(unsigned int)param_1[0x4c] + *pfVar7) * fVar14);
  iVar23 = param_1[0x41];
  if (iVar23 == 0) {
LAB_00491813:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491813;
  }
  FUN_00582a90(((float)(unsigned int)param_1[0x4c] + *pfVar7) * fVar14);
  iVar23 = param_1[0x41];
  if (iVar23 == 0) {
LAB_00491854:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491854;
  }
  fVar14 = (((int)_DAT_006cc8a8) / (float)(unsigned int)param_1[0x15]) *
           (((float)(unsigned int)param_1[0x4c] + *pfVar7) - (*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c])) *
           fVar14 * ((int)DAT_006b6bec);
  fVar16 = fVar16 * fVar14;
  fVar17 = fVar17 * fVar14;
  fVar15 = fVar15 * fVar14;
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar14 = (unsigned int)(DAT_006b6bec);
  param_1[0xd] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar14;
  iVar23 = param_1[0xd];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar6 = (float *)(unsigned int)param_1[0xd];
  *pfVar6 = local_80;
  if (local_80 != pfVar6[2]) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xc] = local_7c;
  if (local_7c != pfVar6[0xe]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x18] = local_78;
  if (local_78 != pfVar6[0x1a]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xd];
  *(float *)(unsigned int)(iVar23 + 4) = fVar20;
  if (fVar20 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar18;
  if (fVar18 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar19;
  if (fVar19 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar6 = (float *)(unsigned int)param_1[0xd];
  pfVar6[2] = local_70;
  if (local_70 != *pfVar6) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xe] = local_6c;
  if (local_6c != pfVar6[0xc]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x1a] = local_68;
  if (local_68 != pfVar6[0x18]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xd];
  *(float *)(unsigned int)(iVar23 + 0x3c) = fVar17;
  *(float *)(unsigned int)(iVar23 + 0xc) = fVar16;
  *(float *)(unsigned int)(iVar23 + 0x6c) = fVar15;
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_004919f9:
    fVar14 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_004919f9;
  }
  FUN_005829e0(((float)(unsigned int)param_1[0x4e] + *pfVar2) * fVar14);
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_00491a3c:
    fVar14 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491a3c;
  }
  FUN_005829e0(((float)(unsigned int)param_1[0x4e] + *pfVar2) * fVar14);
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_00491a7c:
    fVar14 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491a7c;
  }
  FUN_00582a90(((float)(unsigned int)param_1[0x4e] + *pfVar2) * fVar14);
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_00491abf:
    fVar14 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491abf;
  }
  FUN_00582a90(((float)(unsigned int)param_1[0x4e] + *pfVar2) * fVar14);
  iVar23 = param_1[0x29];
  if (iVar23 == 0) {
LAB_00491b00:
    fVar14 = (float)(param_1[0x28] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x28];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491b00;
  }
  iVar23 = param_1[0x1d];
  fVar14 = ((((float)(unsigned int)param_1[0x4e] + *pfVar2) - (*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e])) /
           (float)(unsigned int)param_1[0x14]) * fVar14 * ((int)DAT_006b6bec);
  fVar20 = fVar20 * fVar14;
  fVar18 = fVar18 * fVar14;
  fVar19 = fVar19 * fVar14;
  if (iVar23 == 0) {
LAB_00491b64:
    fVar14 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491b64;
  }
  fVar14 = (((int)_DAT_006cc8a8) / (float)(unsigned int)param_1[0x15]) *
           (((float)(unsigned int)param_1[0x4e] + *pfVar2) - (*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e])) *
           fVar14 * ((int)DAT_006b6bec);
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar21 = (unsigned int)(DAT_006b6bec);
  param_1[0xe] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar21;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar21;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar21;
  iVar23 = param_1[0xe];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar6 = (float *)(unsigned int)param_1[0xe];
  *pfVar6 = local_80;
  if (local_80 != pfVar6[2]) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xc] = local_7c;
  if (local_7c != pfVar6[0xe]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x18] = local_78;
  if (local_78 != pfVar6[0x1a]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xe];
  *(float *)(unsigned int)(iVar23 + 4) = fVar20;
  if (fVar20 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar18;
  if (fVar18 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar19;
  if (fVar19 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar6 = (float *)(unsigned int)param_1[0xe];
  pfVar6[2] = local_70;
  if (local_70 != *pfVar6) {
    *(undefined2 *)(pfVar6 + 0xb) = 2;
  }
  pfVar6[0xe] = local_6c;
  if (local_6c != pfVar6[0xc]) {
    *(undefined2 *)(pfVar6 + 0x17) = 2;
  }
  pfVar6[0x1a] = local_68;
  if (local_68 != pfVar6[0x18]) {
    *(undefined2 *)(pfVar6 + 0x23) = 2;
  }
  iVar23 = param_1[0xe];
  *(float *)(unsigned int)(iVar23 + 0x3c) = fVar17 * fVar14;
  *(float *)(unsigned int)(iVar23 + 0xc) = fVar16 * fVar14;
  *(float *)(unsigned int)(iVar23 + 0x6c) = fVar15 * fVar14;
  iVar23 = param_1[0x41];
  if (iVar23 == 0) {
LAB_00491d03:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491d03;
  }
  FUN_005829e0((*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c]) * fVar14);
  iVar23 = param_1[0x41];
  if (iVar23 == 0) {
LAB_00491d4b:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491d4b;
  }
  FUN_00582a90((*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c]) * fVar14);
  iVar23 = param_1[0x41];
  if (iVar23 == 0) {
LAB_00491d92:
    fVar14 = (float)(param_1[0x40] + -1);
  }
  else if (iVar23 == 1) {
    fVar14 = (float)(unsigned int)(float)(unsigned int)param_1[0x40];
  }
  else {
    fVar14 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491d92;
  }
  iVar23 = param_1[7];
  fVar14 = (((int)_DAT_006cc8a8) / (float)(unsigned int)param_1[0x15]) *
           (((float)(unsigned int)param_1[0x4c] + *pfVar7) - (*pfVar7 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4c])) *
           fVar14 * ((int)DAT_006b6bf4);
  fVar20 = fVar20 * fVar14;
  fVar18 = fVar18 * fVar14;
  fVar19 = fVar19 * fVar14;
  fVar16 = (unsigned int)(DAT_006b6bf4) * *(float *)(unsigned int)(iVar23 + 0x1e0);
  fVar14 = *(float *)(unsigned int)(iVar23 + 0x1e4) * ((int)DAT_006b6bf4);
  fVar15 = *(float *)(unsigned int)(iVar23 + 0x1e8) * ((int)DAT_006b6bf4);
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar17 = (unsigned int)(DAT_006b6bf4);
  param_1[0xf] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar17;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar17;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar17;
  iVar23 = param_1[0xf];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar7 = (float *)(unsigned int)param_1[0xf];
  *pfVar7 = local_80;
  if (local_80 != pfVar7[2]) {
    *(undefined2 *)(pfVar7 + 0xb) = 2;
  }
  pfVar7[0xc] = local_7c;
  if (local_7c != pfVar7[0xe]) {
    *(undefined2 *)(pfVar7 + 0x17) = 2;
  }
  pfVar7[0x18] = local_78;
  if (local_78 != pfVar7[0x1a]) {
    *(undefined2 *)(pfVar7 + 0x23) = 2;
  }
  iVar23 = param_1[0xf];
  *(float *)(unsigned int)(iVar23 + 4) = fVar20;
  if (fVar20 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar18;
  if (fVar18 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar19;
  if (fVar19 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar7 = (float *)(unsigned int)param_1[0xf];
  pfVar7[2] = fVar8;
  if (fVar8 != *pfVar7) {
    *(undefined2 *)(pfVar7 + 0xb) = 2;
  }
  pfVar7[0xe] = fVar9;
  if (fVar9 != pfVar7[0xc]) {
    *(undefined2 *)(pfVar7 + 0x17) = 2;
  }
  pfVar7[0x1a] = fVar10;
  if (fVar10 != pfVar7[0x18]) {
    *(undefined2 *)(pfVar7 + 0x23) = 2;
  }
  iVar23 = param_1[0xf];
  *(float *)(unsigned int)(iVar23 + 0x3c) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0xc) = fVar16;
  *(float *)(unsigned int)(iVar23 + 0x6c) = fVar15;
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_00491f6a:
    fVar8 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar8 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar8 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491f6a;
  }
  FUN_005829e0((*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e]) * fVar8);
  iVar23 = param_1[0x1d];
  if (iVar23 == 0) {
LAB_00491fb2:
    fVar8 = (float)(param_1[0x1c] + -1);
  }
  else if (iVar23 == 1) {
    fVar8 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
  }
  else {
    fVar8 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 == 2) goto LAB_00491fb2;
  }
  FUN_00582a90((*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e]) * fVar8);
  iVar23 = param_1[0x1d];
  if (iVar23 != 0) {
    if (iVar23 == 1) {
      fVar8 = (float)(unsigned int)(float)(unsigned int)param_1[0x1c];
      goto LAB_00492003;
    }
    fVar8 = (unsigned int)(DAT_006cc7a4);
    if (iVar23 != 2) goto LAB_00492003;
  }
  fVar8 = (float)(param_1[0x1c] + -1);
LAB_00492003:
  iVar23 = param_1[7];
  fVar8 = (((int)_DAT_006cc8a8) / (float)(unsigned int)param_1[0x15]) *
          (((float)(unsigned int)param_1[0x4e] + *pfVar2) - (*pfVar2 * ((int)(DAT_006cc7a4)) + (float)(unsigned int)param_1[0x4e])) *
          fVar8 * ((int)DAT_006b6bf4);
  fVar14 = (unsigned int)(DAT_006b6bf4) * *(float *)(unsigned int)(iVar23 + 0x200);
  fVar9 = *(float *)(unsigned int)(iVar23 + 0x204) * ((int)DAT_006b6bf4);
  fVar10 = *(float *)(unsigned int)(iVar23 + 0x208) * ((int)DAT_006b6bf4);
  pvVar22 = _malloc(0x90);
  if (pvVar22 == (void *)0x0) {
    iVar23 = 0;
  }
  else {
    iVar23 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  fVar15 = (unsigned int)(DAT_006b6bf4);
  param_1[0x10] = iVar23;
  *(float *)(unsigned int)(iVar23 + 0x24) = fVar15;
  *(float *)(unsigned int)(iVar23 + 0x84) = fVar15;
  *(float *)(unsigned int)(iVar23 + 0x54) = fVar15;
  iVar23 = param_1[0x10];
  *(undefined2 *)(iVar23 + 0x2e) = 0;
  *(undefined2 *)(iVar23 + 0x5e) = 0;
  *(undefined2 *)(iVar23 + 0x8e) = 0;
  pfVar7 = (float *)(unsigned int)param_1[0x10];
  *pfVar7 = local_80;
  if (local_80 != pfVar7[2]) {
    *(undefined2 *)(pfVar7 + 0xb) = 2;
  }
  pfVar7[0xc] = local_7c;
  if (local_7c != pfVar7[0xe]) {
    *(undefined2 *)(pfVar7 + 0x17) = 2;
  }
  pfVar7[0x18] = local_78;
  if (local_78 != pfVar7[0x1a]) {
    *(undefined2 *)(pfVar7 + 0x23) = 2;
  }
  iVar23 = param_1[0x10];
  *(float *)(unsigned int)(iVar23 + 4) = fVar20 * fVar8;
  if (fVar20 * fVar8 != *(float *)(unsigned int)(iVar23 + 0xc)) {
    *(undefined2 *)(iVar23 + 0x2c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 0x34) = fVar18 * fVar8;
  if (fVar18 * fVar8 != *(float *)(unsigned int)(iVar23 + 0x3c)) {
    *(undefined2 *)(iVar23 + 0x5c) = 2;
  }
  *(float *)(unsigned int)(iVar23 + 100) = fVar19 * fVar8;
  if (fVar19 * fVar8 != *(float *)(unsigned int)(iVar23 + 0x6c)) {
    *(undefined2 *)(iVar23 + 0x8c) = 2;
  }
  pfVar7 = (float *)(unsigned int)param_1[0x10];
  pfVar7[2] = fVar11;
  if (fVar11 != *pfVar7) {
    *(undefined2 *)(pfVar7 + 0xb) = 2;
  }
  pfVar7[0xe] = fVar12;
  if (fVar12 != pfVar7[0xc]) {
    *(undefined2 *)(pfVar7 + 0x17) = 2;
  }
  pfVar7[0x1a] = fVar13;
  if (fVar13 != pfVar7[0x18]) {
    *(undefined2 *)(pfVar7 + 0x23) = 2;
  }
  iVar23 = param_1[0x10];
  *(float *)(unsigned int)(iVar23 + 0x3c) = fVar9;
  *(float *)(unsigned int)(iVar23 + 0xc) = fVar14;
  *(float *)(unsigned int)(iVar23 + 0x6c) = fVar10;
  puVar24 = _malloc(0x30);
  if (puVar24 == (undefined4 *)0x0) {
    puVar24 = (undefined4 *)0x0;
  }
  else {
    *puVar24 = 0;
    puVar24[1] = 0;
    puVar24[2] = 0;
    puVar24[3] = 0;
    puVar24[9] = 0x3f800000;
    puVar24[10] = 0x3f800000;
    *(undefined2 *)(puVar24 + 0xb) = 0;
    *(undefined2 *)((int)puVar24 + 0x2e) = 1;
  }
  param_1[0x11] = puVar24;
  *(undefined2 *)((int)puVar24 + 0x2e) = 0;
  *(float *)(unsigned int)(param_1[0x11] + 0x24) = DAT_006b6be4;
  puVar24 = (undefined4 *)param_1[0x11];
  *puVar24 = 0x3f800000;
  if (puVar24[2] != 0x3f800000) {
    *(undefined2 *)(puVar24 + 0xb) = 2;
  }
  pfVar7 = (float *)(unsigned int)param_1[0x11];
  bVar25 = (unsigned int)(DAT_006b6c08) != *pfVar7;
  pfVar7[2] = DAT_006b6c08;
  if (bVar25) {
    *(undefined2 *)(pfVar7 + 0xb) = 2;
  }
  iVar23 = param_1[7];
  fVar26 = (float10)FUN_00564b10();
  fVar27 = (float10)FUN_00564b10();
  bVar25 = (unsigned int)(DAT_00735f5c) == 0;
  param_1[0x13] = (float)((float10)(float)fVar26 / fVar27);
  if (bVar25) {
    *(undefined4 *)(iVar23 + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
  }
  ExceptionList = local_1c;
  return param_1;
}
