/* Decompiled from Speed.exe @ 00664ac0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00664ac0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  DWORD DVar2;
  uint unaff_retaddr;
  undefined1 auStack_104 [256];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  param_1[0x15a] = param_3;
  param_1[0x15b] = param_2;
  FUN_006644d0();
  param_1[0x1b1] = 0;
  FUN_00664920();
  iVar1 = FUN_00664380(0x736b6579,param_4,param_5);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_0066e040(*param_1);
  FUN_0066dfd0(*param_1,param_1[0x15b],param_1[0x15a]);
  FUN_00664310("connecting to %08x:%d\n",param_1[0x15b],param_1[0x15a]);
  FUN_00667650(auStack_104,0x100,param_1 + 0xd);
  FUN_0066e6a0(*param_1,0x40646972,0,auStack_104,0xffffffff);
  param_1[3] = 0x72646972;
  DVar2 = GetTickCount();
  param_1[4] = DVar2 + 120000;
  DVar2 = GetTickCount();
  param_1[5] = DVar2;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  return 0;
}

