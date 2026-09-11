/* Decompiled from Speed.exe @ 00547130 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00547130(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  
  FUN_005488d0(0x20);
  uVar1 = FUN_00674898();
  puVar2 = &DAT_0073ddc0;
  do {
    puVar3 = puVar2;
    if (puVar2[1] == unaff_EBX) break;
    puVar2 = puVar2 + 8;
    puVar3 = (undefined4 *)0x0;
  } while ((int)puVar2 < 0x73de20);
  if ((float)puVar3[6] < 0.0) {
    puVar3[6] = 0;
    *(undefined2 *)((int)puVar3 + 0xe) = uVar1;
  }
  return;
}

