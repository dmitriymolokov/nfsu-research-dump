/* spd-match: far pct=4.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

int __cdecl FUN_0041d140();
int __cdecl FUN_0041dc10();
int __cdecl m375_fun_006725f7(char *);
int __cdecl FUN_00565ce0();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb0f0;
extern int DAT_006cb124;
extern int DAT_006cb138;
extern int DAT_006cb15c;
extern int DAT_006cc3d4;
extern int DAT_007588c4;

typedef struct {
  unsigned int _0_4_;
  unsigned int _4_4_;
  unsigned int _8_4_;
  unsigned int _12_4_;
  unsigned short _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef void *LPWIN32_FIND_DATAA;

undefined4 FUN_0041dd60(undefined4 param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int *_Memory;
  int iVar4;
  FILE *_File;
  HANDLE pvVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int local_474;
  int local_470;
  char acStack_46c [11];
  char cStack_461;
  CHAR aCStack_460 [19];
  char cStack_44d;
  byte local_44c [220];
  CHAR aCStack_370 [20];
  CHAR aCStack_35c [239];
  char cStack_26d;
  CHAR aCStack_26c [20];
  undefined1 auStack_258 [240];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [320];
  
  _Memory = _malloc(0x10);
  iVar11 = 0;
  if (_Memory == (int *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    *_Memory = 0x20;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
  }
  FUN_0041d140(param_1);
  local_470 = _Memory[2];
  local_474 = -1;
  if (0 < _Memory[2]) {
    do {
      if (iVar11 < _Memory[1]) {
        iVar7 = *_Memory;
        iVar2 = _Memory[3];
        iVar4 = iVar7 * iVar11;
        if (iVar7 != 0) {
          pbVar8 = local_44c;
          do {
            bVar6 = pbVar8[(iVar4 + iVar2) - (int)local_44c];
            iVar7 = iVar7 + -1;
            *pbVar8 = bVar6;
            if (bVar6 == 0) break;
            pbVar8 = pbVar8 + 1;
          } while (iVar7 != 0);
        }
      }
      pbVar8 = local_44c;
      pbVar9 = param_2;
      do {
        bVar6 = *pbVar8;
        if (('`' < (char)bVar6) && ((char)bVar6 < '{')) {
          bVar6 = bVar6 & 0x5f;
        }
        bVar3 = *pbVar9;
        pbVar8 = pbVar8 + 1;
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 & 0x5f;
        }
        pbVar9 = pbVar9 + 1;
      } while (((bVar6 != 0) && (bVar3 != 0)) && (bVar6 == bVar3));
      if (bVar6 == bVar3) {
        local_470 = local_470 + -1;
        local_474 = iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < _Memory[2]);
    if (local_474 != -1) {
      SHGetFolderPathA(0,0x23,0,0,local_44c);
      pcVar10 = &cStack_44d;
      do {
        pcVar12 = pcVar10;
        pcVar10 = pcVar12 + 1;
      } while (pcVar12[1] != '\0');
      *(undefined4 *)(pcVar12 + 1) = s__NFS_Underground__006cb164._0_4_;
      *(undefined4 *)(pcVar12 + 5) = s__NFS_Underground__006cb164._4_4_;
      *(undefined4 *)(pcVar12 + 9) = s__NFS_Underground__006cb164._8_4_;
      *(undefined4 *)(pcVar12 + 0xd) = s__NFS_Underground__006cb164._12_4_;
      *(undefined2 *)(pcVar12 + 0x11) = s__NFS_Underground__006cb164._16_2_;
      CreateDirectoryA((LPCSTR)local_44c,(LPSECURITY_ATTRIBUTES)0x0);
      FUN_0067101f(auStack_140,"%s%s%s",local_44c,"Profiles",&DAT_006cb138);
      _File = (FILE *)FUN_00671541(auStack_140,&DAT_006cc3d4);
      if (_File == (FILE *)0x0) {
        if (_Memory[3] != 0) {
          FUN_00565ce0();
        }
        _free(_Memory);
        return 0;
      }
      _fwrite(&local_470,4,1,_File);
      iVar11 = 0;
      if (0 < _Memory[2]) {
        do {
          if (iVar11 != local_474) {
            if (iVar11 < _Memory[1]) {
              iVar7 = *_Memory;
              iVar2 = _Memory[3];
              iVar4 = iVar7 * iVar11;
              if (iVar7 != 0) {
                pcVar10 = acStack_46c;
                do {
                  cVar1 = pcVar10[(iVar4 + iVar2) - (int)acStack_46c];
                  iVar7 = iVar7 + -1;
                  *pcVar10 = cVar1;
                  if (cVar1 == '\0') break;
                  pcVar10 = pcVar10 + 1;
                } while (iVar7 != 0);
              }
            }
            _fwrite(acStack_46c,0x20,1,_File);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < _Memory[2]);
      }
      if (_Memory[3] != 0) {
        FUN_00565ce0();
      }
      _free(_Memory);
      _fclose(_File);
    }
  }
  iVar11 = -1;
  do {
    FUN_0041dc10(param_1,iVar11,local_44c);
    pvVar5 = FindFirstFileA((LPCSTR)local_44c,(LPWIN32_FIND_DATAA)auStack_140);
    if (pvVar5 != (HANDLE)0xffffffff) {
      FindClose(pvVar5);
      iVar7 = m375_fun_006725f7((char *)local_44c);
      if (iVar7 == -1) {
        return 0;
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  SHGetFolderPathA(0,0x23,0,0,local_44c);
  pcVar10 = &cStack_461;
  do {
    pcVar12 = pcVar10;
    pcVar10 = pcVar12 + 1;
  } while (pcVar12[1] != '\0');
  *(undefined4 *)(pcVar12 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar12 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar12 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar12 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar12 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(aCStack_460,(LPSECURITY_ATTRIBUTES)0x0);
  puVar13 = (undefined1 *)(*(unsigned int *)((char *)&auStack_140 + 308));
  if ((undefined1 *)(*(unsigned int *)((char *)&auStack_140 + 308)) == (undefined1 *)0x0) {
    puVar13 = &DAT_007588c4;
  }
  FUN_0067101f(aCStack_35c,"%s%s%d%s",aCStack_460,puVar13,0,&DAT_006cb124);
  pvVar5 = FindFirstFileA(aCStack_35c,(LPWIN32_FIND_DATAA)(auStack_168 + 0x14));
  if (pvVar5 != (HANDLE)0xffffffff) {
    FindClose(pvVar5);
    iVar11 = m375_fun_006725f7((char *)aCStack_35c);
    if (iVar11 == -1) {
      return 0;
    }
  }
  SHGetFolderPathA(0,0x23,0,0,auStack_258);
  pcVar10 = &cStack_26d;
  do {
    pcVar12 = pcVar10;
    pcVar10 = pcVar12 + 1;
  } while (pcVar12[1] != '\0');
  *(undefined4 *)(pcVar12 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar12 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar12 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar12 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar12 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(aCStack_26c,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0067101f(aCStack_370,"%s%s%s",aCStack_26c,(char *)(*(unsigned int *)((char *)&auStack_140 + 308)),&DAT_006cb15c);
  pvVar5 = FindFirstFileA(aCStack_370,(LPWIN32_FIND_DATAA)auStack_168);
  if (pvVar5 != (HANDLE)0xffffffff) {
    FindClose(pvVar5);
    iVar11 = m375_fun_006725f7((char *)aCStack_370);
    if (iVar11 == -1) {
      return 0;
    }
  }
  FUN_0067101f(aCStack_370,"%s%s%s",aCStack_26c,(char *)(*(unsigned int *)((char *)&auStack_140 + 308)),&DAT_006cb0f0);
  pvVar5 = FindFirstFileA(aCStack_370,(LPWIN32_FIND_DATAA)auStack_168);
  if (pvVar5 != (HANDLE)0xffffffff) {
    FindClose(pvVar5);
    iVar11 = m375_fun_006725f7((char *)aCStack_370);
    if (iVar11 == -1) {
      return 0;
    }
  }
  return 1;
}
