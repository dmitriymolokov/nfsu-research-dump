/* Decompiled from Speed.exe @ 006843b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint fn_006843b0(int param_1,char param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (*(char *)(param_1 + 0xb8) == '\0')) {
    if ((*(char *)(param_1 + 0x1d) == '\0') && (*(char *)(param_1 + 0x9d) == '\0')) {
      if ((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x36) == '\0')) {
        if (param_2 == '\0') {
          iVar1 = 0x6edfa0;
        }
        else {
          iVar1 = 0x6ee060;
        }
      }
      else {
        iVar1 = 0x6ee000;
      }
    }
    else {
      iVar1 = 0x6ee0c0;
    }
  }
  else {
    iVar1 = 0x6ee120;
  }
  uVar2 = (uint)*(byte *)(iVar1 + param_3);
  if (0x7f < uVar2) {
    if (0x8f < uVar2) {
      uVar2 = uVar2 & 0x7f;
    }
    uVar2 = uVar2 << 8;
  }
  return uVar2;
}

