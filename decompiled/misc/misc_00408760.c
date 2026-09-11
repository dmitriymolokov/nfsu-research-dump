/* Decompiled from Speed.exe @ 00408760 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00408760(void)

{
  undefined4 uVar1;
  
  if ((DAT_00700e70 != 1) && (*(int *)(&DAT_0071b7b0 + DAT_00700e70 * 4) != 0)) {
    uVar1 = 800;
    switch(DAT_00700e70) {
    case 0:
      FUN_004086b0(0x280);
      FUN_0040a4e0();
      return;
    case 1:
      FUN_004086b0(800);
      FUN_0040a4e0();
      return;
    case 2:
      FUN_004086b0(0x400);
      FUN_0040a4e0();
      return;
    case 3:
      FUN_004086b0(0x500);
      FUN_0040a4e0();
      return;
    case 4:
      uVar1 = 0x500;
    }
    FUN_004086b0(uVar1);
    FUN_0040a4e0();
    return;
  }
  return;
}

