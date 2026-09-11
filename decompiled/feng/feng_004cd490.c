/* Decompiled from Speed.exe @ 004cd490 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004cd490(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  
  if ((DAT_00745e40 == 1) || (DAT_00777b4c == 1)) {
    piVar2 = &DAT_00746a8c;
    do {
      if (*piVar2 == *(int *)(unaff_EDI + 8)) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x746a94);
    if (param_1 == 0) {
      uVar3 = FUN_004cd420();
      if (((uVar3 != 0) && ((DAT_0076029c & uVar3) == 0)) && (iVar4 = FUN_004cd440(), iVar4 != -1))
      {
        FUN_0051c830(0xffffffff);
        *(undefined1 *)(unaff_EDI + 4) = 1;
        DAT_0076029c = DAT_0076029c | uVar3;
      }
    }
    else if (param_1 == 1) {
      cVar1 = FUN_004cd460();
      if (((cVar1 != '\0') && (DAT_006f1dd8 != 0)) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(10);
        return;
      }
    }
    else if (((param_1 == 2) && (cVar1 = FUN_004cd460(), cVar1 != '\0')) &&
            ((DAT_006f1dd8 != 0 && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)))) {
      (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(0xb);
      return;
    }
  }
  return;
}

