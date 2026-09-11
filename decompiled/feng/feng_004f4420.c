/* Decompiled from Speed.exe @ 004f4420 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004f4420(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (*param_1 == 0x30201) {
    pvVar3 = _malloc(0x30);
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_004f44c0();
    }
    iVar2 = (int)DAT_007460fc;
    puVar1 = (undefined4 *)((int)DAT_007460fc + 4);
    DAT_007460fc = piVar4;
    *puVar1 = piVar4;
    piVar4[1] = (int)&DAT_007460fc;
    *piVar4 = iVar2;
    return 1;
  }
  return 0;
}

