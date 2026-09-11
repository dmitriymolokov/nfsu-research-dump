/* spd-match: far pct=8.33 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_game_c/attempt2_recipe */
#include "ghidra_compat.h"

#ifndef SUB42
#define SUB42(x,n) ((unsigned int)((unsigned __int64)(x) >> ((n) * 8)))
#endif

int __cdecl FUN_00454f30();
int __cdecl FUN_00465430();
int __cdecl FUN_0047d840();
int __cdecl FUN_0047d940();
int __cdecl FUN_00564cd0();
int __cdecl FUN_00567310();
int __cdecl FUN_00567370();
int __cdecl FUN_005abda2();
extern int DAT_006cc7a4;
extern int DAT_0073ad34;
extern int _DAT_006b6ca4;
extern int _DAT_006b6ca8;
extern int _DAT_006b6cac;
extern int _DAT_006b6cb0;
extern int _DAT_006cc7bc;
extern int _DAT_006cca38;
extern int _DAT_006cccdc;

void FUN_00483640(int param_1,undefined4 param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uStack_84;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_28;
  float fStack_24;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  fVar1 = *(float *)(unsigned int)(iVar2 + 0x1e0);
  FUN_00454f30(&local_74,
               SQRT(*(float *)(unsigned int)(iVar2 + 0x1e8) * *(float *)(unsigned int)(iVar2 + 0x1e8) +
                    *(float *)(unsigned int)(iVar2 + 0x1e4) * *(float *)(unsigned int)(iVar2 + 0x1e4) + fVar1 * fVar1));
  local_78 = local_74;
  pfVar7 = local_60;
  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar7 = *param_3;
    param_3 = param_3 + 1;
    pfVar7 = pfVar7 + 1;
  }
  if (((param_4 != 0) && (param_4 != -0x40)) && (cVar4 = FUN_00465430(), cVar4 != '\0')) {
    local_78 = ((int)(_DAT_006b6ca4)) + local_74;
    local_60[0] = local_60[0] * ((int)_DAT_006b6ca8);
    local_50 = local_50 * ((int)_DAT_006b6ca8);
    local_60[1] = local_60[1] * ((int)_DAT_006b6ca8);
    local_4c = local_4c * ((int)_DAT_006b6ca8);
    local_60[2] = local_60[2] * ((int)_DAT_006b6ca8);
    local_48 = local_48 * ((int)_DAT_006b6ca8);
    local_60[3] = local_60[3] * ((int)_DAT_006b6ca8);
    local_44 = local_44 * ((int)_DAT_006b6ca8);
  }
  if (DAT_006cc7a4 < local_78) {
    FUN_005abda2(local_70,(float *)(unsigned int)(iVar2 + 0x1e0),param_2);
    FUN_00567370();
    sVar5 = FUN_00564cd0(ABS(local_74));
    fVar1 = (float)(ushort)(0x4000 - sVar5) * ((int)_DAT_006cccdc);
    FUN_00567310(ABS(((int)_DAT_006b6cac) - _DAT_006b6cb0));
    fVar3 = _DAT_006b6cb0;
    if (_DAT_006b6cac < _DAT_006b6cb0) {
      fVar3 = _DAT_006b6cac;
    }
    fStack_28 = (((ABS(fStack_7c) + fVar3) - _DAT_006cc7bc) * fVar1 + _DAT_006cc7bc) * fStack_28;
    fStack_24 = (((ABS(local_78) + fVar3) - _DAT_006cc7bc) * fVar1 + _DAT_006cc7bc) * fStack_24;
    FUN_0047d840();
    FUN_0047d940((float)((int)DAT_0073ad34) * ((int)_DAT_006cca38),uStack_84);
  }
  return;
}
