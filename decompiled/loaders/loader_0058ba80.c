/* Decompiled from Speed.exe @ 0058ba80 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058ba80(undefined4 param_1)

{
  short *psVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  int iVar4;
  undefined1 local_200 [512];
  
  if (((((char)unaff_ESI[2] == '\0') && (*(char *)((int)unaff_ESI + 9) != '\x01')) &&
      (*(char *)((int)unaff_ESI + 10) != '\x01')) && (*(char *)((int)unaff_ESI + 0xb) != '\x01')) {
    iVar4 = 4;
    piVar3 = unaff_ESI + 0x12;
    do {
      if (*piVar3 != 0) {
        psVar1 = (short *)(*piVar3 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = FUN_0058c1c0(param_1,local_200,0x80,unaff_ESI + 0x12);
    if (iVar4 != 0) {
      FUN_0053ec90(&DAT_00740420,local_200,iVar4);
    }
    if (*(char *)((int)unaff_ESI + 9) == '\x02') {
      FUN_0053ec90(&DAT_00743c20,unaff_ESI + 6,4);
    }
    iVar4 = *unaff_ESI;
    piVar3 = (int *)unaff_ESI[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    iVar2 = DAT_007344f8;
    iVar4 = *(int *)(DAT_007344f8 + 0x18);
    *unaff_ESI = *(int *)(DAT_007344f8 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar4 + -1;
    *(int **)(iVar2 + 0x10) = unaff_ESI;
    return 1;
  }
  return 0;
}

