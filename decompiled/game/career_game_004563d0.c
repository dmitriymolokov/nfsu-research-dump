/* spd-match: far pct=6.41 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004563D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00442110(...);
int __cdecl FUN_004424d0(...);
int __cdecl FUN_00442520(...);
int __cdecl FUN_00442630(...);
int __cdecl FUN_004573f0(...);
int __cdecl FUN_00457450(...);
extern int DAT_006cc7a4;
extern int DAT_00736150;
extern int DAT_0077af30;
extern void LAB_00456452(...);
extern void LAB_0045649f(...);
extern void LAB_004564fc(...);
extern void LAB_00456538(...);
extern void LAB_00456559(...);
extern void LAB_00456615(...);
extern void LAB_00456674(...);
extern void LAB_004566e9(...);

struct ThisCallBox {
  undefined4 FUN_004563d0(float * obj, int *param_2, undefined4 param_3, float param_4, char param_5, char param_6);
};
undefined4 ThisCallBox::FUN_004563d0(float * obj, int *param_2, undefined4 param_3, float param_4, char param_5, char param_6)

{
  int param_1 = (int)this;
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;

  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int local_130;
  float local_128;
  int local_11c;
  
  if ((param_1 == 0) || (obj == (float *)0x0)) {
    return 0;
  }
  local_128 = param_4;
  if (param_5 == '\0') {
    local_128 = obj[7] + param_4;
  }
  local_11c = 1;
  local_130 = param_1;
LAB_00456452:
  local_128 = local_128 - obj[7];
  if (local_128 < DAT_006cc7a4) {
    *param_2 = param_1;
    param_2[1] = (int)obj;
    return 1;
  }
  bVar2 = false;
  iVar8 = 0;
  bVar3 = true;
LAB_0045649f:
  do {
    iVar5 = 0;
    do {
      if (*(char *)((int)obj + iVar5 + 0x81) == -1) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    if (iVar5 <= iVar8) goto LAB_00456674;
    uVar9 = (uint)*(byte *)((int)obj + iVar8 + 0x81);
    if (uVar9 == 0xff) {
      iVar5 = 0;
    }
    else {
      iVar5 = uVar9 * 0x20 + DAT_00736150;
    }
    if (param_5 == '\0') {
      if (*(char *)(iVar5 + 0xd) == '\x01') goto LAB_004564fc;
LAB_00456615:
      iVar8 = iVar8 + 1;
      goto LAB_0045649f;
    }
    if (*(char *)(iVar5 + 0xd) != '\x01') {
LAB_004564fc:
      cVar1 = *(char *)(iVar5 + 0xb);
      bVar3 = false;
      if (cVar1 == '\x03') {
        local_128 = -1.0;
        goto LAB_00456674;
      }
      bVar4 = (byte)((uint)obj[0x21] >> 0x19) & 1;
      param_1 = local_130;
      if (param_6 == '\0') {
        if (bVar4 != 0) {
          if (*(char *)(iVar5 + 0xc) == '\a') goto LAB_00456559;
          if (bVar4 != 0) {
            cVar1 = *(char *)(iVar5 + 0xc);
            goto LAB_00456538;
          }
        }
      }
      else if (((uint)obj[0x21] >> 6 & 1) != 0) {
        if (cVar1 == '\a') {
LAB_00456559:
          bVar3 = true;
          iVar8 = iVar8 + 1;
          goto LAB_0045649f;
        }
LAB_00456538:
        if (cVar1 == '\x02') break;
      }
      FUN_00442110();
      iVar6 = FUN_00442630();
      if (iVar6 != 0) {
        FUN_00457450();
      }
      if (*(char *)(iVar5 + 0xb) != '\0') {
        FUN_004573f0();
        bVar3 = false;
        bVar2 = true;
        goto LAB_00456615;
      }
      FUN_00457450();
      bVar2 = true;
      iVar8 = iVar8 + 1;
      bVar3 = false;
      goto LAB_0045649f;
    }
    iVar8 = iVar8 + 1;
  } while( true );
  pfVar7 = (float *)FUN_00442110();
  local_128 = (local_128 + obj[7]) -
              ((*pfVar7 - *obj) * obj[3] + (pfVar7[1] - obj[1]) * obj[4]);
  param_1 = (&DAT_0077af30)[*(byte *)(iVar5 + 9)];
  bVar3 = false;
  obj = pfVar7;
  local_130 = param_1;
LAB_00456674:
  if (bVar2) {
    obj = (float *)0x0;
  }
  if (bVar3) {
    iVar8 = (int)obj + (-0x27c - param_1);
    if (param_5 == '\0') {
      iVar8 = iVar8 / 0x88;
      if (iVar8 != 0) {
        obj = (float *)(iVar8 * 0x88 + 500 + param_1);
        goto LAB_004566e9;
      }
    }
    else {
      iVar8 = iVar8 / 0x88;
      if (iVar8 + 1 < (int)*(short *)(param_1 + 0x10)) {
        obj = (float *)(iVar8 * 0x88 + 0x304 + param_1);
        goto LAB_004566e9;
      }
    }
    obj = (float *)0x0;
  }
LAB_004566e9:
  if (obj == (float *)0x0) {
    return 0;
  }
  if (param_5 == '\0') {
    iVar8 = FUN_00442520();
  }
  else {
    iVar8 = FUN_004424d0();
  }
  if (iVar8 == 0) {
    return 0;
  }
  local_11c = local_11c + 1;
  if (0x19000 < local_11c) {
    return 0;
  }
  goto LAB_00456452;
}
