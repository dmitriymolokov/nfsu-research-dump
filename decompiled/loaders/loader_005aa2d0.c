/* spd-match: far pct=4.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AA2D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a96b0();
int __cdecl FUN_005a97f0();
int __cdecl FUN_005a9930();
int __cdecl FUN_005a99e0();
int __cdecl FUN_005a9a90();
int __cdecl FUN_005a9af0();
int __cdecl FUN_005a9b50();
int __cdecl FUN_005a9c10();
extern void LAB_005aa342(void);
extern void LAB_005aa348(void);
extern void LAB_005aa3d3(void);
extern void LAB_005aa402(void);
extern void LAB_005aa448(void);
extern void LAB_005aa472(void);
extern void LAB_005aa4b4(void);
int __fastcall FUN_005aa2d0(int obj, int param_1, int param_2, int param_3)

{

  int iVar1;
  int iVar2;
  int iVar3;
  int *local_8;
  int local_4;
  
  local_8 = (int *)(param_3 + 0x4c8);
  local_4 = 4;
  do {
    if (*local_8 != 0) {
      iVar1 = FUN_005a9b50();
      iVar2 = FUN_005a9c10();
      iVar3 = 0;
      if (iVar1 != 0) {
        if (0 < obj) {
          do {
            if (*(int *)(param_1 + iVar3 * 4) == iVar1) {
              iVar3 = 0;
              goto LAB_005aa342;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < obj);
        }
        iVar3 = obj;
        if (obj < param_2) {
          *(int *)(param_1 + obj * 4) = iVar1;
          iVar3 = 1;
        }
      }
LAB_005aa342:
      iVar3 = obj + iVar3;
      if (iVar2 == 0) {
LAB_005aa348:
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        if (0 < iVar3) {
          do {
            if (*(int *)(param_1 + iVar1 * 4) == iVar2) goto LAB_005aa348;
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar3);
        }
        iVar1 = iVar3;
        if (iVar3 < param_2) {
          *(int *)(param_1 + iVar3 * 4) = iVar2;
          iVar1 = 1;
        }
      }
      obj = iVar3 + iVar1;
    }
    local_8 = local_8 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  iVar3 = FUN_005a96b0();
  iVar1 = FUN_005a97f0();
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar2 = 0;
    if (0 < obj) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) == iVar3) {
          iVar2 = 0;
          goto LAB_005aa3d3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < obj);
    }
    iVar2 = obj;
    if (obj < param_2) {
      *(int *)(param_1 + obj * 4) = iVar3;
      iVar2 = 1;
    }
LAB_005aa3d3:
    iVar2 = obj + iVar2;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + iVar3 * 4) == iVar1) {
          iVar3 = 0;
          goto LAB_005aa402;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = iVar2;
    if (iVar2 < param_2) {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
      iVar3 = 1;
    }
LAB_005aa402:
    obj = iVar2 + iVar3;
  }
  iVar3 = FUN_005a9930();
  iVar1 = FUN_005a99e0();
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar2 = 0;
    if (0 < obj) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) == iVar3) {
          iVar2 = 0;
          goto LAB_005aa448;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < obj);
    }
    iVar2 = obj;
    if (obj < param_2) {
      *(int *)(param_1 + obj * 4) = iVar3;
      iVar2 = 1;
    }
LAB_005aa448:
    iVar2 = obj + iVar2;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + iVar3 * 4) == iVar1) {
          iVar3 = 0;
          goto LAB_005aa472;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    iVar3 = iVar2;
    if (iVar2 < param_2) {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
      iVar3 = 1;
    }
LAB_005aa472:
    obj = iVar2 + iVar3;
  }
  iVar3 = FUN_005a9a90();
  iVar1 = FUN_005a9af0();
  if ((iVar3 != 0) && (iVar1 != 0)) {
    iVar2 = 0;
    if (0 < obj) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) == iVar3) {
          iVar2 = 0;
          goto LAB_005aa4b4;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < obj);
    }
    iVar2 = obj;
    if (obj < param_2) {
      *(int *)(param_1 + obj * 4) = iVar3;
      iVar2 = 1;
    }
LAB_005aa4b4:
    iVar2 = obj + iVar2;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + iVar3 * 4) == iVar1) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (param_2 <= iVar2) {
      return iVar2 * 2;
    }
    *(int *)(param_1 + iVar2 * 4) = iVar1;
    obj = iVar2 + 1;
  }

}
