/* Decompiled from Speed.exe @ 0049dd10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049dd10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  bool bVar3;
  undefined1 local_8 [8];
  
  iVar2 = *(int *)(unaff_EBX + 0xd0 + unaff_EDI * 4);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar3 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar2 + 0x5c) = 0x96dd344f;
    if (bVar3) {
      (**(code **)*puVar1)(iVar2);
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (DAT_0078a3f5 == '\x01') {
    FUN_0059fc90(*(float *)(&DAT_00777c20 + *(char *)(param_1 + 10) * 0x15c) * _DAT_006cc8bc);
    iVar2 = FUN_0059fb80();
    if (iVar2 == 0) {
      iVar2 = FUN_0059fb80();
    }
  }
  else {
    FUN_0059fc90(*(float *)(&DAT_00777c20 + *(char *)(param_1 + 10) * 0x15c) * _DAT_006ccd30);
    iVar2 = FUN_0059fb80();
    if (iVar2 == 0) {
      iVar2 = FUN_0059fb80();
    }
  }
  FUN_004f68a0("%s %s",local_8,iVar2);
  return;
}

