/* spd-match: far pct=5.74 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T143025Z_w0_tc0 */
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
extern unsigned char s_VISUAL_PART_MUFFLERTIP_006c1500[];
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_004acce0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_005056c0();
int __cdecl FUN_00513210();
int __cdecl FUN_00513310();
extern int DAT_00734588;
extern int DAT_00735764;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_00760284;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c018c;
extern void LAB_0051309e(void);
extern void LAB_005130ac(void);
extern void LAB_0051310c(void);
extern void LAB_0051311a(void);
extern void LAB_005131ae(void);
extern void LAB_005131d4(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_00512d10(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar13 = param_1 + 0x11;
  *(void **)(param_1) = (void **)(unsigned int)(&PTR_FUN_006c018c);
  *puVar13 = puVar13;
  param_1[0x12] = puVar13;
  puVar13 = param_1 + 0x13;
  (*(unsigned char *)&(local_8)) = 1;
  (*(unsigned int *)&(local_8) = (*(unsigned int *)&(local_8) & 0xffu) | (((unsigned int)(0)) << 8));
  FUN_004f8370(puVar13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar7 = FUN_004f3f90(&DAT_00746104);
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x18) != 0)) && (*(int **)(iVar7 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar7 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar7 + 0x18));
  }
  iVar7 = FUN_004acce0();
  pbVar8 = (byte *)(iVar7 * 0xc90 + DAT_00734588);
  iVar7 = -1;
  bVar4 = *pbVar8;
  while (bVar4 != 0) {
    iVar7 = iVar7 * 0x21 + (uint)bVar4;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar4 = *pbVar1;
  }
  param_1[0x22] = iVar7;
  bVar15 = (unsigned int)(DAT_007677ac) != 0;
  if (DAT_00745e40 == 1) {
    (*((unsigned char *)&(param_2) + 3)) = (byte)(((int)DAT_00760284) >> 0x13) & 1;
    uVar11 = ((int)DAT_00760284) >> 0xb;
    uVar12 = ((int)DAT_00760284) >> 0xf;
    uVar9 = ((int)DAT_00760284) >> 9;
    local_20 = ((int)DAT_00760284) >> 7 & 1;
    iVar7 = FUN_004f8730(puVar13,0,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x2929058)) {
      *(undefined4 *)(iVar7 + 0x24) = 0x2929058;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    puVar2 = param_1 + 0x11;
    piVar10[2] = 0;
    piVar10[3] = 0x19dd0f;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(byte *)(piVar10 + 5) = (*((unsigned char *)&(param_2) + 3));
    puVar5 = (undefined4 *)param_1[0x12];
    *puVar5 = piVar10;
    param_1[0x12] = piVar10;
    piVar10[1] = (int)puVar5;
    *piVar10 = (int)puVar2;
    iVar7 = FUN_004f8730(puVar13,1,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != -0x9653c7c)) {
      *(undefined4 *)(iVar7 + 0x24) = 0xf69ac384;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    piVar10[2] = 1;
    piVar10[3] = 0x483bc5b;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(byte *)(piVar10 + 5) = (byte)uVar11 & 1;
    puVar5 = (undefined4 *)param_1[0x12];
    *puVar5 = piVar10;
    param_1[0x12] = piVar10;
    piVar10[1] = (int)puVar5;
    *piVar10 = (int)puVar2;
    iVar7 = FUN_004f8730(puVar13,2,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x2cbb2d1c)) {
      *(undefined4 *)(iVar7 + 0x24) = 0x2cbb2d1c;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    piVar10[2] = 2;
    piVar10[3] = 0x3aa425f3;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(byte *)(piVar10 + 5) = (byte)uVar12 & 1;
    puVar5 = (undefined4 *)param_1[0x12];
    *puVar5 = piVar10;
    param_1[0x12] = piVar10;
    *piVar10 = (int)puVar2;
    piVar10[1] = (int)puVar5;
    pcVar14 = "VISUAL_PART_MUFFLERTIP";
    cVar6 = s_VISUAL_PART_MUFFLERTIP_006c1500[0];
    while (cVar6 != '\0') {
      pcVar3 = pcVar14 + 1;
      pcVar14 = pcVar14 + 1;
      cVar6 = *pcVar3;
    }
    FUN_00513210(0x3b3a1f8d,"MU_GaragePartsBrowser.fng",local_20);
    iVar7 = FUN_004f8730(puVar13,4,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x3f23165c)) {
      *(undefined4 *)(iVar7 + 0x24) = 0x3f23165c;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    piVar10[2] = 4;
    piVar10[3] = 0x1b088f15;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(byte *)(piVar10 + 5) = (byte)uVar9 & 1;
    puVar13 = (undefined4 *)param_1[0x12];
    *puVar13 = piVar10;
    param_1[0x12] = piVar10;
    *piVar10 = (int)puVar2;
    goto LAB_005131ae;
  }
  iVar7 = FUN_004f8730(puVar13,0,0,1);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x2929058)) {
    *(undefined4 *)(iVar7 + 0x24) = 0x2929058;
    *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  }
  piVar10 = _malloc(0x18);
  puVar2 = param_1 + 0x11;
  piVar10[2] = 0;
  piVar10[3] = 0x19dd0f;
  piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
  *(undefined1 *)(piVar10 + 5) = 0;
  puVar5 = (undefined4 *)param_1[0x12];
  *puVar5 = piVar10;
  param_1[0x12] = piVar10;
  piVar10[1] = (int)puVar5;
  *piVar10 = (int)puVar2;
  if ((bVar15) || (cVar6 = FUN_005056c0(0xd), cVar6 != '\0')) {
    iVar7 = FUN_004f8730(puVar13,1,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != -0x9653c7c)) {
      *(undefined4 *)(iVar7 + 0x24) = 0xf69ac384;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    piVar10[2] = 1;
    piVar10[3] = 0x483bc5b;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(undefined1 *)(piVar10 + 5) = 0;
    puVar5 = (undefined4 *)param_1[0x12];
    *puVar5 = piVar10;
    param_1[0x12] = piVar10;
    piVar10[1] = (int)puVar5;
    *piVar10 = (int)puVar2;
    if (!bVar15) goto LAB_0051309e;
LAB_005130ac:
    iVar7 = FUN_004f8730(puVar13,2,0,1);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x2cbb2d1c)) {
      *(undefined4 *)(iVar7 + 0x24) = 0x2cbb2d1c;
      *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
    }
    piVar10 = _malloc(0x18);
    piVar10[2] = 2;
    piVar10[3] = 0x3aa425f3;
    piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
    *(undefined1 *)(piVar10 + 5) = 0;
    puVar5 = (undefined4 *)param_1[0x12];
    *puVar5 = piVar10;
    param_1[0x12] = piVar10;
    piVar10[1] = (int)puVar5;
    *piVar10 = (int)puVar2;
    if (!bVar15) goto LAB_0051310c;
