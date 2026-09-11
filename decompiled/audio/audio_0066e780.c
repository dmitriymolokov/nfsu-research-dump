/* Decompiled from Speed.exe @ 0066e780 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066e780(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = *(undefined1 **)(param_1 + 0x3c);
  if ((puVar2 == (undefined1 *)0x0) ||
     (iVar1 = *(int *)(param_1 + 0x34), *(int *)(param_1 + 0x38) != iVar1)) {
    if ((param_2 != (undefined4 *)0x0) ||
       ((param_3 != (undefined4 *)0x0 || (param_4 != (undefined4 *)0x0)))) {
      FUN_0066e080(param_1);
      puVar2 = *(undefined1 **)(param_1 + 0x3c);
      if ((puVar2 != (undefined1 *)0x0) &&
         (iVar1 = *(int *)(param_1 + 0x34), *(int *)(param_1 + 0x38) == iVar1)) goto LAB_0066e7c7;
    }
    iVar1 = -1;
  }
  else {
LAB_0066e7c7:
    iVar1 = iVar1 + -0xc;
    puVar3 = puVar2 + 0xc;
    if (iVar1 < 1) {
      puVar3 = &DAT_006b9172;
    }
    else {
      puVar3[iVar1] = 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = CONCAT31(CONCAT21(CONCAT11(puVar2[4],puVar2[5]),puVar2[6]),puVar2[7]);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = puVar3;
      return iVar1;
    }
  }
  return iVar1;
}

