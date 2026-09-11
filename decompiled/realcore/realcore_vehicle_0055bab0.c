/* spd-match: far pct=4.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
int unaff_EBX;

void FUN_0055bab0(void)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  
  if ((((*(int *)(unaff_EBX + 0x44) != 0) && (DAT_007064b2 != '\0')) &&
      (cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
      cVar1 != '\0')) && (*(int *)(*(int *)(unaff_EBX + 0x44) + 0x10) == 0x70355aa6)) {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar2 = FUN_004ef050(0x7403711);
    }
    if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
      FUN_004f0700(0xc407210,*(undefined4 *)(unaff_EBX + 0x44),*(undefined4 *)(unaff_EBX + 0x48),
                   iVar2,0);
    }
  }
  return;
}
