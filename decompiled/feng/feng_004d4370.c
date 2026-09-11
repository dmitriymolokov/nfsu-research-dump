/* Decompiled from Speed.exe @ 004d4370 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004d4370(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar2 = param_1[3];
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3e4c;
  uVar1 = FUN_004fd230();
  if (((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) &&
      ((DAT_0073578c == 0 || (iVar2 = FUN_004ef050(uVar1), iVar2 == 0)))) ||
     (*(int *)(iVar2 + 0x18) != 2)) {
    iVar2 = 0;
  }
  param_1[0x10] = iVar2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  DAT_00777cc4 = 0;
  FUN_004d4900(param_1);
  if (DAT_00735e38 == 0) {
    DAT_00735e38 = FUN_00565b60(0xf660,0,0,0);
    FUN_004ab120(&DAT_007588c4,0xf660);
  }
  if (((DAT_00734998 == 1) || (DAT_00734998 == 5)) ||
     ((DAT_00734998 == 3 || ((DAT_00734998 == 4 || (DAT_00734998 == 2)))))) {
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
    }
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x8816789f);
      }
    }
    FUN_004f6910(iVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

