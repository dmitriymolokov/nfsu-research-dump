/* Decompiled from Speed.exe @ 00638cd0 */
/* Module: Loader */
/* Ghidra DecompileModule */


int FUN_00638cd0(uint param_1,uint param_2,int param_3,uint param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_10 [4];
  
  local_10[0] = local_10[0] & 0xffffff00 | param_1 & 0xff;
  iVar6 = 0;
  iVar1 = FUN_00638f00(local_10);
  if (iVar1 == 0xf) {
    iVar1 = 0x10;
  }
  if (((param_1 == 0x21) || (param_1 == 0x20)) && (param_5 != '\0')) {
    uVar2 = param_2 & 0x1f;
    if ((uVar2 < 0x10) || (0x17 < uVar2)) {
      if ((7 < uVar2) && (uVar2 < 0x10)) {
        param_2 = param_2 + 8;
      }
    }
    else {
      param_2 = (param_2 & 0xffffffe0) + 0x18;
    }
    iVar6 = (int)(iVar1 * param_2 + ((int)(iVar1 * param_2) >> 0x1f & 7U)) >> 3;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = (int)param_2 >> ((byte)uVar2 & 0x1f);
      uVar5 = param_3 >> ((byte)uVar2 & 0x1f);
      if ((int)uVar3 < 1) {
        uVar3 = 1;
      }
      if ((int)uVar5 < 1) {
        uVar5 = 1;
      }
      if (((param_1 == 0x60) || (param_1 == 0x61)) || (param_1 == 0x62)) {
        uVar3 = uVar3 + 3 & 0xfffffffc;
        uVar5 = uVar5 + 3 & 0xfffffffc;
      }
      iVar4 = uVar3 * iVar1 + 7;
      iVar6 = iVar6 + ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) * uVar5;
      uVar2 = uVar2 + 1;
    } while (uVar2 <= param_4);
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 + 0x10;
  }
  return iVar6;
}

