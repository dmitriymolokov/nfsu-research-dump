/* spd-match: far pct=5.82 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/buckets/p1_05/attempt3_005b2d7a_thiscall */
#include "ghidra_compat.h"

int __cdecl lstrcmpiA(const char *, const char *);
long __cdecl __ftol(void);
extern undefined *p08_PTR_s_ZENABLE_006d5660;
extern undefined *p08_PTR_s_TEXTURE_006d4da8;

int __cdecl FUN_005b1f01(...);
extern void LAB_005b2dbb(...);
extern void LAB_005b2e10(...);
extern void LAB_005b2ede(...);
extern void LAB_005b2f18(...);

struct ThisCallBox {
  int FUN_005b2d7a(int param_2, undefined4 *param_3, int *param_4, int *param_5, int *param_6, int *param_7, int *param_8);
};
int ThisCallBox::FUN_005b2d7a(int param_2, undefined4 *param_3, int *param_4, int *param_5, int *param_6, int *param_7, int *param_8) {
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  piVar2 = param_8;
  piVar1 = param_7;
  local_8 = 0;
  if (param_2 == 0) {
    return -0x7fffbffb;
  }
  iVar3 = *(int *)(param_2 + 4);
  local_c = ((int)this);
  if (iVar3 == 1) {
    *param_7 = 0;
    *param_8 = 0;
    while( true ) {
      if (*(int *)(param_2 + 4) != 1) {
        return -0x7fffbffb;
      }
      iVar3 = *(int *)(param_2 + 8);
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      if (*(int *)(iVar3 + 4) != 5) {
        return -0x7fffbffb;
      }
      if (*(int *)(iVar3 + 0x10) != 1) {
        return -0x7fffbffb;
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        return -0x7fffbffb;
      }
      if (*(int *)(iVar3 + 4) != 10) {
        return -0x7fffbffb;
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        return -0x7fffbffb;
      }
      local_8 = FUN_005b2d7a(*(int *)(iVar3 + 0x20),(undefined4 *)local_20,(int *)local_1c,(int *)local_18,(int *)local_14,(int *)local_10,param_7);
      if (local_8 < 0) break;
      *param_8 = *param_8 + (int)param_7;
      param_2 = *(int *)(param_2 + 0xc);
      *piVar1 = *piVar1 + 1;
      if (param_2 == 0) {
        *param_3 = 0;
        *param_4 = 0;
        *param_5 = 0;
        *param_6 = 0;
        return local_8;
      }
    }
    return local_8;
  }
  if (iVar3 == 7) {
    if (*(int *)(param_2 + 0x10) == 0) {
      return -0x7fffbffb;
    }
    iVar3 = FUN_005b2d7a(*(int *)(param_2 + 0x10),param_3,param_4,param_5,param_6,param_7,param_8);
    if (-1 < iVar3) {
      if (*param_6 == 0) {
        *param_6 = 1;
      }
      *param_6 = *(int *)(param_2 + 0x14) * *param_6;
      *piVar2 = *(int *)(param_2 + 0x14) * *piVar2;
      return iVar3;
    }
    return iVar3;
  }
  if (iVar3 != 8) {
    pcVar4 = "ID3DXEffectCompiler: Unexpected node encountered when trying to determine type";
    goto LAB_005b2dbb;
  }
  *param_6 = 0;
  *param_7 = 0;
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 0) {
LAB_005b2e10:
    iVar3 = 1;
    *param_4 = 1;
  }
  else if (iVar3 == 1) {
    *param_4 = *(int *)(param_2 + 0x1c);
    iVar3 = *(int *)(param_2 + 0x18);
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        pcVar4 = "ID3DXEffectCompiler: Unexpected template type";
        goto LAB_005b2dbb;
      }
      goto LAB_005b2e10;
    }
    *param_4 = *(int *)(param_2 + 0x18);
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  *param_5 = iVar3;
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 0:
    *param_3 = 1;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xd:
    *param_3 = 2;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    *param_3 = 3;
    break;
  case 0xe:
    *param_3 = 4;
    *param_8 = 4;
    goto LAB_005b2f18;
  case 0xf:
    *param_3 = 5;
    break;
  case 0x10:
    *param_3 = 6;
    break;
  case 0x11:
    *param_3 = 7;
    break;
  case 0x12:
    *param_3 = 8;
    break;
  case 0x13:
    *param_3 = 9;
    break;
  case 0x14:
    *param_3 = 10;
    goto LAB_005b2ede;
  case 0x15:
    *param_3 = 0xb;
    goto LAB_005b2ede;
  case 0x16:
    *param_3 = 0xc;
    goto LAB_005b2ede;
  case 0x17:
    *param_3 = 0xd;
    goto LAB_005b2ede;
  case 0x18:
    *param_3 = 0xe;
LAB_005b2ede:
    *param_8 = 0;
    goto LAB_005b2f18;
  case 0x19:
    *param_3 = 0xf;
    break;
  case 0x1a:
    *param_3 = 0x10;
    break;
  case 0x1b:
    *param_3 = 0x11;
    break;
  case 0x1c:
    *param_3 = 0x12;
    break;
  default:
    pcVar4 = "ID3DXEffectCompiler: Unexpected component type";
LAB_005b2dbb:
    FUN_005b1f01(((int)this) + 0xc,0,0,pcVar4);
    return -0x7fffbffb;
  }
  *param_8 = 4;
LAB_005b2f18:
  *param_8 = *param_4 * *param_5 * *param_8;
  return 0;
}
