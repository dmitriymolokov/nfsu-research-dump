/* Decompiled from Speed.exe @ 00539b70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_00539b70(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  LARGE_INTEGER local_8;
  
  iVar2 = FUN_005396a0();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(unaff_ESI + 0x264);
  iVar1 = *(int *)(unaff_ESI + 0x260);
  if (0 < iVar1) {
    piVar4 = *(int **)(unaff_ESI + 0x2a8);
    iVar5 = iVar1;
    do {
      iVar2 = iVar2 + *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(unaff_ESI + 0x270) = iVar2;
  if (*(int *)(unaff_ESI + 0x218) < 4) {
    *(undefined4 *)(unaff_ESI + 0x240) = *(undefined4 *)(*(int *)(unaff_ESI + 0x2ac) + iVar1 * 4);
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x240) = 0x7fff;
  }
  iVar2 = *(int *)(unaff_ESI + 0x23c) * *(int *)(unaff_ESI + 0x240) >> 0xf;
  *(int *)(unaff_ESI + 0x244) = iVar2;
  *(undefined4 *)(unaff_ESI + 0x22c) = 1;
  switch(*(undefined4 *)(unaff_ESI + 0x21c)) {
  case 0:
  case 3:
    *(undefined4 *)(unaff_ESI + 0x220) = 4;
    *(undefined4 *)(unaff_ESI + 0x224) = 4;
    *(int *)(unaff_ESI + 0x244) = iVar2;
    *(undefined4 *)(unaff_ESI + 0x24c) = 0x1000;
    goto LAB_00539c9a;
  case 1:
  case 4:
    *(undefined4 *)(unaff_ESI + 0x220) = 8;
    *(undefined4 *)(unaff_ESI + 0x224) = 8;
    *(undefined4 *)(unaff_ESI + 0x24c) = 0x1000;
    break;
  case 2:
  case 5:
    *(undefined4 *)(unaff_ESI + 0x220) = 4;
    *(undefined4 *)(unaff_ESI + 0x224) = 4;
    *(int *)(unaff_ESI + 0x244) = *(int *)(unaff_ESI + 0x50) * iVar2 >> 0xf;
    *(undefined4 *)(unaff_ESI + 0x248) = *(undefined4 *)(unaff_ESI + 0x4c);
    uVar3 = FUN_00674898();
    *(undefined4 *)(unaff_ESI + 0x24c) = uVar3;
    goto LAB_00539ca0;
  default:
    *(undefined4 *)(unaff_ESI + 0x220) = 0;
    *(undefined4 *)(unaff_ESI + 0x224) = 0;
    *(undefined4 *)(unaff_ESI + 0x24c) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x244) = 0;
LAB_00539c9a:
  *(undefined4 *)(unaff_ESI + 0x248) = 0;
LAB_00539ca0:
  local_8.s.LowPart = *(int *)(unaff_ESI + 0x29c) * 1000;
  *(undefined4 *)(unaff_ESI + 0x290) = 0;
  *(float *)(unaff_ESI + 0x234) =
       ((float)(int)local_8.s.LowPart + (float)(int)local_8.s.LowPart) /
       (float)*(int *)(unaff_ESI + 0x298);
  QueryPerformanceCounter(&local_8);
  uVar3 = __allshr();
  *(undefined4 *)(unaff_ESI + 0x294) = uVar3;
  return 0;
}

