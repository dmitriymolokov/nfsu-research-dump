/* spd-match: far pct=9.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005d7700(...);
int __cdecl FUN_005fbec8(...);
extern void LAB_00611dc6(...);

struct ThisCallBox {
  undefined4 FUN_00611cfc(int param_2, int param_3);
};
undefined4 ThisCallBox::FUN_00611cfc(int param_2, int param_3) {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  uint local_18;
  int local_10;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  if (*(int *)(((int)this) + 0xec) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x30);
  pcVar6 = (char *)0x0;
  local_10 = ((int)this);
  if (iVar2 != 0) {
    do {
      iVar1 = *(int *)(iVar2 + 8);
      pcVar7 = pcVar6;
      if (*(int *)(iVar1 + 4) == 0x10) {
        iVar4 = 0;
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + 0x18);
        }
        if (*(int *)(iVar1 + 0x14) == 0) {
          pcVar5 = (char *)0x0;
        }
        else {
          pcVar5 = *(char **)(*(int *)(iVar1 + 0x14) + 0x18);
        }
        if (iVar4 == 0) {
          iVar1 = _tolower((int)*pcVar5);
          if (iVar1 == 99) {
            local_c = pcVar5;
          }
        }
        else {
          iVar1 = FUN_005d7700(iVar4,0,local_1c);
          if ((((-1 < iVar1) && (iVar1 = _tolower((int)*pcVar5), iVar1 == 99)) &&
              (pcVar7 = pcVar5, *(uint *)(local_10 + 0x30) != local_18)) &&
             ((pcVar7 = pcVar6, ((*(uint *)(local_10 + 0x30) ^ local_18) & 0xffff0000) == 0 &&
              ((short)local_18 == 0)))) {
            local_8 = pcVar5;
          }
        }
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      pcVar6 = pcVar7;
    } while (iVar2 != 0);
    if (pcVar7 != (char *)0x0) goto LAB_00611dc6;
  }
  pcVar7 = local_8;
  if ((local_8 == (char *)0x0) && (pcVar7 = local_c, local_c == (char *)0x0)) {
    return 0;
  }
LAB_00611dc6:
  iVar2 = _tolower((int)*pcVar7);
  if (iVar2 == 99) {
    iVar2 = _isdigit((int)pcVar7[1]);
    if (iVar2 != 0) {
      pcVar6 = pcVar7 + 2;
      while (iVar2 = _isdigit((int)*pcVar6), iVar2 != 0) {
        pcVar6 = pcVar6 + 1;
      }
      if (*pcVar6 == '\0') {
        uVar3 = _atol(pcVar7 + 1);
        if (0x1fff < uVar3) {
          FUN_005fbec8(local_10,0,0,
                       "Constant variable \'%s\' bound to register greater than 8191 (%d requested)"
                       ,pcVar7 + 2,uVar3);
          return 0x80004005;
        }
        *(ushort *)(param_3 + 10) = *(ushort *)(param_3 + 10) | (ushort)(uVar3 << 2) | 2;
      }
    }
  }
  return 0;
}
