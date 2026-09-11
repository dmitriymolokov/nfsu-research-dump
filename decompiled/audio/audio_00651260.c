/* Decompiled from Speed.exe @ 00651260 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00651260(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar1 = param_1 * 0x8c + DAT_00713f48;
  iVar2 = param_1 * 0x110 + DAT_0071400c;
  uVar3 = *(ushort *)(iVar1 + 0x8a);
  if (((*(byte *)(iVar1 + 0x24) & 2) != 0) && (0x2000 < uVar3)) {
    uVar3 = 0x2000;
  }
  (**(code **)(iVar2 + 0xec))(*(undefined4 *)(iVar2 + 200),uVar3);
  return 0;
}

