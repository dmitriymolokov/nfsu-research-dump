/* Decompiled from Speed.exe @ 0051cd60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051cd60(void)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006860d3;
  local_c = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    ExceptionList = &local_c;
    puVar2 = _malloc(0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_006be4fc;
      puVar2[1] = 0;
      puVar2[2] = 0;
      DAT_0072d558 = 0;
      DAT_0072f560 = 0x100;
    }
    *(undefined4 **)(unaff_EDI + 0x100) = puVar2;
    cVar1 = FUN_00532a20();
    if (cVar1 == '\0') {
      DAT_006f1dd8 = 0;
      ExceptionList = local_c;
      return;
    }
    puVar2 = _malloc(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_006bf5a8;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
      puVar2[2] = 0;
    }
    *(undefined4 **)(unaff_EDI + 0xa0) = puVar2;
    pvVar3 = _malloc(0x3e24);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      DAT_007356ac = 0;
    }
    else {
      DAT_007356ac = FUN_005364e0(pvVar3);
    }
  }
  ExceptionList = local_c;
  return;
}

