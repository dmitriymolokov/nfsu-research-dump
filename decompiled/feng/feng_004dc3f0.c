/* spd-match: far pct=5.02 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern int DAT_00746104;
extern void LAB_004dc532(void);
int unaff_ESI;

void FUN_004dc3f0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  piVar6 = (int *)(unaff_ESI + 0xbbc);
  iVar5 = 6;
  do {
    if ((*piVar6 != 0) && (DAT_007064b2 != '\0')) {
      cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
      if (cVar2 != '\0') {
        uVar1 = *(uint *)(*piVar6 + 0x10);
        if (uVar1 < 0xb64d16e7) {
          if (uVar1 == 0xb64d16e6) {
            iVar3 = FUN_004f3f90(&DAT_00746104);
            if (((iVar3 != 0) && (iVar8 = *(int *)(iVar3 + 0x18), iVar8 != 0)) &&
               (piVar4 = *(int **)(iVar3 + 0x14), piVar4 != (int *)0x0)) {
              uVar7 = 0x911c0a4b;
LAB_004dc532:
              (**(code **)(*piVar4 + 8))(uVar7,0,0,iVar8);
            }
          }
          else if (uVar1 == 0x4603fd50) {
            FUN_004c96c0(0xc519bfc2);
          }
          else if (uVar1 == 0x6b20c153) {
            FUN_004c96c0(0x72619778);
          }
          else if (uVar1 == 0x770c7ae9) {
            FUN_004c96c0(0xc519bfc1);
          }
        }
        else if (uVar1 == 0xf3bb2c9a) {
          iVar3 = FUN_004f3f90(&DAT_00746104);
          if (((iVar3 != 0) && (iVar8 = *(int *)(iVar3 + 0x18), iVar8 != 0)) &&
             (piVar4 = *(int **)(iVar3 + 0x14), piVar4 != (int *)0x0)) {
            uVar7 = 0x9120409e;
            goto LAB_004dc532;
          }
        }
        else if (uVar1 == 0xf3bb2ca0) {
          FUN_004c96c0(0xb5971bf1);
        }
      }
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}
