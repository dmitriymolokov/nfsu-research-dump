/* spd-match: far pct=8.55 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
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
extern void LAB_00557f75(void);
extern void LAB_00557f89(void);

void FUN_00557e90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = param_1;
  piVar6 = (int *)(param_1 + 0x48);
  param_1 = 2;
  do {
    if ((*piVar6 != 0) && (DAT_007064b2 != '\0')) {
      cVar3 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if ((cVar3 != '\0') &&
         ((*(int *)(*piVar6 + 0x10) == -0x55974032 || (*(int *)(*piVar6 + 0x10) == -0x5597402c)))) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          if (iVar4 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar4 + 0x18);
          }
          iVar4 = 0;
          if (iVar5 != 0) {
            iVar4 = *(int *)(iVar5 + 0x80);
          }
        }
        if (*(int *)(iVar4 + 0x10) == -0x67f8bfae) {
          uVar1 = *(undefined4 *)(*piVar6 + 0x10);
          if (*(int *)(iVar2 + 0xc) == 0) {
LAB_00557f75:
            if (DAT_0073578c != 0) {
              iVar4 = FUN_004ef050(uVar1);
              goto LAB_00557f89;
            }
          }
          else {
            iVar4 = FUN_004f65d0();
            if (iVar4 == 0) goto LAB_00557f75;
            iVar4 = FUN_004ffb70();
            if (iVar4 == 0) goto LAB_00557f75;
LAB_00557f89:
            if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
              FUN_004f0700(0xc407210,*piVar6,*(undefined4 *)(iVar2 + 0x50),iVar4,0);
            }
          }
          iVar4 = FUN_004f3f90(&DAT_00746104);
          if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
             (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
            (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x26eadf6f,0,0,*(int *)(iVar4 + 0x18));
          }
        }
      }
    }
    piVar6 = piVar6 + 1;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return;
    }
  } while( true );
}
