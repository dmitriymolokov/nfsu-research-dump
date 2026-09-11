/* Decompiled from Speed.exe @ 005d81d3 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d81d3(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = _malloc(0x24);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005d8121();
  }
  if (iVar2 == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

