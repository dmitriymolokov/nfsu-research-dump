/* spd-match: far pct=3.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142733Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int DAT_006b6be4;
extern int DAT_006b6bec;
extern int DAT_006b6bf4;
extern int DAT_006b6bf8;
extern int DAT_006cc7a4;
extern void LAB_00492584(void);
extern void LAB_004925d1(void);

float10 __fastcall FUN_00492560(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0x74);
  fVar4 = (float10)((int)DAT_006cc7a4);
  if (iVar1 == 0) {
LAB_00492584:
    fVar2 = (float)(*(int *)(param_1 + 0x70) + -1);
  }
  else if (iVar1 == 1) {
    fVar2 = (float)*(int *)(param_1 + 0x70);
  }
  else {
    fVar2 = (unsigned int)(DAT_006cc7a4);
    if (iVar1 == 2) goto LAB_00492584;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  fVar2 = (*(float *)(unsigned int)(param_1 + 0x134) * ((int)(DAT_006cc7a4)) + *(float *)(unsigned int)(param_1 + 0x138)) * fVar2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      fVar3 = (float)*(int *)(param_1 + 0x70);
      goto LAB_004925d1;
    }
    fVar3 = (unsigned int)(DAT_006cc7a4);
    if (iVar1 != 2) goto LAB_004925d1;
  }
  fVar3 = (float)(*(int *)(param_1 + 0x70) + -1);
LAB_004925d1:
  fVar3 = (*(float *)(unsigned int)(param_1 + 0x138) + *(float *)(unsigned int)(param_1 + 0x134)) * fVar3;
  if ((fVar2 < *(float *)(unsigned int)(param_1 + 0x5c)) && (*(float *)(unsigned int)(param_1 + 0x5c) < fVar3)) {
    fVar4 = (float10)((int)DAT_006b6bf8);
  }
  if ((fVar2 < *(float *)(unsigned int)(param_1 + 0x60)) && (*(float *)(unsigned int)(param_1 + 0x60) < fVar3)) {
    fVar4 = fVar4 + (float10)((int)DAT_006b6bf8);
  }
  if ((fVar2 < *(float *)(unsigned int)(param_1 + 100)) && (*(float *)(unsigned int)(param_1 + 100) < fVar3)) {
    fVar4 = fVar4 + (float10)((int)DAT_006b6bf8);
  }
  if ((fVar2 < *(float *)(unsigned int)(param_1 + 0x68)) && (*(float *)(unsigned int)(param_1 + 0x68) < fVar3)) {
    fVar4 = fVar4 + (float10)((int)DAT_006b6bf8);
  }
  return (float10)*(float *)(unsigned int)(param_1 + 0x54) + (float10)*(float *)(unsigned int)(param_1 + 0x50) +
         (float10)((int)(DAT_006b6bf4)) + (float10)((int)(DAT_006b6bec)) + (float10)((int)(DAT_006b6be4)) + fVar4;
}
