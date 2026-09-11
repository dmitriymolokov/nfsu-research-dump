/* Decompiled from Speed.exe @ 0065c0e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065c0e0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    iVar1 = 0;
    do {
      if ((param_1[1] & 3) == 1) {
        *(undefined4 *)(param_3 + iVar1 * 4) = 0xc0000000;
        uVar4 = (uint)param_1[1] >> 2;
        iVar5 = param_1[2] + -2;
      }
      else if ((param_1[1] & 3) == 3) {
        *(undefined4 *)(param_3 + iVar1 * 4) = 0x40000000;
        uVar4 = (uint)param_1[1] >> 2;
        iVar5 = param_1[2] + -2;
      }
      else {
        *(undefined4 *)(param_3 + iVar1 * 4) = 0;
        uVar4 = (uint)param_1[1] >> 1;
        iVar5 = param_1[2] + -1;
      }
      param_1[1] = uVar4;
      param_1[2] = iVar5;
      if (iVar5 < 8) {
        param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar5 & 0x1f) | param_1[1];
        *param_1 = (byte *)*param_1 + 1;
        param_1[2] = iVar5 + 8;
      }
      iVar1 = iVar1 + param_4;
    } while (iVar1 < 0x6c);
    return;
  }
  iVar1 = 0;
  iVar5 = 0;
  param_2 = 0;
  do {
    uVar4 = (uint)(byte)(&DAT_006ea8b8)[iVar1 * 0x100 + (param_1[1] & 0xff)];
    iVar2 = uVar4 * 0xc;
    iVar1 = *(int *)(&DAT_006eaab8 + iVar2);
    iVar3 = *(int *)(&DAT_006eaabc + iVar2);
    param_1[2] = param_1[2] - iVar3;
    uVar6 = (uint)param_1[1] >> ((byte)iVar3 & 0x1f);
    iVar3 = param_1[2];
    param_1[1] = uVar6;
    if (iVar3 < 8) {
      param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar3 & 0x1f) | uVar6;
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = iVar3 + 8;
      iVar5 = param_2;
    }
    if (uVar4 < 4) {
      if (uVar4 < 2) {
        param_2 = 7;
        while( true ) {
          uVar6 = param_1[1] & DAT_006ea794;
          iVar3 = param_1[2];
          uVar4 = (uint)param_1[1] >> 1;
          iVar2 = iVar3 + -1;
          param_1[1] = uVar4;
          param_1[2] = iVar2;
          if (iVar2 < 8) {
            param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar2 & 0x1f) | uVar4;
            *param_1 = (byte *)*param_1 + 1;
            param_1[2] = iVar3 + 7;
          }
          if (uVar6 != 1) break;
          param_2 = param_2 + 1;
        }
        uVar6 = param_1[1] & DAT_006ea794;
        iVar3 = param_1[2];
        uVar4 = (uint)param_1[1] >> 1;
        iVar2 = iVar3 + -1;
        param_1[1] = uVar4;
        param_1[2] = iVar2;
        if (iVar2 < 8) {
          param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar2 & 0x1f) | uVar4;
          *param_1 = (byte *)*param_1 + 1;
          param_1[2] = iVar3 + 7;
        }
        if (uVar6 == 1) {
          *(float *)(param_3 + iVar5 * 4) = (float)param_2;
        }
        else {
          *(float *)(param_3 + iVar5 * 4) = (float)-param_2;
        }
        goto LAB_0065c2a0;
      }
      uVar6 = param_1[1] & DAT_006ea7a8;
      iVar3 = param_1[2];
      iVar2 = iVar3 + -6;
      uVar4 = (uint)param_1[1] >> 6;
      param_1[1] = uVar4;
      param_1[2] = iVar2;
      if (iVar2 < 8) {
        param_1[1] = (uint)*(byte *)*param_1 << ((byte)iVar2 & 0x1f) | uVar4;
        *param_1 = (byte *)*param_1 + 1;
        param_1[2] = iVar3 + 2;
      }
      iVar3 = uVar6 + 7;
      if (0x6c < iVar3 * param_4 + iVar5) {
        iVar3 = (0x6c - iVar5) / param_4;
      }
      if (0 < iVar3) {
        do {
          *(undefined4 *)(param_3 + iVar5 * 4) = 0;
          iVar5 = iVar5 + param_4;
          iVar3 = iVar3 + -1;
          param_2 = iVar5;
        } while (iVar3 != 0);
      }
    }
    else {
      *(undefined4 *)(param_3 + iVar5 * 4) = *(undefined4 *)(&DAT_006eaac0 + iVar2);
LAB_0065c2a0:
      iVar5 = iVar5 + param_4;
      param_2 = iVar5;
    }
    if (0x6b < iVar5) {
      return;
    }
  } while( true );
}

