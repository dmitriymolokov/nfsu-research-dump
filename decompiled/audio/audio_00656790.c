/* Decompiled from Speed.exe @ 00656790 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00656790(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_1 * 0x60 + DAT_0071666c);
  iVar3 = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)((int)puVar2 + 1) = 0;
  puVar2[0xd] = puVar2[0xe];
  puVar1 = puVar2;
  if (DAT_00716465 != 0) {
    do {
      puVar1[1] = puVar1[7];
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar3 < (int)(uint)DAT_00716465);
  }
  *(undefined1 *)puVar2 = 2;
  return;
}

