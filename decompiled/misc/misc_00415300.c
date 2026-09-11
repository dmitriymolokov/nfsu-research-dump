/* spd-match: far pct=8.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f6540();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6670();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern void LAB_004153fd(void);

void FUN_00415300(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_8;
  
  piVar6 = (int *)(param_1 + 0x84);
  local_8 = 0xc;
  do {
    if (((*piVar6 != 0) && (DAT_007064b2 != '\0')) &&
       (cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar2 != '\0')) {
      uVar1 = *(uint *)(*piVar6 + 0x10);
      if (uVar1 < 0x806de7a7) {
        if (uVar1 == 0x806de7a6) {
          if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
             (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
            if (DAT_0073578c == 0) goto LAB_004153fd;
            iVar5 = FUN_004ef050(0xf81c7981);
          }
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xb5971bf1,*piVar6,*(undefined4 *)(param_1 + 0xb4),iVar5,0);
          }
        }
        else if (uVar1 == 0x80720ff) {
          uVar3 = *(undefined4 *)(param_1 + 0xb4);
          uVar4 = FUN_004f6670();
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xb5971bf1,*piVar6,uVar3,uVar4,0);
          }
        }
        else if (uVar1 == 0x7e7c23b9) {
          uVar3 = FUN_004f6670();
          FUN_004f6540(0x9120409e,uVar3);
        }
      }
      else if (uVar1 == 0xb0eca02e) {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
           (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
          if (DAT_0073578c == 0) goto LAB_004153fd;
          iVar5 = FUN_004ef050(0xf81c7981);
        }
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0x9120409e,*piVar6,*(undefined4 *)(param_1 + 0xb4),iVar5,0);
        }
      }
    }
LAB_004153fd:
    piVar6 = piVar6 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
