/* spd-match: far pct=10.78 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_004280a0();
extern int DAT_00700b44;
extern unsigned char *DAT_0073619c;
extern int DAT_0078a368;
extern int _DAT_006b7b28;
extern int _DAT_006b7b30;
extern int _DAT_006cc9f0;
extern int _DAT_006cca38;
extern void LAB_00431290(void);

uint __fastcall FUN_00431230(int param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if ((((&DAT_00700b44)[uVar2] == '\0') || (uVar2 == 6)) || (uVar2 == 7)) {
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x3d4) * _DAT_006cc9f0;
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     (ushort)(fVar1 < _DAT_006b7b28) << 8 |
                     (ushort)(NAN(fVar1) || NAN(_DAT_006b7b28)) << 10 |
                     (ushort)(fVar1 == _DAT_006b7b28) << 0xe);
    if (fVar1 < _DAT_006b7b28 || (fVar1 == _DAT_006b7b28) != 0) {
      uVar2 = FUN_004280a0();
      if ((char)uVar2 == '\0') {
        uVar2 = 0;
        if (DAT_0078a368 != 0) {
          fVar1 = (float)*(int *)(DAT_0073619c + 0x14) * _DAT_006cca38;
          uVar2 = CONCAT22((short)((uint)DAT_0073619c >> 0x10),
                           (ushort)(fVar1 < _DAT_006b7b30) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_006b7b30)) << 10 |
                           (ushort)(fVar1 == _DAT_006b7b30) << 0xe);
          if (fVar1 < _DAT_006b7b30) goto LAB_00431290;
        }
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
LAB_00431290:
  return uVar2 & 0xffffff00;
}
