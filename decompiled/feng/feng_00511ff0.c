/* spd-match: far pct=7.88 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142746Z_w0_tc0 */
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

int __cdecl FUN_0040a880();
int __cdecl FUN_004acce0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_00511bf0();
int __cdecl FUN_00511d70();
int __cdecl FUN_00511f00();
int __cdecl FUN_00512580();
int __cdecl FUN_00512690();
int __cdecl FUN_0051beb0();
int __cdecl FUN_0057ce10();
extern int DAT_006b8d20;
extern int DAT_00734588;
extern int DAT_0073574c;
extern int DAT_00735750;
extern int DAT_00735754;
extern int DAT_00735758;
extern int DAT_0073ad40;
extern int DAT_0074435c;
extern int DAT_00744368;
extern int DAT_00745b6c;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c019c;
extern void LAB_00512145(void);
extern void LAB_005121f7(void);
extern void LAB_0051223a(void);
extern void LAB_005122bb(void);
extern void LAB_00512305(void);
extern void LAB_00688e04(void);
void *ExceptionList;

undefined4 * FUN_00511ff0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int ****local_24;
  int ****local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688e04;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar17 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c019c;
  *puVar17 = puVar17;
  param_1[0x12] = puVar17;
  (*(unsigned char *)&(local_8)) = 1;
  (*(unsigned int *)&(local_8) = (*(unsigned int *)&(local_8) & 0xffu) | (((unsigned int)(0)) << 8));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  puVar17 = param_1 + 0x22;
  *puVar17 = puVar17;
  param_1[0x23] = puVar17;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),3);
  param_2 = 0;
  local_14 = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x93) = 0;
  FUN_00511d70(&param_2,&local_14,local_1c,local_18);
  if ((((undefined4 *)(unsigned int)(&DAT_00745b6c))[param_2] == 0) || (((undefined4 *)(unsigned int)(&DAT_00745b6c))[((int)((int)(unsigned int)DAT_00735750)) + local_14] == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x91) = uVar7;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((unsigned int)(float)(unsigned int)param_1+ 0x92) = 0;
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x18) != 0)) && (*(int **)(iVar9 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar9 + 0x18));
  }
  iVar9 = FUN_004acce0();
  puVar17 = (unsigned int)(DAT_0073ad40);
  param_2 = iVar9 * 0xc90 + DAT_00734588;
  puVar10 = (undefined4 *)FUN_0040a880();
  for (; puVar17 != puVar10; puVar17 = (undefined4 *)*puVar17) {
    uVar15 = puVar17[3];
    uVar13 = puVar17[4] * 0x30 + uVar15;
    for (; uVar15 < uVar13; uVar15 = uVar15 + 0x30) {
      if (*(char *)(uVar15 + 0x10) == ':') goto LAB_00512145;
    }
  }
LAB_00512145:
  local_24 = (int ****)&local_24;
  local_20 = (int ****)&local_24;
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),4);
  pcVar14 = "GENERIC_REMOVE";
  do {
    pcVar1 = pcVar14 + 1;
    pcVar14 = pcVar14 + 1;
  } while (*pcVar1 != '\0');
  puVar16 = &DAT_006b8d20;
  iVar9 = -1;
  uVar15 = 0x4e;
  do {
    iVar9 = iVar9 * 0x21 + uVar15;
    pbVar2 = puVar16 + 1;
    uVar15 = (uint)*pbVar2;
    puVar16 = puVar16 + 1;
  } while (*pbVar2 != 0);
  FUN_00512580(iVar9,0x7a45b5c5,0,0,0);
  FUN_00511bf0(param_1 + 0x22);
  bVar3 = *(byte *)(param_2 + 0xc0);
  iVar9 = param_2 + 0xc0;
  param_2 = -1;
  while (bVar3 != 0) {
    param_2 = param_2 * 0x21 + (uint)bVar3;
    pbVar2 = (byte *)(iVar9 + 1);
    iVar9 = iVar9 + 1;
    bVar3 = *pbVar2;
  }
  if (param_1[0x22] == 0) goto LAB_005121f7;
  puVar17 = (undefined4 *)(param_1[0x22] + -4);
  while( true ) {
    if (param_1 == (undefined4 *)0xffffff78) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = param_1 + 0x21;
    }
    if (puVar17 == puVar10) break;
    iVar9 = puVar17[4];
    if ((iVar9 == param_2) || (DAT_007677ac != 0)) {
LAB_0051223a:
      bVar6 = true;
    }
    else {
      cVar8 = FUN_0051beb0(&DAT_0074435c);
      bVar6 = false;
      if (cVar8 != '\0') goto LAB_0051223a;
    }
    if (DAT_00745e40 == 2) {
      if ((bVar6) || (DAT_00735758 != '\0')) {
        piVar11 = &DAT_00744368;
        while ((piVar11[-1] != iVar9 && (*piVar11 != iVar9))) {
          if ((piVar11[1] == iVar9) || (piVar11 = piVar11 + 6, 0x7449c7 < (int)piVar11)) break;
        }
LAB_005122bb:
        FUN_00512580(iVar9,0,*(undefined4 *)puVar17[5],puVar17,0);
      }
    }
    else if ((bVar6) || (DAT_00735758 != '\0')) {
      piVar11 = &DAT_00744368;
      do {
        if (((piVar11[-1] == iVar9) || (*piVar11 == iVar9)) || (piVar11[1] == iVar9)) break;
        piVar11 = piVar11 + 6;
      } while ((int)piVar11 < 0x7449c8);
      goto LAB_005122bb;
    }
    if (puVar17[1] == 0) {
LAB_005121f7:
      puVar17 = (undefined4 *)0x0;
    }
    else {
      puVar17 = (undefined4 *)(puVar17[1] + -4);
    }
  }
  puVar17 = (undefined4 *)param_1[0x11];
  do {
    if (puVar17 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00512305:
      iVar9 = param_1[0x10];
      FUN_004f8960();
      FUN_00512690(param_1);
      iVar9 = *(int *)(iVar9 + 0x10);
      if (iVar9 != 0) {
        if (*(char *)(iVar9 + 0xc) == '\0') {
          uVar12 = *(undefined4 *)(*(int *)(iVar9 + 0x18) + 8);
        }
        else {
          uVar12 = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 8);
        }
        uVar19 = 0;
        uVar18 = (unsigned int)(DAT_0073574c);
        uVar12 = FUN_0057ce10(0,0x3a,uVar12,0,0xffffffff);
        FUN_00511f00(uVar12,uVar18,uVar19);
      }
      *(undefined1 *)(param_1 + 8) = 1;
      if ((int *****)local_24 != &local_24) {
        do {
          ppppiVar4 = (int ****)*local_24;
          ppppiVar5 = (int ****)local_24[1];
          *ppppiVar5 = (int ***)ppppiVar4;
          ppppiVar4[1] = (int ***)ppppiVar5;
          _free(local_24);
        } while ((int *****)local_24 != &local_24);
      }
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar17[2] == DAT_00735754) {
      param_1[0x10] = puVar17;
      goto LAB_00512305;
    }
    puVar17 = (undefined4 *)*puVar17;
  } while( true );
}
