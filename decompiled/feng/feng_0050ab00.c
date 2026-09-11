/* Decompiled from Speed.exe @ 0050ab00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0050ab00(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((DAT_00745e40 == 2) && (uVar1 = 0, DAT_0073766c != 0)) {
    piVar3 = (int *)(DAT_00737668 + 0x24);
    do {
      if ((piVar3[-1] == 2) && (*piVar3 == param_2)) {
        if (*(char *)(uVar1 * 0x34 + 0x30 + DAT_00737668) != '\0') {
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 0xd;
    } while (uVar1 < DAT_0073766c);
  }
  if (((DAT_007677ac == 0) && (DAT_00735ec1 == '\0')) && (*(int *)(param_3 + 0x90) == 0)) {
    uVar2 = FUN_005a3670();
    return uVar2;
  }
  return 1;
}

