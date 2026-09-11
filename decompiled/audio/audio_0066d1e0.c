/* Decompiled from Speed.exe @ 0066d1e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0066d1e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint unaff_retaddr;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (*(int *)(param_1 + 0x80) != 1) {
    FUN_00662ce0(param_2);
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_0066c060();
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  local_c = 0;
  local_8 = 0;
  iVar2 = DAT_00717960;
  do {
    if (iVar2 == 0) {
      iVar2 = FUN_00662d70(param_2,param_3,0x10);
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_00662ce0(param_2);
        return 0xfffffffb;
      }
      *(undefined4 *)(param_1 + 0x6c) = param_2;
      FUN_00663160(param_2,2,100,0,FUN_0066ce50);
LAB_0066d308:
      *(undefined4 *)(param_1 + 0x80) = 3;
      return 0;
    }
    if ((((iVar2 != param_1) && (*(int *)(iVar2 + 0x6c) != 0)) &&
        (iVar1 = FUN_00662f90(*(int *)(iVar2 + 0x6c),0x62696e64,&local_14,0x10), -1 < iVar1)) &&
       (iVar1 = FUN_006623c0(param_3,&local_14), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar2 + 0x6c);
      FUN_00662ce0(param_2);
      goto LAB_0066d308;
    }
    iVar2 = *(int *)(iVar2 + 0x68);
  } while( true );
}

