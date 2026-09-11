/* Decompiled from Speed.exe @ 00402a70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void * FUN_00402a70(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar1 = _malloc(0xc0);
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    puVar4 = (undefined4 *)((int)pvVar1 + 8);
    for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    DAT_00736538 = DAT_00736538 + 1;
    FUN_00401dc0();
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)((int)pvVar1 + 0x1c) = *(int *)(param_1 + 0x1c);
    }
    FUN_00401cd0();
    pvVar2 = pvVar1;
  }
  return pvVar2;
}

