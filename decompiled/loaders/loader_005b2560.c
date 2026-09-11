/* spd-match: far pct=10.62 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);
extern void LAB_005b26eb(...);

struct ThisCallBox {
  int FUN_005b2560(char *param_2, int *param_3);
};
int ThisCallBox::FUN_005b2560(char *param_2, int *param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(char **)(((int)this) + 4) <= param_2) {
    return 0;
  }
  cVar1 = *param_2;
  if ((cVar1 == '\\') && ((*(byte *)(((int)this) + 0x28) & 4) == 0)) {
    pcVar4 = param_2 + 1;
    if (*(char **)(((int)this) + 4) <= pcVar4) {
      FUN_005b1f01(*(undefined4 *)(((int)this) + 0x30),((int)this) + 8,0x3ef,
                   "character continues past end of file");
    }
    cVar1 = *pcVar4;
    if (cVar1 == 'a') {
      *param_3 = 7;
      goto LAB_005b26eb;
    }
    if (cVar1 == 'b') {
      *param_3 = 8;
      goto LAB_005b26eb;
    }
    if (cVar1 == 'f') {
      *param_3 = 0xc;
      goto LAB_005b26eb;
    }
    if (cVar1 == 'n') {
      *param_3 = 10;
      goto LAB_005b26eb;
    }
    if (cVar1 == 'r') {
      *param_3 = 0xd;
      goto LAB_005b26eb;
    }
    if (cVar1 == 't') {
      *param_3 = 9;
      goto LAB_005b26eb;
    }
    if (cVar1 == 'v') {
      *param_3 = 0xb;
      goto LAB_005b26eb;
    }
    if (('/' < cVar1) && (cVar1 < '8')) {
      pcVar5 = *(char **)(((int)this) + 4);
      if (param_2 + 4 < *(char **)(((int)this) + 4)) {
        pcVar5 = param_2 + 4;
      }
      iVar3 = 0;
      for (; ((pcVar4 < pcVar5 && (cVar1 = *pcVar4, '/' < cVar1)) && (cVar1 < '8'));
          pcVar4 = pcVar4 + 1) {
        iVar3 = cVar1 + -0x30 + iVar3 * 8;
      }
      *param_3 = iVar3;
      goto LAB_005b26eb;
    }
    if ((cVar1 == 'x') &&
       ((pcVar5 = param_2 + 2, pcVar5 < *(char **)(((int)this) + 4) &&
        (iVar3 = _isxdigit((int)*pcVar5), iVar3 != 0)))) {
      iVar3 = 0;
      while ((pcVar5 < *(char **)(((int)this) + 4) && (iVar2 = _isxdigit((int)*pcVar5), iVar2 != 0))) {
        cVar1 = *pcVar5;
        iVar3 = iVar3 * 0x10;
        if (cVar1 < 'a') {
          if (cVar1 < 'A') {
            iVar3 = iVar3 + -0x30 + (int)cVar1;
          }
          else {
            iVar3 = iVar3 + -0x37 + (int)cVar1;
          }
        }
        else {
          iVar3 = iVar3 + -0x57 + (int)cVar1;
        }
        pcVar5 = pcVar5 + 1;
      }
      *param_3 = iVar3;
      pcVar4 = pcVar5;
      goto LAB_005b26eb;
    }
    cVar1 = *pcVar4;
    pcVar4 = param_2 + 2;
  }
  else {
    pcVar4 = param_2 + 1;
  }
  *param_3 = (int)cVar1;
LAB_005b26eb:
  return (int)pcVar4 - (int)param_2;
}
