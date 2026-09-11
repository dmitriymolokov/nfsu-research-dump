/* Decompiled from Speed.exe @ 00487590 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487590(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((_DAT_0078f100 & 1) == 0) {
    _DAT_0078f100 = _DAT_0078f100 | 1;
  }
  if (DAT_0078eb3c == 0) {
    FUN_00487680(local_50,DAT_006b6dbc,DAT_006b6dc0,DAT_006b6dc4,DAT_006b6dc8,DAT_006b6dcc);
    DAT_0078f0f0 = local_20;
    _DAT_0078f0f4 = local_1c;
    _DAT_0078f0f8 = local_18;
    DAT_0078eb3c = 1;
  }
  uVar2 = _DAT_0078f0f8;
  uVar1 = _DAT_0078f0f4;
  *unaff_ESI = DAT_0078f0f0;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}

