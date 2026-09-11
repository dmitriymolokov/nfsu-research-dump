/* spd-match: far pct=5.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005387c0();
extern unsigned char *DAT_007356a8;
extern unsigned char *DAT_00740500;
extern int DAT_00779818;
extern int _DAT_0073635c;
extern void LAB_00538068(void);
int unaff_ESI;

void FUN_00537db0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int *piVar4;
  
  uVar1 = DAT_00779818;
  iVar2 = *(int *)(unaff_ESI + 0x1b4);
  if (iVar2 == *(int *)(unaff_ESI + 0x1b0)) {
    if (((*(int *)(unaff_ESI + 0x1b0) != 4) ||
        (*(int *)(unaff_ESI + 0x1bc) == *(int *)(unaff_ESI + 0x1b8))) ||
       (*(int *)(unaff_ESI + 0x1bc) != 4)) goto LAB_00538068;
    piVar4 = (int *)(unaff_ESI + 0x14);
    iVar2 = 5;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x48))();
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    if (iVar2 == 8) {
      iVar2 = 0;
      if (*(int *)(DAT_007356a8 + 0xc4) != 0) {
        iVar2 = *(int *)(*(int *)(DAT_007356a8 + 0xc4) + 0x234);
      }
      *(undefined4 *)(unaff_ESI + 0x1e8) = 0xffffffff;
      *(undefined4 *)(unaff_ESI + 0x1ec) = 0xffffffff;
      if (iVar2 != 0) {
        *(int *)(unaff_ESI + 0x1e8) = (int)*(char *)(*(int *)(iVar2 + 0x1c) + 0xc);
        *(uint *)(unaff_ESI + 0x1ec) = uVar1 & 3;
      }
      piVar4 = (int *)(unaff_ESI + 0x14);
      iVar2 = 5;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x38))();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      piVar4 = (int *)(unaff_ESI + 0x14);
      iVar2 = 5;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x3c))();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined1 *)(unaff_ESI + 0x10) = 1;
      goto LAB_00538068;
    }
    if (iVar2 == 1) {
      piVar4 = (int *)(unaff_ESI + 0x14);
      iVar2 = 5;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x38))();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(unaff_ESI + 0x1bc);
    if (iVar2 == 2) {
      iVar2 = uVar1 - 0x8fc;
      *(undefined4 *)(unaff_ESI + 0x1ec) = 0xffffffff;
      if (iVar2 < 0x14) {
        iVar2 = uVar1 - 0x8fd;
      }
      else if ((iVar2 < 0x1e) || (0x23 < iVar2)) {
        if (iVar2 == 0x26) {
          iVar2 = 0x18;
        }
      }
      else {
        iVar2 = uVar1 - 0x907;
      }
      *(int *)(unaff_ESI + 0x288) = iVar2;
      iVar3 = DAT_007356a8;
      *(int *)(unaff_ESI + 0x28c) = iVar2 * 3;
      iVar3 = (**(code **)(**(int **)(iVar3 + 0xc4) + 0x44))();
      if (iVar3 < 2) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(unaff_ESI + 0x284) = iVar3;
      *(int *)(unaff_ESI + 0x1ec) = iVar3 + iVar2 * 3;
      piVar4 = (int *)(unaff_ESI + 0x14);
      iVar2 = 5;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x40))();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      goto LAB_00538068;
    }
    if (iVar2 == 3) {
      *(int *)(unaff_ESI + 0x90) = DAT_00740500 + 0x40;
      *(undefined1 *)(unaff_ESI + 0x1a5) = 1;
      FUN_005387c0();
      iVar3 = DAT_007356a8;
      iVar2 = uVar1 - 0x8fc;
      if (iVar2 < 0x14) {
        iVar2 = uVar1 - 0x8fd;
      }
      else if ((iVar2 < 0x1e) || (0x23 < iVar2)) {
        if (iVar2 == 0x26) {
          iVar2 = 0x18;
        }
      }
      else {
        iVar2 = uVar1 - 0x907;
      }
      *(int *)(unaff_ESI + 0x288) = iVar2;
      *(int *)(unaff_ESI + 0x28c) = iVar2 * 3;
      iVar3 = (**(code **)(**(int **)(iVar3 + 0xc4) + 0x44))();
      if (iVar3 < 2) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(unaff_ESI + 0x284) = iVar3;
      *(int *)(unaff_ESI + 0x1ec) = iVar3 + iVar2 * 3;
      piVar4 = (int *)(unaff_ESI + 0x14);
      iVar2 = 5;
      do {
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 0x44))();
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      goto LAB_00538068;
    }
    if (iVar2 != 4) {
      if ((*(int *)(unaff_ESI + 0x1b4) == 1) && (*(int *)(unaff_ESI + 0x1b0) == 4)) {
        piVar4 = (int *)(unaff_ESI + 0x14);
        iVar2 = 5;
        do {
          if ((int *)*piVar4 != (int *)0x0) {
            (**(code **)(*(int *)*piVar4 + 0x38))();
          }
          piVar4 = piVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      goto LAB_00538068;
    }
    if (*(int *)(unaff_ESI + 0x1b8) != 3) goto LAB_00538068;
    *(undefined1 *)(unaff_ESI + 0x1a5) = 1;
    piVar4 = (int *)(unaff_ESI + 0x14);
    iVar2 = 5;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x48))();
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
      _DAT_0073635c = 0;
    } while (iVar2 != 0);
  }
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
LAB_00538068:
  *(undefined4 *)(unaff_ESI + 0x1b8) = *(undefined4 *)(unaff_ESI + 0x1bc);
  *(undefined4 *)(unaff_ESI + 0x1b0) = *(undefined4 *)(unaff_ESI + 0x1b4);
  return;
}
