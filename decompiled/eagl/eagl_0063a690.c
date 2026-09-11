/* Decompiled from Speed.exe @ 0063a690 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063a690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0063db00(param_1);
  iVar2 = FUN_0063a310(1,param_2,param_3,uVar1);
  iVar3 = DAT_0070f36c;
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  iVar3 = (*(uint *)(iVar2 + 4) & 0x1f) * 0xac + iVar3;
  if (iVar3 == 0) {
    FUN_00642450("FILE_queueop - ATTEMPT TO QUEUE FILEOP ON NON-EXISTANT DEVICE.\n");
  }
  FUN_00641e00(iVar3 + 0x14,iVar2);
  FUN_00641a90(iVar3 + 0x7c);
  return *(undefined4 *)(iVar2 + 4);
}

