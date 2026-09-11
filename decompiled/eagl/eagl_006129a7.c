/* Decompiled from Speed.exe @ 006129a7 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_006129a7(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *param_2 * 4) + 4);
  if ((uVar1 & 0x80) == 0) {
    if (((uVar1 & 0x100) == 0) || ((uVar1 & 0x40) == 0)) {
      if ((uVar1 & 0x100) == 0) {
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) {
            if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
              if (((uVar1 & 2) == 0) || ((uVar1 & 4) == 0)) {
                return 0x80004005;
              }
              uVar2 = 6;
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 7;
    }
    uVar2 = FUN_00618c39(uVar2);
  }
  else {
    uVar2 = FUN_00618c39(1);
  }
  return uVar2;
}

