/* spd-match: far pct=3.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A64B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00449f80();
int __cdecl FUN_004f75b0();
int __cdecl FUN_004feb50();
int __cdecl FUN_004ff2f0();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006cca38;
extern int _DAT_006cca8c;
void __fastcall FUN_004a64b0(int obj, int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;

  int *piVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_18;
  
  if (((*(int *)(obj + 0x3b0) != 0) && (*(int *)(obj + 0x3b0) != 0x7fffffff)) &&
     (fVar1 = (float)*(int *)(obj + 0x3b0) * _DAT_006cca38, fVar1 != DAT_006cc7a4)) {
    fVar8 = (float10)FUN_00449f80();
    bVar3 = FUN_00674898();
    fVar2 = DAT_006cc7a4;
    if ((*(int *)(obj + 0x3b0) != 0) && (*(int *)(obj + 0x3b0) != 0x7fffffff)) {
      fVar2 = fVar1;
    }
    fVar2 = fVar2 * _DAT_006cca8c;
    if (((*(int *)(obj + 0x3bc) == 0) || (*(int *)(obj + 0x3bc) == 0x7fffffff)) ||
       ((float)*(int *)(obj + 0x3bc) * _DAT_006cca38 == DAT_006cc7a4)) {
      local_18 = DAT_006cc7a4;
      if ((*(int *)(obj + 0x3b8) != 0) && (*(int *)(obj + 0x3b8) != 0x7fffffff)) {
        local_18 = (float)*(int *)(obj + 0x3b8) * _DAT_006cca38;
      }
      local_18 = local_18 - (float)bVar3 * fVar2;
    }
    else {
      local_18 = (float)fVar8 - (float)bVar3 * fVar2;
    }
    local_18 = local_18 / fVar2;
    if (local_18 < DAT_006cc7a4) {
      local_18 = 0.0;
    }
    iVar7 = 5;
    if ((int)(6 - (uint)bVar3) < 6) {
      iVar6 = 6 - (6 - (uint)bVar3);
      iVar7 = 5 - iVar6;
      do {
        FUN_004f75b0(*(undefined4 *)(param_1 + 0x30));
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((bVar3 < 6) && (DAT_006cc7a4 < local_18)) {
      iVar6 = FUN_00674898();
      FUN_004f75b0(iVar6 * 0x1000000 + (*(uint *)(param_1 + 0x30) & 0xffffff));
      iVar7 = iVar7 + -1;
    }
    if (-1 < iVar7) {
      piVar5 = (int *)(param_1 + 0x4c + iVar7 * 4);
      iVar7 = iVar7 + 1;
      do {
        iVar6 = *piVar5;
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) < 0x100)) {
          cVar4 = FUN_004feb50();
          if (cVar4 == '\0') {
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
          }
          FUN_004ff2f0(iVar6,0,0);
        }
        piVar5 = piVar5 + -1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}
