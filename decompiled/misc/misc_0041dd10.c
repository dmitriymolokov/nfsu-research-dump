/* Decompiled from Speed.exe @ 0041dd10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_0041dd10(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = 1;
  if (0 < unaff_EBX) {
    do {
      iVar1 = (int)((uint)*(byte *)(iVar2 + param_2) + iVar1) % 0xfff1;
      iVar3 = (iVar3 + iVar1) % 0xfff1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBX);
  }
  return iVar3 * 0x10000 + iVar1;
}

