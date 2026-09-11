/* Decompiled from Speed.exe @ 00412810 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00412810(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) {
    FUN_00412cd0(param_1);
    iVar2 = piVar1[0x12];
    while (iVar2 == 1) {
      cVar3 = FUN_0063e600(0);
      if (cVar3 != '\0') {
        FUN_0063f0a0(0);
      }
      FUN_0063e5c0(0);
      iVar2 = piVar1[0x12];
    }
    *piVar1 = 0;
    FUN_0063f170(piVar1 + 1);
    if (piVar1[0x62] != 0) {
      FUN_0063c2c0(piVar1[0x62],100);
    }
  }
  return;
}

