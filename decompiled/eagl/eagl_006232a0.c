/* Decompiled from Speed.exe @ 006232a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_006232a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = param_3;
  uVar3 = 0x2000;
  puVar2 = &param_3;
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),0,param_3,puVar2,0x2000);
  FUN_0063f1b0(uVar3,puVar2,uVar1);
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

