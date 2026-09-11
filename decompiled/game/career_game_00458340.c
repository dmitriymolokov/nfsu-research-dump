/* spd-match: far pct=4.74 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00458340 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00564bd0(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00458340(float * obj, undefined4 param_2, char *param_3, undefined4 param_4, float param_5);
};
void ThisCallBox::FUN_00458340(float * obj, undefined4 param_2, char *param_3, undefined4 param_4, float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  undefined4 *puVar10;
  int iVar11;
  undefined4 *unaff_ESI;
  float *pfVar12;
  
  fVar5 = ABS((*obj - *((float *)this)) * _DAT_006cc7dc) * param_5;
  fVar6 = ABS((obj[1] - ((float *)this)[1]) * _DAT_006cc7dc) * param_5;
  param_5 = ABS((obj[2] - ((float *)this)[2]) * _DAT_006cc7dc) * param_5;
  FUN_00564bd0();
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[8] = 0x80000000;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0x3f800000;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = fVar5;
  unaff_ESI[0x11] = fVar6;
  unaff_ESI[0x12] = param_5;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  *unaff_ESI = *(undefined4 *)(param_3 + 0x10);
  unaff_ESI[1] = uVar1;
  iVar11 = 1;
  unaff_ESI[2] = uVar2;
  if ('\x01' < *param_3) {
    pfVar12 = (float *)(param_3 + 0x24);
    puVar10 = unaff_ESI + 0x1a;
    do {
      fVar4 = pfVar12[-5] - pfVar12[-1];
      fVar3 = pfVar12[-4] - *pfVar12;
      fVar8 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      fVar7 = _DAT_006cc7bc;
      fVar9 = DAT_006cc7a4;
      if (fVar8 != DAT_006cc7a4) {
        fVar8 = _DAT_006cc7bc / fVar8;
        fVar7 = fVar4 * fVar8;
        fVar9 = fVar8 * fVar3;
      }
      puVar10[-2] = fVar7;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[-1] = fVar9;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[2] = -fVar9;
      iVar11 = iVar11 + 1;
      puVar10[3] = fVar7;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0x3f800000;
      puVar10[9] = 0;
      puVar10[10] = fVar5;
      puVar10[0xb] = fVar6;
      puVar10[0xc] = param_5;
      fVar3 = *pfVar12;
      fVar4 = pfVar12[1];
      puVar10[-6] = pfVar12[-1];
      puVar10[-5] = fVar3;
      pfVar12 = pfVar12 + 4;
      puVar10[-4] = fVar4;
      puVar10 = puVar10 + 0x14;
    } while (iVar11 < *param_3);
  }
  return;
}
