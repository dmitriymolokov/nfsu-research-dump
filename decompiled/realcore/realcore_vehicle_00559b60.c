/* spd-match: far pct=10.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f6540();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6670();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_00559e1c(void);
int unaff_EBX;

void FUN_00559b60(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int *piVar5;
  undefined4 uVar6;
  int local_8;
  
  piVar5 = (int *)(unaff_EBX + 0x48);
  local_8 = 0xc;
  do {
    if (((*piVar5 == 0) || (DAT_007064b2 == '\0')) ||
       (cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar2 == '\0')) goto switchD_00559bee_default;
    uVar1 = *(uint *)(*piVar5 + 0x10);
    if (0xda9a39d4 < uVar1) {
      switch(uVar1) {
      case 0xda9a39d5:
        FUN_004c96c0(0x66601813);
        uVar3 = FUN_004f6670();
        uVar6 = 0x66601813;
        break;
      case 0xda9a39d6:
        FUN_004c96c0(0x326eaca6);
        uVar3 = FUN_004f6670();
        uVar6 = 0x326eaca6;
        break;
      case 0xda9a39d7:
switchD_00559bee_caseD_da96ef91:
        FUN_004c96c0(0x84e482d5);
        uVar3 = FUN_004f6670();
        uVar6 = 0x84e482d5;
        break;
      case 0xda9a39d8:
        uVar3 = FUN_004f6670();
        FUN_004f6540(0xb5971bf1,uVar3);
        goto switchD_00559bee_default;
      case 0xda9a39d9:
        FUN_004c96c0(0x26eadf6f);
        uVar3 = FUN_004f6670();
        uVar6 = 0x26eadf6f;
        break;
      default:
        goto switchD_00559bee_default;
      }
      goto LAB_00559e1c;
    }
    if (uVar1 == 0xda9a39d4) {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)
         ) {
        (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x7f70cefb,0,0,*(int *)(iVar4 + 0x18));
      }
      if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) goto switchD_00559bee_default;
        iVar4 = FUN_004ef050(0x91338b5e);
      }
      if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
        FUN_004f0700(0x7f70cefb,*piVar5,*(undefined4 *)(unaff_EBX + 0x78),iVar4,0);
      }
      goto switchD_00559bee_default;
    }
    switch(uVar1) {
    case 0xda96ef8e:
      FUN_004c96c0(0x7e092188);
      uVar3 = FUN_004f6670();
      uVar6 = 0x7e092188;
      goto LAB_00559e1c;
    case 0xda96ef8f:
      FUN_004c96c0(0x2db86360);
      uVar3 = FUN_004f6670();
      uVar6 = 0x2db86360;
      goto LAB_00559e1c;
    case 0xda96ef90:
      FUN_004c96c0(0xe4d06193);
      uVar3 = FUN_004f6670();
      uVar6 = 0xe4d06193;
LAB_00559e1c:
      FUN_004f6540(uVar6,uVar3);
      break;
    case 0xda96ef91:
      goto switchD_00559bee_caseD_da96ef91;
    case 0xda96ef92:
      uVar3 = FUN_004f6670();
      FUN_004f6540(0x9120409e,uVar3);
      break;
    case 0xda96ef93:
      uVar3 = FUN_004f6670();
      FUN_004f6540(0x26eadf6f,uVar3);
      FUN_004c96c0(0x26eadf6f);
    }
switchD_00559bee_default:
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
