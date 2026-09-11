/* spd-match: far pct=5.64 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044BD10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_00401c40();
int __cdecl FUN_004175c0();
int __cdecl FUN_0044c010();
int __cdecl FUN_00583ea0();
extern int DAT_006b77dc;
extern int DAT_007360ac;
extern int DAT_0073619c;
extern int DAT_007361a8;
extern int DAT_007361b4;
extern int DAT_007361b8;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad34;
extern int DAT_00779fb0;
extern int DAT_00779fd0;
extern int DAT_0077a010;
extern int DAT_0077a044;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a344;
extern int DAT_0078a404;
extern int _DAT_006cc7bc;
extern int _DAT_006cca38;
extern int _DAT_0077a49c;
extern void LAB_0044beca(void);
extern void LAB_0044bf11(void);
extern void LAB_0044bfdf(void);
void __fastcall FUN_0044bd10(int * obj)

{
  float fVar1;
  bool bVar2;

  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  undefined *puVar11;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  iVar6 = *(int *)(obj[1] + 0x1c);
  if (iVar6 == 0) {
    return;
  }
  if ((char)obj[0x11b] == '\0') {
    return;
  }
  if (*(int *)(obj[1] + 0x18) != 0) {
    return;
  }
  if (DAT_0078a344 != '\0') {
    return;
  }
  if (DAT_007361a8 != 0) {
    return;
  }
  if ((obj[0xfe] == 0) || (bVar2 = true, *(char *)(obj[0xfe] + 0x1f2) == '\0')) {
    bVar2 = false;
  }
  uVar3 = (**(code **)(*obj + 0x58))();
  fVar1 = (float)*(int *)(((int)DAT_0073619c) + 0x14) * ((int)_DAT_006cca38);
  fVar5 = *(float *)((&DAT_0077a044) + (uVar3 & ((int)uVar3 < 1) - 1) * 0x54);
  fStack_20 = (float)(((int)DAT_0073ad34) - obj[0x108]);
  if ((float)(int)fStack_20 * ((int)_DAT_006cca38) <= _DAT_0077a49c) {
    return;
  }
  bVar9 = DAT_007360ac == 0;
  obj[0x108] = DAT_0073ad34;
  fStack_28 = DAT_006b77dc;
  obj[0x11c] = 0;
  if (((bVar9) && (*DAT_007361f0 != 9)) && (0 < DAT_0078a320)) {
    if (!bVar2) goto LAB_0044bfdf;
    if (fVar1 < fVar5) goto LAB_0044bf11;
    fStack_20 = 0.0;
    fStack_24 = 0.0;
    fVar5 = (float)((int)DAT_007361bc);
    if (DAT_007361c4 == 1) {
LAB_0044beca:
      obj[0x11c] = (int)fVar5;
    }
    else if (DAT_007361c4 == 2) {
      iVar4 = *(int *)(*(int *)(((int)DAT_007361b4) + 4) + 0x1c);
      iVar8 = *(int *)(*(int *)(((int)DAT_007361b8) + 4) + 0x1c);
      iStack_1c = DAT_007361b4;
      fStack_28 = (float)((int)DAT_007361b8);
      fVar5 = (float)((int)DAT_007361b4);
      iVar7 = iVar4;
      if (*(char *)(iVar8 + 10) < *(char *)(iVar4 + 10)) {
        fStack_28 = (float)((int)DAT_007361b4);
        fVar5 = (float)((int)DAT_007361b8);
        iVar7 = iVar8;
        iVar8 = iVar4;
      }
      iVar4 = ((int)DAT_0078a324) / 2;
      if (*(char *)(iVar7 + 10) <= iVar4) {
        iVar4 = iVar4 + 1;
      }
      if (*(char *)(iVar8 + 10) <= iVar4) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 < *(char *)(iVar6 + 10)) {
        fVar5 = fStack_28;
      }
      goto LAB_0044beca;
    }
    fStack_18 = *(float *)((&DAT_0078a404) + *(int *)(obj[0x11c] + 0x10) * 4);
    FUN_0044c010(iVar6,*(undefined4 *)(*(int *)(obj[0x11c] + 4) + 0x1c),&fStack_20,&fStack_24);
    fStack_28 = fStack_18 * fStack_24 + ((int)DAT_006b77dc) + fStack_20;
  }
LAB_0044bf11:
  if ((bVar2) && (obj[0x11c] != 0)) {
    uVar3 = (**(code **)(*obj + 0x58))();
    fStack_20 = (float)(uVar3 & ((int)uVar3 < 1) - 1);
    fStack_18 = *(float *)((&DAT_0077a010) + (int)fStack_20 * 0x54);
    fVar5 = *(float *)(*(int *)(obj[0x11c] + 0xa8) + 0xc);
    iVar6 = (int)*(char *)(*(int *)(*(int *)(obj[0x11c] + 4) + 0x1c) + 10);
    if (fVar5 < _DAT_006cc7bc) {
      puVar11 = (&DAT_00779fd0) + iVar6 * 8;
    }
    else {
      puVar11 = (&DAT_00779fb0) + iVar6 * 8;
    }
    FUN_004175c0(puVar11,0,0x41100000);
    fVar10 = (float10)FUN_00583ea0((float)(int)fStack_20);
    fVar10 = (float10)FUN_00401c40((float)(((float10)fVar5 - (float10)((int)_DAT_006cc7bc)) * fVar10 +
                                          (float10)((int)_DAT_006cc7bc)),fStack_18);
    fStack_28 = (float)(fVar10 * (float10)fStack_28);
  }
LAB_0044bfdf:
  fVar10 = (float10)FUN_00401c40(fStack_28,0x3f800000);
  *(float *)(obj[1] + 0x404) = (float)fVar10;
  obj[0x12e] = (int)fStack_28;
  return;
}
