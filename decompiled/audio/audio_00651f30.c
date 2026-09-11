/* Decompiled from Speed.exe @ 00651f30 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00651f30(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x8c + DAT_00713f48;
  iVar2 = param_1 * 0x110 + DAT_0071400c;
  (**(code **)(iVar2 + 0xe8))(iVar2 + 0x2c);
  uVar1 = *(ushort *)(iVar3 + 0x24);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
      FUN_00657c50(iVar2 + 0x74);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x10c) = 0;
  }
  if ((*(byte *)(iVar3 + 0x24) & 0x10) != 0) {
    FUN_006525f0(param_1);
  }
  return 0;
}

