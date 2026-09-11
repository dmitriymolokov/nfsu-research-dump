/* spd-match: far pct=9.63 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142642Z_w0_tc0 */
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

int __cdecl FUN_0042bac0();
int __cdecl FUN_00431810();
int __cdecl FUN_004367e0();
int __cdecl FUN_0043dc40();
int __cdecl FUN_00440740();
int __cdecl FUN_004a8e40();
int __cdecl FUN_00565da0();
int __cdecl FUN_0058d010();
int __cdecl FUN_00674898();
extern int DAT_006b7a50;
extern int DAT_006b7a54;
extern int DAT_006b7a58;
extern int DAT_006b7a5c;
extern int DAT_006ca910;
extern int DAT_006cc7a4;
extern int DAT_00700ae8;
extern int DAT_007306c4;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_007361b4;
extern int DAT_007361bc;
extern int DAT_007361c0;
extern int DAT_007361c4;
extern int DAT_007588c4;
extern int DAT_0078a320;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int _DAT_006b7a28;
extern unsigned char *PTR_FUN_006b9694;
extern void LAB_0042b481(void);
extern void LAB_0042b48e(void);
extern void LAB_00688629(void);
void *ExceptionList;

undefined4 * FUN_0042b0d0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 local_40 [36];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00688629;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar6 = param_1 + 0x1c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x45] = 0;
  param_1[0x12f] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  FUN_00440740();
  local_14 = 0;
  FUN_00431810();
  param_1[0x245] = 0;
  (*(unsigned char *)&(local_14)) = 1;
  param_1[0x255] = 0;
  FUN_004367e0(param_1 + 600);
  (*(unsigned char *)&(local_14)) = 2;
  FUN_0043dc40();
  param_1[0x299] = 0;
  param_1[0x291] = param_1 + 600;
  param_1[0x290] = param_1;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xa4b) = 0;
  *(undefined1 *)(param_1 + 0x293) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xa4d) = 0;
  *(undefined1 *)(param_1 + 0x292) = 1;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xa49) = 1;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xa4a) = 1;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xa4e) = 0;
  *(undefined1 *)(param_1 + 0x295) = 0;
  param_1[0x29b] = 0xffffffff;
  ((undefined4 *)(unsigned int)(&DAT_007361bc))[(int)(unsigned int)DAT_007361c4] = (unsigned int)(float)(unsigned int)param_1;
  DAT_007361c4 = ((int)(DAT_007361c4)) + 1;
  (*(unsigned char *)&(local_14)) = 3;
  ((undefined4 *)(unsigned int)(&DAT_007361b4))[param_3] = param_1;
  FUN_0042bac0();
  iVar9 = 0xf;
  pcVar10 = (char *)(param_1 + 0xd);
  pcVar3 = &((int)(DAT_007588c4)) + param_3 * 0xf944;
  do {
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  } while (iVar9 != 0);
  bVar11 = (unsigned int)(DAT_007361c4) == 2;
  param_1[5] = 0;
  if (bVar11) {
    *(int *)(((int)(DAT_007361bc)) + 0x14) = DAT_007361c0;
    *(int *)(((int)(DAT_007361c0)) + 0x14) = DAT_007361bc;
  }
  param_1[2] = param_2;
  param_1[3] = (uint)(byte)((undefined4 *)(unsigned int)(&DAT_007306c4))[param_2];
  param_1[4] = param_3;
  param_1[0x9e] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  iVar9 = 0;
  puVar6 = param_1 + 0x1c;
  do {
    *puVar6 = 0;
    *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ iVar9 + 0x68) = 0;
    iVar9 = iVar9 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar9 < 8);
  if (DAT_0078a320 == 2) {
    param_1[7] = 0;
    param_1[6] = (param_3 != 0) + 1;
  }
  else {
    param_1[6] = 1;
    param_1[7] = 3;
  }
  param_1[0x24] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[599] = 0;
  if (DAT_0078a320 == 2) {
    if (param_3 == 0) {
      pvVar4 = _malloc(0x60);
      local_14 = CONCAT31(((unsigned int)(local_14) >> 8),4);
      if (pvVar4 == (void *)0x0) goto LAB_0042b481;
      uVar5 = FUN_004a8e40(0);
    }
    else {
      if (param_3 != 1) goto LAB_0042b48e;
      pvVar4 = _malloc(0x60);
      local_14 = CONCAT31(((unsigned int)(local_14) >> 8),5);
      if (pvVar4 == (void *)0x0) goto LAB_0042b481;
      uVar5 = FUN_004a8e40(1);
    }
  }
  else {
    if (DAT_0078a320 != 1) goto LAB_0042b48e;
    if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
      if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
        pvVar4 = _malloc(0x60);
        local_14 = CONCAT31(((unsigned int)(local_14) >> 8),8);
        if (pvVar4 == (void *)0x0) {
LAB_0042b481:
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004a8e40(param_3);
        }
      }
      else {
        pvVar4 = _malloc(0x60);
        local_14 = CONCAT31(((unsigned int)(local_14) >> 8),7);
        if (pvVar4 == (void *)0x0) goto LAB_0042b481;
        uVar5 = FUN_004a8e40(param_3);
      }
    }
    else {
      pvVar4 = _malloc(0x60);
      local_14 = CONCAT31(((unsigned int)(local_14) >> 8),6);
      if (pvVar4 == (void *)0x0) goto LAB_0042b481;
      uVar5 = FUN_004a8e40(param_3);
    }
  }
  (*(unsigned char *)&(local_14)) = 3;
  param_1[599] = uVar5;
