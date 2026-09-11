/* Decompiled from Speed.exe @ 0066bf40 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_0066bf40(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (undefined4 *)FUN_00549460(0x20c);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = FUN_0066bf40;
    puVar1[1] = FUN_0066b7a0;
    puVar1[2] = &LAB_0066b820;
    puVar1[3] = FUN_0040a880;
    puVar1[4] = &LAB_0066bc20;
    puVar1[5] = FUN_0066b9e0;
    puVar1[6] = &LAB_0066bdb0;
    puVar1[7] = FUN_0066b9e0;
    puVar1[8] = &LAB_0066b800;
    puVar1[9] = &LAB_0066ba10;
    puVar1[10] = &LAB_006707f0;
    puVar1[0xb] = FUN_0066ba50;
    puVar1[0xc] = FUN_0066bb50;
    puVar1[0xd] = &LAB_0066bbd0;
    puVar1[0x12] = 0x505253;
    FUN_00668cc0(puVar1 + 0x77);
    uVar5 = param_1 + 0xeU & 0x7ffc;
    puVar1[0x22] = uVar5;
    puVar1[0x24] = uVar5 * param_2;
    uVar2 = FUN_00549460(uVar5 * param_2);
    puVar1[0x28] = uVar5;
    puVar1[0x27] = uVar2;
    puVar1[0x29] = uVar5 * param_3;
    uVar2 = FUN_00549460(uVar5 * param_3);
    puVar1[0x2c] = uVar2;
    puVar1[0x23] = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    puVar1[0x1b] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

