/* Decompiled from Speed.exe @ 006512c0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_006512c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x110 + DAT_0071400c;
  pcVar1 = *(code **)(iVar2 + 0xf0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined4 *)(iVar2 + 0xcc),param_2);
  }
  return 0;
}

