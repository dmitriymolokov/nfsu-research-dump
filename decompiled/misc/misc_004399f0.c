/* Decompiled from Speed.exe @ 004399f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_004399f0(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x184) == 0) || (param_2 != '\0')) {
    FUN_00439010();
    FUN_00421a70();
    uVar1 = FUN_0057f130();
    uVar1 = FUN_00576440(param_1,uVar1);
    *(undefined4 *)(param_1 + 0x184) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x184);
}

