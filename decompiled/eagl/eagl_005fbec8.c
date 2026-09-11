/* Decompiled from Speed.exe @ 005fbec8 */
/* Module: EAGL */
/* Ghidra DecompileModule */


undefined4 FUN_005fbec8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_104 [255];
  undefined1 local_5;
  
  FUN_006734dd(local_104,0x100,param_4,&stack0x00000014);
  iVar1 = 0;
  local_5 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 4) == 2) {
      iVar1 = param_2 + 0x10;
    }
    else if (*(int *)(param_2 + 4) == 0xc) {
      iVar1 = param_2 + 0x30;
    }
  }
  FUN_005b1f01(*(undefined4 *)(param_1 + 0x2c),iVar1,param_3,&DAT_006cc568,local_104);
  *(undefined4 *)(param_1 + 0x38) = 1;
  return 0;
}

