/* Decompiled from Speed.exe @ 005c18f9 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005c18f9(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  pvVar1 = _malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d8670();
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2[4] = 1;
  iVar4 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    if (*(int *)(iVar4 + 0x20) == 0) goto LAB_005c198d;
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14);
    pcVar6 = "\'%s\': function must return a value";
    uVar5 = 0xc08;
  }
  else {
    if (*(int *)(iVar4 + 0x20) != 0) {
      uVar3 = FUN_005c1473(0x15,*(undefined4 *)(iVar4 + 0x2c),param_2,1);
      puVar2[5] = uVar3;
      goto LAB_005c198d;
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14);
    pcVar6 = "\'%s\': void functions cannot return a value";
    uVar5 = 0xc07;
  }
  FUN_005ba1d9(param_1,param_1 + 0x20,uVar5,pcVar6,uVar3);
LAB_005c198d:
  pvVar1 = _malloc(0x14);
  if (pvVar1 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005d78db(puVar2,0,"Stmts");
  }
  if (iVar4 == 0) {
    (**(code **)*puVar2)(1);
    return 0;
  }
  return iVar4;
}

