/* Decompiled from Speed.exe @ 00418d70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00418d70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = DAT_006abe10;
  uVar1 = DAT_006abe0c;
  iVar3 = 0;
  puVar4 = &DAT_0071dac8;
  do {
    *puVar4 = DAT_006abe04;
    puVar4[1] = DAT_006abe08;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    (&DAT_0071d89c)[iVar3] = 0;
    *(undefined1 *)((int)param_1 + iVar3 + 0x220) = 0;
    (&DAT_0071d888)[iVar3] = 0;
    (&DAT_0071d88c)[iVar3] = 0;
    (&DAT_0071d898)[iVar3] = 0;
    (&DAT_0071d890)[iVar3] = 0;
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + 1;
  } while ((int)puVar4 < 0x71dae8);
  puVar4 = &DAT_0071d8a8;
  for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  puVar4 = &DAT_0071b888;
  for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}

