/* Decompiled from Speed.exe @ 00651fd0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 fn_00651FD0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_006584a0(param_1);
  if (-1 < iVar1) {
    iVar1 = *(int *)(DAT_00713f4c + param_1 * 8);
    if ((-1 < param_2) && (param_2 < (int)(uint)*(ushort *)(iVar1 + 6))) {
      uVar2 = FUN_00658470(iVar1,param_2,param_1,param_2,param_3);
      uVar2 = func_0x00658230(iVar1,uVar2);
      return uVar2;
    }
  }
  return 0xfffffff8;
}

