/* Decompiled from Speed.exe @ 0042eda0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042eda0(undefined4 param_1,float param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006863e3;
  local_c = ExceptionList;
  if (((DAT_0078a337 != '\0') && (*DAT_007361f0 == 4)) && (*(int *)(unaff_ESI + 0x298) == 0)) {
    if (param_2 == DAT_006cc7a4) {
      param_2 = DAT_006b7aa0;
    }
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x70);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0042ae50(pvVar1,unaff_ESI,param_1,param_2);
    }
    *(undefined4 *)(unaff_ESI + 0x298) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

