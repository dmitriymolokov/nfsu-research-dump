/* Decompiled from Speed.exe @ 005b8b91 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8b91(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (((param_4 == 0) || (param_3 != 0)) && (iVar2 = FUN_005b7369(param_2,1), iVar2 != 0)) {
    iVar5 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
            *(int *)(iVar2 + 0x18);
    uVar1 = *(uint *)(iVar5 + 0x10);
    if (((((uVar1 != 0) && (*(int *)(iVar2 + 0x10) == -1)) &&
         ((param_4 <= uVar1 && ((-1 < *(int *)(iVar5 + 4) && (*(int *)(iVar5 + 4) < 4)))))) &&
        (*(int *)(iVar5 + 0x14) == 1)) && (*(int *)(iVar5 + 0x18) == 1)) {
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (uVar1 == 0) {
        return 0;
      }
      do {
        if (iVar2 == 0) {
          return 0;
        }
        iVar5 = *(int *)(iVar2 + 8);
        iVar4 = *(int *)(iVar5 + 0x10);
        if (iVar4 == 0) {
          iVar4 = __ftol();
          uVar3 = (uint)(iVar4 != 0);
LAB_005b8c4e:
          *(uint *)(iVar5 + 0x18) = uVar3;
        }
        else {
          if ((iVar4 == 1) || (iVar4 == 2)) {
            uVar3 = __ftol();
            goto LAB_005b8c4e;
          }
          if (iVar4 != 3) {
            return 0x8876086c;
          }
          *(double *)(iVar5 + 0x18) = (double)*(float *)(param_3 + uVar6 * 4);
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        uVar6 = uVar6 + 1;
        if (uVar1 <= uVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0x8876086c;
}

