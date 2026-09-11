/* Decompiled from Speed.exe @ 0044f070 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0044f070(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *(int *)(*unaff_ESI + 0x10);
  if (*(char *)(iVar1 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  iVar1 = (int)*(char *)(iVar1 + 0x424);
  unaff_ESI[0xe5] = iVar1;
  iVar1 = (iVar1 + 1) * 0x34;
  unaff_ESI[0xe6] = 1;
  unaff_ESI[0xe7] = 0;
  *(undefined1 *)(unaff_ESI + 0xe9) = 0;
  unaff_ESI[0xe8] = 0;
  return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + unaff_ESI[0xe3]) != '\0');
}

