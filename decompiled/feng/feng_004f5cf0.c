/* Decompiled from Speed.exe @ 004f5cf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5cf0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EDI;
  
  uVar3 = FUN_00674898();
  FUN_004ef0b0(uVar3);
  iVar4 = 0;
  do {
    bVar1 = (&DAT_007306c4)[iVar4];
    if (((&DAT_006f947c)[iVar4] != (uint)bVar1) && (bVar1 != 0xff)) {
      (&DAT_006f947c)[iVar4] = (uint)bVar1;
      FUN_004f6010(unaff_EDI);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  FUN_005a4b20();
  if ((DAT_007356a8 != 0) &&
     (puVar2 = *(undefined4 **)(DAT_007356a8 + 0xa8), puVar2 != (undefined4 *)0x0)) {
    *(undefined4 *)(DAT_007356a8 + 0xa8) = 0;
    FUN_004d76a0(*puVar2,puVar2[1],puVar2[2],&DAT_006b9172);
  }
  return;
}

