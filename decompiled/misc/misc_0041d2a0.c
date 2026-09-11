/* spd-match: far pct=3.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;

int __cdecl FUN_0041d140();
int __cdecl FUN_00565ce0();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb138;
extern int DAT_006cc3d4;
extern void LAB_0041d4e5(void);
extern char stack0xfffffbbc;
extern char stack0xfffffbc4;

undefined4 FUN_0041d2a0(undefined4 param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *_Memory;
  int iVar4;
  int iVar5;
  FILE *_File;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int local_42c;
  char local_408 [235];
  char cStack_31d;
  CHAR aCStack_31c [20];
  undefined1 local_308 [260];
  byte local_204 [236];
  undefined1 auStack_118 [280];
  
  _Memory = _malloc(0x10);
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
  bVar2 = false;
  local_42c = 0;
  if (0 < _Memory[2]) {
    do {
      if (local_42c < _Memory[1]) {
        iVar8 = *_Memory;
        iVar13 = _Memory[3];
        iVar4 = iVar8 * local_42c;
        if (iVar8 != 0) {
          pbVar10 = local_204;
          do {
            bVar7 = pbVar10[(iVar4 + iVar13) - (int)local_204];
            iVar8 = iVar8 + -1;
            *pbVar10 = bVar7;
            if (bVar7 == 0) break;
            pbVar10 = pbVar10 + 1;
          } while (iVar8 != 0);
        }
      }
      pbVar10 = local_204;
      pbVar11 = param_2;
      do {
        bVar7 = *pbVar10;
        if (('`' < (char)bVar7) && ((char)bVar7 < '{')) {
          bVar7 = bVar7 & 0x5f;
        }
        bVar3 = *pbVar11;
        pbVar10 = pbVar10 + 1;
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 & 0x5f;
        }
        pbVar11 = pbVar11 + 1;
      } while (((bVar7 != 0) && (bVar3 != 0)) && (bVar7 == bVar3));
      if (bVar7 == bVar3) {
        bVar2 = true;
        iVar8 = local_42c;
joined_r0x0041d372:
        iVar13 = iVar8;
        if (0 < iVar13) {
          iVar4 = _Memory[1];
          iVar8 = iVar13 + -1;
          if (iVar8 < iVar4) {
            iVar9 = *_Memory;
            iVar6 = _Memory[3];
            iVar5 = iVar9 * iVar8;
            if (iVar9 != 0) {
              pcVar12 = local_408;
              do {
                cVar1 = pcVar12[(iVar5 + iVar6) - (int)local_408];
                iVar9 = iVar9 + -1;
                *pcVar12 = cVar1;
                if (cVar1 == '\0') break;
                pcVar12 = pcVar12 + 1;
              } while (iVar9 != 0);
            }
          }
          if (iVar13 < iVar4) {
            iVar4 = *_Memory;
            pcVar12 = (char *)(iVar4 * iVar13 + _Memory[3]);
            if (iVar4 != 0) {
              iVar13 = -(int)pcVar12;
              do {
                cVar1 = pcVar12[(int)(local_408 + iVar13)];
                iVar4 = iVar4 + -1;
                *pcVar12 = cVar1;
                if (cVar1 == '\0') break;
                pcVar12 = pcVar12 + 1;
              } while (iVar4 != 0);
            }
          }
          goto joined_r0x0041d372;
        }
        if (0 < _Memory[1]) {
          iVar8 = *_Memory;
          pcVar12 = (char *)_Memory[3];
          if (iVar8 != 0) {
            iVar13 = -(int)pcVar12;
            do {
              cVar1 = pcVar12[(int)(local_204 + iVar13)];
              iVar8 = iVar8 + -1;
              *pcVar12 = cVar1;
              if (cVar1 == '\0') break;
              pcVar12 = pcVar12 + 1;
            } while (iVar8 != 0);
          }
        }
      }
      local_42c = local_42c + 1;
    } while (local_42c < _Memory[2]);
    if (bVar2) goto LAB_0041d4e5;
  }
  iVar8 = _Memory[2];
  _Memory[2] = iVar8 + 1;
  iVar13 = iVar8;
  for (; 0 < iVar8; iVar8 = iVar8 + -1) {
    iVar13 = iVar13 + -1;
    iVar4 = _Memory[1];
    if (iVar13 < iVar4) {
      iVar9 = *_Memory;
      iVar6 = _Memory[3];
      iVar5 = iVar9 * iVar13;
      if (iVar9 != 0) {
        pcVar12 = local_408;
        do {
          cVar1 = pcVar12[(iVar5 + iVar6) - (int)local_408];
          iVar9 = iVar9 + -1;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (iVar9 != 0);
      }
    }
    if (iVar8 < iVar4) {
      iVar4 = *_Memory;
      pcVar12 = (char *)(iVar4 * iVar8 + _Memory[3]);
      if (iVar4 != 0) {
        iVar9 = -(int)pcVar12;
        do {
          cVar1 = pcVar12[(int)(local_408 + iVar9)];
          iVar4 = iVar4 + -1;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (iVar4 != 0);
      }
    }
  }
  if (0 < _Memory[1]) {
    iVar8 = *_Memory;
    pcVar12 = (char *)_Memory[3];
    if (iVar8 != 0) {
      iVar13 = (int)param_2 - (int)pcVar12;
      do {
        cVar1 = pcVar12[iVar13];
        iVar8 = iVar8 + -1;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (iVar8 != 0);
    }
  }
LAB_0041d4e5:
  SHGetFolderPathA(0,0x23,0,0,local_308);
  pcVar12 = &cStack_31d;
  do {
    pcVar14 = pcVar12;
    pcVar12 = pcVar14 + 1;
  } while (pcVar14[1] != '\0');
  *(undefined4 *)(pcVar14 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar14 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar14 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar14 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar14 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(aCStack_31c,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0067101f(auStack_118,"%s%s%s",aCStack_31c,"Profiles",&DAT_006cb138);
  _File = (FILE *)FUN_00671541(auStack_118,&DAT_006cc3d4);
  if (_File == (FILE *)0x0) {
    if (_Memory[3] != 0) {
      FUN_00565ce0();
    }
    _free(_Memory);
    return 0;
  }
  iVar8 = _Memory[2];
  _fwrite(&stack0xfffffbbc,4,1,_File);
  iVar13 = 0;
  if (0 < iVar8) {
    do {
      if (iVar13 < _Memory[1]) {
        iVar4 = *_Memory;
        iVar9 = _Memory[3];
        iVar6 = iVar4 * iVar13;
        if (iVar4 != 0) {
          pcVar12 = &stack0xfffffbc4;
          do {
            cVar1 = pcVar12[(iVar6 + iVar9) - (int)&stack0xfffffbc4];
            iVar4 = iVar4 + -1;
            *pcVar12 = cVar1;
            if (cVar1 == '\0') break;
            pcVar12 = pcVar12 + 1;
          } while (iVar4 != 0);
        }
      }
      _fwrite(&stack0xfffffbc4,0x20,1,_File);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar8);
  }
  if (_Memory[3] != 0) {
    FUN_00565ce0();
  }
  _free(_Memory);
  _fclose(_File);
  return 1;
}
