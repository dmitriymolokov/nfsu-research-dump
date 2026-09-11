/* Decompiled from Speed.exe @ 004075e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004075e0(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_00719b4c = 0x5a589134;
  DAT_00719b50 = 0x30914687;
  DAT_00719b38 = 0x148;
  DAT_00719c80 = 0x148;
  DAT_00719b58 = 0x6d21c8c2;
  DAT_00719b3c = 0x28;
  DAT_00719c84 = 0x28;
  _DAT_00719b44 = 0x28;
  DAT_00719ca0 = 0x6d22c8c2;
  DAT_00719c94 = 0x5a589134;
  DAT_00719b5c = 0x1000000;
  DAT_00719ca4 = 0x1000000;
  DAT_00719b54 = 0x9d68236f;
  DAT_00719c98 = 0x30914687;
  DAT_00719b60 = 0x10;
  DAT_00719ca8 = 0x10;
  DAT_00719c9c = 0x9d68236f;
  _DAT_00719b40 = 0xa0;
  _DAT_00719c88 = 0x90;
  _DAT_00719c8c = 0x24;
  _DAT_00719b48 = &DAT_00702c98;
  _DAT_00719c90 = &DAT_007032d8;
  DAT_00719b64 = 0;
  DAT_00719b68 = 0xff;
  pcVar2 = "NFS Underground Game";
  pcVar3 = (char *)&DAT_00719b7c;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  _DAT_00719cac = 0;
  _DAT_00719cb0 = 0xff;
  pcVar2 = "NFS Underground Menu";
  pcVar3 = (char *)&DAT_00719cc4;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  return;
}

