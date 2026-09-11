/* Decompiled from Speed.exe @ 004f0800 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f0800(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = _malloc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0xabadcafe;
    puVar3[2] = 0xabadcafe;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_006c2c64;
  }
  puVar3[7] = param_2;
  puVar3[6] = *(undefined4 *)(param_2 + 0x1c);
  puVar3[5] = 3;
  FUN_004fd180();
  iVar1 = *(int *)(param_1 + 0x4130);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x412c);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = 0;
    *(undefined4 **)(param_1 + 0x412c) = puVar3;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = iVar1;
    *(undefined4 **)(iVar1 + 4) = puVar3;
  }
  if (*(int *)(param_1 + 0x4130) == iVar1) {
    *(undefined4 **)(param_1 + 0x4130) = puVar3;
  }
  *(int *)(param_1 + 0x4128) = *(int *)(param_1 + 0x4128) + 1;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

