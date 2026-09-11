/* Decompiled from Speed.exe @ 0058b520 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058b520(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  
  if (((short)unaff_ESI[0x14] == 0) && (*(char *)((int)unaff_ESI + 0x52) != '\x01')) {
    if (*(char *)((int)unaff_ESI + 0x52) == '\x02') {
      FUN_0053f3e0(unaff_ESI + 2,0,0);
    }
    iVar1 = *unaff_ESI;
    piVar2 = (int *)unaff_ESI[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    iVar3 = DAT_007344ec;
    iVar1 = *(int *)(DAT_007344ec + 0x18);
    *unaff_ESI = *(int *)(DAT_007344ec + 0x10);
    *(int *)(iVar3 + 0x18) = iVar1 + -1;
    *(int **)(iVar3 + 0x10) = unaff_ESI;
    return 1;
  }
  return 0;
}

