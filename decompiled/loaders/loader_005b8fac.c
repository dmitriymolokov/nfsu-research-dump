/* Decompiled from Speed.exe @ 005b8fac */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8fac(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    if ((param_3 != 0) && (iVar3 = FUN_005b7369(param_2,1), iVar3 != 0)) {
      iVar5 = *(int *)(*(int *)(iVar3 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
              *(int *)(iVar3 + 0x18);
      uVar1 = *(uint *)(iVar5 + 0x10);
      if (((uVar1 != 0) &&
          ((((*(int *)(iVar3 + 0x10) == -1 && (param_4 <= uVar1)) && (-1 < *(int *)(iVar5 + 4))) &&
           ((*(int *)(iVar5 + 4) < 4 && (*(int *)(iVar5 + 0x14) == 1)))))) &&
         (*(int *)(iVar5 + 0x18) == 1)) {
        iVar3 = *(int *)(iVar3 + 0x1c);
        uVar6 = 0;
        if (uVar1 == 0) {
          return 0;
        }
        do {
          if (iVar3 == 0) {
            return 0;
          }
          iVar5 = *(int *)(iVar3 + 8);
          iVar2 = *(int *)(iVar5 + 0x10);
          if (iVar2 == 0) {
            *(uint *)(param_3 + uVar6 * 4) = (uint)(*(int *)(iVar5 + 0x18) != 0);
          }
          else {
            if ((iVar2 == 1) || (iVar2 == 2)) {
              uVar4 = *(undefined4 *)(iVar5 + 0x18);
            }
            else {
              if (iVar2 != 3) break;
              uVar4 = __ftol();
            }
            *(undefined4 *)(param_3 + uVar6 * 4) = uVar4;
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          uVar6 = uVar6 + 1;
          if (uVar1 <= uVar6) {
            return 0;
          }
        } while( true );
      }
    }
    local_8 = 0x8876086c;
  }
  return local_8;
}

