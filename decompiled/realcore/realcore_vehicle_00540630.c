/* Decompiled from Speed.exe @ 00540630 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_00540630(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_00743c60;
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = FUN_0053e400(param_1,puVar1[0x1e],0), iVar3 != 0))
    break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar3;
}

