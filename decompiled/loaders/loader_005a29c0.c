/* spd-match: far pct=4.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A29C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006ee3c4;
extern void LAB_005a2a68(void);
int __fastcall FUN_005a29c0(int val, int *param_1)

{
  int iVar1;

  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_c;
  int local_8;
  
  iVar5 = 0;
  if ((val < 0) || (param_1[0x1627] <= val)) {
    local_c = (int *)0x0;
  }
  else {
    local_c = param_1 + val * 3 + 0x161b;
  }
  local_8 = 0;
  if (local_c != (int *)0x0) {
    iVar1 = param_1[0x161a];
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if ((((-1 < iVar2) && (iVar2 < iVar1)) && (iVar2 < 8)) &&
           ((param_1 != (int *)0xfffffffc && ((param_1[6] == 3 || (param_1[6] == 4)))))) {
          iVar5 = param_1[0x2c3];
          iVar3 = 0;
          if (0 < iVar5) {
            piVar4 = param_1 + 0xc;
            do {
              if (*piVar4 == local_c[1]) {
                piVar4 = param_1 + iVar3 * 0x57 + 0xb;
                goto LAB_005a2a68;
              }
              iVar3 = iVar3 + 1;
              piVar4 = piVar4 + 0x57;
            } while (iVar3 < iVar5);
          }
          piVar4 = (int *)0x0;
LAB_005a2a68:
          iVar5 = *piVar4;
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar5 = local_8 + *(int *)(&DAT_006ee3c4 + iVar5 * 4);
          local_8 = iVar5;
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 0x2c3;
      } while (iVar2 < iVar1);
    }
  }
  return iVar5;
}
