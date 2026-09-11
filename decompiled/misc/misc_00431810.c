/* Decompiled from Speed.exe @ 00431810 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00431810(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  puVar1 = _malloc(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[9] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x2e) = 1;
  }
  *(undefined4 **)(unaff_ESI + 0xc) = puVar1;
  puVar1 = _malloc(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[9] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x2e) = 1;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 **)(unaff_ESI + 0x10) = puVar1;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0x3f800000;
    *(undefined4 *)(unaff_ESI + 0x20) = 0x3f800000;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x20) = 0x3f800000;
  return;
}

