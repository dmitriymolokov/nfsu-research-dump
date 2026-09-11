/* Decompiled from Speed.exe @ 005a6080 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a6080(void)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 4) <= unaff_EDI) {
    return;
  }
  fVar1 = *(float *)(*(int *)(unaff_ESI + 8 + unaff_EDI * 4) + 0x58);
  if (0 < unaff_EDI) {
    piVar4 = (int *)(unaff_ESI + 8);
    iVar6 = unaff_EDI;
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (0 < *(int *)(unaff_ESI + 4) - unaff_EDI) {
    piVar4 = (int *)(unaff_ESI + 8);
    piVar3 = (int *)(unaff_ESI + 8 + unaff_EDI * 4);
    do {
      iVar5 = *piVar3;
      *piVar4 = iVar5;
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
      *(float *)(iVar5 + 0x58) = *(float *)(iVar5 + 0x58) - fVar1;
    } while (iVar6 < *(int *)(unaff_ESI + 4) - unaff_EDI);
  }
  iVar6 = 0;
  *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) - unaff_EDI;
  if (0 < unaff_EDI) {
    do {
      iVar5 = *(int *)(unaff_ESI + 4) + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(unaff_ESI + 8 + iVar5 * 4) = 0;
    } while (iVar6 < unaff_EDI);
  }
  if (*(int *)(unaff_ESI + 8) == 0) {
    *(undefined4 *)(unaff_ESI + 0xac) = 0xffffffff;
    FUN_005a55b0();
    return;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x68) = 0;
  uVar2 = *(int *)(unaff_ESI + 0xac) - unaff_EDI;
  *(uint *)(unaff_ESI + 0xac) = uVar2 & ((int)uVar2 < 1) - 1;
  FUN_005a55b0();
  return;
}

