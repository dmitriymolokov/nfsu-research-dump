/* Decompiled from Speed.exe @ 00662e80 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00662e80(uint param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = param_2;
  uVar2 = param_1;
  iVar3 = param_3;
  if (*(int *)(param_1 + 0xc) == 3) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    param_1 = (uint)param_2[8];
    Ordinal_21(*puVar1,0,4,&param_1,4);
    uVar4 = *pbVar5 & 0xf;
    iVar3 = param_3 + uVar4 * -4;
    pbVar5 = pbVar5 + uVar4 * 4;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  if (param_5 != 0) {
    FUN_00662ad0(Ordinal_20(*(undefined4 *)(uVar2 + 0x18),pbVar5,iVar3,0,param_5,param_6));
    return;
  }
  FUN_00662ad0(Ordinal_19(*(undefined4 *)(uVar2 + 0x18),pbVar5,iVar3,0));
  return;
}

