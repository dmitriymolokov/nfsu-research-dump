/* Decompiled from Speed.exe @ 00413270 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00413270(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_8 [8];
  
  if (DAT_00736348 != 0) {
    puVar5 = (undefined4 *)0x0;
    (**(code **)(*DAT_0078a494 + 0x4c))(DAT_0078a494,0,local_8,0,0);
    if ((*(uint *)(DAT_00736348 + 0xc) & 0x1000) == 0) {
      iVar1 = DAT_00736348 + 0x10;
    }
    else {
      iVar1 = *(int *)(DAT_00736348 + 0x10) + DAT_00736348;
    }
    FUN_00413210(iVar1);
    if ((*(uint *)(DAT_00736348 + 0xc) & 0x1000) == 0) {
      puVar4 = (undefined4 *)(DAT_00736348 + 0x10);
    }
    else {
      puVar4 = (undefined4 *)(*(int *)(DAT_00736348 + 0x10) + DAT_00736348);
    }
    uVar3 = *(uint *)(unaff_ESI + 0x40);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    (**(code **)(*DAT_0078a494 + 0x50))(DAT_0078a494,0);
  }
  return;
}

