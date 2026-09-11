/* Decompiled from Speed.exe @ 00410650 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410650(void)

{
  undefined4 unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    if (DAT_0073640c == 0) {
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xf);
      _DAT_007070c4 = unaff_EDI;
    }
    else {
      (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
                (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xbc));
      _DAT_007070c4 = 0;
    }
  }
  else if (DAT_0073640c == 0) {
    (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xf);
    _DAT_007070c4 = unaff_EDI;
  }
  else {
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xbc),1);
    _DAT_007070c4 = unaff_EDI;
  }
  if (DAT_0073640c != 0) {
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xc0));
    _DAT_007070c0 = unaff_ESI;
    return;
  }
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x18);
  _DAT_007070c0 = unaff_ESI;
  return;
}

