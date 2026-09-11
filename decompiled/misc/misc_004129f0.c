/* Decompiled from Speed.exe @ 004129f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_004129f0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    puVar3 = (undefined4 *)FUN_00411be0();
    if (puVar3 != (undefined4 *)0x0) {
      if (param_3 == 0) {
        param_3 = 0;
        iVar2 = *param_2;
        piVar4 = param_2;
        while (iVar2 != param_4) {
          piVar1 = piVar4 + 1;
          piVar4 = (int *)((int)piVar4 + *piVar1);
          param_3 = param_3 + *piVar1;
          iVar2 = *piVar4;
        }
        param_3 = param_3 + piVar4[1];
      }
      puVar3[0x48] = param_4;
      puVar3[4] = 1;
      puVar3[0x46] = param_2;
      puVar3[0x47] = param_3;
      FUN_00411c50();
      FUN_0063f190(param_1 + 1);
      iVar2 = param_1[0x12];
      if (iVar2 == 0) {
        param_1[0x12] = 1;
      }
      FUN_0063f1a0(param_1 + 1);
      if (iVar2 == 0) {
        FUN_00412020(0);
      }
      return *puVar3;
    }
    return 0;
  }
  return 0;
}

