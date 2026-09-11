/* spd-match: far pct=10.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_004b0150();
int __cdecl FUN_004b2330();
int __cdecl FUN_004f6360();
int __cdecl FUN_00504320();
int __cdecl FUN_00505630();
int __cdecl FUN_0051c770();
extern int DAT_006f1dd8;
extern unsigned char *DAT_007356a8;
extern int DAT_00735714;
extern int DAT_00735718;

void FUN_00505e60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  DAT_00735718 = *(int *)(iVar1 + 8);
  if (((((DAT_00735718 == 5) && (*(char *)(param_1 + 0x88) != '\0')) ||
       ((DAT_00735718 == 2 && (*(char *)(param_1 + 0x8a) != '\0')))) ||
      ((DAT_00735718 == 0 && (*(char *)(param_1 + 0x89) != '\0')))) ||
     ((DAT_00735718 == 1 && (*(char *)(param_1 + 0x8b) != '\0')))) {
    if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)) {
      (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
      return;
    }
  }
  else {
    if (DAT_00735718 == 0) {
      DAT_00735714 = 0;
    }
    else if (DAT_00735718 == 1) {
      FUN_00505630();
      iVar2 = FUN_004b2330();
      if (iVar2 != 0) {
        FUN_004b0150();
      }
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      switch(DAT_00735718) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:;
      }
      FUN_0051c770();
      FUN_00504320(*(undefined4 *)(param_1 + 0xc));
      FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}
