/* Decompiled from Speed.exe @ 00642cb0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00642cb0(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if (DAT_0070ff38 == 0) {
    _DAT_006e80d8 = _DAT_006e80d8 & 0xfffffffe;
    _DAT_006e80e4 = _DAT_006e80e4 & 0xfffffffe;
    DAT_006e80f0 = DAT_006e80f0 & 0xfffffffe;
    DAT_006e80fc = DAT_006e80fc & 0xfffffffe;
    DAT_006e8108 = DAT_006e8108 & 0xfffffffe;
    DAT_006e8114 = DAT_006e8114 & 0xfffffffe;
    DAT_006e8120 = DAT_006e8120 & 0xfffffffe;
    DAT_006e812c = DAT_006e812c & 0xfffffffe;
    DAT_0070ff38 = 1;
    puVar1 = &DAT_006e7eb4;
    do {
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1 = puVar1 + 2;
    } while ((int)puVar1 < 0x6e80b4);
    puVar2 = &DAT_006e8104;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
    } while ((int)puVar2 < 0x6e8134);
    puVar1 = &DAT_006e7f24;
    do {
      puVar1[-1] = 0;
      *puVar1 = *puVar1 & 0xfffffffd;
      puVar1 = puVar1 + 2;
    } while ((int)puVar1 < 0x6e80b4);
    DAT_006e7ec4 = DAT_006e7ec4 | 1;
    pcVar3 = _getenv("PRINT_CHANNEL");
    if (pcVar3 != (char *)0x0) {
      FUN_006429d0();
    }
    if (PTR_FUN_006e80e0 != (undefined *)0x0) {
      if (DAT_0070ff38 == 0) {
        FUN_00642cb0();
      }
      _DAT_006e80e4 = _DAT_006e80e4 | 1;
      pcVar3 = _getenv("PRINT_DEVICE");
      if (pcVar3 != (char *)0x0) {
        FUN_00642920(pcVar3);
      }
    }
  }
  return;
}

