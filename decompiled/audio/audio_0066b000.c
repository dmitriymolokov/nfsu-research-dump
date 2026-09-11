/* Decompiled from Speed.exe @ 0066b000 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_0066b000(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_00549460(0x208);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_0066b000;
    puVar1[1] = FUN_0066a950;
    puVar1[2] = &LAB_0066a9d0;
    puVar1[3] = FUN_0040a880;
    puVar1[4] = &LAB_0066ae10;
    puVar1[5] = FUN_0066abc0;
    puVar1[6] = &LAB_0066af50;
    puVar1[7] = FUN_0066abc0;
    puVar1[8] = &LAB_0066a9b0;
    puVar1[9] = &LAB_0066ac00;
    puVar1[10] = &LAB_006707f0;
    puVar1[0xb] = FUN_0066ac40;
    puVar1[0xc] = FUN_0066ad40;
    puVar1[0xd] = &LAB_0066adc0;
    puVar1[0x12] = 0x504354;
    FUN_00668cc0(puVar1 + 0x76);
    uVar5 = param_1 + 0xbU & 0x7ffc;
    puVar1[0x23] = uVar5;
    puVar1[0x24] = uVar5 * param_2;
    uVar2 = FUN_00549460(uVar5 * param_2);
    puVar1[0x2a] = uVar5;
    puVar1[0x27] = uVar2;
    puVar1[0x2b] = uVar5 * param_3;
    uVar2 = FUN_00549460(uVar5 * param_3);
    puVar1[0x2e] = uVar2;
    puVar1[0x1b] = 0;
    puVar1[0x20] = 1;
    puVar1[0x21] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

