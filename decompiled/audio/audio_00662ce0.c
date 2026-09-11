/* Decompiled from Speed.exe @ 00662ce0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00662ce0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00668d60(0);
  piVar3 = &DAT_007177bc;
  iVar2 = DAT_007177bc;
  do {
    if (iVar2 == 0) {
LAB_00662d13:
      FUN_00668df0(0);
      FUN_00668e50();
      Ordinal_22(param_1[6],2);
      Ordinal_3(param_1[6]);
      param_1[6] = -1;
      FUN_00668d60(0);
      param_1[1] = (int)DAT_007177c0;
      DAT_007177c0 = param_1;
      FUN_00668df0(0);
      return 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 == param_1) {
      *piVar3 = *param_1;
      goto LAB_00662d13;
    }
    iVar2 = *piVar1;
    piVar3 = piVar1;
  } while( true );
}

