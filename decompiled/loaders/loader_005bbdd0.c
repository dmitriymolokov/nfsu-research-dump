/* Decompiled from Speed.exe @ 005bbdd0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005bbdd0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x200) != 0) {
    FUN_005ba5ee(param_3,1);
  }
  if (((param_3 == 0) || (*(int *)(param_3 + 4) != 8)) || (*(int *)(param_3 + 0x10) != 2)) {
    if ((uVar1 & 0xc00) != 0) {
      FUN_005ba1d9(param_1,param_1 + 8,0xc05,
                   "non-matrix types cannot be declared \'row_major\' or \'column_major\'");
      return 0x80004005;
    }
  }
  else {
    if ((uVar1 & 0xc00) == 0) {
      uVar1 = uVar1 | *(uint *)(param_1[1] + 0x24);
    }
    if ((uVar1 & 0xc00) == 0) {
      if ((*param_1 & 0x10) == 0) {
        if ((*param_1 & 0x20) != 0) {
          uVar1 = uVar1 | 0x800;
        }
      }
      else {
        uVar1 = uVar1 | 0x400;
      }
    }
    if ((uVar1 & 0x400) != 0) {
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff7ff | 0x400;
    }
    if ((uVar1 & 0x800) != 0) {
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffffbff | 0x800;
    }
  }
  return 0;
}

