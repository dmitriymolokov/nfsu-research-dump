/* spd-match: far pct=8.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00572690 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00572b50();
int __cdecl FUN_00572f20();
extern int DAT_0073ad34;
extern int _DAT_006cca38;
void __fastcall FUN_00572690(int obj)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;

  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(obj + 0x90);
  fVar3 = (float)(DAT_0073ad34 - *(int *)(obj + 0x5c)) * _DAT_006cca38;
  fVar4 = (float)iVar7 * *(float *)(obj + 0x98);
  if (fVar4 < fVar3 != (fVar4 == fVar3)) {
    while (iVar7 == *(int *)(obj + 0x84)) {
      iVar7 = 0;
      *(float *)(obj + 0x98) = *(float *)(obj + 0x98) + *(float *)(obj + 0x98);
      iVar5 = FUN_00572b50("LAP_SNAPSHOT",0);
      while (iVar5 != 0) {
        iVar7 = iVar7 + 1;
        piVar6 = (int *)FUN_00572b50("LAP_SNAPSHOT",iVar7);
        if (piVar6 != (int *)0x0) {
          iVar5 = *piVar6;
          piVar1 = (int *)piVar6[1];
          *piVar1 = iVar5;
          *(int **)(iVar5 + 4) = piVar1;
          puVar2 = *(undefined4 **)(obj + 0x6c);
          *puVar2 = piVar6;
          *(int **)(obj + 0x6c) = piVar6;
          piVar6[1] = (int)puVar2;
          *piVar6 = obj + 0x68;
          *(int *)(obj + 0x90) = *(int *)(obj + 0x90) + -1;
        }
        iVar5 = FUN_00572b50("LAP_SNAPSHOT",iVar7);
      }
      iVar7 = *(int *)(obj + 0x90);
      if (*(int *)(obj + 0x84) <= iVar7) {
        return;
      }
      fVar3 = (float)(DAT_0073ad34 - *(int *)(obj + 0x5c)) * _DAT_006cca38;
      fVar4 = (float)*(int *)(obj + 0x90) * *(float *)(obj + 0x98);
      if (fVar4 < fVar3 == (fVar4 == fVar3)) {
        return;
      }
    }
    iVar7 = FUN_00572f20("LAP_SNAPSHOT");
    if (iVar7 != 0) {
      *(int *)(obj + 0x90) = *(int *)(obj + 0x90) + 1;
    }
  }
  return;
}
