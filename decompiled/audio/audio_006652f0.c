/* Decompiled from Speed.exe @ 006652f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006652f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint unaff_retaddr;
  undefined1 local_24 [32];
  uint local_4;
  
  puVar1 = param_1;
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  uVar2 = FUN_00667530(param_2,"IDENT",0xffffffff);
  uVar2 = FUN_00667ec0(uVar2);
  *param_1 = uVar2;
  uVar2 = FUN_00667530(param_2,&DAT_006bd3bc,param_1 + 1,0x20,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,&DAT_006bd28c,param_1 + 0x11,0x20,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,&DAT_006aad28,param_1 + 0x19,0x20,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,"PARAMS",param_1 + 0x71,0x80,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,"USERFLAGS",0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x91] = uVar2;
  uVar2 = FUN_00667530(param_2,"SYSFLAGS",0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x92] = uVar2;
  uVar2 = FUN_00667530(param_2,"COUNT",0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x93] = uVar2;
  uVar2 = FUN_00667530(param_2,&DAT_006bd320,0);
  uVar2 = FUN_00668590(uVar2);
  param_1[0x97] = uVar2;
  uVar2 = FUN_00667530(param_2,"MINSIZE",0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x94] = uVar2;
  uVar2 = FUN_00667530(param_2,"MAXSIZE",0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x95] = uVar2;
  uVar2 = FUN_00667530(param_2,&DAT_006aacf0,param_1 + 9,0x20,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,&DAT_006bd328,param_1 + 0x98,0x40,&DAT_006b9172);
  FUN_00668130(uVar2);
  uVar2 = FUN_00667530(param_2,&DAT_006aace8,0);
  uVar2 = FUN_00667ec0(uVar2);
  param_1[0x96] = uVar2;
  iVar4 = 0;
  if (0 < (int)param_1[0x93]) {
    puVar3 = param_1 + 0x61;
    param_1 = param_1 + 0x21;
    do {
      FUN_0067101f(local_24,"OPPO%d",iVar4);
      uVar2 = FUN_00667530(param_2,local_24,param_1,0x20,&DAT_006b9172);
      FUN_00668130(uVar2);
      FUN_0067101f(local_24,"ADDR%d",iVar4);
      uVar2 = FUN_00667530(param_2,local_24,0);
      uVar2 = FUN_00667f50(uVar2);
      puVar3[8] = uVar2;
      FUN_0067101f(local_24,"OPID%d",iVar4);
      uVar2 = FUN_00667530(param_2,local_24,0);
      uVar2 = FUN_00667ec0(uVar2);
      *puVar3 = uVar2;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 8;
      puVar3 = puVar3 + 1;
    } while (iVar4 < (int)puVar1[0x93]);
  }
  return;
}

