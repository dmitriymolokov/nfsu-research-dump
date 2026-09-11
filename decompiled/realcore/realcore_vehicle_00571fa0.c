/* Decompiled from Speed.exe @ 00571fa0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00571fa0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  puVar1 = unaff_ESI + 0x1a;
  *puVar1 = puVar1;
  unaff_ESI[0x1b] = puVar1;
  puVar2 = unaff_ESI + 0x1c;
  *puVar2 = puVar2;
  unaff_ESI[0x1d] = puVar2;
  unaff_ESI[0x14] = 0xffffffff;
  unaff_ESI[0x15] = 0xffffffff;
  unaff_ESI[0x29] = 0xffffffff;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x26] = 0x41700000;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[7] = 9999999;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x102c] = 0;
  unaff_ESI[0x102d] = 0;
  puVar4 = unaff_ESI + 0x102e;
  for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (DAT_0073c17c != '\0') {
    unaff_ESI[0x19] = DAT_0073c1a4;
    DAT_0073c1a4 = 0;
    if ((undefined4 **)DAT_0073c1a8 != &DAT_0073c1a8) {
      puVar4 = (undefined4 *)unaff_ESI[0x1d];
      *DAT_0073c1ac = puVar2;
      DAT_0073c1a8[1] = puVar4;
      *puVar4 = DAT_0073c1a8;
      unaff_ESI[0x1d] = DAT_0073c1ac;
      DAT_0073c1a8 = &DAT_0073c1a8;
      DAT_0073c1ac = &DAT_0073c1a8;
    }
    unaff_ESI[0x1e] = 1;
    iVar3 = 0;
    do {
      puVar2 = _malloc(0x9558);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[10] = 0;
        puVar2[0xb] = 0;
      }
      puVar4 = (undefined4 *)unaff_ESI[0x1b];
      *puVar4 = puVar2;
      unaff_ESI[0x1b] = puVar2;
      puVar2[1] = puVar4;
      *puVar2 = puVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)unaff_ESI[0x1e]);
  }
  return;
}

