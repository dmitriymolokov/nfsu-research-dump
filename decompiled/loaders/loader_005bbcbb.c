/* Decompiled from Speed.exe @ 005bbcbb */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005bbcbb(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_60 [20];
  int local_4c;
  undefined1 local_3c [20];
  int local_28;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar3 = 0;
  local_18 = 0;
  local_c = FUN_005ba80b(param_1);
  local_10 = FUN_005ba80b(param_2);
  iVar2 = FUN_005ba894(param_1,param_2);
  if (iVar2 == 0) {
    bVar1 = false;
    local_8 = 0;
    FUN_005d8121();
    FUN_005d8121();
    if (local_c != 0) {
      while (uVar3 < local_10) {
        iVar2 = FUN_005bac05(param_1,uVar3,local_60);
        if (((iVar2 < 0) || (iVar2 = FUN_005bac05(param_2,uVar3,local_3c), iVar2 < 0)) ||
           (iVar2 = FUN_005baccd(local_60,local_3c,&local_14), iVar2 < 0)) {
          bVar1 = true;
          local_8 = 1;
        }
        else {
          if (local_14 != local_4c) {
            bVar1 = true;
          }
          if (local_14 != local_28) {
            local_8 = 1;
          }
        }
        if (((bVar1) && (local_8 != 0)) || (uVar3 = uVar3 + 1, local_c <= uVar3)) break;
      }
    }
    iVar2 = local_18;
    if (local_10 < local_c) {
      iVar2 = 4;
    }
    if (bVar1) {
      iVar2 = iVar2 + 0x200;
    }
    if (local_8 != 0) {
      iVar2 = iVar2 + 0x10000;
    }
    if (local_c < local_10) {
      iVar2 = iVar2 + 0x800000;
    }
    FUN_005d8188();
    FUN_005d8188();
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

