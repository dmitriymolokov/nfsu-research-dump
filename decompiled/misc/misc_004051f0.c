/* Decompiled from Speed.exe @ 004051f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_004051f0(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)(unaff_ESI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  if (*(undefined4 **)(unaff_ESI + 0x3c) == puVar1) {
    return 0;
  }
  while( true ) {
    if (*(undefined4 **)(unaff_ESI + 0x3c) == (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x3c) = *puVar1;
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x3c) = **(undefined4 **)(unaff_ESI + 0x3c);
    }
    if (*(undefined4 **)(unaff_ESI + 0x3c) == puVar1) break;
    if ((param_1 == (char *)0x0) ||
       (iVar2 = __stricmp((char *)(*(undefined4 **)(unaff_ESI + 0x3c))[4],param_1), iVar2 == 0)) {
      *(undefined4 *)(unaff_ESI + 0x38) = 1;
      *(undefined4 *)(unaff_ESI + 0x40) = *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x3c);
      return *(undefined4 *)(*(int *)(unaff_ESI + 0x3c) + 0x10);
    }
  }
  return 0;
}

