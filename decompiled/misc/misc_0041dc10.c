/* spd-match: far pct=5.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2065_nfs */
#include "ghidra_compat.h"

typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;

int __cdecl FUN_0067101f();
extern int DAT_007588c4;
extern char stack0xfffffee7;
int unaff_ESI;

void FUN_0041dc10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int unaff_ESI;
  char *pcVar2;
  CHAR aCStack_118 [8];
  undefined1 *puStack_110;
  undefined1 local_104 [248];
  int iStack_c;
  
  puStack_110 = local_104;
  aCStack_118[4] = '\0';
  aCStack_118[5] = '\0';
  aCStack_118[6] = '\0';
  aCStack_118[7] = '\0';
  aCStack_118[0] = '\0';
  aCStack_118[1] = '\0';
  aCStack_118[2] = '\0';
  aCStack_118[3] = '\0';
  SHGetFolderPathA(0,0x23);
  pcVar1 = &stack0xfffffee7;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (pcVar2[1] != '\0');
  *(undefined4 *)(pcVar2 + 1) = s__NFS_Underground__006cb164._0_4_;
  *(undefined4 *)(pcVar2 + 5) = s__NFS_Underground__006cb164._4_4_;
  *(undefined4 *)(pcVar2 + 9) = s__NFS_Underground__006cb164._8_4_;
  *(undefined4 *)(pcVar2 + 0xd) = s__NFS_Underground__006cb164._12_4_;
  *(undefined2 *)(pcVar2 + 0x11) = s__NFS_Underground__006cb164._16_2_;
  CreateDirectoryA(aCStack_118,(LPSECURITY_ATTRIBUTES)0x0);
  if (unaff_ESI == 0) {
    if (iStack_c == -1) {
      FUN_0067101f(param_3,"%s%s%s%s",aCStack_118,&DAT_007588c4,"_autosave");
      return;
    }
  }
  else if (iStack_c == -1) {
    FUN_0067101f(param_3,"%s%s%s%s",aCStack_118);
    return;
  }
  FUN_0067101f(param_3,"%s%s%d%s",aCStack_118);
  return;
}
