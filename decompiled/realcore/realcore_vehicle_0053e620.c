/* Decompiled from Speed.exe @ 0053e620 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_0053e620(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x18)) {
      return 0;
    }
    if (((*(char *)((int)puVar1 + 0x8b) == '\0') && (puVar1[0x27] != 0)) &&
       (iVar2 = FUN_0053e400(param_2,puVar1[0x27],0), iVar2 != 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

