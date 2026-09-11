/* spd-match: far pct=9.63 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_01 */
#include "ghidra_compat.h"

extern char s_NISMO_PRESET_006b88cc[];
extern char s_PETEY_PABLO_006b88e8[];
extern char s_gotcharobzombie_006b88f4[];
extern char s_ROBZOMBIE_PRESET_006b8904[];
extern char s_havyamystikal_006b8918[];
extern char s_MYSTIKAL_PRESET_006b8928[];
extern char s_needmylostprophets_006b8938[];
extern char s_LOSTPRO_PRESET_006b894c[];
extern char s_119focus_00706918[];

int __cdecl FUN_00401cd0();
int __cdecl FUN_00401dc0();
int __cdecl FUN_00440740();
int __cdecl FUN_004454d0();
int __cdecl FUN_00468340();
int __cdecl FUN_00468a50();
int __cdecl FUN_00472c60();
int __cdecl FUN_00473cf0();
int __cdecl FUN_005649f0();
int __cdecl FUN_00565da0();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567160();
int __cdecl FUN_00584800();
int __cdecl FUN_00584b10();
int __cdecl FUN_00597e10();
extern int DAT_007349b4;
extern unsigned char *DAT_00736010;
extern unsigned char *DAT_00736024;
extern int DAT_00736038;
extern int DAT_0073604c;
extern unsigned char *DAT_00736538;
extern int DAT_0073781c;
extern unsigned char *DAT_00737820;
extern int DAT_0073ad34;
extern unsigned char *PTR_FUN_006b8b18;
extern unsigned char *PTR_FUN_006c85a8;
extern unsigned char *PTR_FUN_006c85b8;
extern unsigned char *PTR_LAB_006b8b08;
extern void LAB_00473d60(void);
extern void LAB_00473dd0(void);
extern void LAB_00686ade(void);
void *ExceptionList;

