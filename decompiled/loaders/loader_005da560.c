/* Decompiled from Speed.exe @ 005da560 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall
FUN_005da560(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 *param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_c;
  int local_8;
  
  iVar2 = param_3;
  iVar1 = param_2;
  uVar4 = 0;
  local_8 = 0;
  local_c = 0;
  if (param_8 == (undefined4 *)0x0) {
    param_8 = &local_c;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    if (iVar3 == 1) {
      iVar3 = FUN_005da560(*(undefined4 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,
                           param_8,&param_3);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar1 = FUN_005da560(*(undefined4 *)(iVar1 + 0xc),iVar2 + param_3 * 4,param_4,param_5,param_6,
                           param_7,param_8,&param_2);
      if (iVar1 < 0) {
        return iVar1;
      }
      local_8 = param_2 + param_3;
    }
    else {
      if (iVar3 == 5) {
        iVar1 = FUN_005da560(*(undefined4 *)(param_2 + 0x18),param_3,param_4,param_5,param_6,param_7
                             ,param_8,&local_8);
      }
      else {
        if (iVar3 == 7) {
          iVar2 = param_2;
          if (param_6 == 0) {
            do {
              if (*(int *)(iVar2 + 4) != 7) break;
              iVar2 = *(int *)(iVar2 + 0x10);
            } while (iVar2 != 0);
            if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 8)) && (*(int *)(iVar2 + 0x10) == 3)) {
              param_4 = FUN_005f7478(&DAT_0069ed7c,0x169,0xffffffff,4);
              param_6 = 1;
            }
          }
          if (*(int *)(iVar1 + 0x14) != 0) {
            do {
              iVar2 = FUN_005da560(*(undefined4 *)(iVar1 + 0x10),param_3 + local_8 * 4,param_4,
                                   param_5,param_6,param_7,param_8,&param_2);
              if (iVar2 < 0) {
                return iVar2;
              }
              local_8 = local_8 + param_2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(iVar1 + 0x14));
          }
          goto LAB_005da753;
        }
        if (iVar3 == 8) {
          if (*(int *)(param_2 + 0x10) == 3) {
            if (param_6 == 0) {
              param_4 = FUN_005f7478(&DAT_0069ed7c,0x169,0xffffffff,4);
            }
            else {
              iVar2 = FUN_005f7616(param_4);
              *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
            }
          }
          iVar1 = FUN_005d91e1(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x18),
                               *(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20),param_3,
                               param_4,param_8,param_7,&local_8);
        }
        else {
          if (iVar3 != 10) {
            FUN_005d9de1(param_1,0,0,"internal error: unknown node");
            goto LAB_005da753;
          }
          iVar1 = FUN_005dbee8(*(undefined4 *)(param_2 + 0x20),param_3,param_4,param_5,param_6,
                               param_7,param_8,*(undefined4 *)(param_2 + 0x2c),
                               *(undefined4 *)(param_2 + 0x30),&local_8);
        }
      }
      if (iVar1 < 0) {
        return iVar1;
      }
    }
  }
LAB_005da753:
  if (param_9 != (int *)0x0) {
    *param_9 = local_8;
  }
  return 0;
}

