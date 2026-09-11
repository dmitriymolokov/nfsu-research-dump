/* Decompiled from Speed.exe @ 005b8ee8 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8ee8(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((param_4 == 0) || (param_3 != 0)) && (iVar3 = FUN_005b7369(param_2,1), iVar3 != 0)) {
    iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
            *(int *)(iVar3 + 0x18);
    uVar1 = *(uint *)(iVar4 + 0x10);
    if (((((uVar1 != 0) && (*(int *)(iVar3 + 0x10) == -1)) &&
         ((param_4 <= uVar1 && ((-1 < *(int *)(iVar4 + 4) && (*(int *)(iVar4 + 4) < 4)))))) &&
        (*(int *)(iVar4 + 0x14) == 1)) && (*(int *)(iVar4 + 0x18) == 1)) {
      iVar3 = *(int *)(iVar3 + 0x1c);
      uVar5 = 0;
      if (uVar1 == 0) {
        return 0;
      }
      do {
        if (iVar3 == 0) {
          return 0;
        }
        iVar4 = *(int *)(iVar3 + 8);
        iVar2 = *(int *)(iVar4 + 0x10);
        if (iVar2 == 0) {
          uVar6 = (uint)(*(int *)(param_3 + uVar5 * 4) != 0);
LAB_005b8f8e:
          *(uint *)(iVar4 + 0x18) = uVar6;
        }
        else {
          if ((iVar2 == 1) || (iVar2 == 2)) {
            uVar6 = *(uint *)(param_3 + uVar5 * 4);
            goto LAB_005b8f8e;
          }
          if (iVar2 != 3) {
            return 0x8876086c;
          }
          *(double *)(iVar4 + 0x18) = (double)*(int *)(param_3 + uVar5 * 4);
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        uVar5 = uVar5 + 1;
        if (uVar1 <= uVar5) {
          return 0;
        }
      } while( true );
    }
  }
  return 0x8876086c;
}

