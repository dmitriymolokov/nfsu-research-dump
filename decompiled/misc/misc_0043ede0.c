/* spd-match: far pct=8.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2115 */
#include "ghidra_compat.h"

int __cdecl FUN_00405560();
int __cdecl FUN_0040ed00();
int __cdecl FUN_0041f0b0();
int __cdecl FUN_00421a30();
int __cdecl FUN_00424cc0();
int __cdecl FUN_00424e00();
int __cdecl FUN_00424f20();
int __cdecl FUN_004314a0();
extern int DAT_006cc7a4;
extern int _DAT_006b7924;
extern int _DAT_006b7928;

void __fastcall FUN_0043ede0(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  
  cVar4 = FUN_00424f20();
  if ((cVar4 != '\0') || (fVar6 = (float10)FUN_00424e00(), fVar6 < (float10)((int)DAT_006cc7a4))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  if (bVar3) {
    iVar5 = FUN_00421a30();
    if (iVar5 == 0) {
      FUN_00405560();
    }
    fVar2 = ((int)_DAT_006b7924) + _DAT_006b7928;
    FUN_0041f0b0(param_1 + 0x24);
    fVar6 = (float10)FUN_0040ed00();
    fVar1 = (float)fVar6;
    if (fVar2 < fVar1) {
      FUN_00424cc0();
      FUN_004314a0();
    }
    if (_DAT_006b7924 < fVar1) {
      *(float *)(param_1 + 0x28) = fVar2 - fVar1;
    }
  }
  else {
    FUN_00424cc0();
  }
  return;
}
