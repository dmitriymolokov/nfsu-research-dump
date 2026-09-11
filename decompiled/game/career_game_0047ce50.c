/* Decompiled from Speed.exe @ 0047ce50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047ce50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0xe34010) {
    puVar2 = _malloc(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      *(undefined1 *)(puVar2 + 0xc) = 0;
      puVar2[0xd] = param_1;
    }
    FUN_0047af20((int)param_1 + 0x17U & 0xfffffff0);
    *DAT_0077979c = puVar2;
    puVar1 = puVar2;
    puVar2[1] = DAT_0077979c;
    DAT_0077979c = puVar1;
    *puVar2 = &DAT_00779798;
    return 1;
  }
  return 0;
}

