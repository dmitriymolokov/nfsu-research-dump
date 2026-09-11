/* Decompiled from Speed.exe @ 00629680 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00629680(int param_1,undefined4 param_2,float param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  float fVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 < DAT_006cc7a4) {
    fVar4 = param_3 + _DAT_006a7eb0;
  }
  else {
    fVar4 = param_3 - _DAT_006a7eb0;
  }
  iVar8 = (int)ROUND(fVar4);
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 8);
  if (iVar8 < (int)uVar5) {
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = uVar5 - 1;
  }
  FUN_00634180(0,**(undefined2 **)(*(int *)(param_1 + 0xc) + 4),*(undefined4 *)(param_1 + 0x10),
               iVar7,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  *(int *)(param_1 + 0x10) = iVar7;
  iVar7 = *(int *)(param_1 + 0xc);
  uVar3 = **(ushort **)(iVar7 + 4);
  puVar6 = (ushort *)(iVar7 + 10);
  if ((param_3 != (float)iVar8) && (iVar8 + 1 < (int)(uint)*(ushort *)(iVar7 + 8))) {
    FUN_006345a0(0,uVar3,iVar8,iVar8 + 1,*(undefined4 *)(param_1 + 0x14),param_4,4,puVar6,
                 param_3 - (float)iVar8);
    return;
  }
  iVar8 = 0;
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar8 * 4);
      puVar2 = (undefined4 *)(param_4 + (uint)*puVar6 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      iVar8 = iVar8 + 4;
      puVar6 = puVar6 + 1;
      puVar2[3] = puVar1[3];
    } while (iVar8 < (int)(uint)uVar3);
  }
  return;
}

