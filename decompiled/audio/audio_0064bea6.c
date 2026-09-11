/* Decompiled from Speed.exe @ 0064be90 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064be90(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    return -6;
  }
  if (iVar1 != puVar2[3]) {
    param_1[1] = -3;
    *param_1 = 0;
    return -3;
  }
  if (*param_2 != puVar2[1]) {
    puVar3 = (undefined4 *)*puVar2;
    puVar2[1] = *param_2;
    for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      (*(code *)puVar3[2])(puVar2 + 1,puVar3[3]);
    }
  }
  return 0;
}

