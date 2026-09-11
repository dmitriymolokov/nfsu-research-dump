/* spd-match: far pct=5.14 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141726Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005a2ab0();
extern int DAT_0078a310;
extern int DAT_0078a410;
extern void LAB_005a2f84(void);
extern void LAB_005a2ff8(void);
extern void LAB_005a3081(void);

extern int iRam00000004;






bool FUN_005a2f10(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x59ec) != '\0') {
    return true;
  }
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x5868);
  if (param_2 == '\0') {
    if (0 < iVar1) {
      iVar6 = param_1 + 4;
      do {
        if (((iVar5 < 0) || (iVar1 <= iVar5)) || (iVar3 = iVar6, 7 < iVar5)) {
          iVar3 = 0;
        }
        if ((*(int *)(iVar3 + 0x14) != 4) && (*(int *)(iVar3 + 0x14) != 3)) {
          return false;
        }
        iVar2 = 0;
        if (0 < *(int *)(iVar3 + 0xb08)) {
          piVar4 = (int *)(iVar3 + 0x2c);
          do {
            if (*piVar4 == 0) {
              iVar3 = iVar2 * 0x15c + iVar3 + 0x28;
              goto LAB_005a2ff8;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 0x57;
          } while (iVar2 < *(int *)(iVar3 + 0xb08));
        }
        iVar3 = 0;
LAB_005a2ff8:
        if (*(int *)(iVar3 + 8) != 1) {
          return false;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xb0c;
      } while (iVar5 < iVar1);
    }
  }
  else if (0 < iVar1) {
    iVar6 = param_1 + 4;
    do {
      if (((iVar5 < 0) || (iVar1 <= iVar5)) || (iVar3 = iVar6, 7 < iVar5)) {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x14) != 4) {
        return false;
      }
      iVar2 = 0;
      if (0 < *(int *)(iVar3 + 0xb08)) {
        piVar4 = (int *)(iVar3 + 0x2c);
        do {
          if (*piVar4 == 0) {
            iVar3 = iVar2 * 0x15c + iVar3 + 0x28;
            goto LAB_005a2f84;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 0x57;
        } while (iVar2 < *(int *)(iVar3 + 0xb08));
      }
      iVar3 = 0;
LAB_005a2f84:
      if (*(int *)(iVar3 + 8) != 1) {
        return false;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xb0c;
    } while (iVar5 < iVar1);
  }
  if (*(int *)(param_1 + 0x58a4) == 1) {
    iVar1 = FUN_005a2ab0(param_1,1);
    return (bool)('\x01' - (iVar1 != 0));
  }
  if (*(int *)(param_1 + 0x58a8) == 4) {
    iVar1 = *(int *)(param_1 + 0x5864);
    iVar5 = 0;
    if (0 < *(int *)(iVar1 + 0xb08)) {
      piVar4 = (int *)(iVar1 + 0x2c);
      do {
        if (*piVar4 == DAT_0078a410) {
          iVar1 = iVar5 * 0x15c + iVar1 + 0x28;
          goto LAB_005a3081;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x57;
      } while (iVar5 < *(int *)(iVar1 + 0xb08));
    }
    iVar1 = 0;
LAB_005a3081:
    iVar1 = *(int *)(iVar1 + 0x10);
    if ((iVar1 != 0) && (iVar1 != 0x7fffffff)) {
      return iVar1 < DAT_0078a310;
    }
  }
  else {
    if (*(int *)(param_1 + 0x58a4) == 7) {
      iVar5 = iVar1 + -1;
      if (((iVar5 < 0) || (iVar1 <= iVar5)) || (7 < iVar5)) {
        param_1 = 0;
      }
      else {
        param_1 = iVar5 * 0xb0c + 4 + param_1;
      }
      iVar1 = 0;
      piVar4 = (int *)(param_1 + 0x28);
      if (0 < *(int *)(param_1 + 0xb08)) {
        do {
          if (*piVar4 == 1) {
            return ((int *)(param_1 + 0x28))[iVar1 * 0x57 + 1] == 0;
          }
          iVar1 = iVar1 + 1;
          piVar4 = piVar4 + 0x57;
        } while (iVar1 < *(int *)(param_1 + 0xb08));
      }
      return iRam00000004 == 0;
    }
    iVar5 = 0;
    if (0 < iVar1) {
      param_1 = param_1 + 4;
      do {
        if (((iVar5 < 0) || (iVar1 <= iVar5)) || (iVar6 = param_1, 7 < iVar5)) {
          iVar6 = 0;
        }
        iVar3 = 0;
        piVar4 = (int *)(iVar6 + 0x28);
        if (*(int *)(iVar6 + 0xb08) < 1) {
          return false;
        }
        while (*piVar4 != 1) {
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x57;
          if (*(int *)(iVar6 + 0xb08) <= iVar3) {
            return false;
          }
        }
        piVar4 = (int *)(iVar6 + 0x28) + iVar3 * 0x57;
        if (piVar4 == (int *)0x0) {
          return false;
        }
        if (piVar4[1] != 0) {
          return false;
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0xb0c;
      } while (iVar5 < iVar1);
    }
  }
  return true;
}
