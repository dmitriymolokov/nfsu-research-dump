/* spd-match: far pct=13.30 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004149d0();
int __cdecl FUN_004c96c0();
int __cdecl FUN_004f6540();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
int unaff_ESI;

void FUN_004f7d30(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  if ((*(char *)(unaff_ESI + 0x20) != '\0') &&
     ((iVar4 = FUN_004f65d0(), iVar4 == 0 || (*(int *)(iVar4 + 0x1c) != 0)))) {
    fVar1 = (float)(unsigned int)(DAT_0070649c + -0x140);
    fVar2 = (float)(unsigned int)(DAT_007064a0 + -0xf0);
    if (DAT_007064b2 != '\0') {
      if ((*(int *)(unaff_ESI + 0x28) != 0) && (*(int *)(unaff_ESI + 0x2c) != 0)) {
        cVar3 = FUN_004f7660(fVar1,fVar2);
        if (cVar3 != '\0') {
          FUN_004c96c0(0x9120409e);
          iVar4 = FUN_004149d0();
          iVar5 = FUN_004f65d0();
          if ((iVar5 != 0) && (iVar4 != 0)) {
            FUN_004f6540(0xd51d9c13,iVar4);
          }
        }
        cVar3 = FUN_004f7660(fVar1,fVar2);
        if (cVar3 != '\0') {
          FUN_004c96c0(0xb5971bf1);
          iVar4 = FUN_004149d0();
          iVar5 = FUN_004f65d0();
          if ((iVar5 != 0) && (iVar4 != 0)) {
            FUN_004f6540(0x793fe606,iVar4);
          }
        }
      }
      if ((*(int *)(unaff_ESI + 0x34) != 0) && (*(int *)(unaff_ESI + 0x30) != 0)) {
        cVar3 = FUN_004f7660(fVar1,fVar2);
        if (cVar3 != '\0') {
          FUN_004c96c0(0x72619778);
        }
        cVar3 = FUN_004f7660(fVar1,fVar2);
        if (cVar3 != '\0') {
          FUN_004c96c0(0x911c0a4b);
        }
      }
    }
  }
  return;
}
