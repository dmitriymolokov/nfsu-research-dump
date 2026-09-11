/* spd-match: far pct=8.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006ea794;
extern int DAT_006ea7a0;
extern int DAT_006ea7a8;
extern int _DAT_006aab78;
extern int _DAT_006cc7c0;
extern int _DAT_006cc858;
extern int _DAT_006cc8bc;

void FUN_0065e920(byte *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  param_2[2] = 8;
  *param_2 = param_1 + 1;
  bVar1 = *param_1;
  param_2[1] = (uint)bVar1;
  uVar7 = DAT_006ea794;
  if (param_3 != 0) {
    param_2[1] = (uint)(bVar1 >> 1);
    param_2[2] = 7;
    param_2[1] = param_2[1] | (uint)param_1[1] << 7;
    uVar2 = param_2[1];
    param_2[3] = bVar1 & uVar7;
    *param_2 = param_1 + 2;
    param_2[2] = 0xf;
    uVar7 = DAT_006ea7a0;
    param_2[1] = uVar2 >> 4;
    param_2[4] = 0x20 - (uVar2 & uVar7);
    uVar7 = param_2[1];
    param_2[2] = 0xb;
    uVar2 = DAT_006ea7a0;
    param_2[1] = uVar7 >> 4;
    param_2[2] = 7;
    iVar6 = (uVar7 & uVar2) + 1;
    param_2[1] = param_2[1] | (uint)param_1[2] << 7;
    *param_2 = param_1 + 3;
    fVar3 = (float)iVar6;
    param_2[2] = 0xf;
    if (iVar6 < 0) {
      fVar3 = fVar3 + _DAT_006cc858;
    }
    param_2[5] = fVar3 * ((int)_DAT_006cc7c0);
    uVar7 = param_2[1] & ((int)DAT_006ea7a8);
    fVar3 = (float)(int)uVar7;
    param_2[1] = (uint)param_2[1] >> 6;
    param_2[2] = 9;
    if ((int)uVar7 < 0) {
      fVar3 = fVar3 + _DAT_006cc858;
    }
    iVar6 = 0x3f;
    fVar3 = fVar3 * ((int)_DAT_006cc8bc) + _DAT_006aab78;
    pfVar4 = (float *)(param_2 + 6);
    do {
      iVar6 = iVar6 + -1;
      *pfVar4 = fVar3 * pfVar4[-1];
      pfVar4 = pfVar4 + 1;
    } while (iVar6 != 0);
    puVar5 = param_2 + 0x51;
    iVar6 = 0xc;
    do {
      puVar5[-0xc] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar5 = param_2 + 0x5d;
    for (iVar6 = 0x144; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
