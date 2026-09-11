/* Decompiled from Speed.exe @ 004f1620 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004f1620(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  piVar1 = (int *)(param_1 + 0x5150);
  iVar2 = 0x20;
  do {
    if (*piVar1 == unaff_ESI) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)(param_1 + 0x5150 + *(int *)(param_1 + 0x514c) * 8) = unaff_ESI;
  *(undefined4 *)(param_1 + 0x5154 + *(int *)(param_1 + 0x514c) * 8) = param_2;
  uVar3 = *(int *)(param_1 + 0x514c) + 1U & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  *(uint *)(param_1 + 0x514c) = uVar3;
  return;
}

