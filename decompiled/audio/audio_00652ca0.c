/* Decompiled from Speed.exe @ 00652ca0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00652ca0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x8c + DAT_00713f48;
  if (*(short *)(iVar4 + 0x86) == 0) {
    iVar3 = (int)*(short *)(iVar4 + 0x84);
    if (*(short *)(iVar4 + 0x82) != 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        cVar1 = *(char *)(iVar4 + 100);
      }
      else {
        cVar1 = *(char *)((int)*(char *)(iVar4 + 100) + *(int *)(iVar4 + 0x74));
      }
      iVar3 = iVar3 + ((cVar1 + -0x40) * (int)*(short *)(iVar4 + 0x82) >> 6);
    }
    if (*(int *)(iVar4 + 0x7c) != 0) {
      iVar3 = iVar3 + ((*(char *)((uint)*(byte *)(iVar4 + 0x68) + *(int *)(iVar4 + 0x7c)) + -0x40) *
                       (int)*(short *)(iVar4 + 0x80) >> 6);
    }
    uVar2 = FUN_00652c00(iVar3);
    *(undefined2 *)(iVar4 + 0x86) = uVar2;
  }
  *(short *)(iVar4 + 0x8a) =
       (short)((int)((uint)*(ushort *)(iVar4 + 0x88) * (uint)*(ushort *)(iVar4 + 0x86)) >> 0xc);
  return;
}

