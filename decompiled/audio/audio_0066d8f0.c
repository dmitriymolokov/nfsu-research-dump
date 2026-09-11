/* Decompiled from Speed.exe @ 0066d8f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_0066d8f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_00549460(0x210);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x84; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_0066d8f0;
    puVar1[1] = FUN_0066cf50;
    puVar1[2] = &LAB_0066d020;
    puVar1[3] = FUN_0040a880;
    puVar1[4] = &LAB_0066d670;
    puVar1[5] = FUN_0066d330;
    puVar1[6] = &LAB_0066d780;
    puVar1[7] = FUN_0066d330;
    puVar1[8] = &LAB_0066cfe0;
    puVar1[9] = &LAB_0066ac00;
    puVar1[10] = &LAB_006707f0;
    puVar1[0xb] = FUN_0066d410;
    puVar1[0xc] = FUN_0066d5a0;
    puVar1[0xd] = &LAB_0066d620;
    puVar1[0x12] = DAT_006ab890;
    *(undefined1 *)(puVar1 + 0x13) = DAT_006ab894;
    FUN_00668cc0(puVar1 + 0x78);
    uVar5 = param_1 + 0x13U & 0x7ffc;
    puVar1[0x22] = uVar5;
    puVar1[0x23] = uVar5 * param_2;
    uVar2 = FUN_00549460(uVar5 * param_2);
    puVar1[0x2a] = uVar5;
    puVar1[0x26] = uVar2;
    puVar1[0x2b] = uVar5 * param_3;
    uVar2 = FUN_00549460(uVar5 * param_3);
    puVar1[0x2f] = uVar2;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 1;
    puVar1[0x21] = 0;
    FUN_0066ceb0();
    puVar3 = puVar1;
  }
  return puVar3;
}

