/* spd-match: far pct=28.50 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0042ddc0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void  FUN_0042ddc0(int param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    _DAT_0073654c = 0;
    *(undefined1 *)(param_1 + 0x270) = 0;
    switch(*(int *)(param_1 + 0x60)) {
    case 1:
    case 2:
      if (DAT_007361fc == 0) {
        *(undefined4 *)(param_1 + 0x70) = DAT_0073ad34;
      }
    case 6:
    case 7:
      iVar1 = *DAT_007361f0;
      if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 10)) {
        FUN_0042c450();
      }
      if (((param_2 != '\0') && (*(char *)(*(int *)(param_1 + 4) + 0x874) == '\0')) &&
         ((iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x868), iVar1 != 0 &&
          (FUN_0058dc10(), *(char *)(iVar1 + 8) != '\0')))) {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
    default:
      iVar1 = DAT_007361f8;
      *(undefined4 *)(DAT_007361f8 + 0x2e0) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x2e4) = 0;
      *(undefined4 *)(iVar1 + 0x2d4) = 0;
      *(undefined4 *)(iVar1 + 0x2e8) = 0;
      *(undefined4 *)(iVar1 + 0x2ec) = 0;
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      FUN_0042d470();
    }
  }
  return;
}

