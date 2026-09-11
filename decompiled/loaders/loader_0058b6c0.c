/* Decompiled from Speed.exe @ 0058b6c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058b6c0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  
  if (((char)unaff_EDI[3] == '\0') && (*(char *)((int)unaff_EDI + 0xd) != '\x01')) {
    if ((*(char *)((int)unaff_EDI + 0xd) == '\x02') &&
       (*(int *)(unaff_EDI[2] * 0xc90 + 0xc54 + DAT_00734588) != 2)) {
      FUN_0053ec90(&DAT_00743c20,unaff_EDI + 5,0x78);
    }
    *(short *)(unaff_EDI[4] + 0x58) = *(short *)(unaff_EDI[4] + 0x58) + -1;
    FUN_0058b420(param_1);
    iVar1 = *unaff_EDI;
    piVar2 = (int *)unaff_EDI[1];
    unaff_EDI[4] = 0;
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    iVar3 = DAT_007344fc;
    iVar1 = *(int *)(DAT_007344fc + 0x18);
    *unaff_EDI = *(int *)(DAT_007344fc + 0x10);
    *(int *)(iVar3 + 0x18) = iVar1 + -1;
    *(int **)(iVar3 + 0x10) = unaff_EDI;
    return 1;
  }
  return 0;
}

