/* Decompiled from Speed.exe @ 004b1b70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b1b70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((DAT_006f1dfc != 0) && (*(int *)(param_1 + 0x90) == 0)) {
    iVar1 = *(int *)(param_1 + 0x110);
    iVar5 = FUN_00401050();
    if ((DAT_00735768 == '\0') && (iVar5 != 0)) {
      FUN_00565020();
      uVar3 = DAT_006b6b58;
      uVar2 = DAT_006b6b54;
      *(undefined4 *)(iVar5 + 0x30) = DAT_006b6b50;
      uVar4 = DAT_006b6b5c;
      *(undefined4 *)(iVar5 + 0x34) = uVar2;
      *(undefined4 *)(iVar5 + 0x38) = uVar3;
      FUN_00401c10(uVar4);
      FUN_0040baf0(iVar5,iVar5);
      FUN_00401c10(DAT_006b6b64);
      FUN_0040b990(iVar5,iVar5);
      FUN_00401c10(DAT_006b6b60);
      FUN_0040ba40(iVar5,iVar5);
      if (DAT_006fb038 == 0) {
        FUN_0040c910(&DAT_00740460 + iVar1 * 0x18,param_1 + 0x48,iVar5,0,0);
      }
    }
  }
  return;
}

