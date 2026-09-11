/* spd-match: far pct=11.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f0700();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;

void FUN_004d6690(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x54);
  iVar3 = 5;
  do {
    if ((piVar4[-5] != 0) && (DAT_007064b2 != '\0')) {
      cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if ((cVar1 != '\0') && ((*(byte *)(piVar4[-5] + 0x1c) & 1) == 0)) {
        uVar2 = FUN_004f65d0();
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xc407210,piVar4[-5],uVar2,piVar4[-5],0);
        }
      }
    }
    if ((*piVar4 != 0) && (DAT_007064b2 != '\0')) {
      cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if ((cVar1 != '\0') && ((*(byte *)(*piVar4 + 0x1c) & 1) == 0)) {
        uVar2 = FUN_004f65d0();
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xc407210,*piVar4,uVar2,*piVar4,0);
        }
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
