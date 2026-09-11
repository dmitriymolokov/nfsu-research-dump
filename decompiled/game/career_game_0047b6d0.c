/* Decompiled from Speed.exe @ 0047b6d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047b6d0(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 local_14;
  undefined4 local_10 [2];
  int local_8;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    local_10[0] = 0;
    local_8 = 0;
    local_14 = 0;
    cVar1 = FUN_0061e6d0("Skeleton",&local_14,local_10);
    if (cVar1 != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = local_10[0];
      uVar2 = FUN_00567c70();
      *(undefined4 *)(unaff_ESI + 0x10) = uVar2;
      *(int *)(unaff_ESI + 0x20) = local_8;
      *(uint *)(unaff_ESI + 8) = (uint)(local_8 != 0);
      return;
    }
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
  }
  return;
}

