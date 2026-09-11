/* Decompiled from Speed.exe @ 0066da60 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066da60(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  puVar1 = (undefined4 *)FUN_00549460((param_2 + 1) * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    puVar2 = puVar1 + (param_2 + 1) * 3;
    while (puVar1 = puVar1 + 3, puVar1 != puVar2) {
      *puVar1 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 **)(param_1 + 0x1c) = puVar1;
    }
    return param_2;
  }
  return -1;
}

