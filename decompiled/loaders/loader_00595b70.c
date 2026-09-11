/* spd-match: far pct=5.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00567c70();
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int _DAT_006ccb4c;
extern int _DAT_006ccbb0;
extern void LAB_00595beb(void);
int unaff_EDI;

uint FUN_00595b70(void)

{
  byte *pbVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  char *pcVar7;
  int unaff_EDI;
  
  if ((DAT_0078a2f0 != 0x4b1) || (DAT_0078a2fc != 1)) {
    return DAT_0078a2f0 & 0xffffff00;
  }
  pcVar7 = "XO_CONSTRUCSIGNA_1B_00";
  uVar6 = 0xffffffff;
  uVar3 = 0x58;
  do {
    uVar6 = uVar6 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  uVar3 = *(uint *)(unaff_EDI + 8);
  uVar4 = 0;
  if (uVar3 != uVar6) {
    uVar4 = FUN_00567c70();
    if (uVar3 != uVar4) goto LAB_00595beb;
  }
  fVar2 = ABS(*(float *)(unaff_EDI + 0x60) - _DAT_006ccbb0);
  uVar5 = (undefined2)(uVar4 >> 0x10);
  uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < _DAT_006ccb4c) << 8 |
                         (ushort)(NAN(fVar2) || NAN(_DAT_006ccb4c)) << 10 |
                         (ushort)(fVar2 == _DAT_006ccb4c) << 0xe);
  if (fVar2 < _DAT_006ccb4c != (fVar2 == _DAT_006ccb4c)) {
    fVar2 = ABS(*(float *)(unaff_EDI + 100));
    uVar4 = CONCAT22(uVar5,(ushort)(fVar2 < _DAT_006ccb4c) << 8 |
                           (ushort)(NAN(fVar2) || NAN(_DAT_006ccb4c)) << 10 |
                           (ushort)(fVar2 == _DAT_006ccb4c) << 0xe);
    if (fVar2 < _DAT_006ccb4c != (fVar2 == _DAT_006ccb4c)) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
LAB_00595beb:
  return uVar4 & 0xffffff00;
}
