/* spd-match: far pct=7.31 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00405600(...);
int __cdecl FUN_0040a880(...);
int __cdecl FUN_0041f5f0(...);
int __cdecl FUN_00421960(...);
int __cdecl FUN_00424da0(...);
int __cdecl FUN_00424e70(...);
int __cdecl FUN_004280f0(...);
int __cdecl FUN_00443d60(...);
extern int DAT_006cc7a4;

struct ThisCallBox {
  uint FUN_0059b1e0(undefined4 param_2, float param_3, uint param_4, char param_5);
};
uint ThisCallBox::FUN_0059b1e0(undefined4 param_2, float param_3, uint param_4, char param_5) {
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  float10 fVar5;
  float10 fVar6;
  uint local_8;
  
  local_8 = FUN_00421960(((undefined4)this));
  do {
    uVar3 = FUN_0040a880();
    if (local_8 == uVar3) {
      return uVar3 & 0xffffff00;
    }
    if (((local_8 != param_4) && (cVar2 = FUN_004280f0(), cVar2 == '\0')) &&
       ((param_5 != '\0' || (iVar4 = FUN_00424e70(), iVar4 != 0)))) {
      fVar5 = (float10)FUN_0041f5f0();
      fVar5 = (float10)FUN_00443d60(param_2,(float)fVar5);
      fVar1 = (float)fVar5;
      uVar3 = FUN_00424da0();
      if ((uVar3 & 0xff) == 0) {
        if ((fVar1 < param_3) && (fVar1 < DAT_006cc7a4 == 0 && (fVar1 == DAT_006cc7a4) == 0)) {
          return CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),
                                          (ushort)(fVar1 < DAT_006cc7a4) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(DAT_006cc7a4)) << 10 |
                                          (ushort)(fVar1 == DAT_006cc7a4) << 0xe) >> 8),1);
        }
      }
      else {
        fVar6 = (float10)FUN_00405600(fVar1);
        fVar5 = (float10)param_3;
        if (fVar6 < fVar5) {
          return CONCAT31((int3)(CONCAT22(extraout_var,
                                          (ushort)(fVar6 < fVar5) << 8 |
                                          (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                                          (ushort)(fVar6 == fVar5) << 0xe) >> 8),1);
        }
      }
    }
    local_8 = FUN_00421960(((undefined4)this));
  } while( true );
}
