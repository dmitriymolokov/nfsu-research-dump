/* Decompiled from Speed.exe @ 004f2db0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f2db0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00567160();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[2] = param_2;
    piVar2[5] = param_3;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar1 = piVar2 + 6;
    *piVar1 = (int)piVar1;
    piVar2[7] = (int)piVar1;
    piVar2[8] = 0x3f800000;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0x3f800000;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x10] = 0;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0x3f800000;
    piVar2[0x13] = 0;
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = 0;
    piVar2[0x17] = 0x3f800000;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  *piVar1 = (int)piVar2;
  *(int **)(param_1 + 0x14) = piVar2;
  piVar2[1] = (int)piVar1;
  *piVar2 = param_1 + 0x10;
  return;
}

