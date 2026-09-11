/* Decompiled from Speed.exe @ 00480930 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00480930(int param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = param_1 * 0x4c;
  bVar3 = *(char *)(iVar2 + 0xd4 + unaff_ESI) != *(char *)(unaff_ESI + 0x60);
  if (bVar3) {
    FUN_004812b0(unaff_ESI,param_1,1);
  }
  bVar4 = *(char *)(iVar2 + 0xd5 + unaff_ESI) != *(char *)(unaff_ESI + 0x61);
  if (bVar4) {
    FUN_004812b0(unaff_ESI,param_1,0);
  }
  iVar1 = param_1 * 0x13 + param_2;
  *(undefined4 *)(unaff_ESI + 0x10c + iVar1 * 4) = *(undefined4 *)(unaff_ESI + 0x80);
  *(undefined4 *)(unaff_ESI + 0x114 + iVar1 * 4) = *(undefined4 *)(unaff_ESI + 0x7c);
  iVar1 = param_2 * 0xc + iVar2;
  *(undefined4 *)(iVar1 + 0xdc + unaff_ESI) = *(undefined4 *)(unaff_ESI + 100);
  iVar1 = iVar1 + unaff_ESI;
  *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(unaff_ESI + 0x68);
  *(undefined4 *)((param_1 + 3) * 0x4c + param_2 * 0xc + unaff_ESI) =
       *(undefined4 *)(unaff_ESI + 0x6c);
  *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(unaff_ESI + 0x70);
  *(undefined4 *)(iVar1 + 0xf8) = *(undefined4 *)(unaff_ESI + 0x74);
  *(undefined4 *)(iVar2 + (param_2 * 3 + 0x3f) * 4 + unaff_ESI) = *(undefined4 *)(unaff_ESI + 0x78);
  if (bVar3) {
    FUN_004812b0(unaff_ESI,param_1,1);
  }
  if (bVar4) {
    FUN_004812b0(unaff_ESI,param_1,0);
  }
  return;
}

