/* Decompiled from Speed.exe @ 0068158b */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2003 Release */

undefined4 __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_1c [12];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  local_8 = (uint)*param_1 << 0x10;
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = __IsZeroMan();
    if (iVar2 != 0) {
LAB_006816a3:
      uVar3 = 0;
      goto LAB_006816a5;
    }
    local_10 = 0;
    local_c = 0;
  }
  else {
    __CopyMan(local_1c,&local_10);
    iVar2 = __RoundMan(&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      local_10 = 0;
      local_c = 0;
    }
    else {
      if (iVar2 < iVar5) {
        if (*param_3 <= iVar5) {
          local_c = 0;
          local_8 = 0;
          local_10 = 0x80000000;
          __ShrMan(&local_10,param_3[3]);
          iVar5 = param_3[5] + *param_3;
          uVar3 = 1;
          goto LAB_006816a5;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar5 = param_3[5] + iVar5;
        __ShrMan(&local_10,param_3[3]);
        goto LAB_006816a3;
      }
      __CopyMan(&local_10,local_1c);
      __ShrMan(&local_10,iVar2 - iVar5);
      __RoundMan(&local_10,param_3[2]);
      __ShrMan(&local_10,param_3[3] + 1);
    }
  }
  iVar5 = 0;
  uVar3 = 2;
LAB_006816a5:
  local_10 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar3;
}

