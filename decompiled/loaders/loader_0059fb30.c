/* Decompiled from Speed.exe @ 0059fb30 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059fb30(short *param_1,undefined1 *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  
  if ((param_2 != (undefined1 *)0x0) && (param_1 != (short *)0x0)) {
    sVar1 = *param_1;
    uVar2 = 0;
    if (sVar1 != 0) {
      do {
        if (param_3 - 1U <= uVar2) break;
        if ((-0x81 < sVar1) && (sVar1 < 0x80)) {
          *param_2 = (char)*param_1;
          param_2 = param_2 + 1;
          uVar2 = uVar2 + 1;
        }
        param_1 = param_1 + 1;
        sVar1 = *param_1;
      } while (sVar1 != 0);
    }
    *param_2 = 0;
  }
  return;
}

