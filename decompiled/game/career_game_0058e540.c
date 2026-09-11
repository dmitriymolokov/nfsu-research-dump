/* Decompiled from Speed.exe @ 0058e540 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058e540(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  
  unaff_EBX[4] = 0;
  unaff_EBX[0x2f] = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_005912b0(unaff_EBX);
    unaff_EBX[0x18] = 0;
    unaff_EBX[0x19] = 0;
    if (*(int *)(param_3 + 0x95c) != 0) {
      uVar2 = FUN_00494cb0();
      unaff_EBX[0x18] = uVar2;
    }
    if (unaff_EBX[0x18] != 0) {
      iVar3 = *(int *)(unaff_EBX[0x18] + 0x2c);
      fVar1 = *(float *)(iVar3 + 0x20);
      unaff_EBX[0x1a] = *(float *)(iVar3 + 0x1c) + _DAT_006cc910;
      unaff_EBX[0x1b] = fVar1 + _DAT_006cc91c;
      fVar1 = *(float *)(iVar3 + 0x3c) * _DAT_006cc7dc;
      unaff_EBX[0x1c] = *(float *)(iVar3 + 0x38) * _DAT_006cc7dc;
      unaff_EBX[0x1d] = fVar1;
      unaff_EBX[0x27] = param_2;
      unaff_EBX[0x29] = param_1;
      unaff_EBX[0x2a] = 0;
      unaff_EBX[0x30] = 6;
      unaff_EBX[0x31] = 6;
      *unaff_EBX = 0;
      unaff_EBX[1] = 0;
      unaff_EBX[0x28] = param_3;
      unaff_EBX[4] = DAT_0073ad34;
      unaff_EBX[2] = 0;
      unaff_EBX[3] = 0;
      FUN_00565da0("TRACK%d_MAP",(int)*(short *)(unaff_EBX[0x29] + 0x6c));
      uVar2 = FUN_00567c70(0,0);
      iVar3 = FUN_005461c0(uVar2);
      unaff_EBX[0x1e] = iVar3;
      if (iVar3 == 0) {
        unaff_EBX[0x2f] = 0;
      }
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x1f] = uVar2;
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x20] = uVar2;
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x21] = uVar2;
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x22] = uVar2;
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x25] = uVar2;
      uVar2 = FUN_00567c70(1,0);
      uVar2 = FUN_005461c0(uVar2);
      unaff_EBX[0x26] = uVar2;
      if (((unaff_EBX[0x1f] == 0) || (unaff_EBX[0x20] == 0)) ||
         ((unaff_EBX[0x21] == 0 || (unaff_EBX[0x22] == 0)))) {
        unaff_EBX[0x2f] = 0;
      }
      if ((DAT_0078a318 == 0) && (unaff_EBX[0x25] == 0)) {
        unaff_EBX[0x2f] = 0;
      }
      uVar2 = FUN_00565020();
      FUN_0040baf0(uVar2,uVar2);
      if (unaff_EBX[0x2f] == 0) {
        return;
      }
      FUN_00590ad0();
      FUN_00590ad0();
      unaff_EBX[0x2d] = 0;
      unaff_EBX[0x2e] = 0;
      return;
    }
  }
  unaff_EBX[0x2f] = 0;
  return;
}

