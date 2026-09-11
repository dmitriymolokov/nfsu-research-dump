/* Decompiled from Speed.exe @ 004064d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004064d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x134) != 0x13) {
    puVar1 = (undefined4 *)FUN_00405fa0();
    FUN_0041cda0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    *(undefined4 *)(unaff_EDI + 0x98) = 0x14;
    *(undefined4 *)(unaff_EDI + 0x9c) = 0x17;
    *(undefined4 *)(unaff_EDI + 0xa0) = 0x18;
    *(undefined4 *)(unaff_EDI + 0xa4) = 0x19;
    *(undefined4 *)(unaff_EDI + 0xa8) = 0x1a;
    puVar1 = (undefined4 *)(unaff_EDI + 0xdc);
    iVar2 = 4;
    do {
      puVar1[-1] = 0x11;
      *puVar1 = 0x10;
      puVar1[1] = 0x12;
      puVar1[2] = 0x13;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

