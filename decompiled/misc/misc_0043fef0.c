/* Decompiled from Speed.exe @ 0043fef0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 * FUN_0043fef0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_0077b190;
  iVar3 = 0;
  puVar2 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar1 == puVar2) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) {
      if (iVar3 == param_2) {
        return puVar1;
      }
      iVar3 = iVar3 + 1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

