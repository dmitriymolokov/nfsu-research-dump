/* Decompiled from Speed.exe @ 00401430 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401430(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined1 **ppuVar4;
  undefined1 *local_28 [4];
  int local_18;
  int local_14;
  undefined1 *local_10;
  int local_8;
  int local_4;
  
  ppuVar4 = local_28;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar4 = (undefined1 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  local_28[0] = (undefined1 *)0x28;
  local_28[1] = &LAB_00401160;
  local_28[2] = &LAB_00401180;
  pcVar1 = &DAT_007183d8;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (pcVar2 != &DAT_007183d8) {
    pcVar1 = &DAT_007184dc;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    if (pcVar2 != &DAT_007184dc) {
      if (DAT_007185e0 == 0 && DAT_007185e4 == 0) {
        DAT_007185e0 = 1;
        DAT_007185e4 = 0;
      }
      if (DAT_007185e8 == 0 && DAT_007185ec == 0) {
        DAT_007185e8 = 1;
        DAT_007185ec = 0;
      }
      local_10 = &DAT_007183d8;
      local_28[3] = &DAT_007184dc;
      local_18 = DAT_007185e0;
      local_14 = DAT_007185e4;
      local_8 = DAT_007185e8;
      local_4 = DAT_007185ec;
    }
  }
  FUN_0063abd0(local_28);
  _DAT_0078eb9c = 1;
  return;
}