undefined4 * FUN_005966d0(undefined4 *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  int *piVar17;
  bool bVar18;
  char local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686ade;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00468340(param_1,1);
  *param_1 = &PTR_FUN_006c85b8;
  param_1[0x19] = param_1 + 0x5e;
  DAT_00736010 = DAT_00736010 + 1;
  if (DAT_00736038 < DAT_00736010) {
    DAT_00736038 = DAT_00736010;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[0x18] = 0;
  param_1[0x4c] = 0;
  puVar16 = param_1 + 0x53;
  param_1[0x50] = &PTR_FUN_006c85a8;
  *puVar16 = puVar16;
  param_1[0x54] = puVar16;
  local_4 = 0;
  param_1[0x55] = 0;
  *param_1 = &PTR_FUN_006b8b18;
  param_1[0x50] = &PTR_LAB_006b8b08;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  FUN_00440740();
  local_4 = ((local_4 & 0xffffff00u) | 2u);
  puVar16 = param_1 + 0x110;
  iVar7 = FUN_00567160();
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004454d0();
  }
  param_1[0x112] = uVar8;
  param_1[0x113] = 0;
  param_1[0x115] = 1;
  param_1[0x116] = 0;
  param_1[0x114] = 0;
  param_1[0x128] = 0;
  *DAT_00737820 = puVar16;
  puVar6 = puVar16;
  param_1[0x111] = DAT_00737820;
  DAT_00737820 = puVar6;
  *puVar16 = &DAT_0073781c;
  *(undefined1 *)(param_1 + 0x117) = 0;
  puVar16 = param_1 + 300;
  *puVar16 = puVar16;
  param_1[0x12d] = puVar16;
  puVar16 = param_1 + 0x12e;
  *puVar16 = puVar16;
  param_1[0x12f] = puVar16;
  DAT_00736024 = DAT_00736024 + 1;
  local_4 = ((local_4 & 0xffffff00u) | 5u);
  if (DAT_0073604c < DAT_00736024) {
    DAT_0073604c = DAT_00736024;
  }
  pcVar10 = (char *)(param_1 + 0x51);
  *pcVar10 = 'S';
  pcVar9 = pcVar10;
  do {
    cVar3 = pcVar9[(int)("Smokabl" + (1 - (int)pcVar10))];
    pcVar9 = pcVar9 + 1;
    *pcVar9 = cVar3;
  } while (cVar3 != '\0');
  iVar7 = FUN_00567160();
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00584800();
  }
  param_1[0x1b] = uVar8;
  param_1[0x1a] = param_1 + 0x50;
  param_1[0x18] = 1;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[0x131] = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  param_1[0x59] = DAT_0073ad34;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_00565da0("Smokeable%s",param_3 + 8);
  pcVar10 = (char *)(param_1 + 0xd);
  iVar14 = 0x28;
  iVar7 = -(int)pcVar10;
  do {
    cVar3 = pcVar10[(int)(local_3c + iVar7)];
    iVar14 = iVar14 + -1;
    *pcVar10 = cVar3;
    if (cVar3 == '\0') break;
    pcVar10 = pcVar10 + 1;
  } while (iVar14 != 0);
  *(undefined1 *)((int)param_1 + 0x5b) = 0;
  iVar7 = FUN_00472c60(param_3 + 0xb0);
  if (iVar7 == 0) {
    pvVar11 = _malloc(0x40);
    if (pvVar11 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      *(undefined1 **)((int)pvVar11 + 8) = &LAB_00473dd0;
      *(undefined1 **)((int)pvVar11 + 0xc) = &LAB_00473d60;
      *(undefined4 *)((int)pvVar11 + 0x10) = 3;
      *(undefined4 *)((int)pvVar11 + 0x14) = 8;
      iVar7 = FUN_00473cf0(0xbfc00000,0xbfc00000,0xbfc00000,0x3fc00000,0x3fc00000,0x3fc00000);
    }
  }
  param_1[4] = iVar7;
  FUN_00468a50();
  piVar12 = (int *)param_1[0x1b];
  if (piVar12 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = piVar12 + 1;
  }
  puVar16 = (undefined4 *)param_1[0x54];
  *puVar16 = piVar13;
  param_1[0x54] = piVar13;
  piVar13[1] = (int)puVar16;
  *piVar13 = (int)(param_1 + 0x53);
  iVar7 = (**(code **)(*piVar12 + 4))();
  param_1[0x55] = param_1[0x55] + iVar7;
  param_1[0x56] = param_3;
  param_1[0x5c] = 0;
  *(undefined1 *)((int)param_1 + 0x4c2) = 0;
  *(undefined1 *)((int)param_1 + 0x4c3) = 0;
  param_1[0x57] = *(undefined4 *)(param_3 + 0xc4);
  param_1[0x58] = *(undefined4 *)(param_3 + 200);
  param_1[0x5d] = 0;
  iVar7 = FUN_00597e10();
  if (iVar7 == 0) {
    param_1[0x58] = 0;
  }
  FUN_00584b10();
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)((int)param_1 + 0x4c1) = 0;
  if ((*(int *)(param_3 + 0x84) != 0) &&
     (param_2 = *(int **)(param_1[0x56] + 0xf8), param_2 != (int *)(param_1[0x56] + 0xf8))) {
    do {
      pvVar11 = _malloc(0xc0);
      if (pvVar11 != (void *)0x0) {
        puVar16 = (undefined4 *)((int)pvVar11 + 8);
        for (iVar7 = 0x2e; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
        DAT_00736538 = DAT_00736538 + 1;
        FUN_00401dc0();
        if (param_2[7] != 0) {
          *(int *)((int)pvVar11 + 0x1c) = param_2[7];
        }
        FUN_00401cd0();
        bVar18 = DAT_007349b4 == 0;
        *(undefined4 *)((int)pvVar11 + 0x10) = 1;
        if (bVar18) {
          FUN_005649f0();
        }
        piVar12 = (int *)FUN_00567160();
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12[2] = (int)pvVar11;
        }
        iVar7 = param_1[300];
        param_1[300] = piVar12;
        *(int **)(iVar7 + 4) = piVar12;
        piVar12[1] = (int)(param_1 + 300);
        *piVar12 = iVar7;
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)(param_1[0x56] + 0xf8));
  }
  if ((*(int *)(param_3 + 0x88) != 0) &&
     (piVar12 = *(int **)(param_1[0x56] + 0xf0), piVar12 != (int *)(param_1[0x56] + 0xf0))) {
    do {
      pvVar11 = _malloc(0xc0);
      if (pvVar11 != (void *)0x0) {
        piVar13 = (int *)((int)pvVar11 + 8);
        for (iVar7 = 0x2e; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
        DAT_00736538 = DAT_00736538 + 1;
        pbVar2 = (byte *)(piVar12 + 0x20);
        iVar7 = -1;
        bVar4 = *pbVar2;
        pbVar15 = pbVar2;
        while (bVar4 != 0) {
          iVar7 = iVar7 * 0x21 + (uint)bVar4;
          pbVar1 = pbVar15 + 1;
          pbVar15 = pbVar15 + 1;
          bVar4 = *pbVar1;
        }
        pcVar10 = (char *)((int)pvVar11 + 0x80);
        *(int *)((int)pvVar11 + 8) = iVar7;
        iVar14 = 0x3f;
        iVar7 = (int)pbVar2 - (int)pcVar10;
        do {
          cVar3 = pcVar10[iVar7];
          iVar14 = iVar14 + -1;
          *pcVar10 = cVar3;
          if (cVar3 == '\0') break;
          pcVar10 = pcVar10 + 1;
        } while (iVar14 != 0);
        *(undefined1 *)((int)pvVar11 + 0xbf) = 0;
        if (piVar12[7] != 0) {
          *(int *)((int)pvVar11 + 0x1c) = piVar12[7];
        }
        FUN_00401cd0();
        iVar7 = DAT_007349b4;
        bVar18 = DAT_007349b4 == 0;
        *(undefined4 *)((int)pvVar11 + 0x10) = 1;
        if (bVar18) {
          FUN_005649f0();
          iVar7 = DAT_007349b4;
        }
        if ((*(int *)(iVar7 + 0x10) == 0) && ((*(byte *)(iVar7 + 0x14) & 1) != 0)) {
          FUN_00566e60();
        }
        piVar13 = *(int **)(iVar7 + 0x10);
        iVar14 = *(int *)(iVar7 + 0x18) + 1;
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          iVar5 = *piVar13;
          if (*(int *)(iVar7 + 0x1c) < iVar14) {
            *(int *)(iVar7 + 0x1c) = iVar14;
          }
          *(int *)(iVar7 + 0x18) = iVar14;
          *(int *)(iVar7 + 0x10) = iVar5;
          if (((*(byte *)(iVar7 + 0x14) & 2) != 0) &&
             (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar17 = piVar13, 0 < iVar7)) {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar17 = 0;
              piVar17 = piVar17 + 1;
            }
          }
          piVar13[2] = (int)pvVar11;
        }
        iVar7 = param_1[0x12e];
        param_1[0x12e] = piVar13;
        *(int **)(iVar7 + 4) = piVar13;
        piVar13[1] = (int)(param_1 + 0x12e);
        *piVar13 = iVar7;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)(param_1[0x56] + 0xf0));
  }
  ExceptionList = pvStack_c;
  return param_1;
}
