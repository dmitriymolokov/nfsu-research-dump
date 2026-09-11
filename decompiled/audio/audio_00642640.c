/* Decompiled from Speed.exe @ 00642640 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 fn_00642640(byte *param_1,int param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)param_3;
  uVar2 = 0;
  uVar3 = 0;
  while (param_2 = param_2 + -1, -1 < param_2) {
    uVar2 = (uint)(byte)(*param_1 ^ (byte)(uVar1 ^ uVar3));
    param_1 = param_1 + 1;
    uVar1 = (uVar1 ^ uVar3) >> 8;
    uVar3 = *(uint *)(uVar2 * 4 + 0x6e7ab0);
  }
  return CONCAT44(uVar2,uVar1 ^ uVar3);
}

