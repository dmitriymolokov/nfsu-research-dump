/* spd-match: far pct=3.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_0049fd20();
int __cdecl FUN_004fea10();
int __cdecl FUN_004feab0();
int __cdecl FUN_004ff1f0();
int __cdecl FUN_005461c0();
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;

void FUN_0049ff50(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int unaff_ESI;
  float10 fVar8;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(unaff_ESI + 0x2c);
  iVar7 = FUN_005461c0(*(undefined4 *)(unaff_ESI + 0x24),1,0);
  sVar1 = *(short *)(iVar7 + 0x46);
  fVar4 = (float)(int)sVar1;
  fVar5 = (unsigned int)(_DAT_006cc7bc) / fVar4;
  fVar8 = (float10)FUN_0049fd20(0,param_3,(fVar4 - param_4) * fVar5,param_5 * fVar5,param_2);
  *(float *)(iVar2 + 0x48) = (float)fVar8;
  local_c = *(undefined4 *)(iVar2 + 0x1c);
  local_4 = *(undefined4 *)(iVar2 + 0x24);
  fVar8 = ((float10)(unsigned int)(_DAT_006cc7bc) - fVar8) * (float10)(int)sVar1;
  local_18 = *(undefined4 *)(iVar2 + 0x38);
  local_10 = *(undefined4 *)(iVar2 + 0x40);
  uVar3 = *(uint *)(unaff_ESI + 0x1c);
  local_14 = (float)fVar8;
  local_8 = (float)(((float10)*(float *)(iVar2 + 0x3c) - fVar8) * (float10)(unsigned int)(_DAT_006cc7dc) +
                   (float10)*(float *)(iVar2 + 0x20));
  *(uint *)(unaff_ESI + 0x1c) = uVar3 | 0x400000;
  if (*(int *)(unaff_ESI + 0x18) < 0x100) {
    cVar6 = FUN_004feab0();
    if (cVar6 == '\0') {
      *(uint *)(unaff_ESI + 0x1c) = uVar3 | 0x400000;
    }
    FUN_004ff1f0(unaff_ESI,4,&local_18,0);
  }
  if (*(int *)(unaff_ESI + 0x18) < 0x100) {
    cVar6 = FUN_004fea10();
    if (cVar6 == '\0') {
      *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
    }
    FUN_004ff1f0(unaff_ESI,2,&local_c,0);
  }
  return;
}
