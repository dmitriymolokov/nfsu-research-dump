/* Decompiled from Speed.exe @ 006300a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint __fastcall FUN_006300a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 6);
  uVar4 = 1 << (*(byte *)(param_1 + 0x10) & 0x1f);
  uVar2 = (uint)*(ushort *)(param_1 + 4) % uVar4;
  iVar1 = uVar3 * 0x10 + 0x12 +
          param_1 + ((uVar4 + 1) * uVar3 * 3 + 1 & 0xfffffffe) * (*(ushort *)(param_1 + 4) / uVar4);
  if (0 < (int)uVar2) {
    iVar1 = iVar1 + (uVar2 + 1) * uVar3 * 3;
  }
  return *(byte *)(param_1 + 7) + 1 + iVar1 & 0xfffffffe;
}

