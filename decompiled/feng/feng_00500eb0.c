/* Decompiled from Speed.exe @ 00500eb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00500eb0(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[1];
  if (((*piVar1 == -0x1891baba) && (piVar1[2] == 0x64486b50)) && (0x1ffff < (uint)piVar1[4])) {
    pvVar2 = _malloc(0xa0);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ff780();
    }
    *param_1 = iVar3;
    *(undefined4 *)(iVar3 + 0x80) = 0;
    param_1[0x10] = piVar1[6];
    param_1[0x11] = piVar1[7];
    FUN_004fd180();
    FUN_004ff9e0();
    return 1;
  }
  return 0;
}

