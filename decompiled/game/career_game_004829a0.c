/* spd-match: far pct=10.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_00401c10();
int __cdecl FUN_00401c80();
int __cdecl FUN_0040bc10();
int __cdecl FUN_00480150();
int __cdecl FUN_00480190();
int __cdecl FUN_00480ca0();
int __cdecl FUN_00480ff0();
int __cdecl FUN_00481160();
int __cdecl FUN_00481ab0();
int __cdecl FUN_00482870();
int __cdecl FUN_004828a0();
int __cdecl FUN_00564bd0();
int __cdecl FUN_00674898();
extern int DAT_006b6fb4;
extern int DAT_006b6fb8;
extern int DAT_006b6fbc;
extern int DAT_006b6fc0;
extern int DAT_006b6fc4;
extern int DAT_006b6fc8;
extern int DAT_006b6fcc;
extern int DAT_006b6fd0;
extern int DAT_006b6fd4;
extern int DAT_006b6fd8;
extern int DAT_006b6fdc;
extern int DAT_006b6fe0;
extern int DAT_006b6fe4;
extern int DAT_006b6fe8;
extern int DAT_006b6fec;
extern int DAT_006b6ff0;
extern int DAT_006b6ff4;
extern int DAT_006b6ff8;
extern int DAT_006b6ffc;
extern int DAT_00735f50;
extern int DAT_0073ad38;
extern int DAT_0073b4c8;
extern int DAT_0073b4c9;
extern int _DAT_006b6fa4;
extern int _DAT_006b6fa8;
extern int _DAT_006b6fac;
extern int _DAT_006b6fb0;
extern int _DAT_006cc79c;
extern void LAB_004829e3(void);

void FUN_004829a0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  short sVar9;
  undefined4 uVar10;
  float fVar11;
  int iVar12;
  int unaff_EDI;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (DAT_00735f50 != 0) {
    if (*(int *)(unaff_EDI + 0xcb8) == 0) {
      FUN_00481ab0(1);
    }
    if (DAT_00735f50 != 0) goto LAB_004829e3;
  }
  if (*(int *)(unaff_EDI + 0xcb8) != 0) {
    FUN_00481ab0(0);
  }
LAB_004829e3:
  iVar12 = *(int *)(unaff_EDI + 0xcb8);
  if (0 < iVar12) {
    switch(iVar12) {
    case 1:
      fVar13 = (float10)FUN_00401c80(DAT_0073ad38 * *(float *)(unaff_EDI + 0xce4) * ((int)_DAT_006b6fac) +
                                     *(float *)(unaff_EDI + 0xcc0),
                                     ((int)_DAT_006b6fa4) + *(float *)(unaff_EDI + 0xccc),
                                     ((int)_DAT_006b6fa8) + *(float *)(unaff_EDI + 0xcd0));
      *(float *)(unaff_EDI + 0xcc0) = (float)fVar13;
      uVar10 = FUN_00480150((float)fVar13);
      *(undefined4 *)(unaff_EDI + 0xcb4) = uVar10;
      FUN_00481160(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcc0));
      return;
    case 3:
      FUN_00480ca0(_DAT_006b6fb0 * *(float *)(unaff_EDI + 0xce4) * ((int)DAT_0073ad38));
      fVar13 = (float10)FUN_00480190();
      *(float *)(unaff_EDI + 0xcc0) = (float)(fVar13 + (float10)((int)_DAT_006cc79c));
      FUN_00481160(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcc0));
      return;
    case 4:
      FUN_00480ca0(_DAT_006b6fb0 * *(float *)(unaff_EDI + 0xce4) * ((int)DAT_0073ad38));
      fVar13 = (float10)FUN_00480190();
      *(float *)(unaff_EDI + 0xcc0) = (float)(fVar13 - (float10)((int)_DAT_006cc79c));
      FUN_00481160(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcc0));
      return;
    case 5:
    case 6:
      if ((iVar12 == 4) || (iVar12 == 6)) {
        iVar12 = 1;
      }
      else {
        iVar12 = 0;
      }
      if (((*(char *)(unaff_EDI + 0xd08) != '\0') && (DAT_0073b4c8 == '\0')) &&
         (DAT_0073b4c9 == '\0')) {
        *(undefined1 *)(unaff_EDI + 0xd08) = 0;
      }
      fVar13 = (float10)FUN_004828a0(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcdc),DAT_006b6fbc,
                                     DAT_006b6fc0,DAT_006b6fc4);
      *(float *)(unaff_EDI + 0xcdc) = (float)fVar13;
      if (*(char *)(unaff_EDI + 0xd08) == '\0') {
        fVar14 = (float10)FUN_004828a0(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xce0),DAT_006b6fd0,
                                       DAT_006b6fd4,DAT_006b6fd8);
        *(float *)(unaff_EDI + 0xce0) = (float)fVar14;
      }
      uVar6 = DAT_006b6fe4;
      fVar14 = (float10)FUN_004828a0(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xce8),DAT_006b6fdc,
                                     DAT_006b6fe0,DAT_006b6fe4);
      uVar10 = DAT_006b6fe0;
      *(float *)(unaff_EDI + 0xce8) = (float)fVar14;
      fVar15 = (float10)FUN_004828a0(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcec),DAT_006b6fdc,
                                     uVar10,uVar6);
      *(float *)(unaff_EDI + 0xcec) = (float)fVar15;
      fVar15 = (float10)FUN_00482870();
      uVar7 = FUN_00401c10(DAT_006b6ff0);
      fVar4 = (float)uVar7 * (float)-fVar15 * ((int)DAT_0073ad38);
      fVar15 = (float10)FUN_00482870();
      fVar2 = (float)(fVar15 * (float10)((int)DAT_006b6fdc) * (float10)((int)DAT_0073ad38));
      fVar15 = (float10)FUN_00482870();
      fVar3 = (float)(-fVar15 * (float10)((int)DAT_006b6fdc) * (float10)((int)DAT_0073ad38));
      FUN_00401c10(DAT_006b6ff4);
      FUN_00482870();
      uVar8 = FUN_00674898();
      uVar10 = DAT_006b6fec;
      *(undefined2 *)(unaff_EDI + 0xcd4) = uVar8;
      sVar9 = FUN_00401c10(uVar10);
      sVar9 = FUN_00401c10(DAT_006b6fe8,(float)(int)sVar9);
      fVar11 = (float)(int)*(short *)(unaff_EDI + 0xcd6);
      FUN_00401c80((float)(int)fVar11 + fVar4,(float)(int)sVar9);
      uVar8 = FUN_00674898();
      uVar6 = DAT_006b6ffc;
      uVar10 = DAT_006b6ff8;
      fVar5 = (float)fVar14 * ((int)DAT_0073ad38);
      *(undefined2 *)(unaff_EDI + 0xcd6) = uVar8;
      fVar14 = (float10)FUN_00401c80(fVar5 + *(float *)(unaff_EDI + 0xcd8),uVar10,uVar6);
      *(float *)(unaff_EDI + 0xcd8) = (float)fVar14;
      pfVar1 = (float *)(unaff_EDI + 0x10c + (*(int *)(unaff_EDI + 0xcb4) * 0x13 + iVar12) * 4);
      fVar13 = (float10)FUN_00401c80((float)fVar13 * ((int)DAT_0073ad38) + *pfVar1,DAT_006b6fb4,
                                     DAT_006b6fb8);
      uVar10 = DAT_006b6fcc;
      *pfVar1 = (float)fVar13;
      pfVar1 = (float *)(unaff_EDI + 0x114 + (*(int *)(unaff_EDI + 0xcb4) * 0x13 + iVar12) * 4);
      fVar13 = (float10)FUN_00401c80(DAT_0073ad38 * *(float *)(unaff_EDI + 0xce0) + *pfVar1,
                                     DAT_006b6fc8,uVar10);
      *pfVar1 = (float)fVar13;
      pfVar1 = (float *)(unaff_EDI + *(int *)(unaff_EDI + 0xcb4) * 0x4c + (iVar12 * 3 + 0x3f) * 4);
      *pfVar1 = DAT_0073ad38 * *(float *)(unaff_EDI + 0xcec) + *pfVar1;
      FUN_00564bd0();
      local_60 = -(fVar11 * fVar2) - fVar4 * fVar3;
      local_58 = 0;
      local_5c = fVar4 * fVar2 - fVar11 * fVar3;
      if (*(char *)(*(int *)(unaff_EDI + 0xcb4) * 0x4c + 0xd4 + unaff_EDI) != '\0') {
        FUN_0040bc10();
        FUN_004829a0(&local_60,&local_60,local_50);
      }
      pfVar1 = (float *)(*(int *)(unaff_EDI + 0xcb4) * 0x4c + iVar12 * 0xc + 0xf4 + unaff_EDI);
      *pfVar1 = local_60 + *pfVar1;
      pfVar1 = (float *)(*(int *)(unaff_EDI + 0xcb4) * 0x4c + iVar12 * 0xc + 0xf8 + unaff_EDI);
      *pfVar1 = local_5c + *pfVar1;
      FUN_00480ff0(unaff_EDI);
    }
    FUN_00481160(unaff_EDI,*(undefined4 *)(unaff_EDI + 0xcc0));
  }
  return;
}
