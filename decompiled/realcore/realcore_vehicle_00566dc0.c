/* Decompiled from Speed.exe @ 00566dc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int FUN_00566dc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = FUN_00565b60(param_1 * unaff_EDI + 0x30,0,0,param_3);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x24) = unaff_EDI;
    *(int *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0xb;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 0x2c) = unaff_EDI;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    FUN_00566e20();
  }
  return iVar1;
}

