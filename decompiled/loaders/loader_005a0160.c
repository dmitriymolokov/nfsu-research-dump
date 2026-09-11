/* Decompiled from Speed.exe @ 005a0160 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a0160(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *unaff_EBX;
  uint *puVar4;
  uint *puVar5;
  
  puVar2 = param_2;
  puVar5 = (uint *)0x0;
  puVar4 = (uint *)0x0;
  if (0 < DAT_007343fc) {
    param_2 = (undefined4 *)DAT_007343fc;
    puVar5 = (uint *)0x0;
    puVar3 = DAT_007343f8;
    do {
      uVar1 = *puVar3;
      if ((int)(uVar1 - param_1) < 0) {
        if ((puVar5 == (uint *)0x0) || (*puVar5 < uVar1)) {
          puVar5 = puVar3;
        }
      }
      else if (uVar1 == param_1 || (int)(uVar1 - param_1) < 0) {
        *puVar2 = puVar3;
        *unaff_EBX = puVar3;
      }
      else if ((puVar4 == (uint *)0x0) || (uVar1 < *puVar4)) {
        puVar4 = puVar3;
      }
      puVar3 = puVar3 + 8;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
  }
  *puVar2 = puVar4;
  *unaff_EBX = puVar5;
  return;
}

