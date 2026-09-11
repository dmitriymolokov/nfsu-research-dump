/* spd-match: far pct=5.20 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142431Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_004745b0();
int __cdecl FUN_00474640();
int __cdecl FUN_00474ca0();
int __cdecl FUN_00475070();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567160();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00584800();
int __cdecl FUN_005868e0();
extern int DAT_006cc7a4;
extern int DAT_00735f74;
extern int _DAT_006b71a8;
extern int _DAT_006b71ac;
extern int _DAT_006cc7b8;
extern int _DAT_006cca94;
extern int _DAT_006f0738;
extern int _DAT_006f0d58;
extern int _DAT_006f0d5c;
extern int _DAT_00735fd0;
extern unsigned char *PTR_FUN_006c8468;
extern unsigned char *PTR_FUN_006c84a0;
extern unsigned char *PTR_LAB_006c845c;
extern void LAB_0068649b(void);
void *ExceptionList;

undefined4 * __fastcall
FUN_004740d0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068649b;
  pvStack_c = ExceptionList;
  puVar4 = param_3 + 5;
  ExceptionList = &pvStack_c;
  *puVar4 = puVar4;
  param_3[6] = puVar4;
  param_3[7] = 0;
  param_3[2] = (unsigned int)&PTR_FUN_006c84a0;
  *param_3 = (unsigned int)&PTR_FUN_006c8468;
  param_3[2] = (unsigned int)&PTR_LAB_006c845c;
  param_3[0x12] = 0;
  param_3[0xb] = param_5;
  param_3[0xd] = param_4;
  pcVar1 = (char *)(param_3 + 3);
  param_3[1] = param_2;
  param_3[0xc] = param_1;
  local_4 = 1;
  *pcVar1 = 'M';
  pcVar7 = pcVar1;
  do {
    cVar2 = pcVar7[(int)("MeloMvr" + (1 - (int)pcVar1))];
    pcVar7 = pcVar7 + 1;
    *pcVar7 = cVar2;
  } while (cVar2 != '\0');
  iVar8 = FUN_00567160();
  if (iVar8 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_00584800();
  }
  param_3[8] = piVar9;
  if (piVar9 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = piVar9 + 1;
  }
  puVar4 = (undefined4 *)param_3[6];
  _DAT_00735fd0 = piVar9;
  *puVar4 = piVar11;
  param_3[6] = piVar11;
  piVar11[1] = (int)puVar4;
  *piVar11 = (int)(param_3 + 5);
  iVar8 = (**(code **)(*piVar9 + 4))();
  param_3[7] = param_3[7] + iVar8;
  _DAT_006f0738 = 0;
  param_3[0x13] = 0;
  iVar8 = FUN_00567160();
  (*(unsigned char *)&(local_4)) = 2;
  if (iVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_00475070(iVar8,param_3[0xb],param_3[8],*(undefined4 *)(param_1 + 4),
                          *(undefined4 *)(param_1 + 8));
  }
  param_3[9] = uVar10;
  iVar8 = *(int *)(param_4 + 0x10);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if (*(char *)(iVar8 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar5 = ((*(float *)(iVar8 + 0x428) - _DAT_006f0d58) * ((int)_DAT_006cca94)) /
          (((int)_DAT_006f0d5c) - _DAT_006f0d58);
  fVar6 = DAT_006cc7a4;
  if ((DAT_006cc7a4 < fVar5) && (fVar6 = fVar5, _DAT_006cca94 < fVar5)) {
    fVar6 = _DAT_006cca94;
  }
  *(float *)(param_3[9] + 0x140) =
       (((int)_DAT_006b71ac) - _DAT_006b71a8) * fVar6 * ((int)_DAT_006cc7b8) + (int)_DAT_006b71a8;
  piVar9 = (int *)param_3[9];
  if (piVar9 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = piVar9 + 1;
  }
  puVar4 = (undefined4 *)param_3[6];
  *puVar4 = piVar11;
  param_3[6] = piVar11;
  piVar11[1] = (int)puVar4;
  *piVar11 = (int)(param_3 + 5);
  iVar8 = (**(code **)(*piVar9 + 4))();
  param_3[7] = param_3[7] + iVar8;
  piVar9 = (int *)FUN_00567160();
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    iVar8 = param_3[8];
    *piVar9 = param_3[0xb] + 0x260;
    piVar9[1] = iVar8;
    piVar9[2] = 0x3f800000;
    piVar9[3] = 0x3f800000;
    piVar9[4] = 0;
    piVar9[5] = 0;
    *(undefined1 *)(piVar9 + 0xc) = 1;
  }
  param_3[10] = piVar9;
  *(undefined4 *)(param_3[8] + 0x1e4) = *(undefined4 *)(param_3[0xb] + 0x290);
  FUN_004745b0();
  puStack_14 = param_3 + 0xe;
  param_4 = 0;
  param_5 = 0;
  do {
    iVar8 = DAT_00735f74;
    puVar4 = (undefined4 *)(((int)DAT_00735f74) + 0x10);
    if ((*(int *)(((int)DAT_00735f74) + 0x10) == 0) && ((*(byte *)(((int)DAT_00735f74) + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    puVar13 = (undefined4 *)*puVar4;
    iVar12 = *(int *)(iVar8 + 0x18) + 1;
    if (puVar13 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar13;
      if (*(int *)(iVar8 + 0x1c) < iVar12) {
        *(int *)(iVar8 + 0x1c) = iVar12;
      }
      *(int *)(iVar8 + 0x18) = iVar12;
      bVar3 = *(byte *)(iVar8 + 0x14);
      *puVar4 = uVar10;
      if (((bVar3 & 2) != 0) && (iVar8 = *(int *)(iVar8 + 0x28) >> 2, 0 < iVar8)) {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      iVar8 = param_3[0xb];
      uVar10 = FUN_005868e0(param_5 + 0x10 + iVar8,(param_4 / 2) * 0x20 + 0xd0 + iVar8,iVar8 + 0x270
                           );
    }
    *puStack_14 = uVar10;
    param_5 = param_5 + 0x30;
    param_4 = param_4 + 1;
    puStack_14 = puStack_14 + 1;
  } while (param_5 < 0xc0);
  FUN_00474640();
  FUN_00474ca0();
  ExceptionList = pvStack_c;
  return param_3;
}
