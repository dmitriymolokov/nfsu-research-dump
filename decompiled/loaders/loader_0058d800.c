/* Decompiled from Speed.exe @ 0058d800 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058d800(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  do {
    iVar4 = *(int *)(param_2 + 0xc);
    if (iVar4 == 0) {
      return;
    }
    piVar3 = *(int **)(iVar4 + 0x80);
    if ((piVar3 == (int *)0x0) || (*(char *)(iVar4 + 0x1b) == 0)) {
LAB_0058d844:
      piVar3 = (int *)0x0;
    }
    else if (piVar5 != (int *)0x0) {
      if ((piVar5 < piVar3) || (piVar3 + (*(char *)(iVar4 + 0x1b) * 5 + -5) * 4 <= piVar5))
      goto LAB_0058d844;
      piVar3 = piVar5 + 0x14;
    }
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar4 = 0;
    piVar2 = &DAT_006f0404;
    do {
      piVar5 = piVar3;
      if (*piVar2 == *piVar3) {
        uVar1 = FUN_0058d420();
        *(undefined1 *)(iVar4 + 0xe8 + param_1) = uVar1;
        break;
      }
      piVar2 = piVar2 + 9;
      iVar4 = iVar4 + 1;
    } while ((int)piVar2 < 0x6f0620);
  } while( true );
}

