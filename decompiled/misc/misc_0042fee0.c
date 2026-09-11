/* Decompiled from Speed.exe @ 0042fee0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042fee0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685563;
  local_c = ExceptionList;
  pvVar4 = *(void **)(unaff_EDI + 0x130);
  ExceptionList = &local_c;
  if (pvVar4 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00490730();
    pvVar1 = *(void **)((int)pvVar4 + 0xc);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0xc0,*(int *)((int)pvVar1 + -0x10),FUN_00401db0);
      _free((void *)((int)pvVar1 + -0x10));
    }
    _free(pvVar4);
    *(undefined4 *)(unaff_EDI + 0x130) = 0;
  }
  puVar2 = DAT_0073769c;
  if (param_1 == 0) {
    *(undefined4 *)(unaff_EDI + 300) = 0;
    ExceptionList = local_c;
    return;
  }
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
    piVar6 = (int *)puVar2[2];
    if (param_1 == *piVar6) goto LAB_0042ff72;
  }
  piVar6 = (int *)0x0;
LAB_0042ff72:
  if (piVar6 != (int *)0x0) {
    pvVar4 = _malloc(0x34);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004904f0(piVar6);
    }
    *(undefined4 *)(unaff_EDI + 0x130) = uVar5;
  }
  FUN_0042fdf0();
  *(undefined4 *)(unaff_EDI + 0x184) = 0;
  *(undefined4 *)(unaff_EDI + 0x18c) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x104) = 0;
  *(undefined4 *)(unaff_EDI + 0x118) = 0;
  FUN_0042fe60();
  *(int *)(unaff_EDI + 300) = param_1;
  ExceptionList = local_c;
  return;
}

