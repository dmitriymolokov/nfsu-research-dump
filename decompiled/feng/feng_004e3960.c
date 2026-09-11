/* spd-match: far pct=4.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern int DAT_00746104;
extern void LAB_004e3a47(void);
int unaff_ESI;

void FUN_004e3960(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar5 = (int *)(unaff_ESI + 0x40);
  iVar4 = 3;
  do {
    if ((*piVar5 != 0) && (DAT_007064b2 != '\0')) {
      cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if (cVar1 != '\0') {
        iVar2 = *(int *)(*piVar5 + 0x10);
        if (iVar2 == -0x7f4b4301) {
          iVar2 = FUN_004f3f90(&DAT_00746104);
          if (((iVar2 != 0) && (iVar7 = *(int *)(iVar2 + 0x18), iVar7 != 0)) &&
             (piVar3 = *(int **)(iVar2 + 0x14), piVar3 != (int *)0x0)) {
            uVar6 = 0xc519bfc0;
LAB_004e3a47:
            (**(code **)(*piVar3 + 8))(uVar6,0,0,iVar7);
          }
        }
        else if (iVar2 == -0x25691071) {
          iVar2 = FUN_004f3f90(&DAT_00746104);
          if (((iVar2 != 0) && (iVar7 = *(int *)(iVar2 + 0x18), iVar7 != 0)) &&
             (piVar3 = *(int **)(iVar2 + 0x14), piVar3 != (int *)0x0)) {
            uVar6 = 0xc519bfc1;
            goto LAB_004e3a47;
          }
        }
        else if (iVar2 == -0x2565c62b) {
          FUN_004c96c0(0xc519bfc2);
        }
      }
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}
