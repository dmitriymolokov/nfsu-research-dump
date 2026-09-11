/* Decompiled from Speed.exe @ 0054e5b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e5b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  LARGE_INTEGER local_10;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_10);
  iVar2 = __allshr();
  iVar3 = 0;
  do {
    FUN_00411030();
    QueryPerformanceCounter(&local_8);
    uVar1 = DAT_007349c8;
    local_14 = __allshr();
    local_14 = local_14 - iVar2;
    if (local_14 < 0) {
      local_14 = 0;
    }
    iVar3 = iVar3 + 1;
  } while ((iVar3 < 0xf4241) &&
          (local_10.s.LowPart = 1 << ((byte)uVar1 & 0x1f),
          (float)(int)local_10.s.LowPart * (float)local_14 * _DAT_007301d0 * _DAT_006cc8bc <=
          _DAT_006cc7bc));
  return;
}

