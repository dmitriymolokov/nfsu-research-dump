/* Decompiled from Speed.exe @ 00419d60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00419d60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_c;
  ushort local_8;
  
  iVar1 = param_1;
  FUN_006724fa(&local_c);
  puVar5 = (undefined1 *)(param_1 + 0x24e8);
  puVar7 = (undefined4 *)(param_1 + 0x24f8);
  param_1 = 8;
  do {
    iVar6 = 2;
    puVar2 = puVar7;
    puVar3 = puVar5;
    do {
      puVar2[-0x14] = 0;
      puVar3[-0x50] = 0;
      *puVar2 = 0;
      *puVar3 = 0;
      puVar2[0x14] = 0;
      puVar3[0x50] = 0;
      puVar2[0x28] = 0;
      puVar3[0xa0] = 0;
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  puVar5 = (undefined1 *)(iVar1 + 0x25da);
  puVar4 = (uint *)(iVar1 + 0x2b98);
  iVar6 = 2;
  puVar7 = (undefined4 *)(iVar1 + 0x25dc);
  do {
    puVar5[-2] = 0;
    *puVar5 = 0;
    puVar5[-0x3ba] = 0;
    puVar4[-2] = local_c;
    *puVar4 = (uint)local_8;
    *puVar7 = 0;
    puVar4 = puVar4 + 1;
    puVar7[1] = 0;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
    *(undefined2 *)(puVar7 + 2) = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 10);
  } while (iVar6 != 0);
  FUN_00419c20("EZ Wheel Wrapper v4.26\n");
  return;
}

