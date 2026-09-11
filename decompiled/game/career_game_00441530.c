/* Decompiled from Speed.exe @ 00441530 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00441530(int *param_1,float param_2,float param_3,int param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_c;
  float local_8;
  
  iVar4 = 10;
  local_8 = -16384.0;
  local_c = -16384.0;
  iVar6 = *param_1;
  while( true ) {
    fVar2 = (float)(1 << ((byte)iVar4 & 0x1f)) * _DAT_006cc8f4 * _DAT_006cc7dc;
    fVar3 = local_8 + fVar2;
    uVar5 = (uint)(fVar3 <= param_2);
    fVar2 = fVar2 + local_c;
    if (fVar2 <= param_3) {
      uVar5 = uVar5 + 2;
    }
    if ((uVar5 & 1) != 0) {
      local_8 = fVar3;
    }
    if ((uVar5 & 2) != 0) {
      local_c = fVar2;
    }
    uVar5 = (uint)*(ushort *)(iVar6 + uVar5 * 2);
    if (uVar5 == 0) {
      if (param_4 == 0) {
        return 0;
      }
      uVar5 = 0xffffffff;
      iVar7 = 0;
      fVar2 = ABS(local_8 - param_2) + ABS(local_c - param_3);
      fVar3 = DAT_006cc7a4;
      do {
        uVar1 = *(ushort *)(iVar6 + iVar7 * 2);
        if ((uVar1 != 0) && ((fVar2 < fVar3 || ((int)uVar5 < 0)))) {
          uVar5 = (uint)uVar1;
          fVar3 = fVar2;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    if (iVar4 == 1) break;
    iVar6 = *param_1 + uVar5 * 8;
    iVar4 = iVar4 + -1;
  }
  return uVar5 * 0x10 + param_1[2];
}

