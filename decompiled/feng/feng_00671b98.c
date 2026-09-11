/* Decompiled from Speed.exe @ 00671b98 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __ftell_lk
   
   Library: Visual Studio 2003 Release */

int __ftell_lk(uint *param_1)

{
  uint _FileHandle;
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  puVar3 = param_1;
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_8 = __lseek(_FileHandle,0,1);
  if (local_8 < 0) {
LAB_00671c35:
    local_c = -1;
  }
  else {
    uVar1 = param_1[3];
    if ((uVar1 & 0x108) == 0) {
      return local_8 - param_1[1];
    }
    pcVar5 = (char *)*param_1;
    pcVar7 = (char *)param_1[2];
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        puVar4 = (undefined4 *)FUN_00677f42();
        *puVar4 = 0x16;
        goto LAB_00671c35;
      }
    }
    else if (((*(byte *)((&DAT_00793240)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) &
              0x80) != 0) && (pcVar8 = pcVar7, pcVar7 < pcVar5)) {
      do {
        if (*pcVar8 == '\n') {
          local_c = local_c + 1;
        }
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < (char *)*param_1);
    }
    if (local_8 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (param_1[1] - (int)pcVar7);
          iVar9 = (_FileHandle & 0x1f) * 0x24;
          if ((*(byte *)(iVar9 + 4 + (&DAT_00793240)[(int)_FileHandle >> 5]) & 0x80) != 0) {
            lVar6 = __lseek(_FileHandle,0,2);
            if (lVar6 == local_8) {
              pcVar7 = (char *)param_1[2];
              pcVar8 = pcVar7 + (int)pcVar5;
              param_1 = (uint *)pcVar5;
              for (; pcVar7 < pcVar8; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = (uint *)((int)param_1 + 1);
                }
              }
              bVar2 = *(byte *)((int)puVar3 + 0xd) & 0x20;
            }
            else {
              __lseek(_FileHandle,local_8,0);
              pcVar7 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((param_1[3] & 8) == 0)) ||
                 ((param_1[3] & 0x400) != 0)) {
                pcVar7 = (char *)param_1[6];
              }
              bVar2 = *(byte *)(iVar9 + 4 + (&DAT_00793240)[(int)_FileHandle >> 5]) & 4;
              param_1 = (uint *)pcVar7;
            }
            pcVar5 = (char *)param_1;
            if (bVar2 != 0) {
              pcVar5 = (char *)((int)param_1 + 1);
            }
          }
          param_1 = (uint *)pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}

