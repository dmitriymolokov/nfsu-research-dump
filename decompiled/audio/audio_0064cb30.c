/* Decompiled from Speed.exe @ 0064cb30 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064cb30(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[4] != 0) {
    uVar3 = 0;
    uVar1 = FUN_006511b0();
    iVar2 = 0;
    if (0 < param_1[2]) {
      while (uVar3 = uVar3 + (int)*(char *)(*param_1 + 0x10 + iVar2), uVar3 <= uVar1 % 100) {
        iVar2 = iVar2 + 1;
        if (param_1[2] <= iVar2) {
          return param_1[3];
        }
      }
      param_1[3] = param_1[1] + iVar2;
    }
  }
  return param_1[3];
}

