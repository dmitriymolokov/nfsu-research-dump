/* Decompiled from Speed.exe @ 005b1fca */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_005b1fca(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_1010 [4096];
  int local_10;
  char *local_c;
  int *local_8;
  
  local_8 = (int *)0x5b1fd7;
  puVar6 = local_1010;
  local_10 = 0xffe;
  iVar3 = FUN_005b17e6(param_3,&local_8);
  if (-1 < iVar3) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1c) + (int)local_8 * 4);
    uVar2 = *puVar1;
    uVar4 = uVar2 & 0xf;
    if (uVar4 == 0xf) {
      local_8 = (int *)(param_1 + 8);
      local_c = "error";
      iVar3 = 0xffe;
    }
    else {
      local_8 = (int *)(param_1 + 0xc);
      local_c = "warning";
      if ((((*(uint *)(param_1 + 0x10) == 0) || (uVar4 == 0)) || (*(uint *)(param_1 + 0x10) < uVar4)
          ) || (((uVar2 & 0x10) != 0 && ((uVar2 & 0x20) != 0)))) {
        return 0;
      }
      *puVar1 = uVar2 | 0x20;
      iVar3 = local_10;
    }
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) != 0) {
        iVar3 = FUN_00673533(local_1010,0xffe,&DAT_006cc568,*(int *)(param_2 + 0x10));
        if (iVar3 < 0) {
          iVar3 = 0xffe;
        }
        puVar6 = local_1010 + iVar3;
        iVar3 = 0xffe - iVar3;
      }
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      iVar5 = FUN_00673533(puVar6,iVar3,"(%u): ",iVar5);
      if (iVar5 < 0) {
        iVar5 = iVar3;
      }
      puVar6 = puVar6 + iVar5;
      iVar3 = iVar3 - iVar5;
    }
    if (param_3 != 0) {
      iVar5 = FUN_00673533(puVar6,iVar3,"%s X%u: ",local_c,param_3);
      if (iVar5 < 0) {
        iVar5 = iVar3;
      }
      puVar6 = puVar6 + iVar5;
      iVar3 = iVar3 - iVar5;
    }
    iVar5 = FUN_006734dd(puVar6,iVar3,param_4,&stack0x00000014);
    if (iVar5 < 0) {
      iVar5 = iVar3;
    }
    (puVar6 + iVar5)[1] = 0;
    puVar6[iVar5] = 10;
    *local_8 = *local_8 + 1;
    iVar3 = FUN_005b1927(local_1010);
  }
  return iVar3;
}

