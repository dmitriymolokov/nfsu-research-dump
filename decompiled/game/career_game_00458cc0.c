/* spd-match: far pct=8.81 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00458CC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736150;
extern int DAT_007372b0;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int DAT_0078a2fc;
extern int _DAT_006b753c;
extern int _DAT_006cc7dc;
extern int _DAT_006cc920;
void __fastcall FUN_00458cc0(int obj, int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;

  uint *puVar5;
  int iVar6;
  
  iVar4 = DAT_00736150;
  fVar1 = *(float *)(*(int *)(obj + 4) + 0x814);
  puVar5 = (uint *)(obj + 0xc);
  iVar6 = 8;
  do {
    uVar2 = *puVar5;
    if ((uVar2 & 1) != 0) {
      fVar3 = *(float *)((uVar2 >> 2 & 0xff) * 0x20 + iVar4) - fVar1;
      if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
        if (DAT_007372b0 * _DAT_006cc920 <= fVar3) {
          if (DAT_007372b0 * _DAT_006cc7dc < fVar3) {
            fVar3 = fVar3 - DAT_007372b0;
          }
        }
        else {
          fVar3 = fVar3 + DAT_007372b0;
        }
      }
      if (param_1 != DAT_0078a2fc) {
        fVar3 = -fVar3;
      }
      if (fVar3 < -_DAT_006b753c) {
        *puVar5 = uVar2 & 0xfffffffe;
      }
    }
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}
