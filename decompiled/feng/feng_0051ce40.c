/* Decompiled from Speed.exe @ 0051ce40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ce40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EDI;
  
  FUN_00401520(0);
  puVar1 = _malloc(0x250);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar2 = (undefined4 *)FUN_0052e3f0();
    *puVar1 = &PTR_FUN_006bf398;
    *puVar2 = &PTR_LAB_006bf36c;
  }
  *(undefined4 **)(unaff_EDI + 0xc0) = puVar1;
  pvVar3 = _malloc(0x4c);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0052f940();
  }
  *(undefined4 *)(unaff_EDI + 0x80) = uVar4;
  if (DAT_007356ac != 0) {
    FUN_005366e0(DAT_007356ac);
  }
  uVar5 = DAT_006f227c ^ 0x1d872b41;
  uVar6 = uVar5 >> 5 ^ uVar5;
  DAT_007356d8 = DAT_006f227c;
  DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar5;
  puVar1 = _malloc(0x167c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_006bf4a4;
    DAT_0073567c = 0;
    _DAT_00735680 = 0;
    DAT_0073568c = 0;
    DAT_00735694 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  *(undefined4 **)(unaff_EDI + 0xb4) = puVar1;
  FUN_005212e0(puVar1);
  *(undefined4 *)(unaff_EDI + 0x78) = 0;
  *(undefined4 *)(unaff_EDI + 0x7c) = 0;
  return;
}