LAB_0042b48e:
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  param_1[0x148] = 0;
  param_1[0x14c] = 0;
  param_1[0x153] = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  param_1[0x156] = 0;
  param_1[0x14f] = 0;
  param_1[1] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  FUN_00565da0("Player%d",1 - param_3);
  pvVar4 = _malloc(0x140);
  (*(unsigned char *)&(local_14)) = 9;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0058d010(pvVar4,local_40,param_3);
  }
  param_1[0xaa] = uVar5;
  param_1[0xa8] = 0xffffffff;
  param_1[0xa7] = 0xffffffff;
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),3);
  *param_1 = 0;
  param_1[0xa9] = 0;
  puVar6 = param_1 + 0xcb;
  iVar9 = 0x20;
  do {
    puVar6[-0x20] = 0;
    *puVar6 = 0;
    puVar6[0x20] = 0;
    puVar6[0x40] = 0;
    puVar6 = puVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  param_1[0x9d] = 0;
  puVar6 = _malloc(0x28);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar6 + 1) = 4;
    *(undefined1 *)((int)puVar6 + 5) = 10;
    *(undefined1 *)((int)puVar6 + 6) = 0;
    *(undefined1 *)((int)puVar6 + 7) = 0;
    *puVar6 = &PTR_FUN_006b9694;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = puVar6 + 5;
    puVar7 = _malloc(0x28);
    puVar6[4] = puVar7;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  param_1[0x2a] = puVar6;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x150] = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x8d5) = 0;
  param_1[0x2f] = 0;
  pvVar4 = _malloc(0xa4);
  param_1[0x157] = pvVar4;
  pvVar4 = _malloc(0x200);
  param_1[0x170] = pvVar4;
  param_1[0x171] = 0;
  param_1[0x172] = 0xffffffff;
  param_1[0x173] = 0xffffffff;
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x4ad) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x4ae) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x4af) = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  FUN_00565da0(&DAT_006ca910);
  FUN_00565da0(&DAT_006ca910);
  uVar5 = (unsigned int)(DAT_00700ae8);
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x8d6) = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x155] = uVar5;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x551) = 1;
  param_1[0x244] = 0;
  *(undefined1 *)(param_1 + 0x246) = 0;
  uVar8 = FUN_00674898();
  uVar5 = (unsigned int)(_DAT_006b7a28);
  param_1[0x245] = uVar8;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x921) = 0;
  param_1[0x249] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24a) = 0;
  param_1[0x24b] = 0;
  *(undefined1 *)(param_1 + 0x24c) = 0;
  param_1[0x24d] = 0;
  *(undefined1 *)(param_1 + 0x235) = 1;
  param_1[0x24f] = 0;
  *(undefined1 *)(param_1 + 0x250) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x941) = 0;
  param_1[0x255] = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x256) = 0;
  param_1[0x70] = param_1[0x70] & 0xffffffe0;
  param_1[0x6b] = uVar5;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined2 *)((unsigned int)(float)(unsigned int)param_1+ 0x1c6) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x32dc;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  puVar6 = _malloc(0x90);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x15] = 0x3f800000;
    puVar6[0x16] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x17) = 0;
    *(undefined2 *)((int)puVar6 + 0x5e) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x21] = 0x3f800000;
    puVar6[0x22] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x23) = 0;
    *(undefined2 *)((int)puVar6 + 0x8e) = 1;
  }
  uVar5 = (unsigned int)(DAT_006b7a50);
  param_1[0x78] = puVar6;
  *(undefined2 *)((int)puVar6 + 0x2e) = 1;
  *(undefined2 *)((int)puVar6 + 0x5e) = 1;
  *(undefined2 *)((int)puVar6 + 0x8e) = 1;
  iVar9 = param_1[0x78];
  *(undefined4 *)(iVar9 + 0x58) = uVar5;
  uVar8 = (unsigned int)(DAT_006b7a54);
  *(undefined4 *)(iVar9 + 0x28) = uVar5;
  *(undefined4 *)(iVar9 + 0x88) = uVar5;
  iVar9 = param_1[0x78];
  *(undefined4 *)(iVar9 + 0x24) = uVar8;
  *(undefined4 *)(iVar9 + 0x54) = uVar8;
  *(undefined4 *)(iVar9 + 0x84) = uVar8;
  puVar6 = _malloc(0x90);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x15] = 0x3f800000;
    puVar6[0x16] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x17) = 0;
    *(undefined2 *)((int)puVar6 + 0x5e) = 1;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x21] = 0x3f800000;
    puVar6[0x22] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0x23) = 0;
    *(undefined2 *)((int)puVar6 + 0x8e) = 1;
  }
  param_1[0x79] = puVar6;
  *(undefined2 *)((int)puVar6 + 0x2e) = 1;
  *(undefined2 *)((int)puVar6 + 0x5e) = 1;
  *(undefined2 *)((int)puVar6 + 0x8e) = 1;
  uVar5 = (unsigned int)(DAT_006b7a58);
  iVar9 = param_1[0x79];
  *(undefined4 *)(iVar9 + 0x28) = DAT_006b7a58;
  *(undefined4 *)(iVar9 + 0x88) = uVar5;
  *(undefined4 *)(iVar9 + 0x58) = uVar5;
  uVar5 = (unsigned int)(DAT_006b7a5c);
  iVar9 = param_1[0x79];
  *(undefined4 *)(iVar9 + 0x24) = DAT_006b7a5c;
  *(undefined4 *)(iVar9 + 0x84) = uVar5;
  *(undefined4 *)(iVar9 + 0x54) = uVar5;
  *(ushort *)(param_1 + 0x31) = *(ushort *)(param_1 + 0x31) & 0xfe00;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0xc6) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 199) = 1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x50] = 0x3f800000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0x3f800000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x3f800000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0xffffffff;
  puVar6 = _malloc(0x30);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0x3f800000;
    puVar6[10] = 0x3f800000;
    *(undefined2 *)(puVar6 + 0xb) = 0;
    *(undefined2 *)((int)puVar6 + 0x2e) = 1;
  }
  fVar2 = (unsigned int)(DAT_006cc7a4);
  param_1[0x42] = puVar6;
  *puVar6 = 0;
  if (fVar2 != (float)(unsigned int)puVar6[2]) {
    *(undefined2 *)(puVar6 + 0xb) = 2;
  }
  iVar9 = param_1[0x42];
  bVar11 = (unsigned int)(DAT_006cc7a4) != *(float *)(unsigned int)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 4) = 0;
  if (bVar11) {
    *(undefined2 *)(iVar9 + 0x2c) = 2;
  }
  param_1[0x45] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  ExceptionList = local_1c;
  return param_1;
}
