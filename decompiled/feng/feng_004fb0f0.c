/* spd-match: far pct=7.55 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004FB0F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa3d0(...);
int unaff_EDI;
extern void LAB_004fb1fc(...);

struct ThisCallBox {
  undefined4 FUN_004fb0f0(int obj, uint *param_2, uint *param_3, uint param_4);
};
undefined4 ThisCallBox::FUN_004fb0f0(int obj, uint *param_2, uint *param_3, uint param_4)

{
  uint uVar1;

  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar3 = *(uint *)(obj + 100);
  if ((uVar3 & 8) != 0) {
    iVar2 = *param_2 + unaff_EDI;
    if (iVar2 < 0) {
      if (((int)this) < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = ((int)this) - -iVar2 % ((int)this);
      }
    }
    else {
      uVar3 = iVar2 % ((int)this);
    }
    *param_2 = uVar3;
    iVar2 = *param_3 + unaff_EDI;
    if (-1 < iVar2) {
      *param_3 = iVar2 % ((int)this);
      return 1;
    }
    if (1 < ((int)this)) {
      *param_3 = ((int)this) - -iVar2 % ((int)this);
      return 1;
    }
    *param_3 = 0;
    return 1;
  }
  if (((uVar3 & 4) != 0) && ((uVar3 & 2) != 0)) {
    iVar2 = *param_2 + unaff_EDI;
    if (-1 < iVar2) {
      *param_2 = iVar2 % ((int)this);
      *param_3 = iVar2 % ((int)this);
      return 1;
    }
    if (1 < ((int)this)) {
      uVar3 = ((int)this) - -iVar2 % ((int)this);
      *param_2 = uVar3;
      *param_3 = uVar3;
      return 1;
    }
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  }
  uVar3 = *param_3;
  iVar2 = uVar3 + unaff_EDI;
  if (iVar2 < 0) {
    if (((int)this) < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((int)this) - -iVar2 % ((int)this);
    }
  }
  else {
    uVar4 = iVar2 % ((int)this);
  }
  *param_3 = uVar4;
  if (unaff_EDI < 0) {
    if (*param_2 == uVar3) {
LAB_004fb1fc:
      *param_2 = uVar4;
      return 1;
    }
  }
  else {
    uVar1 = *param_2;
    if (uVar1 != uVar3) {
      if (uVar1 < uVar4) {
        uVar4 = uVar4 - uVar1;
      }
      else {
        uVar4 = (uVar4 - uVar1) + ((int)this);
      }
      if (param_4 <= uVar4) {
        uVar4 = FUN_004fa3d0();
        goto LAB_004fb1fc;
      }
    }
  }
  return 0;
}
