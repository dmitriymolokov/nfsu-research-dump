/* spd-match: far pct=2.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0061b800();
int __cdecl FUN_0061bfe0();
extern int DAT_006a0810;
extern int DAT_006a0870;
extern int _DAT_006a0858;
int _UNK_006a0814;

void FUN_005ef358(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  FastExitMediaState();
  uVar3 = PackedFloatingMUL(*param_2,*param_3);
  uVar5 = PackedFloatingMUL(param_2[1],param_3[1]);
  uVar5 = PackedFloatingADD(uVar3,uVar5);
  uVar3 = PackedFloatingSUB((ulonglong)DAT_006a0810,(ulonglong)param_4);
  uVar1 = (uint)uVar3;
  uVar4 = PackedFloatingAccumulate(uVar5,uVar5);
  uVar8 = PackedFloatingCompareGE(0,uVar4);
  uVar8 = uVar8 & _DAT_006a0858;
  uVar4 = uVar4 ^ uVar8;
  uVar5 = PackedFloatingCompareGE(DAT_006a0870,uVar4);
  uVar3 = PackedFloatingMUL(uVar4,uVar4);
  uVar3 = PackedFloatingSUBR(uVar3,CONCAT44(_UNK_006a0814,DAT_006a0810));
  if ((int)uVar5 != 0) {
    uVar6 = PackedFloatingReciprocalSQRAprox((ulonglong)param_4,uVar3);
    uVar5 = PackedFloatingMUL(uVar6,uVar6);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar3,uVar6);
    uVar3 = FloatingReciprocalAprox(uVar5,uVar6);
    uVar5 = PackedFloatingReciprocalIter1(uVar6,uVar3);
    PackedFloatingReciprocalIter2(uVar5,uVar3);
    uVar9 = (uint)uVar6;
    uVar3 = FUN_0061b800();
    uVar10 = (uint)uVar3;
    PackedFloatingMUL(uVar3,(ulonglong)param_4);
    uVar2 = FUN_0061bfe0(uVar1,uVar9,uVar10);
    PackedFloatingMUL((ulonglong)uVar10,(ulonglong)uVar1);
    uVar3 = FUN_0061bfe0();
    uVar8 = uVar8 & 0xffffffff;
    uVar3 = PackedFloatingMUL(uVar3,(ulonglong)uVar9);
    uVar1 = (uint)uVar3;
    uVar3 = PackedFloatingMUL((ulonglong)uVar2,(ulonglong)uVar9);
    param_4 = (uint)uVar3;
  }
  param_4 = param_4 ^ (uint)uVar8;
  uVar5 = CONCAT44(param_4,param_4);
  uVar3 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),*param_2);
  uVar6 = PackedFloatingMUL(uVar5,*param_3);
  uVar7 = PackedFloatingMUL(CONCAT44(uVar1,uVar1),param_2[1]);
  uVar5 = PackedFloatingMUL(uVar5,param_3[1]);
  uVar3 = PackedFloatingADD(uVar3,uVar6);
  uVar5 = PackedFloatingADD(uVar7,uVar5);
  *param_1 = uVar3;
  param_1[1] = uVar5;
  FastExitMediaState();
  return;
}
