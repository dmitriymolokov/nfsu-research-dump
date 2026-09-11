/* Decompiled from Speed.exe @ 005f672a */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005f672a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint local_24;
  short local_1e;
  short local_1c;
  int local_10;
  uint *local_c;
  int *local_8;
  
  iVar1 = param_1;
  if (param_2 == 0) {
    iVar1 = FUN_005f57dd(&param_1);
    if (((iVar1 < 0) || (*(uint *)(param_1 + 0xc) <= param_3)) || (0xfffd < param_3)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_3 + 1;
    }
  }
  else {
    iVar2 = FUN_005f57fd(param_2,&local_c,&param_2,0);
    if (((-1 < iVar2) && (param_3 < *(ushort *)(param_2 + 10))) &&
       (*(int *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 10) * 8 <= *(uint *)(iVar1 + 8))) {
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar3 = *(int *)(param_2 + 0xc) + iVar1;
      puVar4 = local_c;
      puVar5 = &local_24;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar6 = 0;
      local_8 = (int *)(iVar3 + 4);
      local_10 = iVar3;
      if (*local_8 != 0) {
        while (*local_8 + 0x10U <= *(uint *)(param_1 + 8)) {
          iVar2 = *local_8 + iVar1;
          param_2 = iVar2;
          local_1c = FUN_005f573e(&local_24,iVar2);
          local_1c = local_1c * *(short *)(iVar2 + 8);
          if (uVar6 == param_3) {
            local_24 = *(uint *)(local_10 + uVar6 * 8);
            if ((local_24 != 0) && (local_24 < *(uint *)(param_1 + 8))) {
              iVar1 = FUN_005f5941(&local_24,iVar2);
              return iVar1;
            }
            break;
          }
          local_1e = local_1e + local_1c;
          local_8 = local_8 + 2;
          uVar6 = uVar6 + 1;
          if (*local_8 == 0) break;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

