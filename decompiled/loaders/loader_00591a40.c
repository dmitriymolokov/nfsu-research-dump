/* Decompiled from Speed.exe @ 00591a40 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00591a40(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  
  FUN_005740b0(0x74);
  if ((*(int *)(unaff_ESI + 0x208c) != 0) || (*(int *)(unaff_ESI + 0x2090) != 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x2084);
    piVar2 = *(int **)(unaff_ESI + 0x2088);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  *(undefined4 *)(unaff_ESI + 0x208c) = 0;
  *(undefined4 *)(unaff_ESI + 0x2090) = 0;
  *(undefined4 *)(unaff_ESI + 0x2094) = 0;
  *(undefined4 *)(unaff_ESI + 0x2098) = 0;
  if ((*(int *)(unaff_ESI + 0x20a4) != 0) || (*(int *)(unaff_ESI + 0x20a8) != 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x209c);
    piVar2 = *(int **)(unaff_ESI + 0x20a0);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  *(undefined4 *)(unaff_ESI + 0x20a4) = 0;
  *(undefined4 *)(unaff_ESI + 0x20a8) = 0;
  *(undefined4 *)(unaff_ESI + 0x20ac) = 0;
  *(undefined4 *)(unaff_ESI + 0x20b0) = 0;
  if ((*(int *)(unaff_ESI + 0x20bc) != 0) || (*(int *)(unaff_ESI + 0x20c0) != 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x20b4);
    piVar2 = *(int **)(unaff_ESI + 0x20b8);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  *(undefined4 *)(unaff_ESI + 0x20bc) = 0;
  *(undefined4 *)(unaff_ESI + 0x20c0) = 0;
  *(undefined4 *)(unaff_ESI + 0x20c4) = 0;
  *(undefined4 *)(unaff_ESI + 0x20c8) = 0;
  if ((*(int *)(unaff_ESI + 0x20d4) != 0) || (*(int *)(unaff_ESI + 0x20d8) != 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x20cc);
    piVar2 = *(int **)(unaff_ESI + 0x20d0);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  *(undefined4 *)(unaff_ESI + 0x20d8) = 0;
  *(undefined4 *)(unaff_ESI + 0x20d4) = 0;
  *(undefined4 *)(unaff_ESI + 0x20dc) = 0;
  *(undefined4 *)(unaff_ESI + 0x20e0) = 0;
  _eh_vector_destructor_iterator_((int *)(unaff_ESI + 0x2084),0x18,4,FUN_0042ac80);
  return;
}

