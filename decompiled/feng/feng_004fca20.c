/* Decompiled from Speed.exe @ 004fca20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fca20(void)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 8);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00514300();
    do {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      puVar1 = *(undefined4 **)(unaff_EDI + 8);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(unaff_EDI + 8) = puVar1[1];
        if (puVar1 == *(undefined4 **)(unaff_EDI + 0xc)) {
          *(undefined4 *)(unaff_EDI + 0xc) = puVar1[2];
        }
        if (puVar1[2] != 0) {
          *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
        }
        if (puVar1[1] != 0) {
          *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
        }
        puVar1[1] = 0xabadcafe;
        puVar1[2] = 0xabadcafe;
      }
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}

