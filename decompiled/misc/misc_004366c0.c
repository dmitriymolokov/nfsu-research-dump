/* Decompiled from Speed.exe @ 004366c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_004366c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00736190;
  iVar1 = DAT_0073618c;
  while( true ) {
    if (*(int *)(param_1 + 0x18) < (int)*(char *)(*(int *)(param_1 + 8) + 0x1c)) {
      *(int *)(param_1 + 0x18) =
           (int)*(char *)(*(int *)(param_1 + 8) + 0x1d) + *(int *)(param_1 + 0x18);
    }
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

