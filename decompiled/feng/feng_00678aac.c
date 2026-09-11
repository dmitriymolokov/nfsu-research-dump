/* Decompiled from Speed.exe @ 00678aac */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_00678aac(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_00793240 + ((int)param_1 >> 5);
    iVar10 = (param_1 & 0x1f) * 0x24;
    bVar5 = *(byte *)(*piVar1 + iVar10 + 4);
    if ((bVar5 & 2) == 0) {
      pcVar9 = param_2;
      if (((bVar5 & 0x48) != 0) && (cVar4 = *(char *)(*piVar1 + iVar10 + 5), cVar4 != '\n')) {
        param_3 = (char *)((int)param_3 - 1);
        *param_2 = cVar4;
        pcVar9 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar10) = 10;
      }
      BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar10),pcVar9,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        if (DVar7 == 5) {
          puVar8 = (undefined4 *)FUN_00677f42();
          *puVar8 = 9;
          puVar8 = (undefined4 *)FUN_00677f4b();
          *puVar8 = 5;
        }
        else {
          if (DVar7 == 0x6d) {
            return 0;
          }
          __dosmaperr(DVar7);
        }
        return -1;
      }
      pbVar2 = (byte *)(*piVar1 + 4 + iVar10);
      bVar5 = *pbVar2;
      if (-1 < (char)bVar5) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar5 = bVar5 & 0xfb;
      }
      else {
        bVar5 = bVar5 | 4;
      }
      *pbVar2 = bVar5;
      local_c = param_2 + (int)local_c + local_10;
      param_3 = param_2;
      pcVar9 = param_2;
      if (param_2 < local_c) {
        do {
          cVar4 = *param_3;
          if (cVar4 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar10);
            bVar5 = *pbVar2;
            if ((bVar5 & 0x40) == 0) {
              *pbVar2 = bVar5 | 2;
            }
            break;
          }
          if (cVar4 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                pcVar3 = param_3 + 2;
                goto LAB_00678c2b;
              }
LAB_00678c45:
              param_3 = param_3 + 1;
              *pcVar9 = '\r';
            }
            else {
              pcVar3 = param_3 + 1;
              BVar6 = ReadFile(*(HANDLE *)(*piVar1 + iVar10),&local_5,1,&local_10,(LPOVERLAPPED)0x0)
              ;
              if (((BVar6 == 0) && (DVar7 = GetLastError(), DVar7 != 0)) || (local_10 == 0))
              goto LAB_00678c45;
              if ((*(byte *)(*piVar1 + 4 + iVar10) & 0x48) == 0) {
                if ((pcVar9 == param_2) && (local_5 == '\n')) goto LAB_00678c2b;
                __lseek_lk(param_1,0xffffffff,1);
                if (local_5 == '\n') goto LAB_00678c49;
                goto LAB_00678c45;
              }
              if (local_5 == '\n') {
LAB_00678c2b:
                param_3 = pcVar3;
                *pcVar9 = '\n';
              }
              else {
                *pcVar9 = '\r';
                *(char *)(*piVar1 + 5 + iVar10) = local_5;
                param_3 = pcVar3;
              }
            }
            pcVar9 = pcVar9 + 1;
            pcVar3 = param_3;
          }
          else {
            *pcVar9 = cVar4;
            pcVar9 = pcVar9 + 1;
            pcVar3 = param_3 + 1;
          }
LAB_00678c49:
          param_3 = pcVar3;
        } while (param_3 < local_c);
      }
      return (int)pcVar9 - (int)param_2;
    }
  }
  return 0;
}

