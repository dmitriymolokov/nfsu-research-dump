/* Decompiled from Speed.exe @ 004d5cf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004d5cf0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004f68c0(0x20,&DAT_006c3eb4,param_1);
  iVar2 = *(int *)(param_2 + 0xc);
  uVar1 = FUN_004fd230();
  if (iVar2 != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_004d5d61;
    }
  }
  if (DAT_0073578c != 0) {
    uVar1 = FUN_004ef050(uVar1);
    FUN_00417530(param_3,uVar1);
    return;
  }
  iVar2 = 0;
LAB_004d5d61:
  FUN_00417530(param_3,iVar2);
  return;
}

