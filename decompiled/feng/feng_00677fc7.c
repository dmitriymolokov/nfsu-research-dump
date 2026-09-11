/* Decompiled from Speed.exe @ 00677fc7 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00677fc7(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint unaff_retaddr;
  char local_424 [1028];
  DWORD local_20;
  int local_1c;
  DWORD local_18;
  char *local_14;
  int local_10;
  ulong local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  local_18 = 0;
  local_1c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_00793240 + ((int)param_1 >> 5);
  iVar8 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar1 + 4 + iVar8) & 0x20) != 0) {
    __lseeki64_lk(param_1,0,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + iVar8) + 1) & 0x80) == 0) {
    BVar5 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),param_2,param_3,&local_20,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      local_c = GetLastError();
    }
    else {
      local_c = 0;
      local_18 = local_20;
    }
LAB_006780c9:
    if (local_18 != 0) {
      return local_18 - local_1c;
    }
    if (local_c != 0) {
      if (local_c == 5) {
        puVar6 = (undefined4 *)FUN_00677f42();
        *puVar6 = 9;
        puVar6 = (undefined4 *)FUN_00677f4b();
        *puVar6 = 5;
        return -1;
      }
      __dosmaperr(local_c);
      return -1;
    }
  }
  else {
    local_14 = param_2;
    local_c = 0;
    if (param_3 != 0) {
      do {
        uVar7 = (int)local_14 - (int)param_2;
        pcVar4 = local_424;
        local_10 = 0;
        do {
          if (param_3 <= uVar7) break;
          pcVar2 = local_14 + 1;
          cVar3 = *local_14;
          uVar7 = uVar7 + 1;
          local_14 = pcVar2;
          if (cVar3 == '\n') {
            local_1c = local_1c + 1;
            *pcVar4 = '\r';
            pcVar4 = pcVar4 + 1;
            local_10 = local_10 + 1;
          }
          *pcVar4 = cVar3;
          pcVar4 = pcVar4 + 1;
          local_10 = local_10 + 1;
        } while (local_10 < 0x400);
        BVar5 = WriteFile(*(HANDLE *)(*piVar1 + iVar8),local_424,(int)pcVar4 - (int)local_424,
                          &local_20,(LPOVERLAPPED)0x0);
        if (BVar5 == 0) {
          local_c = GetLastError();
          goto LAB_006780c9;
        }
        local_18 = local_18 + local_20;
        if (((int)local_20 < (int)pcVar4 - (int)local_424) ||
           (param_3 <= (uint)((int)local_14 - (int)param_2))) goto LAB_006780c9;
      } while( true );
    }
  }
  if (((*(byte *)(*piVar1 + 4 + iVar8) & 0x40) != 0) && (*param_2 == '\x1a')) {
    return 0;
  }
  puVar6 = (undefined4 *)FUN_00677f42();
  *puVar6 = 0x1c;
  puVar6 = (undefined4 *)FUN_00677f4b();
  *puVar6 = 0;
  return -1;
}

