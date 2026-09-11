/* spd-match: far pct=3.96 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142431Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0046c7c0();
int __cdecl FUN_0046d390();
int __cdecl FUN_00477100();
int __cdecl FUN_00477300();
int __cdecl FUN_004782c0();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567160();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00584800();
int __cdecl FUN_005868e0();
int __cdecl FUN_005883e0();
extern int DAT_006b70e0;
extern int DAT_006b70ec;
extern int DAT_00735f74;
extern int DAT_00735f78;
extern int DAT_00735f7c;
extern int DAT_00735f80;
extern int DAT_00735f84;
extern int DAT_007361a8;
extern int DAT_00777b4c;
extern int DAT_0077a01c;
extern int DAT_0077a020;
extern int DAT_0077a024;
extern int DAT_0077a028;
extern int DAT_0078a344;
extern int DAT_0078a3fc;
extern int _DAT_006f0738;
extern unsigned char *PTR_FUN_006c8348;
extern unsigned char *PTR_FUN_006c84a0;
extern unsigned char *PTR_LAB_006c8358;
extern unsigned char *PTR_LAB_006c8364;
extern void LAB_00476efa(void);
extern void LAB_0068646b(void);
void *ExceptionList;

undefined4 * __fastcall
FUN_00476840(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,int param_5,
            int param_6)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068646b;
  pvStack_c = ExceptionList;
  piVar1 = param_3 + 2;
  puVar9 = param_3 + 5;
  ExceptionList = &pvStack_c;
  *puVar9 = puVar9;
  param_3[6] = puVar9;
  param_3[7] = 0;
  *piVar1 = (int)&PTR_FUN_006c84a0;
  *param_3 = (unsigned int)&PTR_LAB_006c8364;
  *piVar1 = (int)&PTR_LAB_006c8358;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1c] = 0;
  param_3[0x17] = param_6;
  param_3[0x15] = param_4;
  pcVar2 = (char *)(param_3 + 3);
  param_3[1] = param_2;
  param_3[0x16] = param_6 + 0x40;
  param_3[0x1e] = 0x3f800000;
  local_4 = 1;
  *pcVar2 = 'P';
  pcVar6 = pcVar2;
  do {
    cVar3 = pcVar6[(int)("PhysMov" + (1 - (int)pcVar2))];
    pcVar6 = pcVar6 + 1;
    *pcVar6 = cVar3;
  } while (cVar3 != '\0');
  iVar7 = FUN_00567160();
  if (iVar7 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_00584800();
  }
  param_3[8] = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = piVar8 + 1;
  }
  puVar9 = (undefined4 *)param_3[6];
  *puVar9 = piVar11;
  param_3[6] = piVar11;
  piVar11[1] = (int)puVar9;
  *piVar11 = (int)(param_3 + 5);
  iVar7 = (**(code **)(*piVar8 + 4))();
  param_3[7] = param_3[7] + iVar7;
  *(undefined4 *)(param_3[8] + 0x1e4) = *(undefined4 *)(param_3[0x15] + 0x290);
  *(int *)(param_3[8] + 0x13c) = (int)*(char *)(param_5 + 0xd8);
  puVar9 = (undefined4 *)FUN_00567160();
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = param_3[0x15];
    *puVar9 = (unsigned int)&PTR_FUN_006c8348;
    puVar9[2] = puVar9 + 4;
  }
  param_3[9] = puVar9;
  param_4 = param_3 + 0xe;
  iStack_18 = 0;
  iStack_14 = 0;
  do {
    iVar7 = DAT_00735f74;
    puVar9 = (undefined4 *)(((int)DAT_00735f74) + 0x10);
    if ((*(int *)(((int)DAT_00735f74) + 0x10) == 0) && ((*(byte *)(((int)DAT_00735f74) + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    puVar13 = (undefined4 *)*puVar9;
    iVar10 = *(int *)(iVar7 + 0x18) + 1;
    if (puVar13 == (undefined4 *)0x0) {
      iVar7 = 0;
    }
    else {
      uVar12 = *puVar13;
      if (*(int *)(iVar7 + 0x1c) < iVar10) {
        *(int *)(iVar7 + 0x1c) = iVar10;
      }
      *(int *)(iVar7 + 0x18) = iVar10;
      *puVar9 = uVar12;
      if (((*(byte *)(iVar7 + 0x14) & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, 0 < iVar7))
      {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      iVar7 = param_3[0x15];
      iVar7 = FUN_005868e0(iStack_14 + 0x10 + iVar7,(iStack_18 / 2) * 0x20 + 0xd0 + iVar7,
                           iVar7 + 0x270);
    }
    iVar10 = DAT_00735f84;
    *param_4 = iVar7;
    if ((*(int *)(iVar10 + 0x10) == 0) && ((*(byte *)(iVar10 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    puVar9 = *(undefined4 **)(iVar10 + 0x10);
    iVar7 = *(int *)(iVar10 + 0x18) + 1;
    if (puVar9 == (undefined4 *)0x0) {
      iVar7 = 0;
    }
    else {
      uVar12 = *puVar9;
      if (*(int *)(iVar10 + 0x1c) < iVar7) {
        *(int *)(iVar10 + 0x1c) = iVar7;
      }
      *(int *)(iVar10 + 0x18) = iVar7;
      *(undefined4 *)(iVar10 + 0x10) = uVar12;
      if (((*(byte *)(iVar10 + 0x14) & 2) != 0) && (iVar7 = *(int *)(iVar10 + 0x28) >> 2, 0 < iVar7)
         ) {
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      if (iStack_14 < 0x60) {
        uVar12 = param_3[9];
      }
      else {
        uVar12 = 0;
      }
      iVar7 = FUN_005883e0(*param_4,uVar12,(iStack_18 / 2) * 0x20 + 0x170 + param_3[0x15]);
    }
    param_4[-4] = iVar7;
    piVar8 = (int *)*param_4;
    if (piVar8 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = piVar8 + 1;
    }
    puVar9 = (undefined4 *)param_3[6];
    *puVar9 = piVar11;
    param_3[6] = piVar11;
    piVar11[1] = (int)puVar9;
    *piVar11 = (int)(param_3 + 5);
    iVar7 = (**(code **)(*piVar8 + 4))();
    param_3[7] = param_3[7] + iVar7;
    piVar8 = (int *)param_4[-4];
    if (piVar8 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = piVar8 + 1;
    }
    puVar9 = (undefined4 *)param_3[6];
    *puVar9 = piVar11;
    param_3[6] = piVar11;
    piVar11[1] = (int)puVar9;
    *piVar11 = (int)(param_3 + 5);
    iVar7 = (**(code **)(*piVar8 + 4))();
    iStack_14 = iStack_14 + 0x30;
    iStack_18 = iStack_18 + 1;
    param_4 = param_4 + 1;
    param_3[7] = param_3[7] + iVar7;
    iVar7 = DAT_00735f78;
  } while (iStack_14 < 0xc0);
  *(undefined4 *)(param_3[10] + 0x18) = param_3[0xb];
  *(undefined4 *)(param_3[0xb] + 0x18) = param_3[10];
  *(undefined4 *)(param_3[0xc] + 0x18) = param_3[0xd];
  *(undefined4 *)(param_3[0xd] + 0x18) = param_3[0xc];
  if ((*(int *)(iVar7 + 0x10) == 0) && ((*(byte *)(iVar7 + 0x14) & 1) != 0)) {
    FUN_00566e60();
  }
  puVar9 = *(undefined4 **)(iVar7 + 0x10);
  iVar10 = *(int *)(iVar7 + 0x18) + 1;
  if (puVar9 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    uVar12 = *puVar9;
    if (*(int *)(iVar7 + 0x1c) < iVar10) {
      *(int *)(iVar7 + 0x1c) = iVar10;
    }
    *(int *)(iVar7 + 0x18) = iVar10;
    *(undefined4 *)(iVar7 + 0x10) = uVar12;
    if (((*(byte *)(iVar7 + 0x14) & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, 0 < iVar7)) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    piVar8 = (int *)FUN_0046c7c0(param_3[0x16]);
  }
  param_3[0x12] = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = piVar8 + 1;
  }
  puVar9 = (undefined4 *)param_3[6];
  *puVar9 = piVar11;
  param_3[6] = piVar11;
  piVar11[1] = (int)puVar9;
  *piVar11 = (int)(param_3 + 5);
  iVar10 = (**(code **)(*piVar8 + 4))();
  iVar7 = DAT_00735f7c;
  param_3[7] = param_3[7] + iVar10;
  *(int *)(param_3[0x12] + 0x74) = (int)*(char *)(param_5 + 0xd8);
  if ((*(int *)(iVar7 + 0x10) == 0) && ((*(byte *)(iVar7 + 0x14) & 1) != 0)) {
    FUN_00566e60();
  }
  puVar9 = *(undefined4 **)(iVar7 + 0x10);
  iVar10 = *(int *)(iVar7 + 0x18) + 1;
  if (puVar9 != (undefined4 *)0x0) {
    uVar12 = *puVar9;
    if (*(int *)(iVar7 + 0x1c) < iVar10) {
      *(int *)(iVar7 + 0x1c) = iVar10;
    }
    *(int *)(iVar7 + 0x18) = iVar10;
    *(undefined4 *)(iVar7 + 0x10) = uVar12;
    if (((*(byte *)(iVar7 + 0x14) & 2) != 0) &&
       (iVar7 = *(int *)(iVar7 + 0x28) >> 2, puVar13 = puVar9, 0 < iVar7)) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
    }
  }
  (*(unsigned char *)&(local_4)) = 2;
  if (puVar9 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_0046d390(puVar9,param_3[0x15] + 0x1b0,param_3 + 0xe,param_3[0x16]);
  }
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  param_3[0x13] = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = piVar8 + 1;
  }
  puVar9 = (undefined4 *)param_3[6];
  *puVar9 = piVar11;
  param_3[6] = piVar11;
  *piVar11 = (int)(param_3 + 5);
  piVar11[1] = (int)puVar9;
  iVar7 = (**(code **)(*piVar8 + 4))();
  param_3[7] = param_3[7] + iVar7;
  iVar7 = *(int *)(param_6 + 0x10);
  if (*(char *)(iVar7 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  *(int *)(param_3[0x13] + 0xe0) = (int)*(char *)(iVar7 + 0x424);
  *(undefined4 *)(param_3[0x12] + 0x20) = param_3[0x13];
  iVar7 = DAT_007361a8;
  if ((*(int *)(*(int *)(param_6 + 0x14) + 4) == 1) &&
     (((DAT_0078a344 != '\0' || (DAT_007361a8 != 0)) && (DAT_00777b4c != 1)))) {
    *(undefined4 *)(param_3[0x13] + 0xd8) = *(undefined4 *)((&DAT_006b70e0) + (int)DAT_0078a3fc * 4);
  }
  if ((*(int *)(*(int *)(param_6 + 0x14) + 4) == 2) && ((DAT_0078a344 != '\0' || (iVar7 != 0)))) {
    if (DAT_00777b4c != 1) {
      *(undefined4 *)(param_3[0x13] + 0xdc) = *(undefined4 *)((&DAT_006b70ec) + (int)DAT_0078a3fc * 4);
    }
    iVar7 = (**(code **)(**(int **)(param_6 + 0x2c) + 0x58))();
    if (iVar7 < 1) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar7;
      if (9 < iVar7) {
        iVar10 = 9;
      }
    }
    if (iVar7 == iVar10) {
      iVar10 = param_3[0x13];
      iVar7 = iVar7 * 0x54;
      uVar12 = *(undefined4 *)((&DAT_0077a028) + iVar7);
      *(undefined4 *)(iVar10 + 200) = *(undefined4 *)((&DAT_0077a024) + iVar7);
      *(undefined4 *)(iVar10 + 0xcc) = uVar12;
      iVar10 = param_3[0x13];
      uVar12 = *(undefined4 *)((&DAT_0077a020) + iVar7);
      *(undefined4 *)(iVar10 + 0xd0) = *(undefined4 *)((&DAT_0077a01c) + iVar7);
      *(undefined4 *)(iVar10 + 0xd4) = uVar12;
    }
  }
  iVar7 = DAT_00735f80;
  piVar8 = (int *)(((int)DAT_00735f80) + 0x10);
  if ((*(int *)(((int)DAT_00735f80) + 0x10) == 0) && ((*(byte *)(((int)DAT_00735f80) + 0x14) & 1) != 0)) {
    FUN_00566e60();
  }
  piVar11 = (int *)*piVar8;
  iVar10 = *(int *)(iVar7 + 0x18) + 1;
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    iVar5 = *piVar11;
    if (*(int *)(iVar7 + 0x1c) < iVar10) {
      *(int *)(iVar7 + 0x1c) = iVar10;
    }
    *(int *)(iVar7 + 0x18) = iVar10;
    bVar4 = *(byte *)(iVar7 + 0x14);
    *piVar8 = iVar5;
    if (((bVar4 & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar8 = piVar11, 0 < iVar7)) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
    }
    iVar7 = param_3[8];
    *piVar11 = param_3[0x15] + 0x260;
    piVar11[2] = 0x3f800000;
    piVar11[3] = 0x3f800000;
    piVar11[1] = iVar7;
    piVar11[4] = 0;
    piVar11[5] = 0;
    *(undefined1 *)(piVar11 + 0xc) = 1;
  }
  param_3[0x14] = piVar11;
  _DAT_006f0738 = 0;
  param_3[0x1d] = 0;
  FUN_00477100();
  FUN_004782c0();
  if (param_3[5] == 0) goto LAB_00476efa;
  piVar8 = (int *)(param_3[5] + -4);
  while( true ) {
    if (param_3 == (undefined4 *)0xffffffec) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = param_3 + 4;
    }
    if (piVar8 == piVar11) break;
    (**(code **)(*piVar8 + 0x1c))();
    if (piVar8[1] == 0) {
LAB_00476efa:
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)(piVar8[1] + -4);
    }
  }
  FUN_00477300(param_3);
  (**(code **)(*piVar1 + 8))();
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x1f] = 0x3f800000;
  *(undefined1 *)(param_3 + 0x1a) = 1;
  *(undefined1 *)((int)param_3 + 0x69) = 1;
  param_3[0x1b] = 2;
  ExceptionList = pvStack_c;
  return param_3;
}
