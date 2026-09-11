/* spd-match: far pct=11.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_00424d60();
int __cdecl FUN_00439010();
int __cdecl FUN_004399a0();
int __cdecl FUN_0043a830();
int __cdecl FUN_0043b850();
int __cdecl FUN_00465430();
int __cdecl FUN_00580240();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f227c;
extern int DAT_00734588;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_0077b240;
extern int DAT_0078a345;
extern int _DAT_006cc94c;
extern int _DAT_006cc9f8;
extern int _DAT_006cca08;
extern int _DAT_006cca38;
extern int _DAT_006ccb20;
extern int _DAT_006ccc8c;
extern int _DAT_006ccd3c;
int unaff_ESI;

void FUN_00438440(float param_1)

{
  float fVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_ESI;
  uint uVar11;
  float10 fVar12;
  float local_28;
  
  if (DAT_0077b240 == 6) {
    iVar6 = FUN_0043b850((int)*(short *)(*(int *)(unaff_ESI + 4) + 10));
    if (*(float *)(unaff_ESI + 0x254) != DAT_006cc7a4) {
      FUN_004399a0(0x20);
      FUN_0043a830();
      return;
    }
    local_28 = (float)(**(uint **)(unaff_ESI + 0x298) ^ *(uint *)(unaff_ESI + 0x294)) -
               (float)*(int *)(unaff_ESI + 0x29c);
    if ((*(char *)(unaff_ESI + 0x74) != '\0') || (cVar5 = FUN_00465430(), cVar5 != '\0')) {
      local_28 = local_28 + param_1;
      iVar7 = *(int *)(*(int *)(unaff_ESI + 4) + 0x3f0);
      fVar1 = DAT_006cc7a4;
      if ((iVar7 != 0) && (iVar7 != 0x7fffffff)) {
        fVar1 = (float)*(int *)(*(int *)(unaff_ESI + 4) + 0x3f0) * _DAT_006cca38;
      }
      if (((int)(_DAT_006cca08)) + fVar1 < local_28) {
        FUN_004399a0(8);
        iVar7 = *(int *)(*(int *)(unaff_ESI + 4) + 0x14);
        if ((*(int *)(iVar7 + 4) == 1) && (*(char *)(iVar7 + 0x734) == '\0')) {
          FUN_0043a830();
        }
      }
    }
    fVar1 = *(float *)(*(int *)(unaff_ESI + 4) + 0x3d0);
    fVar12 = (float10)FUN_00580240();
    if (fVar12 * (float10)_DAT_006ccc8c < (float10)fVar1) {
      FUN_004399a0(8);
      iVar7 = *(int *)(*(int *)(unaff_ESI + 4) + 0x14);
      if ((*(int *)(iVar7 + 4) == 1) && (*(char *)(iVar7 + 0x734) == '\0')) {
        FUN_0043a830();
      }
    }
    fVar1 = (float)*(int *)(unaff_ESI + 0x29c);
    uVar8 = **(uint **)(unaff_ESI + 0x298);
    if (*DAT_0073619c == 4) {
      iVar7 = *(int *)(unaff_ESI + 4);
      if ((((*(int *)(*(int *)(iVar7 + 0x14) + 4) == 1) &&
           (*(char *)(*(int *)(iVar7 + 0x14) + 0x734) == '\0')) ||
          (*(float *)(unaff_ESI + 0x264) < _DAT_006ccb20)) &&
         (fVar3 = ((float)(*(uint *)(unaff_ESI + 0x280) ^ uVar8) - fVar1) - *(float *)(iVar7 + 0x60)
         , fVar4 = ((float)(*(uint *)(unaff_ESI + 0x284) ^ uVar8) - fVar1) - *(float *)(iVar7 + 100)
         , fVar1 = ((float)(*(uint *)(unaff_ESI + 0x288) ^ uVar8) - fVar1) -
                   *(float *)(iVar7 + 0x68),
         _DAT_006cc9f8 < SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1))) {
        FUN_004399a0(8);
        iVar7 = FUN_00424d60();
        if (iVar7 != 0) {
          FUN_0043a830();
        }
      }
    }
    if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) &&
       (_DAT_006cc94c < (float)*(int *)(iVar6 + 0x10))) {
      FUN_004399a0(0x10);
      iVar6 = FUN_00424d60();
      if (iVar6 != 0) {
        FUN_0043a830();
      }
    }
    iVar7 = FUN_00439010();
    uVar10 = DAT_006f227c % 0x2ac;
    uVar11 = DAT_006f227c ^ 0x1d872b41;
    uVar8 = uVar11 >> 5 ^ uVar11;
    DAT_006f227c = uVar8 << 0x1b ^ uVar8 ^ uVar11;
    iVar6 = *(int *)(unaff_ESI + 4);
    *(uint *)(unaff_ESI + 0x298) = *(int *)(iVar7 + 0x10) * 0xc90 + uVar10 + DAT_00734588;
    iVar7 = FUN_00674898();
    iVar9 = FUN_00674898();
    *(int *)(unaff_ESI + 0x29c) = iVar9 - iVar7;
    puVar2 = *(uint **)(unaff_ESI + 0x298);
    *(uint *)(unaff_ESI + 0x280) =
         *puVar2 ^ (uint)((float)(iVar9 - iVar7) + *(float *)(iVar6 + 0x60));
    *(uint *)(unaff_ESI + 0x284) =
         *puVar2 ^ (uint)((float)*(int *)(unaff_ESI + 0x29c) + *(float *)(iVar6 + 100));
    *(uint *)(unaff_ESI + 0x288) =
         *puVar2 ^ (uint)((float)*(int *)(unaff_ESI + 0x29c) + *(float *)(iVar6 + 0x68));
    *(uint *)(unaff_ESI + 0x294) = *puVar2 ^ (uint)((float)*(int *)(unaff_ESI + 0x29c) + local_28);
    *(uint *)(unaff_ESI + 0x254) =
         *puVar2 ^ (uint)((float)*(int *)(unaff_ESI + 0x29c) + _DAT_006ccd3c);
  }
  return;
}
