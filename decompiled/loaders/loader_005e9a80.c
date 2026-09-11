/* spd-match: far pct=3.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0061b3ea();
extern int DAT_006cc7a4;
extern int _DAT_006a3d70;
extern int _DAT_006a3d80;
int _UNK_006a3d74;
int _UNK_006a3d78;
int _UNK_006a3d7c;
int _UNK_006a3d84;
int _UNK_006a3d88;
int _UNK_006a3d8c;

void FUN_005e9a80(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_30 = param_4 * _DAT_006a3d80;
  fStack_2c = param_3 * _UNK_006a3d84;
  fStack_28 = param_2 * _UNK_006a3d88;
  fStack_24 = DAT_006cc7a4 * _UNK_006a3d8c;
  FUN_0061b3ea(&local_30,&local_30,&local_20);
  fVar1 = (float)((uint)(local_30 * fStack_18 * fStack_2c) ^ _UNK_006a3d74);
  fVar2 = (float)((uint)(local_20 * fStack_28 * fStack_2c) ^ _UNK_006a3d78);
  fVar3 = (float)((uint)(local_30 * fStack_28 * fStack_2c) ^ _UNK_006a3d7c);
  *param_1 = local_20 * fStack_18 * fStack_2c +
             (float)((uint)(local_30 * fStack_28 * fStack_1c) ^ _DAT_006a3d70);
  param_1[1] = local_20 * fStack_28 * fStack_1c + fVar1;
  param_1[2] = local_30 * fStack_18 * fStack_1c + fVar2;
  param_1[3] = local_20 * fStack_18 * fStack_1c + fVar3;
  return;
}
