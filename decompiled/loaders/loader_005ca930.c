/* Decompiled from Speed.exe @ 005ca930 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005ca930(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 == (undefined4 *)0x0) {
LAB_005ca93e:
    uVar3 = 0x8876086c;
  }
  else {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x34) * 0xac + *(int *)(param_1 + 0x1c);
    }
    else {
      iVar2 = FUN_005ca526(param_2,1);
      param_1 = extraout_ECX;
      if (iVar2 == 0) goto LAB_005ca93e;
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    piVar1 = (int *)(*(int *)(iVar2 + 0x20) + *(int *)(param_1 + 0x2c));
    if (*piVar1 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = piVar1 + 1;
    }
    *param_3 = piVar1;
    param_3[1] = *(undefined4 *)(iVar2 + 0x2c);
    param_3[2] = *(undefined4 *)(iVar2 + 0x24);
  }
  return uVar3;
}

