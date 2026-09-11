/* spd-match: far pct=11.86 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00405600();
int __cdecl FUN_0041f5d0();
int __cdecl FUN_0041f5f0();
int __cdecl FUN_0041f680();
int __cdecl FUN_0041f690();
int __cdecl FUN_00424da0();
int __cdecl FUN_00424e10();
int __cdecl FUN_00443d60();
extern int DAT_006b5a38;
extern int _DAT_006b5a6c;

uint __fastcall FUN_0059b8d0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  char local_11;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  do {
    uVar2 = FUN_0041f680(param_1);
    if ((int)uVar2 <= local_c) {
      return uVar2 & 0xffffff00;
    }
    FUN_0041f690();
    fVar4 = (float10)FUN_00424e10();
    if (fVar4 < (float10)_DAT_006b5a6c) {
      local_11 = '\0';
      cVar1 = FUN_00424da0();
      if (cVar1 != '\0') {
        iVar3 = FUN_0041f5d0();
        local_11 = *(char *)(iVar3 + 0x4d1);
      }
      if (local_11 == '\0') {
        fVar4 = (float10)FUN_0041f5f0();
        fVar6 = (float)fVar4;
        fVar4 = (float10)FUN_0041f5f0(fVar6);
        fVar4 = (float10)FUN_00443d60((float)fVar4,fVar6);
        fVar5 = (float10)FUN_00405600((float)fVar4);
        fVar4 = (float10)DAT_006b5a38;
        if ((fVar5 < fVar4) && (local_8 = local_8 + 1, 0 < local_8)) {
          return CONCAT31((int3)(CONCAT22(extraout_var,
                                          (ushort)(fVar5 < fVar4) << 8 |
                                          (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                                          (ushort)(fVar5 == fVar4) << 0xe) >> 8),1);
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}
