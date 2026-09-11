/* Decompiled from Speed.exe @ 0051d950 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051d950(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = (int *)(unaff_ESI + 0xc4);
  while ((*piVar1 == 0 || (*(int *)(*piVar1 + 0x234) != param_1))) {
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 1;
    if (1 < iVar4) {
      iVar4 = 0;
      piVar1 = (int *)(unaff_ESI + 0xd0);
      while ((*piVar1 == 0 || (*(int *)(*piVar1 + 0x234) != param_1))) {
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 1;
        if (3 < iVar4) {
          if (*(int *)(unaff_ESI + 0xe0) < 0) {
            *(undefined4 *)(unaff_ESI + 0xe0) = 0;
          }
          if (*(int *)(unaff_ESI + 0xcc) < 0) {
            *(undefined4 *)(unaff_ESI + 0xe0) = 0;
          }
          iVar4 = *(int *)(unaff_ESI + 0xe4);
          if ((iVar4 != 0) && (iVar4 != 0x270)) {
            if (iVar4 == 0) goto LAB_0051da40;
            puVar3 = (undefined4 *)(iVar4 + -0x270);
            while( true ) {
              if (unaff_ESI == -0xe4) {
                puVar2 = (undefined4 *)0x0;
              }
              else {
                puVar2 = (undefined4 *)(unaff_ESI + -0x18c);
              }
              if (puVar3 == puVar2) break;
              if (puVar3[0x8d] == param_1) {
                iVar4 = puVar3[0x9c];
                piVar1 = (int *)puVar3[0x9d];
                *piVar1 = iVar4;
                *(int **)(iVar4 + 4) = piVar1;
                    /* WARNING: Could not recover jumptable at 0x0051da8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)*puVar3)();
                return;
              }
              if (puVar3[0x9c] == 0) {
LAB_0051da40:
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)(puVar3[0x9c] + -0x270);
              }
            }
          }
          return;
        }
      }
      (**(code **)(**(int **)(unaff_ESI + 0xd0 + iVar4 * 4) + 0xc))();
      puVar3 = *(undefined4 **)(unaff_ESI + 0xd0 + iVar4 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(unaff_ESI + 0xd0 + iVar4 * 4) = 0;
      *(int *)(unaff_ESI + 0xe0) = *(int *)(unaff_ESI + 0xe0) + -1;
      return;
    }
  }
  (**(code **)(**(int **)(unaff_ESI + 0xc4 + iVar4 * 4) + 0xc))();
  puVar3 = *(undefined4 **)(unaff_ESI + 0xc4 + iVar4 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  *(undefined4 *)(unaff_ESI + 0xc4 + iVar4 * 4) = 0;
  *(int *)(unaff_ESI + 0xcc) = *(int *)(unaff_ESI + 0xcc) + -1;
  return;
}

