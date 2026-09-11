/* spd-match: far pct=10.77 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0042ec10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void  FUN_0042ec10(int param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688573;
  local_c = ExceptionList;
  if (((*(uint *)(param_1 + 0x4b0) ^ param_2) & 1) != 0) {
    if ((param_2 & 1) != 0) {
      ExceptionList = &local_c;
      pvVar1 = _malloc(0xd0);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0058e540(DAT_00736174,*(undefined4 *)(param_1 + 4),param_1);
      }
      *(undefined4 *)(param_1 + 0x534) = uVar2;
      local_4 = 0xffffffff;
      if (DAT_0078a368 == 0) {
        FUN_0042e4f0();
        ExceptionList = local_c;
        return;
      }
      FUN_0042e4f0();
      ExceptionList = local_c;
      return;
    }
    if (*(void **)(param_1 + 0x534) != (void *)0x0) {
      ExceptionList = &local_c;
      _free(*(void **)(param_1 + 0x534));
    }
    *(undefined4 *)(param_1 + 0x534) = 0;
  }
  ExceptionList = local_c;
  return;
}

