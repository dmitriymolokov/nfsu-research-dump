/* spd-match: far pct=11.97 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00541FC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;

struct ThisCallBox {
  void FUN_00541fc0(int val, float param_2, int param_3, float param_4);
};
void ThisCallBox::FUN_00541fc0(int val, float param_2, int param_3, float param_4)

{
  float fVar1;
  float fVar2;

  float *pfVar3;
  int iVar4;
  
  if (val != 0) {
    fVar1 = ((float *)this)[4] * ((float *)this)[4] +
            ((float *)this)[0x24] * ((float *)this)[0x24] +
            *((float *)this) * *((float *)this) +
            ((float *)this)[0x20] * ((float *)this)[0x20] +
            ((float *)this)[0x1c] * ((float *)this)[0x1c] +
            ((float *)this)[0x18] * ((float *)this)[0x18] +
            ((float *)this)[0x14] * ((float *)this)[0x14] +
            ((float *)this)[0x10] * ((float *)this)[0x10] + ((float *)this)[0xc] * ((float *)this)[0xc] + ((float *)this)[8] * ((float *)this)[8];
    fVar2 = DAT_006cc7a4;
    if (DAT_006cc7a4 < fVar1) {
      fVar2 = fVar1;
    }
    fVar1 = ((float *)this)[0x25] * ((float *)this)[0x25] +
            ((float *)this)[0x21] * ((float *)this)[0x21] +
            ((float *)this)[0x1d] * ((float *)this)[0x1d] +
            ((float *)this)[0x19] * ((float *)this)[0x19] +
            ((float *)this)[0x15] * ((float *)this)[0x15] +
            ((float *)this)[0x11] * ((float *)this)[0x11] +
            ((float *)this)[0xd] * ((float *)this)[0xd] +
            ((float *)this)[9] * ((float *)this)[9] + ((float *)this)[5] * ((float *)this)[5] + ((float *)this)[1] * ((float *)this)[1];
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    fVar1 = ((float *)this)[0x26] * ((float *)this)[0x26] +
            ((float *)this)[0x22] * ((float *)this)[0x22] +
            ((float *)this)[0x1e] * ((float *)this)[0x1e] +
            ((float *)this)[0x1a] * ((float *)this)[0x1a] +
            ((float *)this)[0x16] * ((float *)this)[0x16] +
            ((float *)this)[0x12] * ((float *)this)[0x12] +
            ((float *)this)[0xe] * ((float *)this)[0xe] +
            ((float *)this)[10] * ((float *)this)[10] + ((float *)this)[6] * ((float *)this)[6] + ((float *)this)[2] * ((float *)this)[2];
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    if (DAT_006cc7a4 < SQRT(fVar2)) {
      param_2 = param_2 / SQRT(fVar2);
      iVar4 = 3;
      pfVar3 = ((float *)this) + 8;
      do {
        iVar4 = iVar4 + -1;
        pfVar3[-8] = param_2 * pfVar3[-8];
        pfVar3[-4] = param_2 * pfVar3[-4];
        *pfVar3 = param_2 * *pfVar3;
        pfVar3[4] = param_2 * pfVar3[4];
        pfVar3[8] = param_2 * pfVar3[8];
        pfVar3[0xc] = param_2 * pfVar3[0xc];
        pfVar3[0x10] = param_2 * pfVar3[0x10];
        pfVar3[0x14] = param_2 * pfVar3[0x14];
        pfVar3[0x18] = param_2 * pfVar3[0x18];
        pfVar3[0x1c] = param_2 * pfVar3[0x1c];
        pfVar3 = pfVar3 + 1;
      } while (iVar4 != 0);
    }
  }
  if ((param_3 != 0) &&
     (fVar1 = SQRT(((float *)this)[0x27] * ((float *)this)[0x27] +
                   ((float *)this)[0x23] * ((float *)this)[0x23] +
                   ((float *)this)[0x1f] * ((float *)this)[0x1f] +
                   ((float *)this)[0x1b] * ((float *)this)[0x1b] +
                   ((float *)this)[0x17] * ((float *)this)[0x17] +
                   ((float *)this)[0x13] * ((float *)this)[0x13] +
                   ((float *)this)[0xf] * ((float *)this)[0xf] +
                   ((float *)this)[0xb] * ((float *)this)[0xb] + ((float *)this)[7] * ((float *)this)[7] + ((float *)this)[3] * ((float *)this)[3]),
     DAT_006cc7a4 < fVar1)) {
    param_4 = param_4 / fVar1;
    ((float *)this)[3] = param_4 * ((float *)this)[3];
    ((float *)this)[7] = param_4 * ((float *)this)[7];
    ((float *)this)[0xb] = param_4 * ((float *)this)[0xb];
    ((float *)this)[0xf] = param_4 * ((float *)this)[0xf];
    ((float *)this)[0x13] = param_4 * ((float *)this)[0x13];
    ((float *)this)[0x17] = param_4 * ((float *)this)[0x17];
    ((float *)this)[0x1b] = param_4 * ((float *)this)[0x1b];
    ((float *)this)[0x1f] = param_4 * ((float *)this)[0x1f];
    ((float *)this)[0x23] = param_4 * ((float *)this)[0x23];
    ((float *)this)[0x27] = param_4 * ((float *)this)[0x27];
    return;
  }
  return;
}
