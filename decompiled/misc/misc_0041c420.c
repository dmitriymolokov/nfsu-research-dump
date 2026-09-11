/* spd-match: far pct=7.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;

int __cdecl FUN_00404bd0();
int __cdecl FUN_00404cc0();
extern int DAT_006cb15c;
extern int DAT_006cb160;
extern int DAT_00736228;
extern int DAT_00736230;
extern void LAB_00685e9e(void);
void *ExceptionList;

void FUN_0041c420(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  HANDLE hFindFile;
  void *pvVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  _WIN32_FIND_DATAA _Stack_14c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar9 = DAT_00736228;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00685e9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00736228 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00404cc0(DAT_00736228);
    _free(pvVar9);
    DAT_00736228 = (void *)0x0;
  }
  if (param_1 != (char *)0x0) {
    SHGetFolderPathA(0,0x8023,0,0,&DAT_00736230);
    uVar4 = s__NFS_Underground__006cb164._8_4_;
    uVar3 = s__NFS_Underground__006cb164._4_4_;
    pcVar8 = (char *)0x73622f;
    do {
      pcVar12 = pcVar8;
      pcVar8 = pcVar12 + 1;
    } while (pcVar12[1] != '\0');
    *(undefined4 *)(pcVar12 + 1) = s__NFS_Underground__006cb164._0_4_;
    uVar5 = s__NFS_Underground__006cb164._12_4_;
    *(undefined4 *)(pcVar12 + 5) = uVar3;
    uVar6 = s__NFS_Underground__006cb164._16_2_;
    *(undefined4 *)(pcVar12 + 9) = uVar4;
    *(undefined4 *)(pcVar12 + 0xd) = uVar5;
    *(undefined2 *)(pcVar12 + 0x11) = uVar6;
    CreateDirectoryA(&DAT_00736230,(LPSECURITY_ATTRIBUTES)0x0);
    pcVar8 = param_1;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar12 = (char *)0x73622f;
    do {
      pcVar11 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = param_1;
    for (uVar10 = (uint)((int)pcVar8 - (int)param_1) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar10 = (int)pcVar8 - (int)param_1 & 3; uVar2 = DAT_006cb160, uVar10 != 0;
        uVar10 = uVar10 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    puVar7 = (undefined4 *)0x73622f;
    do {
      puVar13 = puVar7;
      puVar7 = (undefined4 *)((int)puVar13 + 1);
    } while (*(char *)((int)puVar13 + 1) != '\0');
    *(undefined4 *)((int)puVar13 + 1) = DAT_006cb15c;
    *(undefined1 *)((int)puVar13 + 5) = uVar2;
    hFindFile = FindFirstFileA(&DAT_00736230,&_Stack_14c);
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
      pvVar9 = _malloc(0x44);
      uStack_4 = 0;
      if (pvVar9 == (void *)0x0) {
        DAT_00736228 = (void *)0x0;
      }
      else {
        DAT_00736228 = (void *)FUN_00404bd0(&DAT_00736230,0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}
