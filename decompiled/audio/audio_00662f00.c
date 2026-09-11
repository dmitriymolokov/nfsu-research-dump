/* Decompiled from Speed.exe @ 00662f00 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00662f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  DWORD DVar2;
  byte unaff_retaddr;
  
  if (param_5 == 0) {
    iVar1 = Ordinal_16(*(undefined4 *)(param_1 + 0x18),param_2,param_3,0);
  }
  else {
    iVar1 = Ordinal_17(*(undefined4 *)(param_1 + 0x18),param_2,param_3,0,param_5,param_6);
    if (0 < iVar1) {
      DVar2 = GetTickCount();
      *(char *)(param_5 + 0xb) = (char)DVar2;
      *(char *)(param_5 + 10) = (char)(DVar2 >> 8);
      *(char *)(param_5 + 9) = (char)(DVar2 >> 0x10);
      *(char *)(param_5 + 8) = (char)(DVar2 >> 0x18);
    }
  }
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00662ad0(iVar1);
  }
  if ((unaff_retaddr & 0x20) != 0) {
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

