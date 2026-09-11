/* Decompiled from Speed.exe @ 005b8e16 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8e16(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    if ((param_3 != 0) && (iVar2 = FUN_005b7369(param_2,1), iVar2 != 0)) {
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
              *(int *)(iVar2 + 0x18);
      uVar1 = *(uint *)(iVar3 + 0x10);
      if (((uVar1 != 0) &&
          ((((*(int *)(iVar2 + 0x10) == -1 && (param_4 <= uVar1)) && (-1 < *(int *)(iVar3 + 4))) &&
           ((*(int *)(iVar3 + 4) < 4 && (*(int *)(iVar3 + 0x14) == 1)))))) &&
         (*(int *)(iVar3 + 0x18) == 1)) {
        iVar2 = *(int *)(iVar2 + 0x1c);
        uVar4 = 0;
        if (uVar1 == 0) {
          return 0;
        }
        do {
          if (iVar2 == 0) {
            return 0;
          }
          iVar3 = *(int *)(*(int *)(iVar2 + 8) + 0x10);
          if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
            *(uint *)(param_3 + uVar4 * 4) = (uint)(*(int *)(*(int *)(iVar2 + 8) + 0x18) != 0);
          }
          else {
            if (iVar3 != 3) break;
            iVar3 = __ftol();
            *(uint *)(param_3 + uVar4 * 4) = (uint)(iVar3 != 0);
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          uVar4 = uVar4 + 1;
          if (uVar1 <= uVar4) {
            return 0;
          }
        } while( true );
      }
    }
    local_8 = 0x8876086c;
  }
  return local_8;
}

