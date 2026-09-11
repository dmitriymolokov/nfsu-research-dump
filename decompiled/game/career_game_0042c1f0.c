/* spd-match: far pct=10.53 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042C1F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00435b30();
int __cdecl FUN_00465530();
int __cdecl FUN_00572970();
int __cdecl FUN_00674898();
extern int DAT_006f08a0;
extern int DAT_0073619c;
extern int DAT_007361a0;
extern int DAT_0078a346;
extern int DAT_0078a368;
extern int _DAT_006b7a94;
extern int _DAT_006b7a98;
extern int _DAT_006cc7bc;
extern int _DAT_006ccac0;
void __fastcall FUN_0042c1f0(int obj)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;

  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int local_4;
  
  iVar10 = 0;
  if (*(int *)(obj + 0x58) == 0) {
    *(undefined4 *)(obj + 0x58) = DAT_006f08a0;
    if (((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) && (*(int *)(obj + 0x130) != 0)) {
      *(undefined4 *)(obj + 0x104) = 0;
      fVar1 = *(float *)(obj + 0x118);
      *(undefined4 *)(obj + 0x118) = 0;
      *(float *)(obj + 0x11c) = *(float *)(obj + 0x11c) + fVar1;
    }
    iVar7 = DAT_0073619c;
    piVar2 = *(int **)(*(int *)(obj + 4) + 0x1c);
    if ((int)*(char *)((int)piVar2 + 9) == *(int *)(((int)DAT_0073619c) + 0x530)) {
      if (DAT_0078a368 == 0) {
        iVar11 = *(int *)(((int)DAT_0073619c) + 0x24);
        local_4 = 0;
        if (0 < iVar11) {
          iVar3 = *piVar2;
          puVar9 = (undefined4 *)(((int)DAT_0073619c) + 0x520);
          do {
            iVar4 = *(int *)*puVar9;
            fVar1 = *(float *)(iVar3 + 0x60) - *(float *)(iVar4 + 0x60);
            fVar6 = *(float *)(iVar3 + 100) - *(float *)(iVar4 + 100);
            fVar5 = *(float *)(iVar3 + 0x68) - *(float *)(iVar4 + 0x68);
            if (SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) < _DAT_006ccac0) {
              iVar10 = iVar10 + 1;
            }
            puVar9 = puVar9 + 1;
            iVar11 = iVar11 + -1;
            local_4 = iVar10;
          } while (iVar11 != 0);
        }
        FUN_00572970(((float)local_4 - _DAT_006cc7bc) * ((int)_DAT_006b7a98) + _DAT_006b7a94,
                     "CrossFinishLine");
      }
      FUN_00435b30(iVar7);
    }
    uVar8 = FUN_00674898();
    *(undefined4 *)(obj + 0x5c) = uVar8;
    if (*(int *)(obj + 4) != 0) {
      FUN_00465530();
    }
  }
  return;
}
