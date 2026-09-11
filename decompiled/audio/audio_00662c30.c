/* Decompiled from Speed.exe @ 00662c30 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_00662c30(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_EBP;
  undefined4 *puVar4;
  undefined4 uStack_10;
  
  uStack_10 = param_3;
  iVar1 = Ordinal_23();
  if (iVar1 == -1) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00549460(0x50);
  puVar4 = puVar2;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar2[6] = iVar1;
  Ordinal_10(iVar1,0x8004667e,&uStack_10);
  if (param_2 == 2) {
    Ordinal_21(iVar1,0xffff,0x20,&stack0xffffffe4,4);
  }
  puVar2[2] = param_2;
  puVar2[3] = param_2;
  puVar2[4] = unaff_EBP;
  FUN_00668d60(0);
  *puVar2 = DAT_007177bc;
  DAT_007177bc = puVar2;
  FUN_00668df0(0);
  return puVar2;
}

