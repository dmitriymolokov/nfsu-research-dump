/* Decompiled from Speed.exe @ 004057c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004057c0(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  
  bVar3 = false;
  if (DAT_007361f0 != (int *)0x0) {
    iVar1 = *DAT_007361f0;
    if (((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 3)) {
      if (*DAT_0073619c != 2) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = iVar1 == 4;
    }
  }
  if ((DAT_0077a920 == 3) || (!bVar3)) {
    if (DAT_007041c4 == '\0') {
      DAT_007041c4 = '\x01';
      puVar2 = &DAT_0078daa8;
      do {
        FUN_00407760(1);
        puVar2 = puVar2 + 0x270;
      } while ((int)puVar2 < 0x78e948);
    }
  }
  else if (DAT_007041c4 != '\0') {
    DAT_007041c4 = 0;
    puVar2 = &DAT_0078daa8;
    do {
      FUN_00407760(0);
      puVar2 = puVar2 + 0x270;
    } while ((int)puVar2 < 0x78e948);
    return;
  }
  return;
}

