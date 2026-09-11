/* spd-match: far pct=14.12 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142453Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_005672b0();
int __cdecl FUN_00567370();
extern int _DAT_006cc948;
extern int _DAT_006cc95c;
extern int _DAT_006cc9f0;
int unaff_EDI;

uint FUN_0052bb90(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_24;
  
  iVar2 = *(int *)(unaff_EDI + 0x234);
  fVar1 = *(float *)(unsigned int)(iVar2 + 0x3d4) * _DAT_006cc9f0;
  if (fVar1 < _DAT_006cc948) {
    return (uint)(ushort)((ushort)(fVar1 < _DAT_006cc948) << 8 |
                          (ushort)(NAN(fVar1) || NAN(_DAT_006cc948)) << 10 |
                         (ushort)(fVar1 == _DAT_006cc948) << 0xe);
  }
  FUN_00567370();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x2c) + 0x18))(0);
  uVar3 = 0;
  if (iVar2 != 0) {
    FUN_005672b0();
    fVar1 = fStack_3c * fStack_24 + fStack_38 * local_30;
    uVar3 = (uint)(ushort)((ushort)(fVar1 < _DAT_006cc95c) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_006cc95c)) << 10 |
                          (ushort)(fVar1 == _DAT_006cc95c) << 0xe);
    if (fVar1 < _DAT_006cc95c) {
      return uVar3;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),*(int *)(unaff_EDI + 0x1a88) == 1);
}
