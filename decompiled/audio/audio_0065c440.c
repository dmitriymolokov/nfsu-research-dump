/* spd-match: far pct=10.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0065C440 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0065c340();
void __fastcall FUN_0065c440(int val, int param_1)

{
  float fVar1;

  int iVar2;
  int iVar3;
  int unaff_ESI;
  float *pfVar4;
  float *pfVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar5 = (float *)(unaff_ESI + 0x684 + val * 4);
  FUN_0065c340(unaff_ESI + 0x114);
  iVar3 = 0;
  if (3 < param_1) {
    iVar2 = 3;
    pfVar4 = pfVar5;
    do {
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x150) +
              local_14 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x14c) +
              local_18 * *(float *)(unaff_ESI + 0x15c) +
              local_8 * *(float *)(unaff_ESI + 0x16c) +
              local_4 * *(float *)(unaff_ESI + 0x170) +
              local_2c * *(float *)(unaff_ESI + 0x148) +
              local_1c * *(float *)(unaff_ESI + 0x158) +
              local_c * *(float *)(unaff_ESI + 0x168) +
              local_30 * *(float *)(unaff_ESI + 0x144) +
              local_20 * *(float *)(unaff_ESI + 0x154) + local_10 * *(float *)(unaff_ESI + 0x164) +
              *pfVar4;
      *(float *)(unaff_ESI + 0x170) = fVar1;
      *pfVar4 = fVar1;
      fVar1 = local_20 * *(float *)(unaff_ESI + 0x150) +
              local_10 * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x14c) +
              local_14 * *(float *)(unaff_ESI + 0x15c) +
              local_4 * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x148) +
              local_18 * *(float *)(unaff_ESI + 0x158) +
              local_8 * *(float *)(unaff_ESI + 0x168) +
              local_2c * *(float *)(unaff_ESI + 0x144) +
              local_1c * *(float *)(unaff_ESI + 0x154) + local_c * *(float *)(unaff_ESI + 0x164) +
              pfVar4[1];
      *(float *)(unaff_ESI + 0x16c) = fVar1;
      pfVar4[1] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_ESI + 0x150) +
              local_c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x16c) +
              local_2c * *(float *)(unaff_ESI + 0x170) +
              local_20 * *(float *)(unaff_ESI + 0x14c) +
              local_10 * *(float *)(unaff_ESI + 0x15c) +
              local_24 * *(float *)(unaff_ESI + 0x148) +
              local_14 * *(float *)(unaff_ESI + 0x158) +
              local_4 * *(float *)(unaff_ESI + 0x168) +
              local_28 * *(float *)(unaff_ESI + 0x144) +
              local_18 * *(float *)(unaff_ESI + 0x154) + local_8 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[2];
      *(float *)(unaff_ESI + 0x168) = fVar1;
      pfVar4[2] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_ESI + 0x150) +
              local_8 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x170) +
              local_1c * *(float *)(unaff_ESI + 0x14c) +
              local_c * *(float *)(unaff_ESI + 0x15c) +
              local_30 * *(float *)(unaff_ESI + 0x168) +
              local_20 * *(float *)(unaff_ESI + 0x148) +
              local_10 * *(float *)(unaff_ESI + 0x158) +
              local_24 * *(float *)(unaff_ESI + 0x144) +
              local_14 * *(float *)(unaff_ESI + 0x154) + local_4 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[3];
      *(float *)(unaff_ESI + 0x164) = fVar1;
      pfVar4[3] = fVar1;
      fVar1 = local_14 * *(float *)(unaff_ESI + 0x150) +
              local_4 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x16c) +
              local_24 * *(float *)(unaff_ESI + 0x170) +
              local_18 * *(float *)(unaff_ESI + 0x14c) +
              local_8 * *(float *)(unaff_ESI + 0x15c) +
              local_2c * *(float *)(unaff_ESI + 0x168) +
              local_1c * *(float *)(unaff_ESI + 0x148) +
              local_c * *(float *)(unaff_ESI + 0x158) +
              local_30 * *(float *)(unaff_ESI + 0x164) +
              local_20 * *(float *)(unaff_ESI + 0x144) + local_10 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[4];
      *(float *)(unaff_ESI + 0x160) = fVar1;
      pfVar4[4] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x160) +
              local_10 * *(float *)(unaff_ESI + 0x150) +
              local_24 * *(float *)(unaff_ESI + 0x16c) +
              local_20 * *(float *)(unaff_ESI + 0x170) +
              local_14 * *(float *)(unaff_ESI + 0x14c) +
              local_4 * *(float *)(unaff_ESI + 0x15c) +
              local_28 * *(float *)(unaff_ESI + 0x168) +
              local_18 * *(float *)(unaff_ESI + 0x148) +
              local_8 * *(float *)(unaff_ESI + 0x158) +
              local_2c * *(float *)(unaff_ESI + 0x164) +
              local_1c * *(float *)(unaff_ESI + 0x144) + local_c * *(float *)(unaff_ESI + 0x154) +
              pfVar4[5];
      *(float *)(unaff_ESI + 0x15c) = fVar1;
      pfVar4[5] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x160) +
              local_c * *(float *)(unaff_ESI + 0x150) +
              local_30 * *(float *)(unaff_ESI + 0x15c) +
              local_20 * *(float *)(unaff_ESI + 0x16c) +
              local_1c * *(float *)(unaff_ESI + 0x170) +
              local_10 * *(float *)(unaff_ESI + 0x14c) +
              local_24 * *(float *)(unaff_ESI + 0x168) +
              local_14 * *(float *)(unaff_ESI + 0x148) +
              local_4 * *(float *)(unaff_ESI + 0x158) +
              local_28 * *(float *)(unaff_ESI + 0x164) +
              local_18 * *(float *)(unaff_ESI + 0x144) + local_8 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[6];
      *(float *)(unaff_ESI + 0x158) = fVar1;
      pfVar4[6] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x160) +
              local_8 * *(float *)(unaff_ESI + 0x150) +
              local_2c * *(float *)(unaff_ESI + 0x15c) +
              local_1c * *(float *)(unaff_ESI + 0x16c) +
              local_18 * *(float *)(unaff_ESI + 0x170) +
              local_c * *(float *)(unaff_ESI + 0x14c) +
              local_30 * *(float *)(unaff_ESI + 0x158) +
              local_20 * *(float *)(unaff_ESI + 0x168) +
              local_10 * *(float *)(unaff_ESI + 0x148) +
              local_24 * *(float *)(unaff_ESI + 0x164) +
              local_14 * *(float *)(unaff_ESI + 0x144) + local_4 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[7];
      *(float *)(unaff_ESI + 0x154) = fVar1;
      pfVar4[7] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x160) +
              local_4 * *(float *)(unaff_ESI + 0x150) +
              local_28 * *(float *)(unaff_ESI + 0x15c) +
              local_18 * *(float *)(unaff_ESI + 0x16c) +
              local_14 * *(float *)(unaff_ESI + 0x170) +
              local_8 * *(float *)(unaff_ESI + 0x14c) +
              local_2c * *(float *)(unaff_ESI + 0x158) +
              local_1c * *(float *)(unaff_ESI + 0x168) +
              local_c * *(float *)(unaff_ESI + 0x148) +
              local_30 * *(float *)(unaff_ESI + 0x154) +
              local_20 * *(float *)(unaff_ESI + 0x164) + local_10 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[8];
      *(float *)(unaff_ESI + 0x150) = fVar1;
      pfVar4[8] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x150) +
              local_20 * *(float *)(unaff_ESI + 0x160) +
              local_24 * *(float *)(unaff_ESI + 0x15c) +
              local_14 * *(float *)(unaff_ESI + 0x16c) +
              local_10 * *(float *)(unaff_ESI + 0x170) +
              local_4 * *(float *)(unaff_ESI + 0x14c) +
              local_28 * *(float *)(unaff_ESI + 0x158) +
              local_18 * *(float *)(unaff_ESI + 0x168) +
              local_8 * *(float *)(unaff_ESI + 0x148) +
              local_2c * *(float *)(unaff_ESI + 0x154) +
              local_1c * *(float *)(unaff_ESI + 0x164) + local_c * *(float *)(unaff_ESI + 0x144) +
              pfVar4[9];
      *(float *)(unaff_ESI + 0x14c) = fVar1;
      pfVar4[9] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x150) +
              local_1c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x14c) +
              local_20 * *(float *)(unaff_ESI + 0x15c) +
              local_10 * *(float *)(unaff_ESI + 0x16c) +
              local_c * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x158) +
              local_14 * *(float *)(unaff_ESI + 0x168) +
              local_4 * *(float *)(unaff_ESI + 0x148) +
              local_28 * *(float *)(unaff_ESI + 0x154) +
              local_18 * *(float *)(unaff_ESI + 0x164) + local_8 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[10];
      *(float *)(unaff_ESI + 0x148) = fVar1;
      pfVar4[10] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x150) +
              local_18 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x14c) +
              local_1c * *(float *)(unaff_ESI + 0x15c) +
              local_c * *(float *)(unaff_ESI + 0x16c) +
              local_8 * *(float *)(unaff_ESI + 0x170) +
              local_30 * *(float *)(unaff_ESI + 0x148) +
              local_20 * *(float *)(unaff_ESI + 0x158) +
              local_10 * *(float *)(unaff_ESI + 0x168) +
              local_24 * *(float *)(unaff_ESI + 0x154) +
              local_14 * *(float *)(unaff_ESI + 0x164) + local_4 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0xb];
      *(float *)(unaff_ESI + 0x144) = fVar1;
      pfVar4[0xb] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x150) +
              local_14 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x14c) +
              local_18 * *(float *)(unaff_ESI + 0x15c) +
              local_8 * *(float *)(unaff_ESI + 0x16c) +
              local_4 * *(float *)(unaff_ESI + 0x170) +
              local_2c * *(float *)(unaff_ESI + 0x148) +
              local_1c * *(float *)(unaff_ESI + 0x158) +
              local_c * *(float *)(unaff_ESI + 0x168) +
              local_30 * *(float *)(unaff_ESI + 0x144) +
              local_20 * *(float *)(unaff_ESI + 0x154) + local_10 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0xc];
      *(float *)(unaff_ESI + 0x170) = fVar1;
      pfVar4[0xc] = fVar1;
      fVar1 = local_20 * *(float *)(unaff_ESI + 0x150) +
              local_10 * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x14c) +
              local_14 * *(float *)(unaff_ESI + 0x15c) +
              local_4 * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x148) +
              local_18 * *(float *)(unaff_ESI + 0x158) +
              local_8 * *(float *)(unaff_ESI + 0x168) +
              local_2c * *(float *)(unaff_ESI + 0x144) +
              local_1c * *(float *)(unaff_ESI + 0x154) + local_c * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0xd];
      *(float *)(unaff_ESI + 0x16c) = fVar1;
      pfVar4[0xd] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_ESI + 0x150) +
              local_c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x16c) +
              local_2c * *(float *)(unaff_ESI + 0x170) +
              local_20 * *(float *)(unaff_ESI + 0x14c) +
              local_10 * *(float *)(unaff_ESI + 0x15c) +
              local_24 * *(float *)(unaff_ESI + 0x148) +
              local_14 * *(float *)(unaff_ESI + 0x158) +
              local_4 * *(float *)(unaff_ESI + 0x168) +
              local_28 * *(float *)(unaff_ESI + 0x144) +
              local_18 * *(float *)(unaff_ESI + 0x154) + local_8 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0xe];
      *(float *)(unaff_ESI + 0x168) = fVar1;
      pfVar4[0xe] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_ESI + 0x150) +
              local_8 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x170) +
              local_1c * *(float *)(unaff_ESI + 0x14c) +
              local_c * *(float *)(unaff_ESI + 0x15c) +
              local_30 * *(float *)(unaff_ESI + 0x168) +
              local_20 * *(float *)(unaff_ESI + 0x148) +
              local_10 * *(float *)(unaff_ESI + 0x158) +
              local_24 * *(float *)(unaff_ESI + 0x144) +
              local_14 * *(float *)(unaff_ESI + 0x154) + local_4 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0xf];
      *(float *)(unaff_ESI + 0x164) = fVar1;
      pfVar4[0xf] = fVar1;
      fVar1 = local_14 * *(float *)(unaff_ESI + 0x150) +
              local_4 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x16c) +
              local_24 * *(float *)(unaff_ESI + 0x170) +
              local_18 * *(float *)(unaff_ESI + 0x14c) +
              local_8 * *(float *)(unaff_ESI + 0x15c) +
              local_2c * *(float *)(unaff_ESI + 0x168) +
              local_1c * *(float *)(unaff_ESI + 0x148) +
              local_c * *(float *)(unaff_ESI + 0x158) +
              local_30 * *(float *)(unaff_ESI + 0x164) +
              local_20 * *(float *)(unaff_ESI + 0x144) + local_10 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x10];
      *(float *)(unaff_ESI + 0x160) = fVar1;
      pfVar4[0x10] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x160) +
              local_10 * *(float *)(unaff_ESI + 0x150) +
              local_24 * *(float *)(unaff_ESI + 0x16c) +
              local_20 * *(float *)(unaff_ESI + 0x170) +
              local_14 * *(float *)(unaff_ESI + 0x14c) +
              local_4 * *(float *)(unaff_ESI + 0x15c) +
              local_28 * *(float *)(unaff_ESI + 0x168) +
              local_18 * *(float *)(unaff_ESI + 0x148) +
              local_8 * *(float *)(unaff_ESI + 0x158) +
              local_2c * *(float *)(unaff_ESI + 0x164) +
              local_1c * *(float *)(unaff_ESI + 0x144) + local_c * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x11];
      *(float *)(unaff_ESI + 0x15c) = fVar1;
      pfVar4[0x11] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x160) +
              local_c * *(float *)(unaff_ESI + 0x150) +
              local_30 * *(float *)(unaff_ESI + 0x15c) +
              local_20 * *(float *)(unaff_ESI + 0x16c) +
              local_1c * *(float *)(unaff_ESI + 0x170) +
              local_10 * *(float *)(unaff_ESI + 0x14c) +
              local_24 * *(float *)(unaff_ESI + 0x168) +
              local_14 * *(float *)(unaff_ESI + 0x148) +
              local_4 * *(float *)(unaff_ESI + 0x158) +
              local_28 * *(float *)(unaff_ESI + 0x164) +
              local_18 * *(float *)(unaff_ESI + 0x144) + local_8 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x12];
      *(float *)(unaff_ESI + 0x158) = fVar1;
      pfVar4[0x12] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x160) +
              local_8 * *(float *)(unaff_ESI + 0x150) +
              local_2c * *(float *)(unaff_ESI + 0x15c) +
              local_1c * *(float *)(unaff_ESI + 0x16c) +
              local_18 * *(float *)(unaff_ESI + 0x170) +
              local_c * *(float *)(unaff_ESI + 0x14c) +
              local_30 * *(float *)(unaff_ESI + 0x158) +
              local_20 * *(float *)(unaff_ESI + 0x168) +
              local_10 * *(float *)(unaff_ESI + 0x148) +
              local_24 * *(float *)(unaff_ESI + 0x164) +
              local_14 * *(float *)(unaff_ESI + 0x144) + local_4 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x13];
      *(float *)(unaff_ESI + 0x154) = fVar1;
      pfVar4[0x13] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x160) +
              local_4 * *(float *)(unaff_ESI + 0x150) +
              local_28 * *(float *)(unaff_ESI + 0x15c) +
              local_18 * *(float *)(unaff_ESI + 0x16c) +
              local_14 * *(float *)(unaff_ESI + 0x170) +
              local_8 * *(float *)(unaff_ESI + 0x14c) +
              local_2c * *(float *)(unaff_ESI + 0x158) +
              local_1c * *(float *)(unaff_ESI + 0x168) +
              local_c * *(float *)(unaff_ESI + 0x148) +
              local_30 * *(float *)(unaff_ESI + 0x154) +
              local_20 * *(float *)(unaff_ESI + 0x164) + local_10 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x14];
      *(float *)(unaff_ESI + 0x150) = fVar1;
      pfVar4[0x14] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x150) +
              local_20 * *(float *)(unaff_ESI + 0x160) +
              local_24 * *(float *)(unaff_ESI + 0x15c) +
              local_14 * *(float *)(unaff_ESI + 0x16c) +
              local_10 * *(float *)(unaff_ESI + 0x170) +
              local_4 * *(float *)(unaff_ESI + 0x14c) +
              local_28 * *(float *)(unaff_ESI + 0x158) +
              local_18 * *(float *)(unaff_ESI + 0x168) +
              local_8 * *(float *)(unaff_ESI + 0x148) +
              local_2c * *(float *)(unaff_ESI + 0x154) +
              local_1c * *(float *)(unaff_ESI + 0x164) + local_c * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x15];
      *(float *)(unaff_ESI + 0x14c) = fVar1;
      pfVar4[0x15] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x150) +
              local_1c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x14c) +
              local_20 * *(float *)(unaff_ESI + 0x15c) +
              local_10 * *(float *)(unaff_ESI + 0x16c) +
              local_c * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x158) +
              local_14 * *(float *)(unaff_ESI + 0x168) +
              local_4 * *(float *)(unaff_ESI + 0x148) +
              local_28 * *(float *)(unaff_ESI + 0x154) +
              local_18 * *(float *)(unaff_ESI + 0x164) + local_8 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x16];
      *(float *)(unaff_ESI + 0x148) = fVar1;
      pfVar4[0x16] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x150) +
              local_18 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x14c) +
              local_1c * *(float *)(unaff_ESI + 0x15c) +
              local_c * *(float *)(unaff_ESI + 0x16c) +
              local_8 * *(float *)(unaff_ESI + 0x170) +
              local_30 * *(float *)(unaff_ESI + 0x148) +
              local_20 * *(float *)(unaff_ESI + 0x158) +
              local_10 * *(float *)(unaff_ESI + 0x168) +
              local_24 * *(float *)(unaff_ESI + 0x154) +
              local_14 * *(float *)(unaff_ESI + 0x164) + local_4 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x17];
      *(float *)(unaff_ESI + 0x144) = fVar1;
      pfVar4[0x17] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x150) +
              local_14 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x14c) +
              local_18 * *(float *)(unaff_ESI + 0x15c) +
              local_8 * *(float *)(unaff_ESI + 0x16c) +
              local_4 * *(float *)(unaff_ESI + 0x170) +
              local_2c * *(float *)(unaff_ESI + 0x148) +
              local_1c * *(float *)(unaff_ESI + 0x158) +
              local_c * *(float *)(unaff_ESI + 0x168) +
              local_30 * *(float *)(unaff_ESI + 0x144) +
              local_20 * *(float *)(unaff_ESI + 0x154) + local_10 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x18];
      *(float *)(unaff_ESI + 0x170) = fVar1;
      pfVar4[0x18] = fVar1;
      fVar1 = local_20 * *(float *)(unaff_ESI + 0x150) +
              local_10 * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x14c) +
              local_14 * *(float *)(unaff_ESI + 0x15c) +
              local_4 * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x148) +
              local_18 * *(float *)(unaff_ESI + 0x158) +
              local_8 * *(float *)(unaff_ESI + 0x168) +
              local_2c * *(float *)(unaff_ESI + 0x144) +
              local_1c * *(float *)(unaff_ESI + 0x154) + local_c * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x19];
      *(float *)(unaff_ESI + 0x16c) = fVar1;
      pfVar4[0x19] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_ESI + 0x150) +
              local_c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x16c) +
              local_2c * *(float *)(unaff_ESI + 0x170) +
              local_20 * *(float *)(unaff_ESI + 0x14c) +
              local_10 * *(float *)(unaff_ESI + 0x15c) +
              local_24 * *(float *)(unaff_ESI + 0x148) +
              local_14 * *(float *)(unaff_ESI + 0x158) +
              local_4 * *(float *)(unaff_ESI + 0x168) +
              local_28 * *(float *)(unaff_ESI + 0x144) +
              local_18 * *(float *)(unaff_ESI + 0x154) + local_8 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x1a];
      *(float *)(unaff_ESI + 0x168) = fVar1;
      pfVar4[0x1a] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_ESI + 0x150) +
              local_8 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x170) +
              local_1c * *(float *)(unaff_ESI + 0x14c) +
              local_c * *(float *)(unaff_ESI + 0x15c) +
              local_30 * *(float *)(unaff_ESI + 0x168) +
              local_20 * *(float *)(unaff_ESI + 0x148) +
              local_10 * *(float *)(unaff_ESI + 0x158) +
              local_24 * *(float *)(unaff_ESI + 0x144) +
              local_14 * *(float *)(unaff_ESI + 0x154) + local_4 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x1b];
      *(float *)(unaff_ESI + 0x164) = fVar1;
      pfVar4[0x1b] = fVar1;
      fVar1 = local_14 * *(float *)(unaff_ESI + 0x150) +
              local_4 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x16c) +
              local_24 * *(float *)(unaff_ESI + 0x170) +
              local_18 * *(float *)(unaff_ESI + 0x14c) +
              local_8 * *(float *)(unaff_ESI + 0x15c) +
              local_2c * *(float *)(unaff_ESI + 0x168) +
              local_1c * *(float *)(unaff_ESI + 0x148) +
              local_c * *(float *)(unaff_ESI + 0x158) +
              local_30 * *(float *)(unaff_ESI + 0x164) +
              local_20 * *(float *)(unaff_ESI + 0x144) + local_10 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x1c];
      *(float *)(unaff_ESI + 0x160) = fVar1;
      pfVar4[0x1c] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x160) +
              local_10 * *(float *)(unaff_ESI + 0x150) +
              local_24 * *(float *)(unaff_ESI + 0x16c) +
              local_20 * *(float *)(unaff_ESI + 0x170) +
              local_14 * *(float *)(unaff_ESI + 0x14c) +
              local_4 * *(float *)(unaff_ESI + 0x15c) +
              local_28 * *(float *)(unaff_ESI + 0x168) +
              local_18 * *(float *)(unaff_ESI + 0x148) +
              local_8 * *(float *)(unaff_ESI + 0x158) +
              local_2c * *(float *)(unaff_ESI + 0x164) +
              local_1c * *(float *)(unaff_ESI + 0x144) + local_c * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x1d];
      *(float *)(unaff_ESI + 0x15c) = fVar1;
      pfVar4[0x1d] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x160) +
              local_c * *(float *)(unaff_ESI + 0x150) +
              local_30 * *(float *)(unaff_ESI + 0x15c) +
              local_20 * *(float *)(unaff_ESI + 0x16c) +
              local_1c * *(float *)(unaff_ESI + 0x170) +
              local_10 * *(float *)(unaff_ESI + 0x14c) +
              local_24 * *(float *)(unaff_ESI + 0x168) +
              local_14 * *(float *)(unaff_ESI + 0x148) +
              local_4 * *(float *)(unaff_ESI + 0x158) +
              local_28 * *(float *)(unaff_ESI + 0x164) +
              local_18 * *(float *)(unaff_ESI + 0x144) + local_8 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x1e];
      *(float *)(unaff_ESI + 0x158) = fVar1;
      pfVar4[0x1e] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x160) +
              local_8 * *(float *)(unaff_ESI + 0x150) +
              local_2c * *(float *)(unaff_ESI + 0x15c) +
              local_1c * *(float *)(unaff_ESI + 0x16c) +
              local_18 * *(float *)(unaff_ESI + 0x170) +
              local_c * *(float *)(unaff_ESI + 0x14c) +
              local_30 * *(float *)(unaff_ESI + 0x158) +
              local_20 * *(float *)(unaff_ESI + 0x168) +
              local_10 * *(float *)(unaff_ESI + 0x148) +
              local_24 * *(float *)(unaff_ESI + 0x164) +
              local_14 * *(float *)(unaff_ESI + 0x144) + local_4 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x1f];
      *(float *)(unaff_ESI + 0x154) = fVar1;
      pfVar4[0x1f] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x160) +
              local_4 * *(float *)(unaff_ESI + 0x150) +
              local_28 * *(float *)(unaff_ESI + 0x15c) +
              local_18 * *(float *)(unaff_ESI + 0x16c) +
              local_14 * *(float *)(unaff_ESI + 0x170) +
              local_8 * *(float *)(unaff_ESI + 0x14c) +
              local_2c * *(float *)(unaff_ESI + 0x158) +
              local_1c * *(float *)(unaff_ESI + 0x168) +
              local_c * *(float *)(unaff_ESI + 0x148) +
              local_30 * *(float *)(unaff_ESI + 0x154) +
              local_20 * *(float *)(unaff_ESI + 0x164) + local_10 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x20];
      *(float *)(unaff_ESI + 0x150) = fVar1;
      pfVar4[0x20] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x150) +
              local_20 * *(float *)(unaff_ESI + 0x160) +
              local_24 * *(float *)(unaff_ESI + 0x15c) +
              local_14 * *(float *)(unaff_ESI + 0x16c) +
              local_10 * *(float *)(unaff_ESI + 0x170) +
              local_4 * *(float *)(unaff_ESI + 0x14c) +
              local_28 * *(float *)(unaff_ESI + 0x158) +
              local_18 * *(float *)(unaff_ESI + 0x168) +
              local_8 * *(float *)(unaff_ESI + 0x148) +
              local_2c * *(float *)(unaff_ESI + 0x154) +
              local_1c * *(float *)(unaff_ESI + 0x164) + local_c * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x21];
      *(float *)(unaff_ESI + 0x14c) = fVar1;
      pfVar4[0x21] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x150) +
              local_1c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x14c) +
              local_20 * *(float *)(unaff_ESI + 0x15c) +
              local_10 * *(float *)(unaff_ESI + 0x16c) +
              local_c * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x158) +
              local_14 * *(float *)(unaff_ESI + 0x168) +
              local_4 * *(float *)(unaff_ESI + 0x148) +
              local_28 * *(float *)(unaff_ESI + 0x154) +
              local_18 * *(float *)(unaff_ESI + 0x164) + local_8 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x22];
      *(float *)(unaff_ESI + 0x148) = fVar1;
      pfVar4[0x22] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x150) +
              local_18 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x14c) +
              local_1c * *(float *)(unaff_ESI + 0x15c) +
              local_c * *(float *)(unaff_ESI + 0x16c) +
              local_8 * *(float *)(unaff_ESI + 0x170) +
              local_30 * *(float *)(unaff_ESI + 0x148) +
              local_20 * *(float *)(unaff_ESI + 0x158) +
              local_10 * *(float *)(unaff_ESI + 0x168) +
              local_24 * *(float *)(unaff_ESI + 0x154) +
              local_14 * *(float *)(unaff_ESI + 0x164) + local_4 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x23];
      *(float *)(unaff_ESI + 0x144) = fVar1;
      pfVar4[0x23] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x150) +
              local_14 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x14c) +
              local_18 * *(float *)(unaff_ESI + 0x15c) +
              local_8 * *(float *)(unaff_ESI + 0x16c) +
              local_4 * *(float *)(unaff_ESI + 0x170) +
              local_2c * *(float *)(unaff_ESI + 0x148) +
              local_1c * *(float *)(unaff_ESI + 0x158) +
              local_c * *(float *)(unaff_ESI + 0x168) +
              local_30 * *(float *)(unaff_ESI + 0x144) +
              local_20 * *(float *)(unaff_ESI + 0x154) + local_10 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x24];
      *(float *)(unaff_ESI + 0x170) = fVar1;
      pfVar4[0x24] = fVar1;
      fVar1 = local_20 * *(float *)(unaff_ESI + 0x150) +
              local_10 * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x14c) +
              local_14 * *(float *)(unaff_ESI + 0x15c) +
              local_4 * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x148) +
              local_18 * *(float *)(unaff_ESI + 0x158) +
              local_8 * *(float *)(unaff_ESI + 0x168) +
              local_2c * *(float *)(unaff_ESI + 0x144) +
              local_1c * *(float *)(unaff_ESI + 0x154) + local_c * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x25];
      *(float *)(unaff_ESI + 0x16c) = fVar1;
      pfVar4[0x25] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_ESI + 0x150) +
              local_c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x16c) +
              local_2c * *(float *)(unaff_ESI + 0x170) +
              local_20 * *(float *)(unaff_ESI + 0x14c) +
              local_10 * *(float *)(unaff_ESI + 0x15c) +
              local_24 * *(float *)(unaff_ESI + 0x148) +
              local_14 * *(float *)(unaff_ESI + 0x158) +
              local_4 * *(float *)(unaff_ESI + 0x168) +
              local_28 * *(float *)(unaff_ESI + 0x144) +
              local_18 * *(float *)(unaff_ESI + 0x154) + local_8 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x26];
      *(float *)(unaff_ESI + 0x168) = fVar1;
      pfVar4[0x26] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_ESI + 0x150) +
              local_8 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x170) +
              local_1c * *(float *)(unaff_ESI + 0x14c) +
              local_c * *(float *)(unaff_ESI + 0x15c) +
              local_30 * *(float *)(unaff_ESI + 0x168) +
              local_20 * *(float *)(unaff_ESI + 0x148) +
              local_10 * *(float *)(unaff_ESI + 0x158) +
              local_24 * *(float *)(unaff_ESI + 0x144) +
              local_14 * *(float *)(unaff_ESI + 0x154) + local_4 * *(float *)(unaff_ESI + 0x164) +
              pfVar4[0x27];
      *(float *)(unaff_ESI + 0x164) = fVar1;
      pfVar4[0x27] = fVar1;
      fVar1 = local_14 * *(float *)(unaff_ESI + 0x150) +
              local_4 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x16c) +
              local_24 * *(float *)(unaff_ESI + 0x170) +
              local_18 * *(float *)(unaff_ESI + 0x14c) +
              local_8 * *(float *)(unaff_ESI + 0x15c) +
              local_2c * *(float *)(unaff_ESI + 0x168) +
              local_1c * *(float *)(unaff_ESI + 0x148) +
              local_c * *(float *)(unaff_ESI + 0x158) +
              local_30 * *(float *)(unaff_ESI + 0x164) +
              local_20 * *(float *)(unaff_ESI + 0x144) + local_10 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x28];
      *(float *)(unaff_ESI + 0x160) = fVar1;
      pfVar4[0x28] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x160) +
              local_10 * *(float *)(unaff_ESI + 0x150) +
              local_24 * *(float *)(unaff_ESI + 0x16c) +
              local_20 * *(float *)(unaff_ESI + 0x170) +
              local_14 * *(float *)(unaff_ESI + 0x14c) +
              local_4 * *(float *)(unaff_ESI + 0x15c) +
              local_28 * *(float *)(unaff_ESI + 0x168) +
              local_18 * *(float *)(unaff_ESI + 0x148) +
              local_8 * *(float *)(unaff_ESI + 0x158) +
              local_2c * *(float *)(unaff_ESI + 0x164) +
              local_1c * *(float *)(unaff_ESI + 0x144) + local_c * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x29];
      *(float *)(unaff_ESI + 0x15c) = fVar1;
      pfVar4[0x29] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x160) +
              local_c * *(float *)(unaff_ESI + 0x150) +
              local_30 * *(float *)(unaff_ESI + 0x15c) +
              local_20 * *(float *)(unaff_ESI + 0x16c) +
              local_1c * *(float *)(unaff_ESI + 0x170) +
              local_10 * *(float *)(unaff_ESI + 0x14c) +
              local_24 * *(float *)(unaff_ESI + 0x168) +
              local_14 * *(float *)(unaff_ESI + 0x148) +
              local_4 * *(float *)(unaff_ESI + 0x158) +
              local_28 * *(float *)(unaff_ESI + 0x164) +
              local_18 * *(float *)(unaff_ESI + 0x144) + local_8 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x2a];
      *(float *)(unaff_ESI + 0x158) = fVar1;
      pfVar4[0x2a] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x160) +
              local_8 * *(float *)(unaff_ESI + 0x150) +
              local_2c * *(float *)(unaff_ESI + 0x15c) +
              local_1c * *(float *)(unaff_ESI + 0x16c) +
              local_18 * *(float *)(unaff_ESI + 0x170) +
              local_c * *(float *)(unaff_ESI + 0x14c) +
              local_30 * *(float *)(unaff_ESI + 0x158) +
              local_20 * *(float *)(unaff_ESI + 0x168) +
              local_10 * *(float *)(unaff_ESI + 0x148) +
              local_24 * *(float *)(unaff_ESI + 0x164) +
              local_14 * *(float *)(unaff_ESI + 0x144) + local_4 * *(float *)(unaff_ESI + 0x154) +
              pfVar4[0x2b];
      *(float *)(unaff_ESI + 0x154) = fVar1;
      pfVar4[0x2b] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x160) +
              local_4 * *(float *)(unaff_ESI + 0x150) +
              local_28 * *(float *)(unaff_ESI + 0x15c) +
              local_18 * *(float *)(unaff_ESI + 0x16c) +
              local_14 * *(float *)(unaff_ESI + 0x170) +
              local_8 * *(float *)(unaff_ESI + 0x14c) +
              local_2c * *(float *)(unaff_ESI + 0x158) +
              local_1c * *(float *)(unaff_ESI + 0x168) +
              local_c * *(float *)(unaff_ESI + 0x148) +
              local_30 * *(float *)(unaff_ESI + 0x154) +
              local_20 * *(float *)(unaff_ESI + 0x164) + local_10 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x2c];
      *(float *)(unaff_ESI + 0x150) = fVar1;
      pfVar4[0x2c] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x150) +
              local_20 * *(float *)(unaff_ESI + 0x160) +
              local_24 * *(float *)(unaff_ESI + 0x15c) +
              local_14 * *(float *)(unaff_ESI + 0x16c) +
              local_10 * *(float *)(unaff_ESI + 0x170) +
              local_4 * *(float *)(unaff_ESI + 0x14c) +
              local_28 * *(float *)(unaff_ESI + 0x158) +
              local_18 * *(float *)(unaff_ESI + 0x168) +
              local_8 * *(float *)(unaff_ESI + 0x148) +
              local_2c * *(float *)(unaff_ESI + 0x154) +
              local_1c * *(float *)(unaff_ESI + 0x164) + local_c * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x2d];
      *(float *)(unaff_ESI + 0x14c) = fVar1;
      pfVar4[0x2d] = fVar1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 4;
      pfVar5 = pfVar4 + 0x30;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x150) +
              local_1c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x14c) +
              local_20 * *(float *)(unaff_ESI + 0x15c) +
              local_10 * *(float *)(unaff_ESI + 0x16c) +
              local_c * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x158) +
              local_14 * *(float *)(unaff_ESI + 0x168) +
              local_4 * *(float *)(unaff_ESI + 0x148) +
              local_28 * *(float *)(unaff_ESI + 0x154) +
              local_18 * *(float *)(unaff_ESI + 0x164) + local_8 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x2e];
      *(float *)(unaff_ESI + 0x148) = fVar1;
      pfVar4[0x2e] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x150) +
              local_18 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x14c) +
              local_1c * *(float *)(unaff_ESI + 0x15c) +
              local_c * *(float *)(unaff_ESI + 0x16c) +
              local_8 * *(float *)(unaff_ESI + 0x170) +
              local_30 * *(float *)(unaff_ESI + 0x148) +
              local_20 * *(float *)(unaff_ESI + 0x158) +
              local_10 * *(float *)(unaff_ESI + 0x168) +
              local_24 * *(float *)(unaff_ESI + 0x154) +
              local_14 * *(float *)(unaff_ESI + 0x164) + local_4 * *(float *)(unaff_ESI + 0x144) +
              pfVar4[0x2f];
      *(float *)(unaff_ESI + 0x144) = fVar1;
      pfVar4[0x2f] = fVar1;
      pfVar4 = pfVar5;
    } while (iVar2 < param_1);
  }
  if (iVar3 < param_1) {
    param_1 = param_1 - iVar3;
    do {
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x150) +
              local_14 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x14c) +
              local_18 * *(float *)(unaff_ESI + 0x15c) +
              local_8 * *(float *)(unaff_ESI + 0x16c) +
              local_4 * *(float *)(unaff_ESI + 0x170) +
              local_2c * *(float *)(unaff_ESI + 0x148) +
              local_1c * *(float *)(unaff_ESI + 0x158) +
              local_c * *(float *)(unaff_ESI + 0x168) +
              local_30 * *(float *)(unaff_ESI + 0x144) +
              local_20 * *(float *)(unaff_ESI + 0x154) + local_10 * *(float *)(unaff_ESI + 0x164) +
              *pfVar5;
      *(float *)(unaff_ESI + 0x170) = fVar1;
      *pfVar5 = fVar1;
      fVar1 = local_20 * *(float *)(unaff_ESI + 0x150) +
              local_10 * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x14c) +
              local_14 * *(float *)(unaff_ESI + 0x15c) +
              local_4 * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x148) +
              local_18 * *(float *)(unaff_ESI + 0x158) +
              local_8 * *(float *)(unaff_ESI + 0x168) +
              local_2c * *(float *)(unaff_ESI + 0x144) +
              local_1c * *(float *)(unaff_ESI + 0x154) + local_c * *(float *)(unaff_ESI + 0x164) +
              pfVar5[1];
      *(float *)(unaff_ESI + 0x16c) = fVar1;
      pfVar5[1] = fVar1;
      fVar1 = local_1c * *(float *)(unaff_ESI + 0x150) +
              local_c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x16c) +
              local_2c * *(float *)(unaff_ESI + 0x170) +
              local_20 * *(float *)(unaff_ESI + 0x14c) +
              local_10 * *(float *)(unaff_ESI + 0x15c) +
              local_24 * *(float *)(unaff_ESI + 0x148) +
              local_14 * *(float *)(unaff_ESI + 0x158) +
              local_4 * *(float *)(unaff_ESI + 0x168) +
              local_28 * *(float *)(unaff_ESI + 0x144) +
              local_18 * *(float *)(unaff_ESI + 0x154) + local_8 * *(float *)(unaff_ESI + 0x164) +
              pfVar5[2];
      *(float *)(unaff_ESI + 0x168) = fVar1;
      pfVar5[2] = fVar1;
      fVar1 = local_18 * *(float *)(unaff_ESI + 0x150) +
              local_8 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x16c) +
              local_28 * *(float *)(unaff_ESI + 0x170) +
              local_1c * *(float *)(unaff_ESI + 0x14c) +
              local_c * *(float *)(unaff_ESI + 0x15c) +
              local_30 * *(float *)(unaff_ESI + 0x168) +
              local_20 * *(float *)(unaff_ESI + 0x148) +
              local_10 * *(float *)(unaff_ESI + 0x158) +
              local_24 * *(float *)(unaff_ESI + 0x144) +
              local_14 * *(float *)(unaff_ESI + 0x154) + local_4 * *(float *)(unaff_ESI + 0x164) +
              pfVar5[3];
      *(float *)(unaff_ESI + 0x164) = fVar1;
      pfVar5[3] = fVar1;
      fVar1 = local_14 * *(float *)(unaff_ESI + 0x150) +
              local_4 * *(float *)(unaff_ESI + 0x160) +
              local_28 * *(float *)(unaff_ESI + 0x16c) +
              local_24 * *(float *)(unaff_ESI + 0x170) +
              local_18 * *(float *)(unaff_ESI + 0x14c) +
              local_8 * *(float *)(unaff_ESI + 0x15c) +
              local_2c * *(float *)(unaff_ESI + 0x168) +
              local_1c * *(float *)(unaff_ESI + 0x148) +
              local_c * *(float *)(unaff_ESI + 0x158) +
              local_30 * *(float *)(unaff_ESI + 0x164) +
              local_20 * *(float *)(unaff_ESI + 0x144) + local_10 * *(float *)(unaff_ESI + 0x154) +
              pfVar5[4];
      *(float *)(unaff_ESI + 0x160) = fVar1;
      pfVar5[4] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x160) +
              local_10 * *(float *)(unaff_ESI + 0x150) +
              local_24 * *(float *)(unaff_ESI + 0x16c) +
              local_20 * *(float *)(unaff_ESI + 0x170) +
              local_14 * *(float *)(unaff_ESI + 0x14c) +
              local_4 * *(float *)(unaff_ESI + 0x15c) +
              local_28 * *(float *)(unaff_ESI + 0x168) +
              local_18 * *(float *)(unaff_ESI + 0x148) +
              local_8 * *(float *)(unaff_ESI + 0x158) +
              local_2c * *(float *)(unaff_ESI + 0x164) +
              local_1c * *(float *)(unaff_ESI + 0x144) + local_c * *(float *)(unaff_ESI + 0x154) +
              pfVar5[5];
      *(float *)(unaff_ESI + 0x15c) = fVar1;
      pfVar5[5] = fVar1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x160) +
              local_c * *(float *)(unaff_ESI + 0x150) +
              local_30 * *(float *)(unaff_ESI + 0x15c) +
              local_20 * *(float *)(unaff_ESI + 0x16c) +
              local_1c * *(float *)(unaff_ESI + 0x170) +
              local_10 * *(float *)(unaff_ESI + 0x14c) +
              local_24 * *(float *)(unaff_ESI + 0x168) +
              local_14 * *(float *)(unaff_ESI + 0x148) +
              local_4 * *(float *)(unaff_ESI + 0x158) +
              local_28 * *(float *)(unaff_ESI + 0x164) +
              local_18 * *(float *)(unaff_ESI + 0x144) + local_8 * *(float *)(unaff_ESI + 0x154) +
              pfVar5[6];
      *(float *)(unaff_ESI + 0x158) = fVar1;
      pfVar5[6] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x160) +
              local_8 * *(float *)(unaff_ESI + 0x150) +
              local_2c * *(float *)(unaff_ESI + 0x15c) +
              local_1c * *(float *)(unaff_ESI + 0x16c) +
              local_18 * *(float *)(unaff_ESI + 0x170) +
              local_c * *(float *)(unaff_ESI + 0x14c) +
              local_30 * *(float *)(unaff_ESI + 0x158) +
              local_20 * *(float *)(unaff_ESI + 0x168) +
              local_10 * *(float *)(unaff_ESI + 0x148) +
              local_24 * *(float *)(unaff_ESI + 0x164) +
              local_14 * *(float *)(unaff_ESI + 0x144) + local_4 * *(float *)(unaff_ESI + 0x154) +
              pfVar5[7];
      *(float *)(unaff_ESI + 0x154) = fVar1;
      pfVar5[7] = fVar1;
      fVar1 = local_24 * *(float *)(unaff_ESI + 0x160) +
              local_4 * *(float *)(unaff_ESI + 0x150) +
              local_28 * *(float *)(unaff_ESI + 0x15c) +
              local_18 * *(float *)(unaff_ESI + 0x16c) +
              local_14 * *(float *)(unaff_ESI + 0x170) +
              local_8 * *(float *)(unaff_ESI + 0x14c) +
              local_2c * *(float *)(unaff_ESI + 0x158) +
              local_1c * *(float *)(unaff_ESI + 0x168) +
              local_c * *(float *)(unaff_ESI + 0x148) +
              local_30 * *(float *)(unaff_ESI + 0x154) +
              local_20 * *(float *)(unaff_ESI + 0x164) + local_10 * *(float *)(unaff_ESI + 0x144) +
              pfVar5[8];
      *(float *)(unaff_ESI + 0x150) = fVar1;
      pfVar5[8] = fVar1;
      fVar1 = local_30 * *(float *)(unaff_ESI + 0x150) +
              local_20 * *(float *)(unaff_ESI + 0x160) +
              local_24 * *(float *)(unaff_ESI + 0x15c) +
              local_14 * *(float *)(unaff_ESI + 0x16c) +
              local_10 * *(float *)(unaff_ESI + 0x170) +
              local_4 * *(float *)(unaff_ESI + 0x14c) +
              local_28 * *(float *)(unaff_ESI + 0x158) +
              local_18 * *(float *)(unaff_ESI + 0x168) +
              local_8 * *(float *)(unaff_ESI + 0x148) +
              local_2c * *(float *)(unaff_ESI + 0x154) +
              local_1c * *(float *)(unaff_ESI + 0x164) + local_c * *(float *)(unaff_ESI + 0x144) +
              pfVar5[9];
      *(float *)(unaff_ESI + 0x14c) = fVar1;
      pfVar5[9] = fVar1;
      param_1 = param_1 + -1;
      fVar1 = local_2c * *(float *)(unaff_ESI + 0x150) +
              local_1c * *(float *)(unaff_ESI + 0x160) +
              local_30 * *(float *)(unaff_ESI + 0x14c) +
              local_20 * *(float *)(unaff_ESI + 0x15c) +
              local_10 * *(float *)(unaff_ESI + 0x16c) +
              local_c * *(float *)(unaff_ESI + 0x170) +
              local_24 * *(float *)(unaff_ESI + 0x158) +
              local_14 * *(float *)(unaff_ESI + 0x168) +
              local_4 * *(float *)(unaff_ESI + 0x148) +
              local_28 * *(float *)(unaff_ESI + 0x154) +
              local_18 * *(float *)(unaff_ESI + 0x164) + local_8 * *(float *)(unaff_ESI + 0x144) +
              pfVar5[10];
      *(float *)(unaff_ESI + 0x148) = fVar1;
      pfVar5[10] = fVar1;
      fVar1 = local_28 * *(float *)(unaff_ESI + 0x150) +
              local_18 * *(float *)(unaff_ESI + 0x160) +
              local_2c * *(float *)(unaff_ESI + 0x14c) +
              local_1c * *(float *)(unaff_ESI + 0x15c) +
              local_c * *(float *)(unaff_ESI + 0x16c) +
              local_8 * *(float *)(unaff_ESI + 0x170) +
              local_30 * *(float *)(unaff_ESI + 0x148) +
              local_20 * *(float *)(unaff_ESI + 0x158) +
              local_10 * *(float *)(unaff_ESI + 0x168) +
              local_24 * *(float *)(unaff_ESI + 0x154) +
              local_14 * *(float *)(unaff_ESI + 0x164) + local_4 * *(float *)(unaff_ESI + 0x144) +
              pfVar5[0xb];
      *(float *)(unaff_ESI + 0x144) = fVar1;
      pfVar5[0xb] = fVar1;
      pfVar5 = pfVar5 + 0xc;
    } while (param_1 != 0);
  }
  return;
}
