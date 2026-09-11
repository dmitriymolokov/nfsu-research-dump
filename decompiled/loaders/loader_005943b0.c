/* Decompiled from Speed.exe @ 005943b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005943b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  while ((piVar6 = DAT_007377c8, 3 < DAT_00734488 &&
         (piVar3 = (int *)FUN_0040a880(), piVar6 != piVar3))) {
    while (piVar6[2] != 0) {
      piVar6 = (int *)*piVar6;
      if (piVar6 == piVar3) goto LAB_005943ed;
    }
    iVar4 = *piVar6;
    piVar3 = (int *)piVar6[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    DAT_00734488 = DAT_00734488 + -1;
    FUN_0063c2c0(piVar6[3],100);
    iVar1 = DAT_00734484;
    iVar4 = *(int *)(DAT_00734484 + 0x18);
    *piVar6 = *(int *)(DAT_00734484 + 0x10);
    *(int *)(iVar1 + 0x18) = iVar4 + -1;
    *(int **)(iVar1 + 0x10) = piVar6;
  }
LAB_005943ed:
  iVar4 = FUN_00567160();
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_005942d0(param_2);
  }
  *DAT_007377cc = puVar5;
  puVar2 = puVar5;
  puVar5[1] = DAT_007377cc;
  DAT_007377cc = puVar2;
  *puVar5 = &DAT_007377c8;
  return;
}

