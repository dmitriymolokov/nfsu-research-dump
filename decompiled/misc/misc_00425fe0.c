/* Decompiled from Speed.exe @ 00425fe0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00425fe0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0068696c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(unaff_ESI + 0x2c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(unaff_ESI + 0x2c))(1);
  }
  *(undefined4 *)(unaff_ESI + 0x24) = param_1;
  switch(param_1) {
  case 0:
    pvVar1 = _malloc(0x2c);
    if (pvVar1 == (void *)0x0) {
LAB_004260d2:
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00425290();
    }
    break;
  case 1:
    pvVar1 = _malloc(0x6c);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) goto LAB_004260d2;
    uVar2 = FUN_0059bfc0(pvVar1);
    break;
  case 2:
    pvVar1 = _malloc(0x510);
    uStack_4 = 1;
    if (pvVar1 == (void *)0x0) goto LAB_004260d2;
    uVar2 = FUN_0045d660(pvVar1);
    break;
  case 3:
    pvVar1 = _malloc(0x500);
    uStack_4 = 2;
    if (pvVar1 == (void *)0x0) goto LAB_004260d2;
    uVar2 = FUN_004620c0(pvVar1);
    break;
  case 4:
    pvVar1 = _malloc(0x4f0);
    uStack_4 = 3;
    if (pvVar1 == (void *)0x0) goto LAB_004260d2;
    uVar2 = FUN_00582f90(pvVar1);
    break;
  default:
    goto switchD_00426012_default;
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = uVar2;
switchD_00426012_default:
  uVar2 = *(undefined4 *)(*(int *)(unaff_ESI + 0x2c) + 8);
  *(undefined4 *)(unaff_ESI + 0x30) = uVar2;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x34) + 4) = uVar2;
  ExceptionList = pvStack_c;
  return;
}

