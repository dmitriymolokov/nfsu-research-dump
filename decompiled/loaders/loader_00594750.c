/* Decompiled from Speed.exe @ 00594750 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594750(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  FUN_0063f190(&DAT_007315f8);
  if (*(int *)(unaff_ESI + 4) < *(int *)(unaff_ESI + 8) + param_2) {
    param_2 = *(int *)(unaff_ESI + 4) - *(int *)(unaff_ESI + 8);
  }
  puVar2 = (undefined4 *)FUN_00567160();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = unaff_ESI;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    puVar2[5] = 0;
  }
  *DAT_007377c4 = puVar2;
  puVar1 = puVar2;
  puVar2[1] = DAT_007377c4;
  DAT_007377c4 = puVar1;
  *puVar2 = &DAT_007377c0;
  DAT_0073448c = DAT_0073448c + 1;
  iVar3 = *(int *)(unaff_ESI + 8);
  *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + 1;
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    iVar3 = iVar3 + *(int *)(*(int *)(unaff_ESI + 0x18) + 8) * 0x800;
  }
  uVar4 = FUN_0063a700(*(undefined4 *)(unaff_ESI + 0xc),iVar3,param_1,param_2,100,puVar2);
  puVar2[5] = uVar4;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + param_2;
  FUN_0063f1a0(&DAT_007315f8);
  FUN_00639f20(uVar4,&LAB_00594820);
  return;
}

