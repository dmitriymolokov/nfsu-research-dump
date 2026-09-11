/* Decompiled from Speed.exe @ 004ee5e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ee5e0(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(unaff_ESI + 8) != 0) {
    puVar1 = (undefined4 *)FUN_004ee670();
  }
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = *(undefined4 **)(unaff_ESI + 8);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 8) = puVar1[1];
      if (puVar1 == *(undefined4 **)(unaff_ESI + 0xc)) {
        *(undefined4 *)(unaff_ESI + 0xc) = puVar1[2];
      }
      if (puVar1[2] != 0) {
        *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
      }
      if (puVar1[1] != 0) {
        *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
      }
      puVar1[1] = 0xabadcafe;
      puVar1[2] = 0xabadcafe;
      *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
    }
  }
  return;
}

