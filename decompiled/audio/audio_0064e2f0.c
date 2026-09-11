/* Decompiled from Speed.exe @ 0064e2f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0064e2f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_00713ca4;
  puVar2 = DAT_00713ca8;
  if (DAT_00713ca4 != DAT_00713cac) {
    while (DAT_00713cac = iVar3, puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      (*(code *)puVar2[2])(puVar2[3]);
      iVar3 = DAT_00713cac;
      puVar2 = puVar1;
    }
  }
  return;
}

