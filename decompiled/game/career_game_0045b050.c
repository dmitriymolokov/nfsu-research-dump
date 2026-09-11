/* spd-match: far pct=6.20 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00457590(...);
int __cdecl FUN_00459b30(...);
int __cdecl FUN_0045ae10(...);
extern unsigned char *DAT_007361f8;
extern int DAT_0077a4ac;
extern int _DAT_006b74bc;
extern int _DAT_006cc8a8;
int unaff_EDI;
int unaff_ESI;
extern void LAB_0045b12a(...);

struct ThisCallBox {
  uint FUN_0045b050(int param_2, char param_3, float *param_4, undefined4 *param_5, float *param_6, undefined4 param_7, float param_8);
};
uint ThisCallBox::FUN_0045b050(int param_2, char param_3, float *param_4, undefined4 *param_5, float *param_6, undefined4 param_7, float param_8) {
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined4 uVar6;
  int *unaff_ESI;
  int unaff_EDI;
  float10 fVar7;
  
  *param_4 = -1.0;
  *param_5 = 0;
  *param_6 = 99999.0;
  uVar5 = FUN_0045ae10(param_2,unaff_EDI,unaff_ESI,param_7,((undefined4)this));
  if ((char)uVar5 != '\0') {
    fVar7 = (float10)FUN_00459b30(unaff_EDI,*unaff_ESI);
    fVar1 = (float)fVar7;
    bVar2 = NAN(_DAT_006cc8a8);
    bVar3 = fVar1 < _DAT_006cc8a8;
    bVar4 = fVar1 == _DAT_006cc8a8;
    *param_4 = fVar1;
    uVar5 = CONCAT22(extraout_var,
                     (ushort)bVar3 << 8 | (ushort)(NAN(fVar1) || bVar2) << 10 | (ushort)bVar4 << 0xe
                    );
    if (bVar3 == 0 && bVar4 == 0) {
      if ((param_3 == '\0') || (*(char *)(unaff_EDI + 0x1b1) != '\0')) {
        *(undefined4 *)(*(int *)(*unaff_ESI + 0x2c) + 1000) = 0;
      }
      else {
        *param_4 = fVar1 * _DAT_006b74bc;
        *(undefined4 *)(*(int *)(*unaff_ESI + 0x2c) + 1000) = *(undefined4 *)(param_2 + 4);
      }
      uVar6 = FUN_00457590(&DAT_0077a4ac,unaff_EDI,unaff_ESI + 0xe3,param_8,param_6);
      *param_5 = uVar6;
      fVar1 = *param_6;
      uVar5 = CONCAT31((int3)(CONCAT22((short)((uint)uVar6 >> 0x10),
                                       (ushort)(fVar1 < param_8) << 8 |
                                       (ushort)(NAN(fVar1) || NAN(param_8)) << 10 |
                                       (ushort)(fVar1 == param_8) << 0xe) >> 8),1);
      if ((uVar5 & 0x4100) == 0) goto LAB_0045b12a;
    }
  }
  uVar5 = uVar5 & 0xffffff00;
LAB_0045b12a:
  *(int *)(DAT_007361f8 + 0x2f8) = *(int *)(DAT_007361f8 + 0x2f8) + 1;
  return uVar5;
}
