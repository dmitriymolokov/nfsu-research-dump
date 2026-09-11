/* spd-match: far pct=5.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_4_4 */
#include "ghidra_compat.h"

typedef struct { unsigned char b[16]; } ghidra_m128;
ghidra_m128 __cdecl ghidra_xmm_zero(void);
ghidra_m128 __cdecl rcpss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rsqrtss(ghidra_m128, ghidra_m128);
ghidra_m128 __cdecl rcpps(ghidra_m128, ghidra_m128);

int __cdecl FUN_0067dce7();
extern int _DAT_006ccaf8;
extern int _DAT_006ccb10;
extern int _DAT_006ebd00;
extern int _DAT_006ebd08;
extern int _DAT_006ebd20;
extern void LAB_0067ddaf(void);
extern void LAB_0067ddfc(void);
extern void LAB_0067deac(void);

undefined4 __powhlp(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = (double)(__int64)CONCAT44(param_2,param_1);
  uVar4 = 0;
  if (dVar1 < _DAT_006ccaf8) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_006ebd00;
  if ((*(float *)((unsigned char *)&(param_3) + 4)) == 0x7ff00000) {
    if ((*(float *)&(param_3)) != 0) goto LAB_0067ddfc;
    if (_DAT_006ccb10 < dVar1) goto LAB_0067deac;
    if (_DAT_006ccb10 <= dVar1) goto LAB_0067ddaf;
  }
  else {
    if (((*(float *)((unsigned char *)&(param_3) + 4)) == -0x100000) && ((*(float *)&(param_3)) == 0)) {
      if (_DAT_006ccb10 < dVar1) {
        dVar2 = 0.0;
        goto LAB_0067deac;
      }
      if (dVar1 < _DAT_006ccb10) goto LAB_0067deac;
LAB_0067ddaf:
      uVar4 = 1;
      dVar2 = _DAT_006ebd08;
      goto LAB_0067deac;
    }
LAB_0067ddfc:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = FUN_0067dce7(param_3);
      if (param_3 <= _DAT_006ccaf8) {
        if (_DAT_006ccaf8 <= param_3) {
          dVar2 = 1.0;
        }
        else {
          dVar2 = _DAT_006ebd20;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
        }
      }
      else {
        dVar2 = _DAT_006ebd00;
        if (iVar3 == 1) {
          dVar2 = -_DAT_006ebd00;
        }
      }
      goto LAB_0067deac;
    }
    if (param_1 != 0) {
      return 0;
    }
    if (_DAT_006ccaf8 < param_3) goto LAB_0067deac;
    if (_DAT_006ccaf8 <= param_3) {
      dVar2 = 1.0;
      goto LAB_0067deac;
    }
  }
  dVar2 = 0.0;
LAB_0067deac:
  *param_4 = dVar2;
  return uVar4;
}
