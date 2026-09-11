/* spd-match: far pct=3.89 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00481790 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int unaff_EDI;
int unaff_ESI;
uint __fastcall FUN_00481790(undefined4 val, undefined4 param_1, int param_2, float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;

  uint uVar5;
  int iVar6;
  int unaff_ESI;
  int unaff_EDI;
  float *local_4;
  
  iVar4 = (int)param_3;
  fVar2 = *(float *)(param_2 + 0x3c + unaff_EDI * 4);
  fVar3 = *(float *)((int)param_3 + 0x3c + unaff_ESI * 4);
  uVar5 = CONCAT22((short)((uint)val >> 0x10),
                   (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                   (ushort)(fVar2 == fVar3) << 0xe);
  if (((fVar2 == fVar3) &&
      (uVar5 = CONCAT31((int3)(uVar5 >> 8),*(char *)(param_2 + 4)),
      *(char *)(param_2 + 4) == *(char *)((int)param_3 + 4))) &&
     (*(char *)(param_2 + 5) == *(char *)((int)param_3 + 5))) {
    local_4 = (float *)((int)param_3 + (unaff_ESI * 3 + 3) * 4);
    param_3 = (float *)(param_2 + (unaff_EDI * 3 + 3) * 4);
    iVar6 = 0;
    while( true ) {
      fVar2 = *param_3;
      fVar3 = *local_4;
      if (fVar2 != fVar3) {
        return CONCAT22((short)((uint)param_3 >> 0x10),
                        (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                        (ushort)(fVar2 == fVar3) << 0xe);
      }
      iVar1 = iVar6 + (unaff_EDI + 3) * 3;
      fVar2 = *(float *)(param_2 + iVar1 * 4);
      fVar3 = *(float *)(iVar4 + (iVar6 + (unaff_ESI + 3) * 3) * 4);
      if (fVar2 != fVar3) break;
      iVar6 = iVar6 + 1;
      param_3 = param_3 + 1;
      local_4 = local_4 + 1;
      if (2 < iVar6) {
        return 1;
      }
    }
    return CONCAT22((short)((uint)iVar1 >> 0x10),
                    (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                    (ushort)(fVar2 == fVar3) << 0xe);
  }
  return uVar5 & 0xffffff00;
}
