/* Decompiled from Speed.exe @ 00474ca0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00474ca0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_0046abd0();
  iVar1 = FUN_0047ac00(param_1[0xb],param_1 + 0x10,param_1 + 0x11);
  fVar2 = (float10)FUN_00476240(param_1[7]);
  if ((iVar1 != 0) || ((float10)DAT_006cc7a4 < fVar2)) {
    FUN_0046abd0();
  }
  if (param_1[0x11] == 2) {
    *(undefined4 *)(param_1[7] + 300) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00474d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

