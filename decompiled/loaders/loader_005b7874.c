/* Decompiled from Speed.exe @ 005b7874 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b7874(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_4 == 0) || (param_3 != 0)) {
    iVar2 = FUN_005b7369(param_2,1);
    if ((iVar2 == 0) || ((param_4 != 0xffffffff && (param_4 < *(uint *)(iVar2 + 0x14))))) {
      uVar1 = 0x8876086c;
    }
    else {
      uVar1 = FUN_005b7091(*(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                           *(int *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),param_3,
                           *(int *)(iVar2 + 0x10) != -1);
    }
  }
  else {
    uVar1 = 0x8876086c;
  }
  return uVar1;
}

