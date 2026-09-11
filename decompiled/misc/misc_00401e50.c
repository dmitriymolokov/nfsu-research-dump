/* Decompiled from Speed.exe @ 00401e50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00401e50(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  param_1[0x1f] = 0;
  piVar4 = DAT_0073636c;
  iVar2 = 0x1e;
  puVar3 = param_1;
  do {
    uStack_14 = 0;
    puStack_18 = puVar3;
    (**(code **)(*piVar4 + 0x68))(piVar4,DAT_0071abc0 * 0x4b0,0x208,0,0);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uStack_14 = 0;
  param_1 = param_1 + 0x1e;
  puStack_18 = param_1;
  (**(code **)(*piVar4 + 0x6c))(piVar4,0xe10,0,0x65,1);
  puStack_18 = (undefined4 *)0x0;
  (**(code **)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,0,&puStack_18,0);
  sVar1 = 1;
  iVar2 = 300;
  do {
    *(short *)piVar4 = sVar1 + 2;
    *(short *)((int)piVar4 + 2) = sVar1 + -1;
    *(short *)(piVar4 + 1) = sVar1;
    *(short *)((int)piVar4 + 6) = sVar1;
    *(short *)(piVar4 + 2) = sVar1 + 1;
    *(short *)((int)piVar4 + 10) = sVar1 + 2;
    piVar4 = piVar4 + 3;
    sVar1 = sVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1);
  return;
}

