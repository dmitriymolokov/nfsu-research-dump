/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F3F90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f3c40();
int __cdecl FUN_004fd230();
extern void LAB_004f3fd9(void);
extern void LAB_004f4030(void);
int __fastcall FUN_004f3f90(char * obj, int param_1)

{
  char cVar1;
  int *piVar2;

  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  
  iVar5 = 0;
  if (obj != (char *)0x0) {
    cVar1 = *obj;
    while (cVar1 != '\0') {
      iVar8 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar1 = obj[iVar8];
    }
  }
  for (pcVar6 = obj + iVar5; (pcVar6 != obj && (*pcVar6 != '\\')); pcVar6 = pcVar6 + -1) {
  }
  iVar5 = FUN_004fd230();
  piVar7 = (int *)(param_1 + 4);
  if (*piVar7 == 0) goto LAB_004f3fd9;
  iVar8 = *piVar7 + -4;
  do {
    iVar4 = param_1;
    if (piVar7 == (int *)0x0) {
      iVar4 = 0;
    }
    if (iVar8 == iVar4) {
      return 0;
    }
    iVar4 = **(int **)(iVar8 + 0x10);
    if (iVar4 == 0x30203) {
      piVar3 = (int *)FUN_004f3c40();
      if (((*piVar3 == -0x1891baba) && (piVar3[2] == 0x64486b50)) && (0x1ffff < (uint)piVar3[4])) {
        iVar4 = FUN_004fd230();
      }
      else {
LAB_004f4030:
        iVar4 = 0;
      }
    }
    else {
      if (iVar4 != 0x30210) goto LAB_004f4030;
      iVar4 = (*(int **)(iVar8 + 0x10))[2];
    }
    if (iVar4 == iVar5) {
      iVar5 = *(int *)(iVar8 + 4);
      piVar2 = *(int **)(iVar8 + 8);
      piVar3 = (int *)(iVar8 + 4);
      *piVar2 = iVar5;
      *(int **)(iVar5 + 4) = piVar2;
      iVar5 = *piVar7;
      *piVar7 = (int)piVar3;
      *(int **)(iVar5 + 4) = piVar3;
      *(int **)(iVar8 + 8) = piVar7;
      *piVar3 = iVar5;
      return iVar8;
    }
    if (*(int *)(iVar8 + 4) == 0) {
LAB_004f3fd9:
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar8 + 4) + -4;
    }
  } while( true );
}
