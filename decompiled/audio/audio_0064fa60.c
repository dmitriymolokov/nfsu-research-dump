/* Decompiled from Speed.exe @ 0064fa60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064fa60(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  puVar1 = (undefined4 *)FUN_00650020(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[0x52];
    *param_2 = iVar2;
    if ((iVar2 != 0) && (param_2[1] = *(int *)(puVar1[0x50] + 0xc), *(short *)(puVar1 + 0xe) != 0))
    {
      iVar2 = FUN_00655660(puVar1[2]);
      uVar3 = (uint)(iVar2 * 1000) / (uint)*(ushort *)(puVar1 + 0xe);
      param_2[2] = uVar3;
      if ((uVar3 == 0) && (iVar2 = FUN_00655000(param_2[1]), *(int *)(iVar2 + 0x10) != 0)) {
        uVar3 = FUN_00412f70(*puVar1);
        if (4000000 < uVar3) {
          uVar3 = 4000000;
        }
        param_2[2] = (uVar3 * 1000) / *(uint *)(iVar2 + 0x10);
      }
    }
    return 0;
  }
  return 0xfffffff8;
}