LAB_0051311a:
    pcVar14 = "VISUAL_PART_MUFFLERTIP";
    cVar6 = s_VISUAL_PART_MUFFLERTIP_006c1500[0];
    while (cVar6 != '\0') {
      pcVar3 = pcVar14 + 1;
      pcVar14 = pcVar14 + 1;
      cVar6 = *pcVar3;
    }
    FUN_00513210(0x3b3a1f8d,"MU_GaragePartsBrowser.fng",0);
  }
  else {
LAB_0051309e:
    cVar6 = FUN_005056c0(0xe);
    if (cVar6 != '\0') goto LAB_005130ac;
LAB_0051310c:
    cVar6 = FUN_005056c0(0xf);
    if (cVar6 != '\0') goto LAB_0051311a;
  }
  iVar7 = FUN_004f8730(puVar13,4,0,1);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0x3f23165c)) {
    *(undefined4 *)(iVar7 + 0x24) = 0x3f23165c;
    *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  }
  piVar10 = _malloc(0x18);
  piVar10[2] = 4;
  piVar10[3] = 0x1b088f15;
  piVar10[4] = (int)"MU_GaragePartsBrowser.fng";
  *(undefined1 *)(piVar10 + 5) = 0;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = piVar10;
  param_1[0x12] = piVar10;
  *piVar10 = (int)puVar2;
LAB_005131ae:
  piVar10[1] = (int)puVar13;
  puVar13 = (undefined4 *)param_1[0x11];
  do {
    if (puVar13 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_005131d4:
      FUN_004f8960();
      FUN_00513310();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar13[2] == DAT_00735764) {
      param_1[0x10] = puVar13;
      goto LAB_005131d4;
    }
    puVar13 = (undefined4 *)*puVar13;
  } while( true );
}
