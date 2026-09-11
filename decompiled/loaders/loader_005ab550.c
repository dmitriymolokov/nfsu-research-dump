/* Decompiled from Speed.exe @ 005ab550 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005ab550(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_00733f3c;
  if (DAT_00733f34 == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (DAT_00733f3c != 0) {
    do {
      iVar2 = FUN_00567da0();
      if (iVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}

