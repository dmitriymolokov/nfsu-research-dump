/* spd-match: far pct=4.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_17/attempt2_no_code */
#include "ghidra_compat.h"

typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

extern unsigned char *DAT_006b5150;
extern unsigned char *DAT_006b51c8;
extern unsigned char *DAT_006b51ca;
extern unsigned char *DAT_006b51cc;
extern unsigned char *DAT_006b51ce;

char * __getextendedkeycode(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 0x100) == 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 8);
    if ((uVar1 & 3) == 0) {
      if ((uVar1 & 0xc) == 0) {
        if ((uVar1 & 0x10) == 0) {
          pcVar2 = &DAT_006b51c8 + uVar4 * 8;
        }
        else {
          pcVar2 = &DAT_006b51ca + uVar4 * 8;
        }
      }
      else {
        pcVar2 = &DAT_006b51cc + uVar4 * 8;
      }
    }
    else {
      pcVar2 = &DAT_006b51ce + uVar4 * 8;
    }
    if (((*pcVar2 != '\0') && (*pcVar2 != -0x20)) || (pcVar2[1] == '\0')) {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = (char *)0x0;
    iVar3 = 0;
    uVar4 = 0;
    do {
      if (*(short *)((int)&DAT_006b5150 + uVar4) == *(short *)(param_1 + 8)) {
        if ((uVar1 & 3) != 0) {
          return ((char *)0x006b5158) + iVar3 * 10;
        }
        if ((uVar1 & 0xc) != 0) {
          return ((char *)0x006b5156) + iVar3 * 10;
        }
        if ((uVar1 & 0x10) != 0) {
          return ((char *)0x006b5154) + iVar3 * 10;
        }
        return ((char *)0x006b5152) + iVar3 * 10;
      }
      uVar4 = uVar4 + 10;
      iVar3 = iVar3 + 1;
    } while (uVar4 < 0x78);
  }
  return pcVar2;
}
