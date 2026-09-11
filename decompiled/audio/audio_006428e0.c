/* Decompiled from Speed.exe @ 006428e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_006428e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  iVar4 = 0;
  uVar3 = 0;
  do {
    if ((&PTR_DAT_006e7eb0)[uVar3 * 2] != (undefined *)0x0) {
      iVar1 = FUN_006427d0(param_1);
      if (iVar4 < iVar1) {
        uVar2 = uVar3;
        iVar4 = iVar1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  return uVar2;
}

