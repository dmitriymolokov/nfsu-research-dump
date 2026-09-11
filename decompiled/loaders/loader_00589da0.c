/* Decompiled from Speed.exe @ 00589da0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589da0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 10) == '\0') {
    for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)(param_1 + 8);
        puVar1 = (undefined4 *)*puVar1) {
      piVar2 = (int *)puVar1[2];
      if (((piVar2[9] == 0) ||
          ((*(uint *)(piVar2[9] + 0x534) & 1 << ((byte)*(undefined4 *)(unaff_ESI + 4) & 0x1f)) != 0)
          ) && (iVar6 = FUN_0040db20(unaff_ESI), iVar6 != 0)) {
        iVar6 = FUN_00674898();
        if (_DAT_006b5b0c < (float)iVar6) {
          if ((float)iVar6 <= _DAT_006b5b10) {
            uVar5 = FUN_00674898();
          }
          else {
            uVar5 = 0;
          }
          FUN_00589810(unaff_ESI,uVar5);
          iVar6 = *piVar2;
          piVar3 = (int *)piVar2[1];
          *piVar3 = iVar6;
          *(int **)(iVar6 + 4) = piVar3;
          piVar4 = DAT_00737bdc;
          piVar3 = DAT_00737bdc + 1;
          DAT_00737bdc = piVar2;
          *piVar3 = (int)piVar2;
          piVar2[1] = (int)&DAT_00737bdc;
          *piVar2 = (int)piVar4;
        }
      }
    }
  }
  return;
}

