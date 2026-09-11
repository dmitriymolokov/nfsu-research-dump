/* Decompiled from Speed.exe @ 004cb6b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004cb6b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (param_2 == 0x12312300) {
      iVar1 = FUN_004f65d0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x1c) = 0xff;
      }
      if (*(char *)(param_1 + 0xb9) != '\0') {
        DAT_00735dbd = *(char *)(param_1 + 0xb9);
      }
      FUN_004c9650();
    }
  }
  else if (param_2 == -0x367ca946) {
    local_8 = 0x12312300;
    local_4 = 0x12312300;
    *(undefined1 *)(param_1 + 0x48) = 0;
    local_10 = 0xf6aef38f;
    local_c = 0x639;
    FUN_004dcbe0(&local_10,"GenericOKDialog.fng",*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

