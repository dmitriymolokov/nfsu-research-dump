/* Decompiled from Speed.exe @ 00540cc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540cc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  DAT_0072fa20 = 0;
  DAT_00735538 = 0;
  DAT_0073553c = 0;
  _DAT_00735540 = 0;
  puVar1 = &DAT_00740b68;
  do {
    iVar2 = 10;
    do {
      puVar1[-5] = 0;
      puVar1[-3] = 0;
      puVar1[-4] = 0;
      puVar1[-2] = 0xc97423f0;
      puVar1[-1] = 0xc97423f0;
      *puVar1 = 0xc97423f0;
      puVar1[2] = 0x497423f0;
      puVar1[3] = 0x497423f0;
      puVar1[4] = 0x497423f0;
      puVar1 = puVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while ((int)puVar1 < 0x743c28);
  return;
}

