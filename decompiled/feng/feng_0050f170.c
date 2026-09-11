/* Decompiled from Speed.exe @ 0050f170 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050f170(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  FUN_00504390();
  iVar1 = DAT_0073578c;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    uVar3 = 0;
    if ((iVar2 != 0) && (uVar3 = 0, *(int *)(iVar2 + 0x18) != 0)) {
      uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  return uVar3;
}

