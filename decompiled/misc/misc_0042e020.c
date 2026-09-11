/* spd-match: far pct=5.39 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042E020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a4;
extern int DAT_007364a0;
extern int DAT_00758938;
extern int DAT_00758948;
extern int DAT_0078a345;
extern int DAT_0078a388;
int unaff_ESI;
int __fastcall FUN_0042e020(int val)

{

  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int unaff_ESI;
  int local_4;
  
  iVar3 = val % 5;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 4) + 0xc);
  local_4 = -1;
  if (*(char *)(unaff_ESI + 0x2c) == iVar3) {
    local_4 = 0;
  }
  if (*(char *)(unaff_ESI + 0x2d) == iVar3) {
    local_4 = 1;
  }
  if (*(char *)(unaff_ESI + 0x2e) == iVar3) {
    local_4 = 2;
  }
  if (*(char *)(unaff_ESI + 0x2f) == iVar3) {
    local_4 = 3;
  }
  local_4 = local_4 + 1;
  if (3 < local_4) {
    local_4 = 0;
  }
  if (((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) && (local_4 == 3)) {
    local_4 = 0;
  }
  iVar3 = (int)*(char *)(local_4 + 0x2c + unaff_ESI);
  if (((5 < iVar3) || (iVar3 < 0)) || (iVar3 == 3)) {
    iVar3 = 0;
  }
  if (DAT_007364a0 == 3) {
    iVar4 = *(int *)(iVar1 + 0xb54);
    psVar5 = (short *)(iVar1 + 0xbb0);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xb50);
    psVar5 = (short *)(iVar1 + 0xb60);
  }
  iVar1 = 0;
  psVar2 = psVar5;
  if (0 < iVar4) {
    do {
      if (iVar3 == *psVar2) {
        if (psVar5 + iVar1 * 8 != (short *)0x0) {
          if (*(int **)(unaff_ESI + 0x27c) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_ESI + 0x27c) + 0x20))(iVar3);
          }
          if (*(int **)(unaff_ESI + 0x280) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_ESI + 0x280) + 0x20))(iVar3);
          }
          if (*(int **)(unaff_ESI + 0x284) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_ESI + 0x284) + 0x20))(iVar3);
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < iVar4);
  }
  (&DAT_00758948)[*(int *)(unaff_ESI + 0x10)] = local_4;
  (&DAT_0078a388)[*(int *)(unaff_ESI + 0x10) * 0x38] =
       (&DAT_00758938)[(&DAT_00758948)[*(int *)(unaff_ESI + 0x10)] * 4];
  return iVar3;
}
