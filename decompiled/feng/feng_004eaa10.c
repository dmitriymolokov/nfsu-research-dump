/* spd-match: far pct=4.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern void LAB_004eaab2(void);
int unaff_EBX;

void FUN_004eaa10(void)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  piVar3 = (int *)(unaff_EBX + 0x44);
  local_8 = 4;
  do {
    if (((*piVar3 != 0) && (DAT_007064b2 != '\0')) &&
       (cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar1 != '\0')) {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
      if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
         (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
        if (DAT_0073578c != 0) {
          iVar2 = FUN_004ef050(uVar4);
          goto LAB_004eaab2;
        }
      }
      else {
LAB_004eaab2:
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xc407210,*piVar3,*(undefined4 *)(unaff_EBX + 0x54),iVar2,0);
        }
      }
      switch(*(undefined4 *)(*piVar3 + 0x10)) {
      case 0xaa68bfc6:
        uVar4 = 0x911c0a4b;
        break;
      default:
        goto switchD_004eaaef_caseD_aa68bfc7;
      case 0xaa68bfce:
        uVar4 = 0x9120409e;
        break;
      case 0xaa68bfd4:
        uVar4 = 0xb5971bf1;
        break;
      case 0xaa68bfd7:
        uVar4 = 0x72619778;
      }
      FUN_004c96c0(uVar4);
    }
switchD_004eaaef_caseD_aa68bfc7:
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
