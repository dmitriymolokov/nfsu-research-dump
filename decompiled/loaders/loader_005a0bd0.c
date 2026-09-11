/* Decompiled from Speed.exe @ 005a0bd0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a0bd0(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(unaff_ESI + 0x358) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(unaff_ESI + 0x35c) = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(unaff_ESI + 0x344) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(unaff_ESI + 0x34c) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(unaff_ESI + 0x348) = *(undefined4 *)(iVar1 + 0xc);
  FUN_004c94b0();
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_ESI + 0x368) = 0;
    *(undefined4 *)(unaff_ESI + 0x36c) = 0;
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x368) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(unaff_ESI + 0x36c) = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(unaff_ESI + 0x378) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(unaff_ESI + 0x37c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(unaff_ESI + 0x380) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(unaff_ESI + 900) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(unaff_ESI + 0x388) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_ESI + 0x38c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x390) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(unaff_ESI + 0x394) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(unaff_ESI + 0x398) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(unaff_ESI + 0x39c) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(unaff_ESI + 0x3a0) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(unaff_ESI + 0x3a4) = *(undefined4 *)(iVar1 + 0x34);
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(unaff_ESI + 0x450) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc);
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x450) = 0;
  return;
}

