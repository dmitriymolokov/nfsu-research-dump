/* Decompiled from Speed.exe @ 005a1fa0 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005a1fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_EBX;
  int iVar4;
  int local_734;
  undefined1 local_730 [1836];
  
  FUN_00417600();
  FUN_004ac5a0(unaff_EBX,0,local_730);
  local_734 = 0;
  do {
    if ((local_734 != 9) && (local_734 != 10)) {
      iVar1 = FUN_005a0350();
      iVar4 = 0;
      do {
        uVar2 = FUN_005a1550(unaff_EBX,iVar1);
        if (((char)uVar2 != '\0') &&
           (uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),DAT_00735ec1), DAT_00735ec1 == '\0')) {
          if ((iVar1 < 0) || (0x18 < iVar1)) {
LAB_005a201b:
            return uVar3 & 0xffffff00;
          }
          uVar3 = 0;
          while (*(int *)(iVar1 * 0x90 + 0x450 + unaff_EBX + uVar3 * 4) != iVar4) {
            uVar3 = uVar3 + 1;
            if (0x23 < (int)uVar3) goto LAB_005a201b;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
    local_734 = local_734 + 1;
    if (10 < local_734) {
      return CONCAT31((int3)((uint)local_734 >> 8),1);
    }
  } while( true );
}

