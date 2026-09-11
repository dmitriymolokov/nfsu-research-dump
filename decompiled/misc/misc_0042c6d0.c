/* spd-match: far pct=6.82 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142403Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0042e020();
int __cdecl FUN_004406d0();
int __cdecl FUN_00440710();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_004440c0();
int __cdecl FUN_00457300();
int __cdecl FUN_004840c0();
int __cdecl FUN_004854e0();
int __cdecl FUN_00488420();
int __cdecl FUN_004892c0();
int __cdecl FUN_00489360();
int __cdecl FUN_0048afd0();
int __cdecl FUN_0048c1f0();
int __cdecl FUN_0048c280();
int __cdecl FUN_0048c990();
int __cdecl FUN_0048d6e0();
int __cdecl FUN_0048e210();
int __cdecl FUN_0048f090();
int __cdecl FUN_00490ea0();
int __cdecl FUN_00565ce0();
int __cdecl FUN_005a7270();
int __cdecl FUN_005a7450();
extern int DAT_006b79f4;
extern int DAT_006cc7a4;
extern int DAT_00700b14;
extern int DAT_0073619c;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_007361f8;
extern int DAT_007797f8;
extern int _DAT_006b7aac;
extern int _DAT_006cc7bc;
extern int _DAT_006cc908;
extern int _DAT_00700b18;
extern void LAB_0042d2c5(void);
extern void LAB_00686d8e(void);
void *ExceptionList;

void FUN_0042c6d0(int param_1,int param_2,char param_3)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uStack_5d4;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  undefined4 uStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  int iStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  undefined4 uStack_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  undefined4 uStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  undefined4 uStack_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  undefined4 uStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_554;
  undefined4 uStack_52c;
  undefined1 auStack_510 [32];
  int aiStack_4f0 [160];
  int iStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 auStack_250 [10];
  undefined4 uStack_228;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_00686d8e;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  if (*(undefined4 **)(param_1 + 0x28c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_1c;
    (**(code **)**(undefined4 **)(param_1 + 0x28c))(1);
    *(undefined4 *)(param_1 + 0x28c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x290) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x290))(1);
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x27c);
  if (((piVar2 != (int *)0x0) && (piVar2[3] == param_2)) && (piVar2[3] != 0x14)) {
    ExceptionList = pvStack_1c;
    return;
  }
  iVar11 = *DAT_007361f0;
  if ((((iVar11 == 5) || (iVar11 == 6)) || (iVar11 == 10)) && (0x11 < param_2)) {
    if (param_2 < 0x14) {
      ExceptionList = pvStack_1c;
      return;
    }
    if (param_2 == 0x15) {
      ExceptionList = pvStack_1c;
      return;
    }
  }
  iVar11 = *(int *)(param_1 + 4);
  if (iVar11 == 0) {
    iVar11 = *DAT_007361f8;
  }
  fStack_5a4 = (float)iVar11;
  if (piVar2 != (int *)0x0) {
    if (param_3 == '\0') {
      (**(code **)*piVar2)(1);
    }
    else {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x280);
      *(int **)(param_1 + 0x280) = piVar2;
      (**(code **)(*piVar2 + 0x3c))();
    }
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  switch(param_2) {
  case 0:
    goto switchD_0042c7d7_caseD_0;
  case 1:
    pvVar8 = _malloc(0x3a0);
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00489360(iVar11,(int)*(char *)(param_1 + 0x24),DAT_006b79f4,
                           (int)*(char *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x4ad),1);
    }
    *(undefined4 *)(param_1 + 0x27c) = uVar9;
    uVar4 = FUN_0042e020();
    *(undefined1 *)(param_1 + 0x24) = uVar4;
    goto switchD_0042c7d7_caseD_0;
  case 2:
    uStack_580 = *(undefined4 *)(iVar11 + 0x60);
    fStack_5c4 = *(float *)(iVar11 + 0x68);
    fStack_57c = *(float *)(iVar11 + 100);
    uStack_590 = 0;
    fStack_58c = 0.0;
    fStack_588 = 1.0;
    fStack_578 = fStack_5c4 + (int)_DAT_006cc908;
    pvVar8 = _malloc(0x4c);
    uStack_14 = 0;
    if (pvVar8 == (void *)0x0) {
LAB_0042d2c5:
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00488420(pvVar8,*(undefined4 *)(param_1 + 0x18),&uStack_580,1);
    }
    break;
  case 3:
    pvVar8 = _malloc(0x2c);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_004892c0(1);
    break;
  default:
    pvVar8 = _malloc(0xd0);
    uStack_14 = 4;
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_004840c0(pvVar8,*(undefined4 *)(param_1 + 0x18),iVar11,1);
    break;
  case 0xd:
    pvVar8 = _malloc(0x368);
    uStack_14 = 1;
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_0048f090(pvVar8,*(undefined4 *)(param_1 + 0x18),iVar11,
                         *(undefined4 *)(param_1 + 0x280));
    break;
  case 0xe:
    pvVar8 = _malloc(0x450);
    uStack_14 = 2;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00490ea0(pvVar8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x90),
                           iVar11 + 0x60);
    }
    piVar2 = *(int **)(param_1 + 0x90);
    uStack_14 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x27c) = uVar9;
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        FUN_00565ce0();
      }
      _free(piVar2);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    goto switchD_0042c7d7_caseD_0;
  case 0xf:
    fStack_5c4 = *(float *)(param_1 + 0x5cc);
    if (4 < (int)fStack_5c4 - *(int *)(param_1 + 0x5c8)) {
      fStack_5c4 = (float)((int)fStack_5c4 + -2);
    }
    **(undefined4 **)(param_1 + 0x55c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 8) = 0;
    iVar11 = *(int *)(*(int *)(param_1 + 0x5c4) + 8 + (int)fStack_5c4 * 4);
    uVar15 = 0;
    uVar6 = (**(code **)(**(int **)((int)fStack_5a4 + 0x2c) + 0x1c))(0);
    uVar9 = *(undefined4 *)(iVar11 + 0x58);
    uVar6 = ((int)uVar6 < 1) - 1 & uVar6;
    uVar14 = uVar6;
    fVar13 = (float10)FUN_005a7450(uVar6);
    FUN_005a7270(&fStack_5c4,uVar9,(float)fVar13,uVar14);
    FUN_004440c0(&fStack_5c4);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 4) + 0x810);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x28) =
         *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x10) = uStack_52c;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x2c) =
         *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x10);
    iVar11 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x20) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x24) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x30) = 0x3f000000;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x34) = 0x461c4000;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x38) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x3c) = *(undefined4 *)(param_1 + 0x5c0);
    do {
      pfVar7 = (float *)(*(int *)(param_1 + 0x5c0) + iVar11);
      iVar11 = iVar11 + 0x10;
      *pfVar7 = DAT_00700b14;
      pfVar7[1] = 0.0;
      pfVar7[2] = 0.0;
    } while (iVar11 < 0x200);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x50) = 2;
    *(int *)(*(int *)(param_1 + 0x55c) + 0x54) = param_1 + 0x560;
    *(int *)(*(int *)(param_1 + 0x55c) + 0x58) = param_1 + 0x590;
    puVar10 = (undefined4 *)(param_1 + 0x598);
    iVar11 = 3;
    do {
      puVar10[-2] = 0;
      puVar10[-1] = 0;
      *puVar10 = 0;
      puVar10 = puVar10 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x60) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 100) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x68) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x70) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x74) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x78) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x7c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x80) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x84) = 0x3e4ccccd;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x8c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x90) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x94) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x98) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x9c) = 0;
    uStack_5c0 = *(undefined4 *)((int)fStack_5a8 + 100);
    fStack_5c4 = *(float *)((int)fStack_5a8 + 0x60);
    fStack_5bc = *(float *)((int)fStack_5a8 + 0x68);
    piVar2 = *(int **)(*(int *)(param_1 + 0x5c4) + 8 + (int)fStack_5c8 * 4);
    fVar1 = (float)piVar2[0x16];
    uVar14 = uVar6;
    fVar13 = (**(float10 (**)())(*piVar2 + 0xc))(uVar6,uVar6);
    FUN_005a7270(&fStack_598,(int)fStack_5a8 + 0x60,(float)(fVar13 - (float10)((int)_DAT_006b7aac)),uVar14)
    ;
    uVar14 = uVar6;
    fVar13 = (**(float10 (**)())(*piVar2 + 8))(uVar6,uVar6);
    FUN_005a7270(&fStack_57c,uStack_5d4,(float)(fVar13 + (float10)((int)_DAT_006b7aac)),uVar14);
    fVar3 = fStack_598;
    fStack_5ac = fStack_59c;
    fStack_5a8 = fStack_598;
    fStack_5a4 = fStack_594;
    fStack_584 = fStack_574;
    fStack_588 = fStack_578;
    piVar2 = *(int **)(*(int *)(param_1 + 0x5c4) + 0x10 + *(int *)(param_1 + 0x5c8) * 4);
    fStack_56c = fStack_57c - fVar1;
    fStack_554 = fStack_574 - fStack_5c4;
    bVar12 = (fStack_59c - fVar1) * *(float *)(iStack_5b0 + 0x70) +
             (fStack_598 - fStack_5c8) * *(float *)(iStack_5b0 + 0x74) +
             (fStack_594 - fStack_5c4) * *(float *)(iStack_5b0 + 0x78) <=
             fStack_56c * *(float *)(iStack_5b0 + 0x70) +
             (fStack_578 - fStack_5c8) * *(float *)(iStack_5b0 + 0x74) +
             fStack_554 * *(float *)(iStack_5b0 + 0x78);
    if (bVar12) {
      fStack_5cc = fStack_59c;
      fStack_5c4 = fStack_594;
      fVar13 = (**(float10 (**)())(*piVar2 + 8))(uVar6,uVar6);
      FUN_005a7270(&uStack_5a0,fVar3,(float)(fVar13 + (float10)((int)_DAT_006b7aac)),uVar15);
      *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x88) = 0xbecccccd;
    }
    else {
      fStack_5cc = fStack_57c;
      fStack_5c4 = fStack_574;
      fVar13 = (**(float10 (**)())(*piVar2 + 0xc))();
      FUN_005a7270(&uStack_5a0,fStack_578,(float)(fVar13 - (float10)((int)_DAT_006b7aac)),uVar15);
      *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x88) = 0x3ecccccd;
    }
    cVar5 = FUN_00457300(fStack_5cc,&uStack_5c0,(int)fStack_5c4 + -1);
    if (cVar5 == '\0') {
      if (bVar12) {
        fStack_5bc = fStack_56c;
        uStack_5c0 = uStack_570;
        fStack_5b8 = fStack_568;
        iVar11 = piVar2[0x16];
        fVar13 = (**(float10 (**)())(*piVar2 + 0xc))();
        FUN_005a7270(&uStack_5a0,iVar11,(float)(fVar13 - (float10)((int)_DAT_006b7aac)),uVar6);
        *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x88) = 0x3ecccccd;
      }
      else {
        fStack_5bc = fStack_58c;
        uStack_5c0 = uStack_590;
        fStack_5b8 = fStack_588;
        iVar11 = piVar2[0x16];
        fVar13 = (**(float10 (**)())(*piVar2 + 8))(uVar6,uVar6);
        FUN_005a7270(&uStack_5a0,iVar11,(float)(fVar13 + (float10)((int)_DAT_006b7aac)),uVar6);
        *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x88) = 0xbecccccd;
      }
    }
    fStack_5b8 = fStack_5b8 + (int)_DAT_006cc7bc;
    iStack_270 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    fStack_598 = fStack_598 + (int)_DAT_006cc7bc;
    uStack_25c = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    FUN_00440740();
    fVar13 = (float10)FUN_00440a40(auStack_510,&uStack_5c0,0,0,0);
    if ((float10)fStack_5b8 < fVar13) {
      fStack_5b8 = (float)(fVar13 + (float10)((int)_DAT_006cc7bc));
    }
    *(float *)(param_1 + 0x568) = fStack_5b8;
    *(float *)(param_1 + 0x564) = fStack_5bc;
    *(undefined4 *)(param_1 + 0x560) = uStack_5c0;
    *(float *)(param_1 + 0x578) = fStack_5b8;
    *(float *)(param_1 + 0x574) = fStack_5bc;
    *(undefined4 *)(param_1 + 0x570) = uStack_5c0;
    *(float *)(param_1 + 0x588) = fStack_598;
    *(float *)(param_1 + 0x584) = fStack_59c;
    puVar10 = auStack_250;
    for (iVar11 = 0x8c; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x580) = uStack_5a0;
    uStack_228 = 2;
    pvVar8 = _malloc(0x470);
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_004854e0(pvVar8,fStack_5a4,*(undefined4 *)(param_1 + 0x55c),auStack_250,0);
    }
    *(undefined4 *)(param_1 + 0x27c) = uVar9;
    iVar11 = 0;
    if (0 < iStack_270) {
      do {
        *(char *)(aiStack_4f0[iVar11] + 8) = *(char *)(aiStack_4f0[iVar11] + 8) + -1;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iStack_270);
    }
    goto switchD_0042c7d7_caseD_0;
  case 0x10:
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 4) + 0x810);
    *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0x28) =
         *(undefined4 *)(*(int *)(param_1 + 0x55c) + 0xc);
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x68);
    if (*(float *)(param_1 + 0x588) < fVar1) {
      *(float *)(param_1 + 0x588) = fVar1;
    }
    FUN_004406d0();
    puVar10 = (undefined4 *)(param_1 + 0x580);
    fVar13 = (float10)FUN_00440a40(auStack_510,puVar10,0,0,0);
    if ((float10)*(float *)(param_1 + 0x588) < fVar13) {
      *(float *)(param_1 + 0x588) = (float)(fVar13 + (float10)((int)_DAT_006cc7bc));
    }
    *(undefined4 *)(param_1 + 0x560) = *puVar10;
    iVar11 = 0;
    *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x588);
    *(undefined4 *)(param_1 + 0x570) = *puVar10;
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0x584);
    *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0x588);
    *(float *)(*(int *)(param_1 + 0x55c) + 0x88) = -*(float *)(*(int *)(param_1 + 0x55c) + 0x88);
    fVar1 = DAT_006cc7a4;
    do {
      pfVar7 = (float *)(*(int *)(param_1 + 0x5c0) + iVar11);
      iVar11 = iVar11 + 0x10;
      fVar3 = ((int)DAT_00700b14) - ((int)_DAT_00700b18) * fVar1;
      pfVar7[1] = 0.0;
      pfVar7[2] = 0.0;
      *pfVar7 = fVar3;
      fVar1 = fVar1 + (int)_DAT_006cc7bc;
    } while (iVar11 < 0x200);
    puVar10 = auStack_250;
    for (iVar11 = 0x8c; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    uStack_228 = 2;
    pvVar8 = _malloc(0x470);
    if (pvVar8 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x27c) = 0;
      FUN_00440710();
    }
    else {
      uVar9 = FUN_004854e0(pvVar8,fStack_5a4,*(undefined4 *)(param_1 + 0x55c),auStack_250,1);
      *(undefined4 *)(param_1 + 0x27c) = uVar9;
      FUN_00440710();
    }
    goto switchD_0042c7d7_caseD_0;
  case 0x11:
    pvVar8 = _malloc(0x54);
    uStack_14 = 3;
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    fStack_5c4 = (float)CONCAT31(((unsigned int)(fStack_5c4) >> 8),*(undefined1 *)(param_1 + 0x4ad));
    uVar9 = FUN_0048afd0(pvVar8,*(undefined4 *)(param_1 + 0x18),iVar11,
                         (int)*(char *)(param_1 + 0x24),*(char *)(param_1 + 0x28) != '\0',fStack_5c4
                         ,1);
    break;
  case 0x12:
    pvVar8 = _malloc(0x2c);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_0048c1f0();
    break;
  case 0x13:
    pvVar8 = _malloc(0x38);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_0048c280();
    break;
  case 0x14:
    pvVar8 = _malloc(0x58);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_0048c990(*(undefined4 *)(param_1 + 4));
    break;
  case 0x15:
    pvVar8 = _malloc(0xa0);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    if (*(int *)(((int)DAT_0073619c) + 0x24) < 1) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = *(undefined4 **)(((int)DAT_0073619c) + 0x520);
    }
    uVar9 = FUN_0048d6e0(pvVar8,*puVar10,(int)*(char *)(param_1 + 0x24));
    break;
  case 0x16:
    pvVar8 = _malloc(0x310);
    if (pvVar8 == (void *)0x0) goto LAB_0042d2c5;
    uVar9 = FUN_0048e210(pvVar8,&DAT_007797f8);
  }
  *(undefined4 *)(param_1 + 0x27c) = uVar9;
switchD_0042c7d7_caseD_0:
  if (*(int *)(param_1 + 0x27c) != 0) {
    *(int *)(*(int *)(param_1 + 0x27c) + 0x20) = param_1;
  }
  ExceptionList = pvStack_1c;
  return;
}
