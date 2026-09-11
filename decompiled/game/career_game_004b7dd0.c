/* spd-match: far pct=12.28 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern int DAT_00746104;
int unaff_ESI;

void FUN_004b7dd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int *piVar4;
  
  piVar4 = (int *)(unaff_ESI + 0x48);
  iVar3 = 2;
  do {
    if ((*piVar4 != 0) && (DAT_007064b2 != '\0')) {
      cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if ((cVar1 != '\0') &&
         ((*(int *)(*piVar4 + 0x10) == -0x7bd5c9be || (*(int *)(*piVar4 + 0x10) == -0x7bd5c9bd)))) {
        iVar2 = FUN_004f3f90(&DAT_00746104);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar2 + 0x18) != 0 && (*(int **)(iVar2 + 0x14) != (int *)0x0)))) {
          (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0xc519bfc8,0,0,*(int *)(iVar2 + 0x18));
        }
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
