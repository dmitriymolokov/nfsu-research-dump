/* Decompiled from Speed.exe @ 004d7db0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004d7db0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *unaff_EDI;
  
  puVar3 = (undefined4 *)*unaff_EDI;
  puVar2 = DAT_0073ad40;
  while (DAT_0073ad40 = puVar2, puVar3 != unaff_EDI) {
    _Memory = (int *)*unaff_EDI;
    iVar4 = *_Memory;
    piVar1 = (int *)_Memory[1];
    *piVar1 = iVar4;
    *(int **)(iVar4 + 4) = piVar1;
    _free(_Memory);
    puVar2 = DAT_0073ad40;
    puVar3 = (undefined4 *)*unaff_EDI;
  }
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
    uVar6 = puVar2[3];
    uVar5 = puVar2[4] * 0x30 + uVar6;
    for (; uVar6 < uVar5; uVar6 = uVar6 + 0x30) {
      if (*(char *)(uVar6 + 0x10) == '\x1e') goto joined_r0x004d7e0f;
    }
  }
  uVar6 = 0;
joined_r0x004d7e0f:
  do {
    if (uVar6 == 0) {
      iVar4 = 0;
      for (puVar3 = (undefined4 *)*unaff_EDI;
          (puVar3 != unaff_EDI && (iVar4 = iVar4 + 1, puVar3 != (undefined4 *)0x0));
          puVar3 = (undefined4 *)*puVar3) {
      }
      return iVar4;
    }
    if (*(int *)(uVar6 + 0xc) == *(int *)(&DAT_00746974 + param_2 * 8)) {
      switch(param_3) {
      case 0:
      case 1:
        if (1 < *(byte *)(uVar6 + 0x11)) goto LAB_004d7e70;
        break;
      case 2:
        if (*(char *)(uVar6 + 0x11) != '\x02') goto LAB_004d7e70;
        break;
      case 3:
        if (*(char *)(uVar6 + 0x11) != '\x03') goto LAB_004d7e70;
      }
      puVar3 = _malloc(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[2] = 0;
      }
      puVar3[2] = uVar6;
      puVar2 = (undefined4 *)unaff_EDI[1];
      *puVar2 = puVar3;
      unaff_EDI[1] = puVar3;
      puVar3[1] = puVar2;
      *puVar3 = unaff_EDI;
    }
LAB_004d7e70:
    uVar6 = FUN_0057ce10(0,0x1e,0,uVar6,0xffffffff);
  } while( true );
}

