/* spd-match: far pct=3.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
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
extern void LAB_0055d850(void);
extern void LAB_0055d8fb(void);

void FUN_0055d7a0(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_8;
  
  piVar6 = (int *)(param_1 + 0x54);
  local_8 = 4;
  do {
    if (((*piVar6 != 0) && (DAT_007064b2 != '\0')) &&
       (cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar2 != '\0')) {
      uVar4 = *(undefined4 *)(*piVar6 + 0x10);
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
         (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar3 = FUN_004ef050(uVar4);
          goto LAB_0055d850;
        }
      }
      else {
LAB_0055d850:
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xc407210,*piVar6,*(undefined4 *)(param_1 + 100),iVar3,0);
        }
      }
      uVar1 = *(uint *)(*piVar6 + 0x10);
      if (uVar1 < 0xda9a39d5) {
        if (uVar1 == 0xda9a39d4) {
          if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
             (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
            if (DAT_0073578c == 0) goto LAB_0055d8fb;
            iVar3 = FUN_004ef050(0x75666f7);
          }
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xb5971bf1,*piVar6,*(undefined4 *)(param_1 + 100),iVar3,0);
          }
        }
        else if (uVar1 == 0xda96ef8e) {
          uVar4 = *(undefined4 *)(param_1 + 100);
          uVar5 = FUN_004f6670();
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0x9120409e,*piVar6,uVar4,uVar5,0);
          }
        }
        else if (uVar1 == 0xda96ef8f) {
          uVar4 = FUN_004f6670();
          FUN_004f6540(0x9120409e,uVar4);
        }
      }
      else if (uVar1 == 0xda9a39d5) {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
           (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
          if (DAT_0073578c == 0) goto LAB_0055d8fb;
          iVar3 = FUN_004ef050(0x6386b231);
        }
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xb5971bf1,*piVar6,*(undefined4 *)(param_1 + 100),iVar3,0);
        }
      }
    }
LAB_0055d8fb:
    piVar6 = piVar6 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
