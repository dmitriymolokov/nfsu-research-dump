/* spd-match: far pct=3.63 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

int __cdecl FUN_0065c0e0();
int __cdecl FUN_0065c440();
extern int DAT_006ea794;
extern int DAT_006ea7a0;
extern int DAT_006ea7a4;
extern int DAT_006ea7a8;
extern int DAT_006ea7b0;
extern unsigned char *DAT_006ea7b8;
extern unsigned char *DAT_006ea7f8;
extern int _DAT_006cc7dc;
extern int _DAT_006cc858;
extern int _DAT_006cc90c;
extern int _DAT_006ccaf0;
extern char stack0xfffffddc;

void FUN_0065ea70(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  float local_220 [2];
  float *local_218;
  float local_214 [4];
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8 [2];
  uint local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined1 local_1c4 [4];
  undefined4 local_1c0 [5];
  float afStack_1ac [102];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = param_1[2];
  iVar7 = iVar4 + -6;
  uVar5 = (uint)param_1[1] >> 6;
  uVar1 = param_1[1] & DAT_006ea7a8;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 2;
  }
  iVar4 = param_1[2];
  local_1e0 = (uint)((int)uVar1 < (int)param_1[4]);
  iVar7 = iVar4 + -6;
  local_214[1] = (*(float *)(&DAT_006ea7b8 + uVar1 * 4) - (float)param_1[0x45]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 6;
  uVar1 = param_1[1] & DAT_006ea7a8;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 2;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -6;
  local_214[2] = (*(float *)(&DAT_006ea7b8 + uVar1 * 4) - (float)param_1[0x46]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 6;
  uVar1 = param_1[1] & DAT_006ea7a8;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 2;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -6;
  local_214[3] = (*(float *)(&DAT_006ea7b8 + uVar1 * 4) - (float)param_1[0x47]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 6;
  uVar1 = param_1[1] & DAT_006ea7a8;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 2;
  }
  iVar4 = param_1[2];
  uVar5 = param_1[1] & DAT_006ea7a4;
  iVar7 = iVar4 + -5;
  local_204 = (*(float *)(&DAT_006ea7b8 + uVar1 * 4) - (float)param_1[0x48]) * _DAT_006cc90c;
  uVar1 = (uint)param_1[1] >> 5;
  param_1[1] = uVar1;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar1;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_200 = (*(float *)(&DAT_006ea7f8 + uVar5 * 4) - (float)param_1[0x49]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1fc = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4a]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1f8 = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4b]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1f4 = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4c]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1f0 = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4d]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1ec = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4e]) * _DAT_006cc90c;
  uVar5 = (uint)param_1[1] >> 5;
  uVar1 = param_1[1] & DAT_006ea7a4;
  param_1[1] = uVar5;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  iVar4 = param_1[2];
  iVar7 = iVar4 + -5;
  local_1e8[0] = (*(float *)(&DAT_006ea7f8 + uVar1 * 4) - (float)param_1[0x4f]) * _DAT_006cc90c;
  uVar5 = param_1[1] & DAT_006ea7a4;
  uVar1 = (uint)param_1[1] >> 5;
  param_1[1] = uVar1;
  param_1[2] = iVar7;
  if (iVar7 < 8) {
    param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar1;
    *param_1 = (byte *)*param_1 + 1;
    param_1[2] = iVar4 + 3;
  }
  local_218 = (float *)(param_1 + 0x1a2);
  local_214[0] = 3.0268e-43;
  local_1e8[1] = (*(float *)(&DAT_006ea7f8 + uVar5 * 4) - (float)param_1[0x50]) * _DAT_006cc90c;
  do {
    iVar4 = param_1[2];
    iVar7 = iVar4 + -8;
    uVar5 = (uint)param_1[1] >> 8;
    uVar1 = param_1[1] & DAT_006ea7b0;
    param_1[1] = uVar5;
    param_1[2] = iVar7;
    if (iVar7 < 8) {
      param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar7 & 0x1f) | uVar5;
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = iVar4;
    }
    iVar4 = param_1[2];
    iVar7 = (int)local_214[0] - uVar1;
    iVar8 = iVar4 + -4;
    uVar5 = (uint)param_1[1] >> 4;
    uVar1 = param_1[1] & DAT_006ea7a0;
    param_1[1] = uVar5;
    param_1[2] = iVar8;
    if (iVar8 < 8) {
      param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar8 & 0x1f) | uVar5;
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = iVar4 + 4;
    }
    local_220[1] = (float)(int)uVar1;
    if ((int)uVar1 < 0) {
      local_220[1] = local_220[1] + _DAT_006cc858;
    }
    local_220[1] = local_220[1] * _DAT_006ccaf0;
    iVar4 = param_1[2];
    iVar8 = iVar4 + -6;
    uVar1 = (uint)param_1[1] >> 6;
    uVar5 = param_1[1] & DAT_006ea7a8;
    param_1[1] = uVar1;
    param_1[2] = iVar8;
    if (iVar8 < 8) {
      param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar8 & 0x1f) | uVar1;
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = iVar4 + 2;
    }
    local_220[0] = (float)param_1[uVar5 + 5];
    local_1dc = iVar7;
    if (param_1[3] == 0) {
      FUN_0065c0e0(param_1,local_1e0,local_1c4,1);
    }
    else {
      iVar4 = param_1[2];
      uVar1 = (uint)param_1[1] >> 1;
      uVar5 = param_1[1] & DAT_006ea794;
      iVar8 = iVar4 + -1;
      param_1[1] = uVar1;
      param_1[2] = iVar8;
      if (iVar8 < 8) {
        param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar8 & 0x1f) | uVar1;
        *param_1 = (byte *)*param_1 + 1;
        param_1[2] = iVar4 + 7;
      }
      uVar9 = param_1[1] & DAT_006ea794;
      iVar4 = param_1[2];
      uVar1 = (uint)param_1[1] >> 1;
      iVar8 = iVar4 + -1;
      param_1[1] = uVar1;
      param_1[2] = iVar8;
      if (iVar8 < 8) {
        param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar8 & 0x1f) | uVar1;
        *param_1 = (byte *)*param_1 + 1;
        param_1[2] = iVar4 + 7;
      }
      FUN_0065c0e0(param_1,local_1e0,local_1c4 + uVar5 * 4,2);
      puVar2 = local_1c0 + -uVar5;
      if (uVar9 == 0) {
        local_1d8 = 0;
        local_14 = 0;
        local_1d4 = 0;
        local_10 = 0;
        local_1d0 = 0;
        local_1cc = 0;
        local_c = 0;
        local_8 = 0;
        local_1c8 = 0.0;
        local_4 = 0;
        iVar4 = 0x36;
        pfVar3 = afStack_1ac + -uVar5;
        do {
          iVar4 = iVar4 + -1;
          pfVar3[-5] = (pfVar3[-6] + pfVar3[-4]) * (*(float *)0x006aab6c) +
                       ((pfVar3[-10] + *pfVar3) * (*(float *)0x006aab74) -
                       (pfVar3[-8] + pfVar3[-2]) * (*(float *)0x006aab70));
          pfVar3 = pfVar3 + 2;
        } while (iVar4 != 0);
        local_220[0] = local_220[0] * _DAT_006cc7dc;
      }
      else {
        iVar4 = 0x36;
        do {
          *puVar2 = 0;
          puVar2 = puVar2 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    iVar4 = 0;
    pfVar3 = local_218;
    pfVar6 = (float *)(param_1 + iVar7 + 0x5e);
    do {
      iVar7 = iVar4 + 9;
      local_218 = pfVar3 + 9;
      pfVar3[-1] = local_220[1] * pfVar6[-1] + local_220[0] * local_1e8[iVar7];
      *pfVar3 = local_220[1] * *pfVar6 + local_220[0] * local_1e8[iVar4 + 10];
      pfVar3[1] = local_220[1] * pfVar6[1] + local_220[0] * local_1e8[iVar4 + 0xb];
      pfVar3[2] = local_220[1] * pfVar6[2] + local_220[0] * local_1e8[iVar4 + 0xc];
      pfVar3[3] = local_220[1] * pfVar6[3] + local_220[0] * local_1e8[iVar4 + 0xd];
      pfVar3[4] = local_220[1] * pfVar6[4] + local_220[0] * local_1e8[iVar4 + 0xe];
      pfVar3[5] = local_220[1] * pfVar6[5] + local_220[0] * local_1e8[iVar4 + 0xf];
      pfVar3[6] = local_220[1] * pfVar6[6] + local_220[0] * local_1e8[iVar4 + 0x10];
      pfVar3[7] = local_220[1] * pfVar6[7] + local_220[0] * *(float *)(local_1c4 + iVar7 * 4 + -4);
      iVar4 = iVar7;
      pfVar3 = local_218;
      pfVar6 = pfVar6 + 9;
    } while (iVar7 < 0x6c);
    local_214[0] = (float)((int)local_214[0] + 0x6c);
  } while ((int)local_214[0] < 0x288);
  puVar2 = param_1 + 0x20d;
  puVar10 = param_1 + 0x5d;
  for (iVar4 = 0x144; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar10 = puVar10 + 1;
  }
  pfVar3 = (float *)(param_1 + 0x46);
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 6;
    pfVar3[-1] = local_214[iVar4 + 1] + pfVar3[-1];
    *pfVar3 = *(float *)(&stack0xfffffddc + iVar7 * 4) + *pfVar3;
    pfVar3[1] = local_220[iVar7] + pfVar3[1];
    pfVar3[2] = local_220[iVar4 + 7] + pfVar3[2];
    pfVar3[3] = (float)(unsigned int)((&local_218)[iVar7]) + pfVar3[3];
    pfVar3[4] = local_214[iVar7] + pfVar3[4];
    pfVar3 = pfVar3 + 6;
    iVar4 = iVar7;
  } while (iVar7 < 0xc);
  FUN_0065c440(1);
  pfVar3 = (float *)(param_1 + 0x46);
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 6;
    pfVar3[-1] = local_214[iVar4 + 1] + pfVar3[-1];
    *pfVar3 = *(float *)(&stack0xfffffddc + iVar7 * 4) + *pfVar3;
    pfVar3[1] = local_220[iVar7] + pfVar3[1];
    pfVar3[2] = local_220[iVar4 + 7] + pfVar3[2];
    pfVar3[3] = (float)(unsigned int)((&local_218)[iVar7]) + pfVar3[3];
    pfVar3[4] = local_214[iVar7] + pfVar3[4];
    pfVar3 = pfVar3 + 6;
    iVar4 = iVar7;
  } while (iVar7 < 0xc);
  FUN_0065c440(1);
  pfVar3 = (float *)(param_1 + 0x46);
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 6;
    pfVar3[-1] = local_214[iVar4 + 1] + pfVar3[-1];
    *pfVar3 = *(float *)(&stack0xfffffddc + iVar7 * 4) + *pfVar3;
    pfVar3[1] = local_220[iVar7] + pfVar3[1];
    pfVar3[2] = local_220[iVar4 + 7] + pfVar3[2];
    pfVar3[3] = (float)(unsigned int)((&local_218)[iVar7]) + pfVar3[3];
    pfVar3[4] = local_214[iVar7] + pfVar3[4];
    pfVar3 = pfVar3 + 6;
    iVar4 = iVar7;
  } while (iVar7 < 0xc);
  FUN_0065c440(1);
  pfVar3 = (float *)(param_1 + 0x46);
  iVar4 = 0;
  do {
    iVar7 = iVar4 + 6;
    pfVar3[-1] = local_214[iVar4 + 1] + pfVar3[-1];
    *pfVar3 = *(float *)(&stack0xfffffddc + iVar7 * 4) + *pfVar3;
    pfVar3[1] = local_220[iVar7] + pfVar3[1];
    pfVar3[2] = local_220[iVar4 + 7] + pfVar3[2];
    pfVar3[3] = (float)(unsigned int)((&local_218)[iVar7]) + pfVar3[3];
    pfVar3[4] = local_214[iVar7] + pfVar3[4];
    pfVar3 = pfVar3 + 6;
    iVar4 = iVar7;
  } while (iVar7 < 0xc);
  FUN_0065c440(0x21);
  return;
}
