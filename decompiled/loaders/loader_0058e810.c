/* spd-match: far pct=10.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058E810 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_00401c10();
int __cdecl FUN_004ad8d0();
int __cdecl FUN_0058efb0();
int __cdecl FUN_0058f090();
int __cdecl FUN_0058f640();
int __cdecl FUN_0058fa50();
extern int DAT_007313d4;
extern int DAT_007313d7;
extern int DAT_007313da;
extern int DAT_007313dd;
extern int DAT_007313e0;
extern int DAT_007313e6;
extern int DAT_007313e9;
extern int DAT_007313ef;
extern unsigned char *DAT_0073619c;
extern unsigned char *DAT_007361b4;
extern unsigned char *DAT_007361b8;
extern unsigned char *DAT_007361bc;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f8;
extern unsigned char *DAT_00737874;
extern unsigned char *DAT_00737878;
extern unsigned char *DAT_0073787c;
extern int DAT_00737882;
extern int DAT_0078a2fc;
extern int DAT_0078a318;
extern void LAB_0058ee82(void);
void __fastcall FUN_0058e810(int obj, undefined4 param_1)

{
  undefined *puVar1;

  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [44];
  
  if (*(int *)(obj + 0xbc) == 0) {
    return;
  }
  if (DAT_007361f8 == 0) {
    return;
  }
  if (DAT_0073619c == 0) {
    return;
  }
  *(undefined4 *)(obj + 0xc4) = *(undefined4 *)(obj + 0xc0);
  *(undefined4 *)(obj + 0xa8) = 0;
  FUN_004010a0(local_30,8,4,FUN_004ad8d0);
  local_48 = 0;
  local_44 = 0;
  iVar2 = FUN_0058efb0(&local_58);
  if (iVar2 == 0) {
    return;
  }
  FUN_0058fa50(param_1,*(undefined4 *)(obj + 0x88),0xf);
  puVar4 = local_58;
  FUN_0058f090(obj,param_1,&local_48,local_30,local_58);
  if (*(int *)(obj + 0xc4) != 0xb) {
    local_40 = *(undefined4 *)(DAT_0073619c + 0x554);
    local_3c = *(undefined4 *)(DAT_0073619c + 0x558);
    iVar2 = *(int *)(obj + 0xa4);
    local_38 = 0;
    iVar3 = (uint)(ushort)(*(short *)(iVar2 + 0x9a) - (short)puVar4) +
            (uint)*(ushort *)(iVar2 + 0x98);
    iVar5 = (uint)(ushort)(*(short *)(iVar2 + 0x9c) - (short)puVar4) +
            (uint)*(ushort *)(iVar2 + 0x98);
    iVar2 = iVar3;
    if ((DAT_0078a2fc == 1) && (DAT_0078a318 != 0)) {
      iVar2 = iVar5;
      iVar5 = iVar3;
    }
    iVar3 = *(int *)(obj + 0xc4) * 0x3c;
    FUN_0058f640(obj,param_1,&local_40,&local_48,puVar4,local_30,&DAT_007313e6,0xd,
                 *(undefined4 *)(obj + 0x94),iVar2,*(undefined4 *)(&DAT_00737878 + iVar3),
                 *(undefined4 *)(&DAT_0073787c + iVar3));
    if (DAT_0078a318 != 0) {
      local_40 = *(undefined4 *)(DAT_0073619c + 0x55c);
      local_3c = *(undefined4 *)(DAT_0073619c + 0x560);
      iVar2 = *(int *)(obj + 0xc4) * 0x3c;
      local_38 = 0;
      FUN_0058f640(obj,param_1,&local_40,&local_48,puVar4,local_30,&DAT_007313e6,0xd,
                   *(undefined4 *)(obj + 0x94),iVar5,*(undefined4 *)(&DAT_00737878 + iVar2),
                   *(undefined4 *)(&DAT_0073787c + iVar2));
    }
  }
  local_5c = *(undefined4 *)(obj + 0x7c);
  if ((&DAT_00737882)[*(int *)(obj + 0xc4) * 0x3c] != '\0') {
    local_5c = *(undefined4 *)(obj + 0x80);
  }
  iVar2 = *(int *)(DAT_007361f8 + 0x1c);
  local_60 = 0;
  iVar5 = DAT_007361f8;
  if (0 < *(int *)(DAT_007361f8 + 0x20) - iVar2) {
    do {
      iVar2 = *(int *)(iVar5 + 0x28 + (iVar2 + local_60) * 4);
      if ((*(char *)(iVar2 + 0x4d0) != '\0') && (*(char *)(iVar2 + 0x8a9) != '\0')) {
        iVar3 = *(int *)(obj + 0xc4) * 0x3c;
        iVar5 = 0;
        if ((&DAT_00737882)[iVar3] != '\0') {
          iVar5 = FUN_00401c10(0x42b40000);
          iVar5 = iVar5 + ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                         *(short *)(iVar2 + 0x3b4)) - (int)local_58);
        }
        puVar4 = &DAT_007313dd;
        local_50 = (undefined *)0x5;
        if (*(int *)(obj + 0xa8) == iVar2) {
          puVar4 = &DAT_007313e9;
          local_50 = (undefined *)0x3;
        }
        FUN_0058f640(obj,param_1,iVar2 + 0x60,&local_48,local_58,local_30,puVar4,local_50,
                     local_5c,iVar5,*(undefined4 *)(&DAT_00737874 + iVar3),
                     *(undefined4 *)(&DAT_00737874 + iVar3));
        iVar5 = DAT_007361f8;
        puVar4 = local_58;
      }
      iVar2 = *(int *)(iVar5 + 0x1c);
      local_60 = local_60 + 1;
    } while (local_60 < *(int *)(iVar5 + 0x20) - iVar2);
  }
  iVar2 = *(int *)(iVar5 + 0x20);
  local_60 = 0;
  if (*(int *)(iVar5 + 0x24) != iVar2 && -1 < *(int *)(iVar5 + 0x24) - iVar2) {
    do {
      iVar2 = *(int *)(iVar5 + 0x28 + (iVar2 + local_60) * 4);
      if ((*(char *)(iVar2 + 0x4d0) != '\0') && (*(char *)(iVar2 + 0x8a9) != '\0')) {
        iVar3 = *(int *)(obj + 0xc4) * 0x3c;
        iVar5 = 0;
        if ((&DAT_00737882)[iVar3] != '\0') {
          iVar5 = ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                 *(short *)(iVar2 + 0x3b4)) - (int)puVar4) + 0x4000;
        }
        FUN_0058f640(obj,param_1,iVar2 + 0x60,&local_48,puVar4,local_30,&DAT_007313e0,6,local_5c,
                     iVar5,*(undefined4 *)(&DAT_00737874 + iVar3),
                     *(undefined4 *)(&DAT_00737874 + iVar3));
        iVar5 = DAT_007361f8;
      }
      iVar2 = *(int *)(iVar5 + 0x20);
      local_60 = local_60 + 1;
    } while (local_60 < *(int *)(iVar5 + 0x24) - iVar2);
  }
  if (DAT_007361c4 == 1) {
    if ((((DAT_007361bc == 0) ||
         (local_50 = *(undefined **)(DAT_007361bc + 4), local_50 == (undefined *)0x0)) ||
        (local_50[0x4d0] == '\0')) || (local_50[0x8a9] == '\0')) goto LAB_0058ee82;
    local_58 = &DAT_007313d4;
    local_54 = (undefined *)0x1;
    if (*(undefined **)(obj + 0xa8) == local_50) {
      local_58 = &DAT_007313e9;
      local_54 = (undefined *)0x3;
    }
    else if (*(int *)(*(int *)(local_50 + 0xc) + 0xc54) == 1) {
      local_58 = &DAT_007313da;
    }
    iVar5 = *(int *)(obj + 0xc4) * 0x3c;
    iVar2 = 0;
    if ((&DAT_00737882)[iVar5] != '\0') {
      iVar2 = FUN_00401c10(0x42b40000);
      iVar2 = iVar2 + ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                     *(short *)(local_50 + 0x3b4)) - (int)puVar4);
    }
    uVar8 = *(undefined4 *)(&DAT_00737874 + iVar5);
    puVar6 = local_58;
    puVar7 = local_54;
    puVar1 = local_50;
  }
  else {
    if (DAT_007361c4 != 2) goto LAB_0058ee82;
    local_4c = *(int *)(DAT_007361b4 + 4);
    local_58 = *(undefined **)(DAT_007361b8 + 4);
    local_60 = 1;
    local_50 = (undefined *)0x2;
    if (*(char *)(*(int *)(local_58 + 0x1c) + 10) < *(char *)(*(int *)(local_4c + 0x1c) + 10)) {
      local_60 = 2;
      local_50 = (undefined *)0x1;
    }
    if ((*(char *)(local_4c + 0x4d0) != '\0') && (*(char *)(local_4c + 0x8a9) != '\0')) {
      local_54 = &DAT_007313d4;
      if (*(int *)(obj + 0xa8) == local_4c) {
        local_54 = &DAT_007313e9;
        local_60 = 3;
      }
      else if (*(int *)(*(int *)(local_4c + 0xc) + 0xc54) == 1) {
        local_54 = &DAT_007313da;
      }
      iVar5 = *(int *)(obj + 0xc4) * 0x3c;
      iVar2 = 0;
      if ((&DAT_00737882)[iVar5] != '\0') {
        iVar2 = FUN_00401c10(0x42b40000);
        iVar2 = iVar2 + ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                       *(short *)(local_4c + 0x3b4)) - (int)puVar4);
      }
      FUN_0058f640(obj,param_1,local_4c + 0x60,&local_48,puVar4,local_30,local_54,local_60,
                   local_5c,iVar2,*(undefined4 *)(&DAT_00737874 + iVar5),
                   *(undefined4 *)(&DAT_00737874 + iVar5));
      iVar5 = DAT_007361f8;
    }
    if ((local_58[0x4d0] == '\0') || (local_58[0x8a9] == '\0')) goto LAB_0058ee82;
    local_54 = &DAT_007313d7;
    if (*(undefined **)(obj + 0xa8) == local_58) {
      local_54 = &DAT_007313e9;
      local_50 = (undefined *)0x3;
    }
    else if (*(int *)(*(int *)(local_58 + 0xc) + 0xc54) == 1) {
      local_54 = &DAT_007313da;
    }
    iVar5 = *(int *)(obj + 0xc4) * 0x3c;
    iVar2 = 0;
    if ((&DAT_00737882)[iVar5] != '\0') {
      iVar2 = FUN_00401c10(0x42b40000);
      iVar2 = iVar2 + ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                     *(short *)(local_58 + 0x3b4)) - (int)puVar4);
    }
    uVar8 = *(undefined4 *)(&DAT_00737874 + iVar5);
    puVar6 = local_54;
    puVar7 = local_50;
    puVar1 = local_58;
  }
  FUN_0058f640(obj,param_1,puVar1 + 0x60,&local_48,puVar4,local_30,puVar6,puVar7,local_5c,iVar2,
               uVar8,uVar8);
  iVar5 = DAT_007361f8;
LAB_0058ee82:
  local_60 = 0;
  if (0 < *(int *)(iVar5 + 0x1c)) {
    local_50 = (undefined *)0x28;
    do {
      iVar2 = *(int *)(local_50 + iVar5);
      if (((*(int *)(*(int *)(iVar2 + 0x14) + 4) == 1) &&
          (*(char *)(*(int *)(iVar2 + 0x14) + 0x734) != '\0')) &&
         ((*(char *)(iVar2 + 0x4d0) != '\0' && (*(char *)(iVar2 + 0x8a9) != '\0')))) {
        iVar3 = *(int *)(obj + 0xc4) * 0x3c;
        iVar5 = 0;
        if ((&DAT_00737882)[iVar3] != '\0') {
          iVar5 = ((uint)(ushort)(*(short *)(*(int *)(obj + 0xa4) + 0x98) -
                                 *(short *)(iVar2 + 0x3b4)) - (int)puVar4) + 0x4000;
        }
        local_54 = &DAT_007313ef;
        local_4c = 5;
        if (*(int *)(obj + 0xa8) == iVar2) {
          local_54 = &DAT_007313e9;
          local_4c = 3;
        }
        FUN_0058f640(obj,param_1,iVar2 + 0x60,&local_48,puVar4,local_30,local_54,local_4c,
                     local_5c,iVar5,*(undefined4 *)(&DAT_00737874 + iVar3),
                     *(undefined4 *)(&DAT_00737874 + iVar3));
        iVar5 = DAT_007361f8;
      }
      local_60 = local_60 + 1;
      local_50 = local_50 + 4;
    } while (local_60 < *(int *)(iVar5 + 0x1c));
  }
  FUN_0058fa50(param_1,*(undefined4 *)(obj + 0x84),0);
  return;
}
