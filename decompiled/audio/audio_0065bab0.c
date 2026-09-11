/* Decompiled from Speed.exe @ 0065bab0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065bab0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = param_1 * 0x60 + DAT_0071666c;
  if (0x40000 < param_2) {
    param_2 = 0x40000;
  }
  if (*(int *)(iVar2 + 0x50) == 0) {
    iVar1 = FUN_00650fd0(0x3c);
    *(int *)(iVar2 + 0x50) = iVar1;
    bVar3 = 0x31 < DAT_0071646e;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined2 *)(*(int *)(iVar2 + 0x50) + 0x18) = 0xa0;
    *(undefined1 *)(*(int *)(iVar2 + 0x50) + 0x1a) = 0;
    FUN_00661120(*(undefined4 *)(iVar2 + 0x50),DAT_00713eeb,bVar3);
    FUN_006577e0(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x50));
  }
  FUN_00660f00(*(undefined4 *)(iVar2 + 0x50),param_2);
  return;
}

