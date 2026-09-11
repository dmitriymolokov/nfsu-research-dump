/* Decompiled from Speed.exe @ 0051ad30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051ad30(undefined4 param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_730 [1564];
  uint local_114;
  char local_90;
  
  *param_2 = 1;
  FUN_00417600();
  cVar3 = FUN_0051acb0();
  if (cVar3 == '\0') {
    puVar6 = &DAT_0075eef8;
    puVar5 = (undefined4 *)(param_2 + 4);
    for (iVar4 = 0xce; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_004ac5a0(param_2 + 4,1,local_730);
  }
  else {
    iVar4 = FUN_00439130();
    FUN_004323f0(local_730,*(undefined4 *)(iVar4 + 0x10));
    FUN_004ac750(param_2 + 4,local_730);
  }
  uVar1 = local_114;
  puVar6 = DAT_0073ad40;
  uVar2 = local_114;
  if ((local_114 != 0) && (*(char *)(local_114 + 0x11) == '\x03')) {
    puVar5 = (undefined4 *)FUN_0040a880();
    for (; uVar2 = local_114, puVar6 != puVar5; puVar6 = (undefined4 *)*puVar6) {
      uVar8 = puVar6[3];
      uVar7 = puVar6[4] * 0x30 + uVar8;
      for (; uVar8 < uVar7; uVar8 = uVar8 + 0x30) {
        if (*(char *)(uVar8 + 0x10) == 't') goto joined_r0x0051adf9;
      }
    }
    uVar8 = 0;
joined_r0x0051adf9:
    do {
      local_114 = uVar8;
      if (local_114 == 0) break;
      if ((*(byte *)(local_114 + 0x11) < 3) &&
         (*(char *)(local_114 + 0x12) == *(char *)(uVar1 + 0x12))) {
        local_90 = local_90 + '\x01';
        FUN_0057ea80(local_730);
        FUN_004ac750(param_2 + 4,local_730);
        uVar2 = local_114;
        break;
      }
      uVar8 = FUN_0057ce10(0,0x74,0,local_114,0xffffffff);
      local_114 = uVar2;
      uVar2 = local_114;
    } while( true );
  }
  local_114 = uVar2;
  puVar6 = (undefined4 *)FUN_0051a8d0(param_1);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_005a0bd0(puVar6);
    (**(code **)*puVar6)(1);
  }
  return;
}

