/* Decompiled from Speed.exe @ 0064ff90 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064ff90(ushort *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)((int)param_1 + 3);
  iVar2 = (uint)*param_1 * (uint)(byte)param_1[1];
  iVar3 = 0;
  if (cVar1 == '\n') {
    iVar3 = 0x88;
  }
  else {
    if (cVar1 == '\x04') {
      return iVar2 * 0x33 >> 8;
    }
    if (cVar1 == '\x16') {
      return iVar2 * 0x66 >> 8;
    }
    if (cVar1 == '\t') {
      return iVar2 * 0x100 >> 8;
    }
    if (cVar1 == '\b') {
      return iVar2 * 0x200 >> 8;
    }
    if ((cVar1 == '\x10') || (cVar1 == '\x17')) {
      return (uint)(byte)param_1[1] * 8;
    }
  }
  return iVar2 * iVar3 >> 8;
}

