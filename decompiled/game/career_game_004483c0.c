/* Decompiled from Speed.exe @ 004483c0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


int FUN_004483c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0058a850();
  puVar1 = DAT_0077a924;
  if (DAT_007360e8 != 0) {
    puVar2 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[0x24] == 0) {
        FUN_00448220();
        if (puVar1[0x24] != 0) {
          DAT_007360e8 = DAT_007360e8 + -1;
          if ((code *)puVar1[0x25] != (code *)0x0) {
            (*(code *)puVar1[0x25])(puVar1[0x26]);
          }
        }
        return DAT_007360e8;
      }
    }
  }
  return 0;
}

