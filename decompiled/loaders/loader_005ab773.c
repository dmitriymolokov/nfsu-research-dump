/* Decompiled from Speed.exe @ 005ab773 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ab773(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_2 + uVar4 * 4);
      uVar3 = uVar1 & 0x7fffffff;
      uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
      if (uVar3 < 0x47fff000) {
        if (uVar3 < 0x38800000) {
          uVar3 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar3 >> 0x17) & 0x1f);
          uVar3 = (uVar3 >> 0xd & 1) + 0xfff + uVar3;
        }
        else {
          uVar3 = (uVar3 >> 0xd & 1) + 0xc8000fff + uVar3;
        }
        uVar2 = (ushort)(uVar3 >> 0xd) | uVar2;
      }
      else {
        uVar2 = uVar2 | 0x7fff;
      }
      *(ushort *)(param_1 + uVar4 * 2) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

