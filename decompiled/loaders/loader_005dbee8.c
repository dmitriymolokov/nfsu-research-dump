/* Decompiled from Speed.exe @ 005dbee8 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005dbee8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,undefined4 *param_8,int param_9,int param_10,undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  if (param_2 != 0) {
    if ((param_5 == 0) && (param_9 != 0)) {
      param_7 = param_9;
      param_8 = &local_10;
      param_5 = 1;
    }
    if (((param_6 == 0) && (param_10 != 0)) && (*(int *)(param_1 + 0x50) == 0)) {
      param_9 = 0;
      local_8 = 0;
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_10 + 8);
        iVar6 = iVar4;
        iVar2 = local_8;
        if (*(int *)(iVar3 + 4) == 0x10) {
          iVar1 = *(int *)(*(int *)(iVar3 + 0x14) + 0x18);
          iVar2 = iVar1;
          if (((*(int *)(iVar3 + 0x10) != 0) &&
              (iVar3 = FUN_005d7700(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x18),0,local_1c),
              iVar2 = local_8, -1 < iVar3)) &&
             ((iVar6 = iVar1, *(uint *)(param_1 + 0x10) != local_18 &&
              (iVar6 = iVar4, (*(uint *)(param_1 + 0x10) & 0xffff0000) == local_18)))) {
            param_9 = iVar1;
          }
        }
        local_8 = iVar2;
        param_10 = *(int *)(param_10 + 0xc);
        iVar4 = iVar6;
      } while (param_10 != 0);
      if (((iVar6 != 0) || (iVar6 = param_9, param_9 != 0)) || (iVar6 = local_8, local_8 != 0)) {
        iVar4 = FUN_005f7616(param_4);
        if (iVar4 == 0) {
          return -0x7fffbffb;
        }
        param_4 = FUN_005f7580(iVar4);
        piVar5 = (int *)FUN_005f7616(param_4);
        if (piVar5 == (int *)0x0) {
          return -0x7ff8fff2;
        }
        *(ushort *)(piVar5 + 1) = *(ushort *)(piVar5 + 1) | 0x620;
        *piVar5 = iVar6;
        param_6 = 1;
      }
    }
    iVar4 = FUN_005da560(param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_c);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  if (param_11 != (undefined4 *)0x0) {
    *param_11 = local_c;
  }
  return 0;
}

