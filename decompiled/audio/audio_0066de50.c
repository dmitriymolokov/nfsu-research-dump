/* Decompiled from Speed.exe @ 0066de50 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_0066de50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint unaff_retaddr;
  undefined1 local_194 [400];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar1 = Ordinal_115(2,local_194);
  if (iVar1 != 0) {
    return (undefined4 *)0x0;
  }
  if (DAT_00717964 == 0) {
    DAT_00717964 = GetTickCount();
  }
  puVar2 = _malloc(0x4c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar2 = 0xffffffff;
    puVar2[7] = 0;
  }
  return puVar2;
}

