/* Decompiled from Speed.exe @ 00594970 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594970(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar2 = FUN_00594c60();
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 4), FUN_00594d40(), iVar2 != -1)) {
    iVar2 = FUN_00594c60();
    uVar1 = *(uint *)(iVar2 + 4);
    uVar5 = uVar1 / 0x18;
    pvVar3 = _malloc(uVar5 * 0x18);
    FUN_00594750(pvVar3,uVar1,0,0);
    do {
      if (DAT_0073448c != 0) {
        FUN_0063f0a0(0);
        FUN_00594870();
      }
    } while (*(int *)(iVar2 + 0x1c) != 0);
    FUN_00594d40();
    iVar2 = 0;
    puVar4 = &DAT_007313f8;
    DAT_00734490 = pvVar3;
    DAT_00734494 = uVar5;
    do {
      FUN_00565da0("%s%d.BIN",param_1,iVar2);
      puVar4 = puVar4 + 0x40;
      iVar2 = iVar2 + 1;
    } while ((int)puVar4 < 0x7315f8);
  }
  return;
}

