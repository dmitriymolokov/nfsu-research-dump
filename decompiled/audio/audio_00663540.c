/* Decompiled from Speed.exe @ 00663540 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_00663540(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00549460(0xac);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return puVar1;
}

