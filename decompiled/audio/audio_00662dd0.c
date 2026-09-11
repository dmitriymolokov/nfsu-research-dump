/* Decompiled from Speed.exe @ 00662dd0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_00662dd0(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x18) == -1) {
    return (undefined4 *)0x0;
  }
  if ((param_2 != 0) && (*param_3 < 0x10)) {
    return (undefined4 *)0x0;
  }
  if ((*(int *)(param_1 + 8) == 2) &&
     (iVar1 = Ordinal_1(*(int *)(param_1 + 0x18),param_2,param_3), iVar1 != -1)) {
    Ordinal_10(iVar1,0x8004667e,&stack0xfffffff0);
    puVar3 = (undefined4 *)FUN_00549460(0x50);
    puVar4 = puVar3;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar3[6] = iVar1;
    puVar3[2] = *(undefined4 *)(param_1 + 8);
    puVar3[3] = *(undefined4 *)(param_1 + 0xc);
    puVar3[4] = *(undefined4 *)(param_1 + 0x10);
    FUN_00668d60(0);
    *puVar3 = DAT_007177bc;
    DAT_007177bc = puVar3;
    FUN_00668df0(0);
  }
  return puVar3;
}

