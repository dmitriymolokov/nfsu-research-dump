/* Decompiled from Speed.exe @ 0066f960 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0066f960(void)

{
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0xbc) != 1) && (*(int *)(unaff_ESI + 0xbc) != 7)) {
    FUN_0066f830();
    *(undefined4 *)(unaff_ESI + 0xc0) = 0;
    *(undefined4 *)(unaff_ESI + 0xbc) = 7;
  }
  return 0;
}

