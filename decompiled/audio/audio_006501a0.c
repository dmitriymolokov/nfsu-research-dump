/* Decompiled from Speed.exe @ 006501a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006501a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c [7];
  
  puVar1 = (undefined4 *)(&DAT_00713cf0)[param_1];
  if ((undefined4 *)puVar1[0x56] == (undefined4 *)0x0) {
    puVar1[0x56] = puVar1[0x50];
  }
  else {
    puVar1[0x56] = *(undefined4 *)puVar1[0x56];
  }
  iVar3 = puVar1[0x56];
  FUN_00655b80(0,param_2 + 8,puVar1 + 0xf,puVar1 + 0x2a,local_1c,iVar3 + 0x25);
  piVar5 = puVar1 + 0x3c;
  *(undefined4 *)(iVar3 + 0x18) = local_1c[0];
  *(undefined1 *)(iVar3 + 0x24) = 0;
  iVar4 = *piVar5;
  while (iVar4 != 0) {
    local_30 = 3;
    local_2c = *piVar5;
    local_28 = piVar5[4];
    local_20 = *(undefined4 *)(iVar3 + 0xc);
    iVar4 = 0;
    *piVar5 = 0;
    piVar5[4] = 0;
    piVar5 = piVar5 + 1;
    if ('\0' < DAT_00713eea) {
      do {
        (*(code *)(&DAT_00713f20)[iVar4])(&local_30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_00713eea);
    }
    iVar4 = *piVar5;
  }
  FUN_00412ee0(*puVar1,param_2);
  piVar5 = puVar1 + 0xf;
  uVar2 = FUN_0064ff90(piVar5);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  if (puVar1[0xe] == *piVar5) {
    iVar3 = 0x1a;
    bVar10 = true;
    piVar6 = puVar1 + 0x10;
    piVar8 = puVar1 + 0x2a;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar10 = *piVar6 == *piVar8;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if ((bVar10) && (puVar1[0x30] == 0)) goto LAB_006502e8;
  }
  if (*(short *)(puVar1 + 0xe) != 0) {
    *(undefined1 *)(puVar1 + 4) = 2;
    return 0;
  }
  iVar3 = *piVar5;
  puVar7 = puVar1 + 0x2a;
  puVar9 = puVar1 + 0x10;
  for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar1[0xe] = iVar3;
  puVar1[0x30] = 0;
LAB_006502e8:
  if (*(char *)(puVar1 + 4) != '\x01') {
    FUN_0064fdc0(puVar1);
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  return 0;
}

