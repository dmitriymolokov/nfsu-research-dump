/* Decompiled from Speed.exe @ 0041f4d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041f4d0(void)

{
  int iVar1;
  int unaff_ESI;
  
  DAT_007363ac = *(undefined4 *)(unaff_ESI + 0x1ec);
  DAT_0073639c = (undefined1 *)(unaff_ESI + 0x1a4);
  *(undefined1 *)(unaff_ESI + 0x19c) = 1;
  *DAT_0073639c = 0;
  *DAT_0073639c = 0;
  DAT_007363a8 = 1;
  DAT_007363b0 = 1;
  DAT_007363a0 = 0;
  DAT_007363a4 = 0;
  iVar1 = FUN_004f65d0();
  *(undefined4 *)(unaff_ESI + 0x198) = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  *(undefined1 *)(unaff_ESI + 0x1fc) = 1;
  return;
}

