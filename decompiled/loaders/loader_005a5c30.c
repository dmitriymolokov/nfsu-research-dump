/* spd-match: far pct=3.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A5C30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f5e0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_005a6150();
int __cdecl FUN_005a6860();
extern int DAT_006cc7a4;
extern int _DAT_006b5920;
extern int _DAT_006b5924;
extern int _DAT_006b5928;
extern int _DAT_006ccc9c;
extern int _DAT_006cccb8;
int unaff_EBX;
void __fastcall FUN_005a5c30(int obj, int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;

  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  float unaff_EBX;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 uVar18;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  int iStack_4;
  
  iVar10 = *(int *)(obj + 0x10);
  if (*(char *)(iVar10 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  iVar14 = (int)*(char *)(iVar10 + 0x424);
  uVar18 = 1;
  uVar9 = FUN_0041f5e0(1);
  iVar10 = FUN_005a6150(param_1,uVar9,uVar18);
  if (iVar10 != -1) {
    FUN_005a6860(iVar14,0xbf800000);
  }
  piVar11 = *(int **)(param_1 + 4 + *(int *)(param_1 + 4) * 4);
  (**(code **)(*piVar11 + 8))(iVar14);
  fVar16 = (**(float10 (**)())(*piVar11 + 0xc))(iVar14);
  piVar11[0xf] = (int)(float)fVar16;
  piVar11[8] = iStack_4;
  iVar10 = 0xb;
  pfVar13 = (float *)(piVar11 + 0x10);
  iStack_4 = 6;
  do {
    (**(code **)(*piVar11 + 8))(iVar10);
    fVar16 = (**(float10 (**)())(*piVar11 + 0xc))(iVar10);
    *pfVar13 = (float)fVar16;
    pfVar13[-7] = fStack_18;
    pfVar13 = pfVar13 + 1;
    iVar10 = iVar10 + 1;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  iVar10 = *(int *)(param_1 + 4) + -2;
  if (-1 < iVar10) {
    piVar11 = (int *)(param_1 + 0xc + iVar10 * 4);
    fStack_18 = (float)(*(int *)(param_1 + 4) + -1);
    while( true ) {
      iVar10 = *piVar11;
      piVar3 = (int *)piVar11[-1];
      bVar5 = fStack_28 < _DAT_006cccb8;
      bVar7 = fStack_28 == _DAT_006cccb8;
      bVar6 = _DAT_006ccc9c <= fStack_28;
      fVar16 = (**(float10 (**)())(*piVar3 + 8))(uStack_14);
      fVar1 = (float)fVar16;
      fVar17 = (**(float10 (**)())(*piVar3 + 0xc))(uStack_14);
      fVar16 = (float10)unaff_EBX;
      fStack_1c = fVar1;
      if (bVar5 != bVar7) {
        if ((-_DAT_006b5924 < unaff_EBX) && (_DAT_006b5928 <= (float)(fVar17 - fVar16))) {
          unaff_EBX = 0.0;
        }
        fStack_1c = _DAT_006b5920 * fVar1;
      }
      fVar2 = fVar1;
      if (bVar6) {
        if ((fVar17 < (float10)_DAT_006b5924) && (_DAT_006b5928 <= (float)(fVar17 - fVar16))) {
          fVar17 = (float10)DAT_006cc7a4;
        }
        fVar2 = _DAT_006b5920 * fVar1;
      }
      fVar2 = *(float *)(iVar10 + 0x20) - fVar2;
      fVar4 = *(float *)(iVar10 + 0x3c);
      if (fVar2 < unaff_EBX) {
        fVar2 = unaff_EBX;
      }
      piVar3[8] = (int)fVar2;
      fVar4 = fVar4 + fStack_1c;
      if ((float10)fVar4 <= fVar17) {
        fVar17 = (float10)fVar4;
      }
      piVar3[0xf] = (int)(float)fVar17;
      pfVar15 = (float *)(iVar10 + 0x24);
      iVar12 = 0xb;
      pfVar13 = (float *)(piVar3 + 0x10);
      iVar14 = 6;
      do {
        (**(code **)(*piVar3 + 8))(iVar12);
        fVar16 = (**(float10 (**)())(*piVar3 + 0xc))(iVar12);
        fVar2 = pfVar15[7];
        fVar8 = *pfVar15 - fVar1;
        if (*pfVar15 - fVar1 < fVar4) {
          fVar8 = fVar4;
        }
        *(float *)(((int)piVar3 - iVar10) + (int)pfVar15) = fVar8;
        fVar8 = fVar2 + fVar1;
        if ((float)fVar16 < fVar2 + fVar1) {
          fVar8 = (float)fVar16;
        }
        *pfVar13 = fVar8;
        pfVar15 = pfVar15 + 1;
        pfVar13 = pfVar13 + 1;
        iVar12 = iVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      piVar11 = piVar11 + -1;
      fStack_18 = (float)((int)fStack_18 + -1);
      if (fStack_18 == 0.0) break;
      unaff_EBX = 0.0;
    }
  }
  return;
}
