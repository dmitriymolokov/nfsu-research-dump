/* spd-match: far pct=5.43 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_01 */
#include "ghidra_compat.h"

extern char s_NISMO_PRESET_006b88cc[];
extern char s_PETEY_PABLO_006b88e8[];
extern char s_gotcharobzombie_006b88f4[];
extern char s_ROBZOMBIE_PRESET_006b8904[];
extern char s_havyamystikal_006b8918[];
extern char s_MYSTIKAL_PRESET_006b8928[];
extern char s_needmylostprophets_006b8938[];
extern char s_LOSTPRO_PRESET_006b894c[];
extern char s_119focus_00706918[];

extern int _DAT_006cc83c;
int unaff_ESI;

float10 FUN_005a5f80(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_ESI;
  float10 fVar2;
  undefined1 *puVar3;
  undefined1 auStack_34 [4];
  undefined1 auStack_24 [32];
  
  iVar1 = (**(code **)(*unaff_ESI + 8))();
  puVar3 = auStack_24;
  (**(code **)(*unaff_ESI + 0x1c))
            (param_2,puVar3,0,
             (float)((int)*(short *)(param_2 + 0x3c + iVar1 * 2) << 8) * _DAT_006cc83c);
  fVar2 = (float10)(**(code **)(*unaff_ESI + 0x14))(param_1,auStack_34);
  return fVar2 - (float10)(float)(uintptr_t)puVar3;
}
