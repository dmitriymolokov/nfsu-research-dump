/* Decompiled from Speed.exe @ 0051cf40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051cf40(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EDI;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006895f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401520(0);
  if (DAT_006f1dd8 != 0) {
    puVar2 = _malloc(0x167c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_006bf4a4;
      DAT_0073567c = 0;
      _DAT_00735680 = 0;
      DAT_0073568c = 0;
      DAT_00735694 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
    }
    *(undefined4 **)(unaff_EDI + 0xb4) = puVar2;
    FUN_005212e0(puVar2);
    puVar2 = _malloc(0x250);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar3 = (undefined4 *)FUN_0052e3f0();
      *puVar2 = &PTR_FUN_006bf398;
      *puVar3 = &PTR_LAB_006bf36c;
    }
    *(undefined4 **)(unaff_EDI + 0xc0) = puVar2;
    pvVar4 = _malloc(0x5b0);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00522600(pvVar4);
    }
    *(undefined4 *)(unaff_EDI + 0xbc) = uVar5;
    iVar1 = DAT_007356ac;
    uVar6 = DAT_006f227c ^ 0x1d872b41;
    uVar7 = uVar6 >> 5 ^ uVar6;
    bVar8 = DAT_007356ac != 0;
    DAT_007356d8 = DAT_006f227c;
    DAT_006f227c = uVar7 << 0x1b ^ uVar7 ^ uVar6;
    *(undefined4 **)(unaff_EDI + 8) = &DAT_007588fc;
    if (bVar8) {
      FUN_005366e0(iVar1);
    }
    *(undefined4 *)(unaff_EDI + 0x78) = 0;
    *(undefined4 *)(unaff_EDI + 0x7c) = 0;
  }
  ExceptionList = local_c;
  return;
}

