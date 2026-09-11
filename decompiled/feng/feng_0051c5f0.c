/* Decompiled from Speed.exe @ 0051c5f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051c5f0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  if ((DAT_006f1ddc != 0) &&
     (*(int *)(*(int *)(unaff_EDI + 0x56c) * 0x1c + 0x1e8 + unaff_EDI) != -1)) {
    FUN_00522220(0xffffffff);
    FUN_0064c620();
    switch(param_1) {
    case 1:
      uVar2 = 5;
      break;
    case 2:
      uVar2 = 6;
      break;
    case 3:
      uVar2 = 7;
      break;
    case 4:
      uVar2 = 8;
      break;
    default:
      uVar2 = 4;
      break;
    case 9:
      uVar2 = 9;
    }
    FUN_005218c0(*(undefined4 *)(unaff_EDI + 0xb4));
    *(undefined4 *)(*(int *)(unaff_EDI + 0x56c) * 0x1c + 0x1f0 + unaff_EDI) = uVar2;
    DAT_0073568c = 0;
    DAT_00735690 = 0;
    FUN_00522020(0xffffffff,0,1,9);
    do {
      if (DAT_00735678 == 0) {
        piVar1 = &DAT_0072ce58;
        while (((*piVar1 != 1 && (*piVar1 != 2)) && (piVar1[-1] != 1))) {
          piVar1 = piVar1 + 3;
          if (0x72cfd7 < (int)piVar1) {
            *(undefined4 *)(unaff_EDI + 0x568) = uVar2;
            return;
          }
        }
      }
      FUN_005219c0(*(undefined4 *)(unaff_EDI + 0xb4));
      FUN_0058a850();
    } while( true );
  }
  return;
}

