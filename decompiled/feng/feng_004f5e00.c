/* Decompiled from Speed.exe @ 004f5e00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5e00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_40 [64];
  
  (**(code **)(*param_1 + 0x3c))(local_40);
  (**(code **)(*param_1 + 0x20))(param_2);
  iVar1 = param_1[2];
  puVar3 = (undefined4 *)(iVar1 + 0x110);
  *puVar3 = 0;
  for (iVar2 = *(int *)(param_2 + 0x40); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 0x18) != 5) {
      FUN_004f5d80(param_1,0);
    }
  }
  FUN_004f16d0(puVar3);
  (**(code **)(*param_1 + 0x30))(iVar1 + 0x114,*puVar3);
  (**(code **)(*param_1 + 0x24))(param_2);
  return;
}

