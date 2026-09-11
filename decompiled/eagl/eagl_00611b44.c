/* Decompiled from Speed.exe @ 00611b44 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00611b44(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 local_3c [32];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  local_c = (void *)0x0;
  if (*(int *)(param_1 + 0xec) == 0) {
    local_8 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x14c);
    if (iVar2 != 0) {
      local_c = _malloc(iVar2 * 4);
      if (local_c == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        if (*(int *)(param_1 + 0x70) != 0) {
          do {
            FUN_0067101f(local_3c,"r_$Int%d",uVar4);
            local_8 = FUN_005e7078(local_3c,uVar4,1);
            if (local_8 < 0) goto LAB_00611cea;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x70));
        }
        pvVar3 = local_c;
        FUN_005e552a(local_c);
        iVar2 = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x14c);
        FUN_005e552a((void *)((int)pvVar3 + iVar2 * 4));
        uVar4 = iVar2 + *(int *)(param_1 + 0x148);
        FUN_00672b40(pvVar3,uVar4,4,&LAB_005e6a37);
        local_1c = 1;
        local_1a = 3;
        local_18 = 1;
        local_16 = 4;
        local_14 = 1;
        local_12 = 0;
        local_10 = 0;
        param_3 = param_3 + param_4 * 0x14;
        param_4 = 0;
        if (uVar4 != 0) {
          do {
            piVar1 = (int *)((int)pvVar3 + param_4 * 4);
            local_8 = FUN_0061319b(*(undefined4 *)*piVar1,0xffffffff,7,param_3);
            if ((local_8 < 0) ||
               (local_8 = FUN_0061319b(&local_1c,0x10,6,param_3 + 0xc), local_8 < 0))
            goto LAB_00611cea;
            if (*(int *)(*piVar1 + 0xc) != 0) {
              *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 1;
              local_8 = FUN_0061319b(*piVar1 + 0x10,0x10,7,param_3 + 0x10);
              if (local_8 < 0) goto LAB_00611cea;
            }
            param_4 = param_4 + 1;
            *(undefined2 *)(param_3 + 4) = 2;
            *(undefined2 *)(param_3 + 6) = *(undefined2 *)(*piVar1 + 4);
            *(undefined2 *)(param_3 + 8) = 1;
            param_3 = param_3 + 0x14;
            pvVar3 = local_c;
          } while (param_4 < uVar4);
        }
        local_8 = 0;
      }
    }
LAB_00611cea:
    _free(local_c);
  }
  return local_8;
}

