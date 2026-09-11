/* spd-match: far pct=2.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;

int __cdecl FUN_00565b60();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb138;
extern int DAT_006cc430;

undefined4 FUN_0041d140(void)

{
  char cVar1;
  FILE *_File;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *unaff_ESI;
  char *pcVar5;
  int iVar6;
  int iStack_240;
  undefined1 *puStack_23c;
  char cStack_21d;
  char acStack_21c [20];
  undefined1 local_208 [240];
  undefined1 auStack_118 [280];
  
  puStack_23c = local_208;
  iVar4 = 0;
  iStack_240 = 0;
  SHGetFolderPathA(0,0x23,0);
  pcVar3 = &cStack_21d;
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  *(undefined4 *)(pcVar5 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar5 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar5 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar5 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar5 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  FUN_0067101f(auStack_118,"%s%s%s",acStack_21c,"Profiles",&DAT_006cb138);
  _File = (FILE *)FUN_00671541(auStack_118,&DAT_006cc430);
  if (_File == (FILE *)0x0) {
    unaff_ESI[1] = 1;
    iVar4 = FUN_00565b60(*unaff_ESI,0,0,0);
    unaff_ESI[3] = iVar4;
    unaff_ESI[2] = 0;
    return 0;
  }
  _fread(&iStack_240,4,1,_File);
  unaff_ESI[1] = iStack_240 + 1;
  iVar2 = FUN_00565b60(*unaff_ESI * (iStack_240 + 1),0,0,0);
  unaff_ESI[3] = iVar2;
  unaff_ESI[2] = iStack_240;
  if (0 < iStack_240) {
    do {
      _fread(&puStack_23c,0x20,1,_File);
      if (iVar4 < unaff_ESI[1]) {
        iVar2 = *unaff_ESI;
        pcVar3 = (char *)(iVar2 * iVar4 + unaff_ESI[3]);
        if (iVar2 != 0) {
          iVar6 = (int)&puStack_23c - (int)pcVar3;
          do {
            cVar1 = pcVar3[iVar6];
            iVar2 = iVar2 + -1;
            *pcVar3 = cVar1;
            if (cVar1 == '\0') break;
            pcVar3 = pcVar3 + 1;
          } while (iVar2 != 0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_240);
  }
  _fclose(_File);
  return 1;
}
