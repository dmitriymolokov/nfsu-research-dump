/* Decompiled from Speed.exe @ 00410550 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410550(int param_1)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (param_1 == 0) {
    _DAT_007070cc = 0xffffffff;
    _DAT_007070c8 = 0xffffffff;
    if (DAT_0073640c == 0) {
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x1b);
      _DAT_007070d0 = param_1;
      return;
    }
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xc4),0);
    _DAT_007070d0 = 0;
    return;
  }
  if (DAT_0073640c == 0) {
    (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x1b);
  }
  else {
    (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
              (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xc4),1);
  }
  _DAT_007070d0 = param_1;
  if (DAT_0073640c == 0) {
    (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x13);
    (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x14);
    _DAT_007070cc = unaff_EDI;
    _DAT_007070c8 = unaff_ESI;
    return;
  }
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
            (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 200));
  (**(code **)(**(int **)(DAT_0073640c + 0x18) + 0x68))
            (*(int **)(DAT_0073640c + 0x18),*(undefined4 *)(DAT_0073640c + 0xcc));
  _DAT_007070cc = unaff_EDI;
  _DAT_007070c8 = unaff_ESI;
  return;
}

