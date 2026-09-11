/* Decompiled from Speed.exe @ 00412890 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00412890(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iStack00000008;
  
  if ((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) {
    iVar2 = piVar1[0x15];
    piVar1[0x15] = piVar1[0x16];
    uVar3 = (uint)(piVar1[0x19] < 0x6000);
    if ((piVar1[0x19] < iVar2 != uVar3) &&
       (((param_1 = (int *)*param_1, *param_1 == 0x4d525453 && (param_1[0x18] = uVar3, uVar3 != 0))
        && (param_1[0x12] == 1)))) {
      iStack00000008 = param_1[0x14];
      FUN_0063a020();
      return;
    }
  }
  return;
}

