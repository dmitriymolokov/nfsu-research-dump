/* spd-match: far pct=6.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00467390 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00408180();
int __cdecl FUN_00567370();
extern int DAT_00736078;
undefined4 __fastcall FUN_00467390(float * obj, int param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  float *pfVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  float *local_5c;
  
  if (DAT_00736078 == 0) {
    piVar14 = *(int **)(param_1 + 600);
    if ((*(char *)((int)piVar14 + 0x15) == '\x03') ||
       (*(char *)(*(int *)(param_1 + 0x25c) + 0x15) == '\x03')) {
      local_5c = param_2;
      if (*(char *)((int)piVar14 + 0x15) == '\x03') {
        piVar13 = piVar14;
        param_2 = obj;
        piVar14 = *(int **)(param_1 + 0x25c);
      }
      else {
        piVar13 = *(int **)(param_1 + 0x25c);
        local_5c = obj;
      }
      iVar7 = piVar13[0x18];
      fVar1 = *(float *)(iVar7 + 0x74);
      fVar6 = *(float *)(iVar7 + 0x70);
      fVar2 = *(float *)(iVar7 + 0x78);
      fVar8 = -fVar6;
      fVar9 = -fVar1;
      fVar10 = -fVar2;
      pfVar11 = (**(float * (**)())(*piVar14 + 8))();
      fVar3 = pfVar11[1];
      fVar4 = pfVar11[2];
      *param_2 = *pfVar11;
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      fVar15 = (**(float10 (**)())(*piVar14 + 0x20))();
      fVar3 = (float)fVar15;
      *param_2 = fVar8 * fVar3 + *param_2;
      param_2[1] = fVar9 * fVar3 + param_2[1];
      param_2[2] = fVar10 * fVar3 + param_2[2];
      iVar7 = piVar13[0x18];
      fVar3 = *(float *)(iVar7 + 0x38);
      fVar4 = *(float *)(iVar7 + 0x34);
      fVar5 = *(float *)(iVar7 + 0x30);
      pfVar11 = (**(float * (**)())(*piVar14 + 8))();
      fVar3 = -((fVar6 * *pfVar11 + fVar1 * pfVar11[1] + fVar2 * pfVar11[2] +
                fVar8 * fVar5 + fVar9 * fVar4 + fVar10 * fVar3) /
               (fVar8 * fVar6 + fVar9 * fVar1 + fVar10 * fVar2));
      pfVar11 = (**(float * (**)())(*piVar14 + 8))();
      fVar1 = pfVar11[1];
      fVar2 = pfVar11[2];
      fVar4 = fVar8 * fVar3 + *pfVar11;
      *local_5c = fVar4;
      fVar1 = fVar9 * fVar3 + fVar1;
      local_5c[1] = fVar1;
      fVar2 = fVar10 * fVar3 + fVar2;
      local_5c[2] = fVar2;
      fVar4 = *param_2 - fVar4;
      fVar1 = param_2[1] - fVar1;
      fVar2 = param_2[2] - fVar2;
      fVar15 = (**(float10 (**)())(*piVar14 + 0x20))();
      if (fVar15 <= (float10)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2)) {
        return 1;
      }
    }
    else {
      pfVar11 = (**(float * (**)())(*piVar14 + 8))();
      pfVar12 = (**(float * (**)())(**(int **)(param_1 + 0x25c) + 8))();
      fVar1 = *pfVar12;
      fVar2 = *pfVar11;
      fVar3 = pfVar12[1];
      fVar4 = pfVar11[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar11[2];
      piVar14 = *(int **)(param_1 + 600);
      fVar15 = (**(float10 (**)())(**(int **)(param_1 + 0x25c) + 0x20))();
      fVar16 = (**(float10 (**)())(*piVar14 + 0x20))();
      if (fVar16 + (float10)(float)fVar15 <=
          (float10)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                        (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar3 - fVar4) * (fVar3 - fVar4))) {
        FUN_00567370();
        fVar1 = pfVar11[2];
        fVar2 = *pfVar11;
        param_2[1] = pfVar11[1];
        *param_2 = fVar2;
        param_2[2] = fVar1;
        fVar15 = (**(float10 (**)())(**(int **)(param_1 + 600) + 0x20))();
        pfVar11 = (float *)FUN_00408180((float)fVar15);
        fVar1 = pfVar11[1];
        fVar2 = pfVar11[2];
        *param_2 = *pfVar11 + *param_2;
        param_2[1] = fVar1 + param_2[1];
        param_2[2] = fVar2 + param_2[2];
        fVar1 = pfVar12[1];
        fVar2 = pfVar12[2];
        *obj = *pfVar12;
        obj[1] = fVar1;
        obj[2] = fVar2;
        fVar15 = (**(float10 (**)())(**(int **)(param_1 + 0x25c) + 0x20))();
        pfVar11 = (float *)FUN_00408180((float)-fVar15);
        fVar1 = pfVar11[1];
        fVar2 = pfVar11[2];
        *obj = *pfVar11 + *obj;
        obj[1] = fVar1 + obj[1];
        obj[2] = fVar2 + obj[2];
        return 1;
      }
    }
  }
  return 0;
}
