/* Decompiled from Speed.exe @ 00412930 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00412930(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) {
    puVar2 = (undefined4 *)FUN_00411be0();
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    param_1[0x6a] = 0;
    puVar2[4] = 0;
    _strncpy((char *)(puVar2 + 5),param_2,0x103);
    puVar2[0x47] = param_3;
    puVar2[0x48] = param_4;
    param_1[0x67] = 0;
    FUN_00411c50();
    FUN_0063f190(param_1 + 1);
    iVar1 = param_1[0x12];
    if (iVar1 == 0) {
      param_1[0x12] = 1;
    }
    FUN_0063f1a0(param_1 + 1);
    if (iVar1 == 0) {
      if (param_1[0x18] != 0) {
        FUN_00412020(param_1[0x14]);
        return *puVar2;
      }
      FUN_00412020(param_1[0x13]);
    }
    return *puVar2;
  }
  return 0;
}

