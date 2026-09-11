/* spd-match: far pct=4.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D77A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_004d77d5(void);
extern void LAB_004d77f7(void);
extern void LAB_004d7825(void);
extern void LAB_004d7845(void);
extern void LAB_004d7847(void);
extern void LAB_004d78c1(void);
extern void LAB_004d78d0(void);
extern void LAB_004d78d2(void);
extern void LAB_004d78f2(void);
extern void LAB_004d792d(void);
void __fastcall FUN_004d77a0(int * obj, undefined4 param_1, int param_2)

{

  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == 0) {
    obj[3] = 0;
    obj[2] = 0;
    obj[1] = 0;
    *obj = 0;
    return;
  }
  piVar1 = *(int **)(param_2 + 0x14);
  iVar5 = (int)*(short *)(param_2 + 0x1c);
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    for (; piVar4 < piVar1 + iVar5 * 2; piVar4 = piVar4 + 2) {
      if (*piVar4 == 0x368a1a6a) {
        piVar4 = piVar1;
        if (piVar1 != (int *)0x0) goto joined_r0x004d786e;
        break;
      }
    }
  }
LAB_004d77d5:
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    for (; piVar4 < piVar1 + iVar5 * 2; piVar4 = piVar4 + 2) {
      if (*piVar4 == 0xd99a) {
        if (piVar4 != (int *)0x0) {
          iVar2 = piVar4[1];
          goto LAB_004d77f7;
        }
        break;
      }
    }
  }
  iVar2 = 0;
LAB_004d77f7:
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    for (; piVar4 < piVar1 + iVar5 * 2; piVar4 = piVar4 + 2) {
      if (*piVar4 == 0x2ddc8f0) {
        if (piVar4 != (int *)0x0) {
          iVar3 = piVar4[1];
          goto LAB_004d7825;
        }
        break;
      }
    }
  }
  iVar3 = 0;
LAB_004d7825:
  piVar4 = piVar1 + iVar5 * 2;
  if (piVar1 != (int *)0x0) {
    for (; piVar1 < piVar4; piVar1 = piVar1 + 2) {
      if (*piVar1 == 0x136707) goto LAB_004d792d;
    }
  }
LAB_004d7845:
  iVar5 = 0;
LAB_004d7847:
  *obj = iVar5;
  obj[1] = iVar3;
  obj[2] = iVar2;
  obj[3] = 0xff;
  return;
joined_r0x004d786e:
  if (piVar1 + iVar5 * 2 <= piVar4) goto LAB_004d77d5;
  if (*piVar4 == 0xba7dc0) {
    piVar4 = piVar1;
    if (piVar1 != (int *)0x0) goto joined_r0x004d7897;
    goto LAB_004d77d5;
  }
  piVar4 = piVar4 + 2;
  goto joined_r0x004d786e;
joined_r0x004d7897:
  if (piVar1 + iVar5 * 2 <= piVar4) goto LAB_004d77d5;
  if (*piVar4 == 0x7c4c1d7) {
    if ((piVar1 == (int *)0x0) || (piVar4 = piVar1, piVar1 + iVar5 * 2 <= piVar1))
    goto LAB_004d78d0;
    goto LAB_004d78c1;
  }
  piVar4 = piVar4 + 2;
  goto joined_r0x004d7897;
  while (piVar4 = piVar4 + 2, piVar4 < piVar1 + iVar5 * 2) {
LAB_004d78c1:
    if (*piVar4 == 0x368a1a6a) {
      if (piVar4 != (int *)0x0) {
        iVar2 = piVar4[1];
        goto LAB_004d78d2;
      }
      break;
    }
  }
LAB_004d78d0:
  iVar2 = 0;
LAB_004d78d2:
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    for (; piVar4 < piVar1 + iVar5 * 2; piVar4 = piVar4 + 2) {
      if (*piVar4 == 0xba7dc0) {
        if (piVar4 != (int *)0x0) {
          iVar3 = piVar4[1];
          goto LAB_004d78f2;
        }
        break;
      }
    }
  }
  iVar3 = 0;
LAB_004d78f2:
  piVar4 = piVar1 + iVar5 * 2;
  if (piVar1 != (int *)0x0) {
    for (; piVar1 < piVar4; piVar1 = piVar1 + 2) {
      if (*piVar1 == 0x7c4c1d7) goto LAB_004d792d;
    }
  }
  goto LAB_004d7845;
LAB_004d792d:
  if (piVar1 != (int *)0x0) {
    iVar5 = piVar1[1];
    goto LAB_004d7847;
  }
  goto LAB_004d7845;
}
