/* Decompiled from Speed.exe @ 00500570 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00500570(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b48;
  local_c = ExceptionList;
  if (param_2 == (undefined4 *)0x0) {
    if (*(void **)(param_1 + 0x7c) != (void *)0x0) {
      ExceptionList = &local_c;
      _free(*(void **)(param_1 + 0x7c));
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    ExceptionList = &local_c;
    puVar2 = _malloc((int)param_2 * 0xc);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      FUN_004010a0(puVar2,0xc,param_2,&LAB_004ff670);
      param_2 = puVar2;
    }
    uVar3 = uVar1;
    if (*(uint *)(param_1 + 0x78) < uVar1) {
      uVar3 = *(uint *)(param_1 + 0x78);
    }
    if (uVar3 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x7c);
      puVar5 = param_2;
      for (uVar3 = uVar3 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    if (*(void **)(param_1 + 0x7c) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x7c));
    }
    *(undefined4 **)(param_1 + 0x7c) = param_2;
    *(uint *)(param_1 + 0x78) = uVar1;
  }
  ExceptionList = local_c;
  return;
}

