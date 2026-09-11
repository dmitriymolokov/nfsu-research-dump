/* Decompiled from Speed.exe @ 005ab80f */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005ab80f(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(ushort *)(param_2 + uVar4 * 2);
      uVar2 = (uint)uVar1;
      if ((uVar1 & 0x7c00) == 0) {
        if ((uVar1 & 0x3ff) == 0) {
          uVar2 = (uVar2 & 0xffff8000) << 0x10;
        }
        else {
          iVar5 = -0xe;
          for (uVar3 = uVar2 & 0x3ff; (uVar3 & 0x400) == 0; uVar3 = uVar3 << 1) {
            iVar5 = iVar5 + -1;
          }
          uVar2 = (((uVar2 & 0xffff8080) << 3 | uVar3) & 0xfffffbff) << 0xd |
                  (iVar5 + 0x7f) * 0x800000;
        }
      }
      else {
        uVar2 = ((uVar2 & 0xffff8000) << 3 | uVar2 & 0x3ff) << 0xd |
                ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000;
      }
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return param_1;
}

