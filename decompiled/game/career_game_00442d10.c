/* Decompiled from Speed.exe @ 00442d10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00442d88) */

void FUN_00442d10(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  uint local_4;
  
  if (*(char *)(unaff_ESI + 0x3d) == '\0') {
    iVar2 = *unaff_EDI;
    local_4 = 0xffffffff;
    if (iVar2 != 0) {
      iVar1 = *(int *)(unaff_EBX + 0x10 + (uint)*(byte *)(iVar2 + 0x83) * 4);
      local_4 = ((iVar2 - iVar1) + -0x27c) / 0x88 + *(short *)(iVar1 + 10) * 0x10000;
    }
    FUN_00571c20(unaff_ESI,&local_4,4,4,1);
    return;
  }
  local_4 = 0;
  FUN_00571c20(unaff_ESI,&local_4,4,4,1);
  if (local_4 != 0xffffffff) {
    if ((int)local_4 >> 0x10 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EBX + 0x10 + ((int)local_4 >> 0x10) * 4);
    }
    *unaff_EDI = (local_4 & 0xffff) * 0x88 + 0x27c + iVar2;
    return;
  }
  *unaff_EDI = 0;
  return;
}

