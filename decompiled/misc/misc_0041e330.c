/* spd-match: far pct=11.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

int __cdecl FUN_0041dd10();
int __cdecl FUN_004aac70();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb0f0;
extern int DAT_006cc430;
extern int DAT_007588c4;
extern char stack0xfffffde4;

void FUN_0041e330(void)

{
  char *pcVar1;
  FILE *_File;
  void *_DstBuf;
  int iVar2;
  char *pcVar3;
  int iStack_224;
  undefined4 uStack_220;
  undefined1 local_208 [240];
  undefined1 auStack_118 [264];
  undefined4 uStack_10;
  
  uStack_220 = local_208;
  iStack_224 = 0;
  SHGetFolderPathA(0,0x23,0);
  pcVar1 = (char *)((int)&uStack_220 + 3);
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  *(undefined4 *)(pcVar3 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar3 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar3 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar3 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar3 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(&stack0xfffffde4,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0067101f(auStack_118,"%s%s%s",&stack0xfffffde4,&DAT_007588c4,&DAT_006cb0f0);
  _File = (FILE *)FUN_00671541(auStack_118,&DAT_006cc430);
  if (_File != (FILE *)0x0) {
    _fread(&uStack_220,4,1,_File);
    if (uStack_220 == (undefined1 *)0x13) {
      _DstBuf = _malloc(0x2e5);
      _fread(_DstBuf,0x2e5,1,_File);
      _fread(&iStack_224,4,1,_File);
      iVar2 = FUN_0041dd10(uStack_10,_DstBuf);
      if (iVar2 != iStack_224) {
        _fclose(_File);
        _free(_DstBuf);
        return;
      }
      _fclose(_File);
      FUN_004aac70(1);
      _free(_DstBuf);
      return;
    }
    _fclose(_File);
  }
  return;
}
