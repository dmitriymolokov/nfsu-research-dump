/* Decompiled from Speed.exe @ 00418e90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


uint FUN_00418e90(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = 0;
  piVar1 = &DAT_00700fd4;
  uVar3 = 0;
  do {
    iVar2 = 4;
    bVar7 = true;
    piVar5 = (int *)(param_1 + 0x14);
    piVar6 = piVar1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      return *(uint *)(iVar4 * 0x14 + 0x700fe4);
    }
    uVar3 = uVar3 + 0x14;
    iVar4 = iVar4 + 1;
    piVar1 = piVar1 + 5;
    if (0x13 < uVar3) {
      return (uint)*(byte *)(param_1 + 0x24);
    }
  } while( true );
}

