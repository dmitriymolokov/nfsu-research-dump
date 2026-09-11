/* Decompiled from Speed.exe @ 00664d40 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00664d40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((-1 < param_2) && (param_2 < 10)) &&
     (iVar1 = *(int *)(param_1 + 0x4a0 + param_2 * 0x14), iVar1 != 0)) {
    uVar2 = FUN_0066dd40(iVar1,param_3);
    return uVar2;
  }
  return 0;
}

