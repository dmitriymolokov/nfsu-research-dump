/* spd-match: far pct=5.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0044a000();
int __cdecl FUN_00458150();
int __cdecl FUN_0045ad30();
int __cdecl FUN_0045add0();
int __cdecl FUN_0045ae10();
int __cdecl FUN_0045b050();
int __cdecl FUN_0045b9f0();
int __cdecl FUN_0045bfb0();
int __cdecl FUN_0045c0d0();
int __cdecl FUN_0045cfb0();
int __cdecl FUN_005791c0();
extern int _DAT_006cc8a8;
extern int _DAT_006cc8bc;
extern int _DAT_00700674;
extern void LAB_0045be88(void);
extern void LAB_0045bf83(void);

char FUN_0045bae0(int *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char local_21a;
  uint local_218;
  int local_214;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_208;
  uint local_204;
  int local_200;
  float local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f4 [4];
  undefined4 local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined4 local_1dc;
  int local_1d8;
  float local_1d4;
  undefined4 local_1d0 [115];
  
  local_1d8 = FUN_0045c0d0(param_1,param_4);
  local_1f0 = 0xbf800000;
  local_21a = '\0';
  local_208 = 0x47c34f80;
  FUN_00458150(param_2);
  local_1d4 = -1.0;
  local_204 = 0;
  local_200 = 0;
  local_1fc = 0.0;
  local_1f8 = 0;
  if (*param_1 != 0) {
    FUN_0044a000();
  }
  iVar4 = *(int *)(*(int *)(*(int *)(param_4 + 0x34) + 0x1d4) + 0x1c);
  if (*(int *)(iVar4 + 0xe4) != 0) {
    FUN_005791c0();
  }
  if ((_DAT_00700674 <
       SQRT(*(float *)(iVar4 + 0x98) * *(float *)(iVar4 + 0x98) +
            *(float *)(iVar4 + 0x94) * *(float *)(iVar4 + 0x94) +
            *(float *)(iVar4 + 0x90) * *(float *)(iVar4 + 0x90))) ||
     (bVar1 = false, _DAT_00700674 < *(float *)(*param_5 + 0x3d4))) {
    bVar1 = true;
  }
  if (((param_8 != '\0') &&
      (((local_204 != 1 || (bVar1)) && (cVar2 = FUN_0045ad30(), cVar2 != '\0')))) &&
     ((((int)local_204 < 2 || (3 < (int)local_204)) || (*(int *)(param_4 + 0x34) == local_200)))) {
    uVar3 = FUN_0045cfb0();
    puVar5 = local_1d0;
    puVar6 = param_2;
    for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_1dc = CONCAT31(((unsigned int)(local_1dc) >> 8),uVar3);
    cVar2 = FUN_0045b050(&local_204,local_1dc,&local_1d4,local_1f4,&local_208,param_6,param_7);
    if (cVar2 != '\0') {
      *param_3 = (undefined1)local_1dc;
      local_21a = '\x01';
    }
  }
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  if (local_21a != '\0') goto LAB_0045bf83;
  if (bVar1) {
    local_214 = 0;
    local_20c = 0;
    local_210 = 0;
    local_218 = 1;
    if ((param_8 == '\0') || (cVar2 = FUN_0045add0(), cVar2 == '\0')) {
      puVar5 = local_1d0;
      puVar6 = param_2;
      for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_0045b050(&local_218,0,&local_1f0,local_1f4,&local_208,param_6,param_7);
      if (cVar2 != '\0') {
        FUN_0044a000();
        *param_3 = 0;
        local_21a = '\x01';
        goto LAB_0045bf83;
      }
    }
  }
  local_218 = 0;
  local_1ec = 0;
  local_1e8 = 0;
  if ((local_1d8 == 2) || (local_1d8 == 1)) {
    if (*(int *)(param_4 + 0x34) != 0) {
      local_218 = 2;
      local_1ec = 3;
      local_1e8 = *(int *)(param_4 + 0x34);
    }
  }
  else if (*(int *)(param_4 + 0x34) != 0) {
    local_218 = 3;
    local_1ec = 2;
    local_1e8 = *(int *)(param_4 + 0x34);
  }
  local_1e0 = 0;
  local_1e4 = 0;
  local_20c = 0;
  local_210 = 0;
  local_214 = local_1e8;
  if (param_8 == '\0') {
LAB_0045be88:
    if ((bVar1) || (cVar2 = FUN_0045b9f0(), cVar2 != '\0')) {
      puVar5 = local_1d0;
      puVar6 = param_2;
      for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_0045b050(&local_218,1,&local_1f0,local_1f4,&local_208,param_6,param_7);
      if (cVar2 != '\0') {
        FUN_0044a000();
        *param_3 = 1;
        local_21a = '\x01';
        goto LAB_0045bf83;
      }
    }
  }
  else if ((local_218 < 2) || (3 < local_218)) {
    if ((local_218 != local_204) ||
       (ABS(-local_1fc) < _DAT_006cc8bc == (ABS(-local_1fc) == _DAT_006cc8bc))) goto LAB_0045be88;
  }
  else if ((local_1e8 != local_200) || (local_218 != local_204)) goto LAB_0045be88;
  if (((param_8 == '\0') || (cVar2 = FUN_0045add0(), cVar2 == '\0')) &&
     ((bVar1 || (cVar2 = FUN_0045b9f0(), cVar2 != '\0')))) {
    puVar5 = local_1d0;
    puVar6 = param_2;
    for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_0045b050(&local_1ec,0,&local_1f0,local_1f4,&local_208,param_6,param_7);
    if (cVar2 != '\0') {
      FUN_0044a000();
      *param_3 = 0;
      local_21a = '\x01';
      goto LAB_0045bf83;
    }
  }
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  cVar2 = FUN_0045ad30();
  if ((cVar2 == '\0') ||
     (ABS(local_1d4 - _DAT_006cc8a8) < _DAT_006cc8bc !=
      (ABS(local_1d4 - _DAT_006cc8a8) == _DAT_006cc8bc))) {
    local_218 = 1;
    local_214 = 0;
    local_20c = 0;
    local_210 = 0;
  }
  else {
    FUN_0044a000();
  }
  FUN_0045ae10(&local_218,param_2,param_5,param_6,2);
  FUN_0044a000();
LAB_0045bf83:
  FUN_0045bfb0(*param_5,*param_3,param_5);
  return local_21a;
}
