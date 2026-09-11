/* Decompiled from Speed.exe @ 0058b9a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058b9a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x34);
  while (puVar3 != (undefined4 *)(param_1 + 0x34)) {
    puVar1 = (undefined4 *)*puVar3;
    if (*(char *)((int)puVar3 + 10) == '\x01') {
      *(undefined1 *)((int)puVar3 + 10) = 2;
      iVar2 = puVar3[0x12];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x13];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x14];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x15];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
    }
    if (*(char *)((int)puVar3 + 0xb) == '\x01') {
      *(undefined1 *)((int)puVar3 + 0xb) = 2;
      iVar2 = puVar3[0x16];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x17];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x18];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
      iVar2 = puVar3[0x19];
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe) == '\x01')) {
        *(undefined1 *)(iVar2 + 0xe) = 2;
      }
    }
    FUN_0058ba80(param_1);
    puVar3 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0058cbb0();
  return;
}

