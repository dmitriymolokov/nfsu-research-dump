/* Decompiled from Speed.exe @ 0063a310 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_0063a310(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00641d40(&DAT_0070f370);
  piVar4 = (int *)(param_4 * 0xac + DAT_0070f36c);
  if (iVar1 == 0) {
    FUN_00642450("FILE_allocateop - NO FREE OPS LEFT TO ALLOCATE.\n");
    return 0;
  }
  if (*piVar4 == 0) {
    FUN_0063a1e0();
  }
  *(undefined1 *)(iVar1 + 0x11) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_1;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffff0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  if (*piVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00642360(piVar4 + 5);
  }
  *(uint *)(iVar1 + 4) = piVar4[0x29] << 5 | param_4;
  uVar3 = piVar4[0x29] + 1U & 0xffffff;
  piVar4[0x29] = uVar3;
  if (uVar3 == 0) {
    piVar4[0x29] = 1;
  }
  if (*piVar4 != 0) {
    FUN_00642380(piVar4 + 5,uVar2);
  }
  return iVar1;
}

