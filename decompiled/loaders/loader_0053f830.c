/* spd-match: far pct=6.31 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053F830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00540680();
extern int DAT_007349c8;
extern int DAT_00735598;
extern int DAT_00743c70;
extern unsigned char *DAT_00743c74;
extern int _DAT_007301d0;
extern int _DAT_00735584;
extern int _DAT_00735588;
extern int _DAT_0073558c;
extern int _DAT_00735590;
void __fastcall FUN_0053f830(int obj)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;

  int iVar9;
  int iVar10;
  int local_c;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar9 = __allshr();
  puVar1 = (undefined4 *)(obj + 0x88);
  if ((undefined4 *)*puVar1 != puVar1) {
    iVar10 = 0;
    if (*(char *)(obj + 0xe) < '\0') {
      iVar10 = FUN_00540680();
    }
    puVar2 = (undefined4 *)*puVar1;
    while (puVar2 != puVar1) {
      piVar3 = (int *)*puVar1;
      if ((piVar3[2] != 0) && (iVar10 != piVar3[3])) {
        iVar4 = *piVar3;
        piVar5 = (int *)piVar3[1];
        *piVar5 = iVar4;
        *(int **)(iVar4 + 4) = piVar5;
        if (iVar10 == 0) {
          *DAT_00743c74 = (int)piVar3;
          piVar5 = piVar3;
          piVar3[1] = (int)DAT_00743c74;
          DAT_00743c74 = piVar5;
          *piVar3 = (int)&DAT_00743c70;
        }
        else {
          puVar2 = *(undefined4 **)(iVar10 + 0x8c);
          *puVar2 = piVar3;
          *(int **)(iVar10 + 0x8c) = piVar3;
          piVar3[1] = (int)puVar2;
          *piVar3 = iVar10 + 0x88;
        }
        piVar3[3] = iVar10;
      }
      puVar2 = (undefined4 *)*puVar1;
    }
  }
  QueryPerformanceCounter(&local_8);
  uVar8 = DAT_007349c8;
  local_c = __allshr();
  local_c = local_c - iVar9;
  if (local_c < 0) {
    local_c = 0;
  }
  fVar6 = (float)(1 << ((byte)uVar8 & 0x1f)) * (float)local_c * _DAT_007301d0;
  fVar7 = fVar6;
  if (fVar6 < _DAT_00735584) {
    fVar7 = _DAT_00735584;
  }
  _DAT_00735584 = fVar7;
  _DAT_0073558c = ((int)(_DAT_0073558c)) + fVar6;
  DAT_00735598 = ((int)(DAT_00735598)) + 1;
  _DAT_00735590 = ((int)(_DAT_00735588)) + _DAT_0073558c;
  return;
}
