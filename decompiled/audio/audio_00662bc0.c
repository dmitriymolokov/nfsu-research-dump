/* Decompiled from Speed.exe @ 00662bc0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00662bc0(void)

{
  int iVar1;
  undefined2 unaff_DI;
  undefined4 *puVar2;
  uint unaff_retaddr;
  undefined4 local_1a0 [101];
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  FUN_00668f40();
  FUN_00668e20(&LAB_00662b20,&DAT_007177bc);
  puVar2 = local_1a0;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Ordinal_115(2,local_1a0);
  DAT_007177b8 = (uint)CONCAT11((char)unaff_DI,(char)((ushort)unaff_DI >> 8));
  return;
}

