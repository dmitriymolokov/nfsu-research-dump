/* Decompiled from Speed.exe @ 00505290 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00505290(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004f65d0();
  if ((iVar1 == 0) || (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xf9095d3c);
    }
  }
  FUN_004f6910(iVar1);
  FUN_00504390();
  iVar1 = DAT_0073578c;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 0;
      if (*(int *)(iVar2 + 0x18) != 0) {
        uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
      }
    }
  }
  DAT_00745e40 = 0;
  return uVar3;
}

