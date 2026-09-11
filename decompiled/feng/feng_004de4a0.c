/* Decompiled from Speed.exe @ 004de4a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004de4a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_00735e00;
  if (DAT_00735e00 != (undefined4 *)0x0) {
    if (*(int *)(DAT_00735e00[3] + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_00735e00[3] + 4) + -4;
    }
    DAT_00735e00[3] = iVar2;
    if (puVar1[2] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = puVar1[2] + -4;
    }
    if (iVar2 == puVar1[3]) {
      (**(code **)*puVar1)(1);
      DAT_00735e00 = (undefined4 *)0x0;
    }
    iVar2 = DAT_0073578c;
    if (((DAT_0073578c != 0) && (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x18) != 0)) {
      FUN_004f0800(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
    }
  }
  return;
}

