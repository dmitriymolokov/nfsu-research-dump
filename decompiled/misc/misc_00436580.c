/* Decompiled from Speed.exe @ 00436580 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00436580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00736190;
  iVar1 = DAT_0073618c;
  while( true ) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 2;
    if ((*(int *)(param_1 + 0xc) != 0) || (iVar1 == 0)) {
      return;
    }
    iVar4 = (iVar1 << 7) % iVar2;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    if (param_1 == iVar3 * 0x44 + iVar1) break;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    param_1 = iVar4 * 0x44 + iVar1;
  }
  return;
}

