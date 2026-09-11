/* Decompiled from Speed.exe @ 004f4f10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


float10 FUN_004f4f10(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_4;
  
  if (param_2 == (ushort *)0x0) {
    return (float10)DAT_006cc7a4;
  }
  uVar1 = *param_2;
  local_4 = 0.0;
  bVar3 = true;
  if (uVar1 != 0) {
    do {
      param_2 = param_2 + 1;
      if ((uVar1 == 10) || (uVar1 == 0x5e)) {
        bVar3 = false;
        local_4 = (float)param_3 + local_4 + *(float *)(param_1 + 0x24);
      }
      else if (uVar1 != 0xd) {
        iVar2 = *(int *)(param_1 + 0xc);
        uVar4 = uVar1 & 0xff;
        iVar8 = *(int *)(iVar2 + 0x14) + iVar2;
        iVar5 = (-(uint)((*(uint *)(iVar2 + 0xc) & 0x40000) != 0) & 4) + 0xc;
        if (((int)(uint)*(ushort *)(iVar2 + 10) <= (int)(uVar4 - 0x20)) ||
           (iVar6 = (uVar4 - 0x20) * iVar5, iVar7 = iVar6 + iVar8,
           *(ushort *)(iVar6 + iVar8) != uVar4)) {
          iVar7 = FUN_00638780(uVar4,iVar8,(uint)*(ushort *)(iVar2 + 10),iVar5);
        }
        if (iVar7 != 0) {
          bVar3 = true;
        }
      }
      uVar1 = *param_2;
    } while (uVar1 != 0);
    if (!bVar3) goto LAB_004f4ff7;
  }
  local_4 = local_4 + *(float *)(param_1 + 0x24);
LAB_004f4ff7:
  return (float10)local_4;
}

