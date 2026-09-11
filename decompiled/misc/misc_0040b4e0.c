/* Decompiled from Speed.exe @ 0040b4e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040b4e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = &DAT_0071aa3c;
  do {
    puVar2[-3] = iVar4;
    if ((0x71aa3b < (int)puVar2) &&
       (((int)puVar2 < 0x71aa59 || (puVar2 == (undefined4 *)&DAT_0071aa90)))) {
      (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
    }
    puVar2 = puVar2 + 7;
    iVar4 = iVar4 + 1;
  } while ((int)puVar2 < 0x71ab70);
  piVar3 = &DAT_0071ab84;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < 0x71ab9c);
  if (DAT_0073646c != (int *)0x0) {
    (**(code **)(*DAT_0073646c + 8))(DAT_0073646c);
  }
  if (DAT_00736460 != (int *)0x0) {
    (**(code **)(*DAT_00736460 + 8))(DAT_00736460);
  }
  if (DAT_00736464 != (int *)0x0) {
    (**(code **)(*DAT_00736464 + 8))(DAT_00736464);
  }
  if (DAT_00736468 != (int *)0x0) {
    (**(code **)(*DAT_00736468 + 8))(DAT_00736468);
  }
  (**(code **)(*DAT_00736374 + 8))(DAT_00736374);
  if (DAT_0071ab64 != (int *)0x0) {
    (**(code **)(*DAT_0071ab64 + 8))(DAT_0071ab64);
  }
  if (DAT_0071ab68 != (int *)0x0) {
    (**(code **)(*DAT_0071ab68 + 8))(DAT_0071ab68);
  }
  if (DAT_0071aa28 != (int *)0x0) {
    (**(code **)(*DAT_0071aa28 + 8))(DAT_0071aa28);
  }
  if (DAT_00736478 != (int *)0x0) {
    (**(code **)(*DAT_00736478 + 8))(DAT_00736478);
  }
  if (DAT_00736474 != (int *)0x0) {
    (**(code **)(*DAT_00736474 + 8))(DAT_00736474);
  }
  if (DAT_00736470 != (int *)0x0) {
    (**(code **)(*DAT_00736470 + 8))(DAT_00736470);
  }
  return;
}

