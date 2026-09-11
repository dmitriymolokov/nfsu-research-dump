/* spd-match: far pct=11.32 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;

int __cdecl FUN_0041dd10();
int __cdecl FUN_004aaad0();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb0f0;
extern int DAT_006cc3d4;
extern int DAT_007588c4;

void FUN_0041e200(void)

{
  char *pcVar1;
  FILE *_File;
  void *_Str;
  char *pcVar2;
  undefined4 uStack_224;
  undefined4 uStack_220;
  CHAR aCStack_21c [4];
  undefined1 *puStack_218;
  undefined1 local_208 [240];
  undefined1 auStack_118 [264];
  undefined4 uStack_10;
  
  puStack_218 = local_208;
  aCStack_21c[0] = '\0';
  aCStack_21c[1] = '\0';
  aCStack_21c[2] = '\0';
  aCStack_21c[3] = '\0';
  uStack_220 = 0;
  uStack_224 = 0x23;
  SHGetFolderPathA(0);
  pcVar1 = (char *)((int)&uStack_220 + 3);
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (pcVar2[1] != '\0');
  *(undefined4 *)(pcVar2 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar2 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar2 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar2 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar2 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(aCStack_21c,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0067101f(auStack_118,"%s%s%s",aCStack_21c,&DAT_007588c4,&DAT_006cb0f0);
  _File = (FILE *)FUN_00671541(auStack_118,&DAT_006cc3d4);
  if (_File != (FILE *)0x0) {
    uStack_220 = 0x13;
    _fwrite(&uStack_220,4,1,_File);
    _Str = _malloc(0x2e5);
    FUN_004aaad0(0x2e5);
    _fwrite(_Str,0x2e5,1,_File);
    uStack_224 = FUN_0041dd10(uStack_10,_Str);
    _fwrite(&uStack_224,4,1,_File);
    _free(_Str);
    _fclose(_File);
  }
  return;
}
