/* spd-match: far pct=10.27 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041D770 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
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
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb124;
extern int DAT_006cc430;
extern int DAT_007588c4;
extern char stack0xfffffde0;
extern char stack0xfffffde3;
extern char stack0xfffffde4;
int unaff_EDI;
undefined4 __fastcall FUN_0041d770(size_t val, undefined4 param_1, void *param_2)

{
  char *pcVar1;

  FILE *_File;
  undefined1 *puVar2;
  int unaff_EDI;
  char *pcVar3;
  undefined1 *puStack_224;
  undefined1 local_208 [240];
  undefined1 auStack_118 [264];
  undefined4 uStack_10;
  
  puStack_224 = local_208;
  SHGetFolderPathA(0,0x23,0,0);
  pcVar1 = &stack0xfffffde3;
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
  FUN_0067101f(auStack_118,"%s%s%d%s",&stack0xfffffde4,&DAT_007588c4,0,&DAT_006cb124);
  _File = (FILE *)FUN_00671541(auStack_118,&DAT_006cc430);
  if (_File != (FILE *)0x0) {
    _fread(&stack0xfffffde0,4,1,_File);
    if (unaff_EDI == 1) {
      _fread(param_2,val,1,_File);
      _fread(&puStack_224,4,1,_File);
      puVar2 = (undefined1 *)FUN_0041dd10(uStack_10,param_2);
      if (puVar2 == puStack_224) {
        _fclose(_File);
        return 1;
      }
    }
    else {
      _fclose(_File);
    }
  }
  return 0;
}
