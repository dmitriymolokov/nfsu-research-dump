/* Decompiled from Speed.exe @ 004ea880 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea880(void)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  float local_4;
  
  FUN_00495f00(0xdda5e29e);
  FUN_004ea560(unaff_ESI);
  FUN_004ea650(DAT_007681bc);
  FUN_004ea650(DAT_007681c0);
  FUN_004ea650(DAT_007681c4);
  uVar1 = FUN_00674898();
  FUN_004ea650(uVar1);
  local_4 = DAT_007681b8;
  if (DAT_007588f0 == 0) {
    local_4 = DAT_007681b8 * _DAT_006cc8bc * _DAT_006cc928;
  }
  else if (DAT_007588f0 == 1) {
    local_4 = DAT_007681b8 * _DAT_006cc8bc;
  }
  FUN_004ea5d0(4,0x78eff98f,local_4);
  FUN_004ea650(DAT_00758ad4);
  return;
}

