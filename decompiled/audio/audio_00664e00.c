/* Decompiled from Speed.exe @ 00664e00 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00664e00(undefined4 *param_1,int param_2,undefined1 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_retaddr;
  undefined1 local_224;
  undefined1 local_223 [31];
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar3 = param_1[3];
  if ((((iVar3 != 0x69646c65) && (iVar3 != 0x61757468)) && (iVar3 != 0x61636374)) &&
     (iVar3 != 0x736b6579)) {
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)FUN_00664380(param_2,param_4,param_5);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (((param_2 == 0x61757468) || (param_2 == 0x61636374)) || (param_2 == 0x70617373)) {
      FUN_00667650(local_204,0x200,param_3);
      FUN_00667d10(local_204,0x200,param_1 + 0xd);
      uVar2 = FUN_00667530(local_204,&DAT_006bd1cc,local_223,0x1f,&DAT_006b9172);
      FUN_00668130(uVar2);
      if (*(char *)(param_1 + 9) == '\0') {
        FUN_00667b60(local_204,0x200,&DAT_006bd1cc,param_1 + 0x19d,local_223);
        FUN_00667690(local_204,0x200,&DAT_006aac5c,param_1[0x19c]);
        param_3 = local_204;
      }
      else {
        local_224 = 0x7e;
        FUN_0066ea80(local_223,0x1f,local_223,param_1 + 9,0x10,0x10);
        FUN_00667950(local_204,0x200,&DAT_006bd1cc,&local_224);
        param_3 = local_204;
      }
    }
    if (param_2 == 0x736e6170) {
      uVar2 = FUN_00667530(param_3,&DAT_006bd368,0);
      iVar3 = FUN_00667ec0(uVar2);
      if ((5 < iVar3) && (iVar3 < 10)) {
        if (param_1[iVar3 * 5 + 0x128] != 0) {
          iVar4 = FUN_0066dac0(param_1[iVar3 * 5 + 0x128]);
          while (iVar4 != 0) {
            uVar2 = FUN_00666eb0(param_1[iVar3 * 5 + 0x129],iVar4);
            FUN_00447030(uVar2);
            iVar4 = FUN_0066dac0(param_1[iVar3 * 5 + 0x128]);
          }
        }
      }
      param_1[0x1b0] = 0;
      param_1[0x1b1] = param_1[0x1b1] + 1;
    }
    FUN_0066e6a0(*param_1,param_2,0,param_3,0xffffffff);
    uVar2 = *puVar1;
  }
  return uVar2;
}

