/* Decompiled from Speed.exe @ 005b1f01 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_005b1f01(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_1004 [4092];
  undefined4 uStack_8;
  
  uStack_8 = 0x5b1f0e;
  puVar2 = local_1004;
  iVar3 = 0xffe;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar3 = FUN_00673533(local_1004,0xffe,&DAT_006cc568,*(int *)(param_2 + 0x10));
      if (iVar3 < 0) {
        iVar3 = 0xffe;
      }
      puVar2 = local_1004 + iVar3;
      iVar3 = 0xffe - iVar3;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    iVar1 = FUN_00673533(puVar2,iVar3,"(%u): ",iVar1);
    if (iVar1 < 0) {
      iVar1 = iVar3;
    }
    puVar2 = puVar2 + iVar1;
    iVar3 = iVar3 - iVar1;
  }
  if (param_3 != 0) {
    iVar1 = FUN_00673533(puVar2,iVar3,"error X%u: ",param_3);
    if (iVar1 < 0) {
      iVar1 = iVar3;
    }
    puVar2 = puVar2 + iVar1;
    iVar3 = iVar3 - iVar1;
  }
  iVar1 = FUN_006734dd(puVar2,iVar3,param_4,&stack0x00000014);
  if (iVar1 < 0) {
    iVar1 = iVar3;
  }
  (puVar2 + iVar1)[1] = 0;
  puVar2[iVar1] = 10;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_005b1927(local_1004);
  return;
}

