/* Decompiled from Speed.exe @ 00510e70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_00510e70(void)

{
  char in_AL;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  if (in_AL == '\0') {
    iVar1 = FUN_004acce0();
    iVar3 = 0;
    if (iVar1 != 0x23) {
      if (iVar1 * 0xc90 + DAT_00734588 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00567c70();
      }
    }
    puVar4 = DAT_007449c0;
    if (((-1 < unaff_EBX) && (unaff_EBX < 6)) &&
       (puVar2 = (undefined4 *)FUN_0040a880(), puVar4 != puVar2)) {
      do {
        if (puVar4[2] == iVar3) {
          return *(byte *)((int)puVar4 + unaff_EBX + 0x16) - 1;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != puVar2);
      return 0xfe;
    }
  }
  else {
    iVar1 = FUN_004acce0();
    iVar3 = 0;
    if (iVar1 != 0x23) {
      if (iVar1 * 0xc90 + DAT_00734588 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00567c70();
      }
    }
    puVar4 = DAT_007449c0;
    if ((-1 < unaff_EBX) && (unaff_EBX < 6)) {
      puVar2 = (undefined4 *)FUN_0040a880();
      for (; puVar4 != puVar2; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4[2] == iVar3) {
          return *(byte *)((int)puVar4 + unaff_EBX + 0x10) - 1;
        }
      }
    }
  }
  return 0xfe;
}

