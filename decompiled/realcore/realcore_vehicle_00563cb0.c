/* spd-match: far pct=6.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_00563d3e(void);
extern void LAB_00563d52(void);
extern void LAB_00563de0(void);
int unaff_EBX;

void FUN_00563cb0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8;
  
  piVar4 = (int *)(unaff_EBX + 0x40);
  local_8 = 2;
  do {
    if ((*piVar4 != 0) && (DAT_007064b2 != '\0')) {
      cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if (cVar1 != '\0') {
        uVar5 = *(undefined4 *)(*piVar4 + 0x10);
        if (*(int *)(unaff_EBX + 0xc) == 0) {
LAB_00563d3e:
          if (DAT_0073578c != 0) {
            iVar2 = FUN_004ef050(uVar5);
            goto LAB_00563d52;
          }
        }
        else {
          iVar2 = FUN_004f65d0();
          if (iVar2 == 0) goto LAB_00563d3e;
          iVar2 = FUN_004ffb70();
          if (iVar2 == 0) goto LAB_00563d3e;
LAB_00563d52:
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xc407210,*piVar4,*(undefined4 *)(unaff_EBX + 0x48),iVar2,0);
          }
        }
        if (*(int *)(*piVar4 + 0x10) == -0x55974032) {
          iVar2 = FUN_004f3f90(&DAT_00746104);
          if (((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + 0x18), iVar6 != 0)) &&
             (piVar3 = *(int **)(iVar2 + 0x14), piVar3 != (int *)0x0)) {
            uVar5 = 0x9120409e;
LAB_00563de0:
            (**(code **)(*piVar3 + 8))(uVar5,0,0,iVar6);
          }
        }
        else if (*(int *)(*piVar4 + 0x10) == -0x5597402c) {
          iVar2 = FUN_004f3f90(&DAT_00746104);
          if (((iVar2 != 0) && (iVar6 = *(int *)(iVar2 + 0x18), iVar6 != 0)) &&
             (piVar3 = *(int **)(iVar2 + 0x14), piVar3 != (int *)0x0)) {
            uVar5 = 0xb5971bf1;
            goto LAB_00563de0;
          }
        }
      }
    }
    piVar4 = piVar4 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
