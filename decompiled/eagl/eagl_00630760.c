/* Decompiled from Speed.exe @ 00630760 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_00630760(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_2 = param_1 + 0x12;
  *param_3 = (uint)*(byte *)(param_1 + 6) * 0x10 + param_1 + 0x12;
  uVar4 = (uint)*(byte *)(param_1 + 6);
  uVar5 = 1 << (*(byte *)(param_1 + 0x10) & 0x1f);
  uVar3 = (uint)*(ushort *)(param_1 + 4) % uVar5;
  iVar2 = uVar4 * 0x10 + 0x12 +
          param_1 + ((uVar5 + 1) * uVar4 * 3 + 1 & 0xfffffffe) * (*(ushort *)(param_1 + 4) / uVar5);
  if (0 < (int)uVar3) {
    iVar2 = iVar2 + (uVar3 + 1) * uVar4 * 3;
  }
  *param_4 = iVar2;
  uVar1 = FUN_006300a0();
  *param_5 = uVar1;
  return;
}

