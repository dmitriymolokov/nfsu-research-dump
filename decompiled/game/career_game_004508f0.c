/* spd-match: far pct=8.86 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00450730(...);
int __cdecl FUN_0045add0(...);
extern int DAT_0073ad34;
extern int _DAT_006b762c;
extern int _DAT_006b7630;
extern int _DAT_006cca38;

struct ThisCallBox {
  int FUN_004508f0(int param_2);
};
int ThisCallBox::FUN_004508f0(int param_2) {
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar2 = param_2;
  puVar1 = (undefined4 *)(param_2 + 0x398);
  if ((0 < *(int *)(param_2 + 4)) && (*(int *)(param_2 + 0x3c) != *(int *)(((int)this) + 0x200))) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = local_4 & 0xffffff00;
    param_2 = 0;
    iVar7 = FUN_00450730(&param_2,&local_10,&param_2);
    if ((-1 < iVar7) && (cVar6 = FUN_0045add0(), cVar6 == '\0')) {
      *puVar1 = local_10;
      *(undefined4 *)(iVar2 + 0x39c) = local_c;
      *(undefined4 *)(iVar2 + 0x3a0) = local_8;
      *(uint *)(iVar2 + 0x3a4) = local_4;
      *(int *)(((int)this) + 0x200) = param_2;
      *(int *)(((int)this) + 0x208) = DAT_0073ad34;
    }
  }
  fVar4 = (float)(DAT_0073ad34 - *(int *)(((int)this) + 0x208)) * _DAT_006cca38;
  if (fVar4 < _DAT_006b7630) {
    return CONCAT22((short)((uint)*(int *)(((int)this) + 0x208) >> 0x10),
                    (ushort)(fVar4 < _DAT_006b7630) << 8 |
                    (ushort)(NAN(fVar4) || NAN(_DAT_006b7630)) << 10 |
                    (ushort)(fVar4 == _DAT_006b7630) << 0xe);
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    piVar8 = (int *)(iVar2 + 0x3c);
    while (*piVar8 != *(int *)(((int)this) + 0x200)) {
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0xe;
      if (*(int *)(iVar2 + 4) <= iVar7) {
        return CONCAT31((int3)((uint)iVar7 >> 8),1);
      }
    }
    if (iVar7 != -1) {
      iVar3 = iVar7 * 0x38 + 8 + iVar2;
      iVar7 = 0;
      if (iVar3 != 0) {
        iVar2 = *(char *)(iVar2 + 0x388) * 0x38 + iVar2;
        fVar4 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x18);
        fVar5 = -(*(float *)(iVar2 + 0x14) + *(float *)(iVar3 + 0xc) + _DAT_006b762c);
        iVar7 = CONCAT22((short)((uint)iVar3 >> 0x10),
                         (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                         (ushort)(fVar5 == fVar4) << 0xe);
        if (fVar5 < fVar4 || (fVar5 == fVar4) != 0) {
          return iVar7;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}
