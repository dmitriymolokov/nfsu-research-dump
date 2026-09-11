/* Decompiled from Speed.exe @ 005c68b4 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c68b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = param_1;
  iVar1 = FUN_005c6455(param_2,&param_2,&local_8);
  if (iVar1 == 0) {
LAB_005c68fe:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (local_8 == 0) goto LAB_005c68fe;
      if (((*(int *)(local_8 + 0xc) == 0) && (1 < *(int *)(local_8 + 0x10))) &&
         (*(int *)(local_8 + 0x10) < 5)) {
        return *(undefined4 *)(local_8 + 0x18);
      }
    }
    else {
      FUN_005b1f01(param_1 + 4,param_1 + 0x60,0x5ed,
                   "functional defines in preprocessor expressions not yet implemented");
    }
    uVar2 = 1;
  }
  return uVar2;
}

