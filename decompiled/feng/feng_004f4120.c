/* Decompiled from Speed.exe @ 004f4120 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f4120(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006862d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x2c);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    iVar3 = FUN_004f3a00(pvVar2);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(iVar3 + 4);
      goto LAB_004f4166;
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_004f4166:
  *DAT_0074610c = puVar4;
  puVar1 = puVar4;
  puVar4[1] = DAT_0074610c;
  DAT_0074610c = puVar1;
  *puVar4 = &DAT_00746108;
  ExceptionList = local_c;
  return;
}

