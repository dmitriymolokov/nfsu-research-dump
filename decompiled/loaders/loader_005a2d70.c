/* spd-match: far pct=5.16 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A2D70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_0078a320;
extern unsigned char *DAT_0078a324;
extern unsigned char *DAT_0078a418;
extern int DAT_0078a41c;
extern void LAB_005a2df5(void);
void __fastcall FUN_005a2d70(int obj)

{
  int iVar1;

  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_8;
  
  iVar4 = *(int *)(obj + 0x589c);
  iVar1 = *(int *)(obj + 0x5864);
  iVar6 = 0;
  local_8 = 0;
  local_14 = 1;
  if (0 < iVar4) {
    iVar8 = obj + 0x586c;
    do {
      if ((iVar6 < 0) || (iVar7 = iVar8, iVar4 <= iVar6)) {
        iVar7 = 0;
      }
      if (*(int *)(iVar7 + 8) == 1) {
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 0xb08)) {
          piVar3 = (int *)(iVar1 + 0x2c);
          do {
            if (*piVar3 == *(int *)(iVar7 + 4)) {
              piVar3 = (int *)(iVar2 * 0x15c + iVar1 + 0x28);
              goto LAB_005a2df5;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 0x57;
          } while (iVar2 < *(int *)(iVar1 + 0xb08));
        }
        piVar3 = (int *)0x0;
LAB_005a2df5:
        if (local_14 < *piVar3) {
          local_14 = *piVar3;
          local_8 = iVar7;
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar6 < iVar4);
    if (local_8 != 0) {
      *(undefined4 *)(local_8 + 8) = 2;
      iVar4 = 0;
      if (0 < DAT_0078a41c) {
        pcVar5 = (char *)(DAT_0078a418 + 1);
        while (*(int *)(local_8 + 4) != (int)*pcVar5) {
          iVar4 = iVar4 + 1;
          pcVar5 = pcVar5 + 0x750;
          if (DAT_0078a41c <= iVar4) {
            return;
          }
        }
        pcVar5 = (char *)(iVar4 * 0x750 + DAT_0078a418);
        if ((pcVar5 != (char *)0x0) && (*pcVar5 < '\x01')) {
          *pcVar5 = (char)local_14;
          if (*(int *)(pcVar5 + 4) == 1) {
            DAT_0078a320 = DAT_0078a320 + -1;
          }
          else if (*(int *)(pcVar5 + 4) == 2) {
            DAT_0078a324 = DAT_0078a324 + -1;
            return;
          }
        }
      }
    }
  }
  return;
}
