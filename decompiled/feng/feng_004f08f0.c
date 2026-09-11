/* Decompiled from Speed.exe @ 004f08f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f08f0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = _malloc(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0xabadcafe;
    puVar3[2] = 0xabadcafe;
    *puVar3 = &PTR_FUN_006c2c64;
    puVar4 = puVar3;
  }
  puVar4[7] = param_2;
  puVar4[6] = param_3;
  puVar4[5] = 2;
  FUN_004fd180();
  iVar1 = *(int *)(param_1 + 0x4130);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x412c);
    puVar4[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
    puVar4[2] = 0;
    *(undefined4 **)(param_1 + 0x412c) = puVar4;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    puVar4[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
    puVar4[2] = iVar1;
    *(undefined4 **)(iVar1 + 4) = puVar4;
  }
  if (*(int *)(param_1 + 0x4130) == iVar1) {
    *(undefined4 **)(param_1 + 0x4130) = puVar4;
  }
  *(int *)(param_1 + 0x4128) = *(int *)(param_1 + 0x4128) + 1;
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & ~param_3;
  }
  return;
}

