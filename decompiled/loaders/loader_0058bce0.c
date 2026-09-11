/* Decompiled from Speed.exe @ 0058bce0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058bce0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1e0 [480];
  
  if (param_3 == 0) {
    iVar1 = FUN_0058c180(param_1,local_1e0,0x78);
    *(char *)(param_2 + 0xba2) = (iVar1 == 0) + '\x01';
  }
  else {
    iVar1 = FUN_0058c180(param_1,local_1e0,0x78);
    *(char *)(param_2 + 0xba1) = (iVar1 == 0) + '\x01';
  }
  if (0 < iVar1) {
    uVar2 = 0;
    if ((param_3 != 0) || (*(int *)(param_1 + 0xc) != 0)) {
      uVar2 = 4;
      FUN_0058cac0(param_1,0x8c000,0x8c000);
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_0053e9e0(&DAT_00740420,local_1e0,iVar1,&LAB_0058ce70,param_2,uVar2);
    return 1;
  }
  return 0;
}

