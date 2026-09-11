/* Decompiled from Speed.exe @ 0059def0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int * FUN_0059def0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = DAT_0073769c;
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return (int *)0x0;
    }
    if (unaff_EDI == *(int *)puVar1[2]) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return (int *)puVar1[2];
}

