/* spd-match: far pct=5.28 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2297/batches/20260724T143135Z_w0_tp1 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
double __cdecl sqrt(double);
int __cdecl abs(int);

extern int DAT_006cc7a4;
extern int DAT_0077af30;
int unaff_ESI;

struct ThisCallBox {
  float10 FUN_005aab20(int param_2);
};
float10 ThisCallBox::FUN_005aab20(int param_2) {
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  float10 fVar9;
  
  iVar7 = 0;
  do {
    if (*(char *)(unaff_ESI + 4 + iVar7) == ((int)this)) {
      if (iVar7 != -1) {
        if (((int)this) < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (&DAT_0077af30)[((int)this)];
        }
        pfVar1 = (float *)(*(short *)(unaff_ESI + 8 + iVar7 * 2) * 0x88 + 0x27c + iVar8);
        iVar8 = (int)*(char *)((iVar7 == 0) + 4 + unaff_ESI);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (&DAT_0077af30)[iVar8];
        }
        iVar7 = *(short *)(unaff_ESI + 8 + (uint)(iVar7 == 0) * 2) * 0x88;
        pfVar2 = (float *)(iVar7 + 0x27c + iVar8);
        fVar3 = -*(float *)(iVar7 + 0x2a0 + iVar8);
        fVar4 = pfVar2[3] * ((int)DAT_006cc7a4) + pfVar2[4] * fVar3 + *pfVar2;
        fVar6 = pfVar2[3] * ((int)DAT_006cc7a4) + pfVar2[4] * pfVar2[10] + *pfVar2;
        fVar5 = pfVar2[4] * ((int)DAT_006cc7a4) + -pfVar2[3] * pfVar2[10] + pfVar2[1];
        fVar9 = (float10)(pfVar2[4] * ((int)DAT_006cc7a4) + -pfVar2[3] * fVar3 + pfVar2[1]) -
                (float10)pfVar1[1];
        if (param_2 == 0) {
          fVar9 = ((float10)fVar4 - (float10)*pfVar1) * (float10)pfVar1[3] +
                  fVar9 * (float10)pfVar1[4];
          fVar3 = (fVar5 - pfVar1[1]) * pfVar1[4];
          fVar4 = (fVar6 - *pfVar1) * pfVar1[3];
        }
        else {
          fVar9 = ((float10)fVar4 - (float10)*pfVar1) * (float10)pfVar1[5] +
                  fVar9 * (float10)pfVar1[6];
          fVar3 = (fVar5 - pfVar1[1]) * pfVar1[6];
          fVar4 = (fVar6 - *pfVar1) * pfVar1[5];
        }
        if ((float10)(fVar4 + fVar3) <= fVar9) {
          fVar9 = (float10)(fVar4 + fVar3);
        }
        return -fVar9;
      }
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  return (float10)((int)DAT_006cc7a4);
}
