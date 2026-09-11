/* spd-match: far pct=7.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00538170();
extern unsigned char *DAT_007356a8;
int unaff_ESI;

void FUN_005381b0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x1c8);
  if (iVar1 < 0x13) {
    if ((iVar1 == 4) || (iVar1 == 0x12)) {
      if (*(char *)(DAT_007356a8 + 0x73) != '\0') {
        if (*(char *)(unaff_ESI + 0x223) == '\0') {
          *(undefined1 *)(unaff_ESI + 0x223) = 1;
          FUN_00538170();
          return;
        }
        if (*(char *)(DAT_007356a8 + 0x73) != '\0') {
          return;
        }
      }
      iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x7c))(0);
      if ((iVar1 != 4) &&
         (iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x7c))(1), iVar1 != 4)) {
        *(undefined1 *)(unaff_ESI + 0x223) = 0;
        return;
      }
    }
  }
  else if ((iVar1 < 0x1a) && (*(int *)(unaff_ESI + 0x1b0) == 4)) {
    if ((*(int *)(unaff_ESI + 0x1d0) == 0x4b1) &&
       (((*(char *)(unaff_ESI + 0x221) != '\0' && (*(char *)(unaff_ESI + 0x222) == '\0')) &&
        (*(char *)(unaff_ESI + 0x10) == '\0')))) {
      *(undefined1 *)(unaff_ESI + 0x222) = 1;
      FUN_00538170();
    }
    if (((*(char *)(unaff_ESI + 0x219) == '\x01') && (*(char *)(unaff_ESI + 0x21b) == '\0')) &&
       (*(char *)(unaff_ESI + 0x21d) == '\0')) {
      *(undefined1 *)(unaff_ESI + 0x21b) = 1;
      FUN_00538170();
    }
    if (((*(int *)(DAT_007356a8 + 0xa0) != 0) &&
        (iVar1 = *(int *)(*(int *)(DAT_007356a8 + 0xa0) + 4), iVar1 != 0)) &&
       ((*(int *)(iVar1 + 0x188) == 1 &&
        (((*(char *)(unaff_ESI + 0x21a) == '\x01' && (*(char *)(unaff_ESI + 0x21c) == '\0')) &&
         (*(char *)(unaff_ESI + 0x21e) == '\0')))))) {
      *(undefined1 *)(unaff_ESI + 0x21c) = 1;
      FUN_00538170();
    }
    if ((*(char *)(unaff_ESI + 0x21d) == '\x01') && (*(char *)(unaff_ESI + 0x21f) == '\0')) {
      *(undefined1 *)(unaff_ESI + 0x21f) = 1;
      FUN_00538170();
    }
    if (((*(int *)(DAT_007356a8 + 0xa0) != 0) &&
        (iVar1 = *(int *)(*(int *)(DAT_007356a8 + 0xa0) + 4), iVar1 != 0)) &&
       ((*(int *)(iVar1 + 0x188) == 1 &&
        ((*(char *)(unaff_ESI + 0x21e) == '\x01' && (*(char *)(unaff_ESI + 0x220) == '\0')))))) {
      *(undefined1 *)(unaff_ESI + 0x220) = 1;
      FUN_00538170();
    }
  }
  return;
}
