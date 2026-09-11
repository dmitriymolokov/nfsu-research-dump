/* spd-match: far pct=9.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00454f30();
int __cdecl FUN_00564db0();
int __cdecl FUN_00583ea0();
extern int DAT_006cc7a4;
extern int _DAT_006b7130;
extern int _DAT_006b7134;
extern int _DAT_006cc7bc;
extern int _DAT_006cc978;
extern int _DAT_006cc97c;
extern int _DAT_006cc980;
int unaff_EDI;

void FUN_00479510(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  short sVar5;
  int unaff_EDI;
  float10 fVar6;
  float local_2c;
  float local_24 [2];
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(unaff_EDI + 0x58);
  sVar5 = FUN_00564db0(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34));
  local_2c = (float)(ushort)(*(short *)(iVar1 + 0x374) - sVar5) * ((int)_DAT_006cc980);
  if (_DAT_006cc97c < local_2c) {
    local_2c = local_2c - _DAT_006cc978;
  }
  fVar2 = *(float *)(*(int *)(unaff_EDI + 0x58) + 0x98);
  if (DAT_006cc7a4 < local_2c * fVar2) {
    FUN_00454f30(local_24,ABS(local_2c));
    iVar1 = *(int *)(unaff_EDI + 0x5c);
    fVar4 = ((int)_DAT_006b7130) * local_24[0] * fVar2;
    local_1c = *(float *)(iVar1 + 0xb4) * fVar4;
    iVar3 = *(int *)(unaff_EDI + 0x20);
    local_18 = *(float *)(iVar1 + 0xb8) * fVar4;
    *(float *)(iVar3 + 0x120) = fVar4 * *(float *)(iVar1 + 0xb0) + *(float *)(iVar3 + 0x120);
    *(float *)(iVar3 + 0x124) = local_1c + *(float *)(iVar3 + 0x124);
    *(float *)(iVar3 + 0x128) = local_18 + *(float *)(iVar3 + 0x128);
  }
  local_24[0] = ABS(fVar2) * ((int)_DAT_006b7134) + (((int)_DAT_006cc7bc) - _DAT_006b7134) * ABS(local_2c);
  fVar6 = (float10)FUN_00583ea0(local_24[0]);
  *(float *)(*(int *)(unaff_EDI + 0x40) + 0x180) = (float)fVar6;
  *(float *)(*(int *)(unaff_EDI + 0x44) + 0x180) = (float)fVar6;
  return;
}
