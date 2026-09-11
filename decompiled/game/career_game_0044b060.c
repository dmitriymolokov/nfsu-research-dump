/* spd-match: far pct=8.02 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044B060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_00421400();
int __cdecl FUN_00421a30();
extern int DAT_00735fb0;
extern int DAT_00735fb8;
extern int DAT_0073619c;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f0;
extern int DAT_0078a2f0;
extern int DAT_0078a344;
extern int _DAT_006b7760;
extern int _DAT_006b7764;
extern int _DAT_006b7768;
extern int _DAT_006cca38;
uint __fastcall FUN_0044b060(undefined4 val, int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;

  uint uVar4;
  undefined2 extraout_var;
  ushort uVar5;
  float10 fVar6;
  
  uVar4 = CONCAT31((int3)((uint)val >> 8),DAT_0078a344);
  if ((((DAT_0078a344 == '\0') && (uVar4 = DAT_007361a8, DAT_007361a8 == 0)) &&
      ((DAT_0078a2f0 != 1099 || ((DAT_00735fb0 == 0 || (uVar4 = DAT_00735fb0, DAT_00735fb8 != 4)))))
      ) && ((uVar4 = param_1[2], '\x02' < *(char *)(uVar4 + 0x10) &&
            ((*DAT_007361f0 != 9 && ((uVar4 = param_1[0x109], uVar4 == 0 || (uVar4 == 0x7fffffff))))
            )))) {
    uVar4 = FUN_00421a30();
    if (uVar4 == 0) {
      iVar2 = param_1[1];
      fVar1 = *(float *)(unsigned int)(iVar2 + 0x3d0);
      uVar5 = (ushort)(fVar1 < _DAT_006b7760) << 8 |
              (ushort)(NAN(fVar1) || NAN(_DAT_006b7760)) << 10 |
              (ushort)(fVar1 == _DAT_006b7760) << 0xe;
      uVar4 = (uint)uVar5;
      if (((((fVar1 >= _DAT_006b7760) && (0 < *(int *)(iVar2 + 0x3cc))) &&
           (uVar4 = (uint)CONCAT11((char)(uVar5 >> 8),*(char *)(iVar2 + 0x828)),
           *(char *)(iVar2 + 0x828) == '\0')) &&
          ((uVar4 = 0, param_1[0xfe] != 0 && (uVar4 = *(uint *)(param_1[0xfe] + 0x1f8), uVar4 != 9))
          )) && (((uVar4 != 10 && ((uVar4 != 0xe && (uVar4 != 0xb)))) && (uVar4 != 0xc)))) {
        uVar4 = (**(code **)(*param_1 + 0x58))();
        if (uVar4 != 0xfffffffe) {
          fVar6 = (float10)FUN_00421400();
          fVar3 = (float10)_DAT_006b7768;
          uVar4 = CONCAT22(extraout_var,
                           (ushort)(fVar6 < fVar3) << 8 | (ushort)(NAN(fVar6) || NAN(fVar3)) << 10 |
                           (ushort)(fVar6 == fVar3) << 0xe);
          if (fVar6 >= fVar3) {
            fVar1 = (float)*(int *)(((int)DAT_0073619c) + 0x14) * _DAT_006cca38;
            uVar4 = CONCAT22((short)((uint)DAT_0073619c >> 0x10),
                             (ushort)(fVar1 < _DAT_006b7764) << 8 |
                             (ushort)(NAN(fVar1) || NAN(_DAT_006b7764)) << 10 |
                             (ushort)(fVar1 == _DAT_006b7764) << 0xe);
            if (fVar1 >= _DAT_006b7764) {
              return CONCAT31((int3)(uVar4 >> 8),*(short *)(*(int *)(param_1[1] + 0x1c) + 0x10) == 0
                             );
            }
          }
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}
