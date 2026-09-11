/* Decompiled from Speed.exe @ 004ac750 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ac750(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  puVar3 = param_1;
  iVar4 = *param_2 * 0xc90 + DAT_00734588;
  iVar6 = -1;
  bVar2 = *(byte *)(*param_2 * 0xc90 + DAT_00734588);
  while (bVar2 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar2;
    pbVar1 = (byte *)(iVar4 + 1);
    iVar4 = iVar4 + 1;
    bVar2 = *pbVar1;
  }
  param_1[2] = iVar6;
  puVar5 = param_1 + 4;
  puVar8 = param_1 + 0x40;
  piVar7 = param_2 + 0x113;
  param_1 = (undefined4 *)0x78;
  do {
    iVar4 = *piVar7;
    if (iVar4 == 0) {
      *(undefined1 *)(puVar5 + 0x1e) = 0;
      *(undefined1 *)puVar5 = 0;
      *puVar8 = 0;
    }
    else {
      iVar6 = 0;
      do {
        if (*(int *)(iVar4 + 4) == (&DAT_006fb730)[iVar6]) goto LAB_004ac7c1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x20);
      iVar6 = 0;
LAB_004ac7c1:
      *(char *)(puVar5 + 0x1e) = (char)iVar6;
      *(undefined1 *)puVar5 = *(undefined1 *)(iVar4 + 0x10);
      *puVar8 = *(undefined4 *)(iVar4 + 8);
    }
    piVar7 = piVar7 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + -1);
    if (param_1 == (undefined4 *)0x0) {
      piVar7 = param_2 + 2;
      piVar9 = puVar3 + 0xb8;
      for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((int)param_2 + 0x425);
      *puVar3 = 1;
      return;
    }
  } while( true );
}

