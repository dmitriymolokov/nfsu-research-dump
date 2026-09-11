/* Decompiled from Speed.exe @ 0043b090 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0043b090(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_005488d0(8);
  DAT_00777cc8 = 0;
  iVar1 = FUN_004ab510();
  FUN_005488d0(0x10);
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_005488d0(8);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_005488d0(8);
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  FUN_005488d0(0x20);
  FUN_005488d0(0x20);
  if (DAT_0073465c == 0) {
    FUN_0043b900();
  }
  else {
    DAT_0078a30c = FUN_004b39e0();
    DAT_0078a2f0 = *(undefined4 *)(iVar1 + 8);
    DAT_0078a2fc = *(undefined4 *)(iVar1 + 0xc);
    DAT_0078a400 = (uint)*(byte *)(iVar1 + 0x1f);
    DAT_0078a3fc = *(undefined4 *)(iVar1 + 0x14);
    DAT_0078a31c = *(undefined4 *)(iVar1 + 0x10);
  }
  FUN_0043b930(param_1);
  FUN_0043b560(param_2,0,1,0);
  uVar2 = FUN_00436d90();
  DAT_00779814 = uVar2 & 0xff;
  return;
}

