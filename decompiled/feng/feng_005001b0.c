/* spd-match: far pct=8.04 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_005001B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fbf60(...);
int __cdecl FUN_004fc100(...);
int __cdecl FUN_004fc9a0(...);
extern int DAT_006f89ec;
extern void LAB_0050032c(...);

struct ThisCallBox {
  void FUN_005001b0(int obj, int param_2);
};
void ThisCallBox::FUN_005001b0(int obj, int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;

  uint uVar6;
  int iVar7;
  
  uVar6 = DAT_006f89ec;
  iVar4 = *(int *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(((int)this) + 0x10);
  iVar7 = *(int *)(((int)this) + 0x20);
  if (*(char *)(obj + 0x14) == '\0') {
    if ((iVar7 != 0) && ((*(uint *)(iVar7 + 4) & 0xff000000) == 0)) {
      cVar3 = *(char *)(iVar7 + 2);
      if (cVar3 == '\0') {
        FUN_004fc9a0(uVar5,iVar4);
      }
      else if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
        FUN_004fc100(iVar7,uVar5,iVar4);
      }
    }
    if ((*(int *)(*(int *)(param_2 + 0x2c) + 0xc) != 0) && (*(byte *)(((int)this) + 0x1c) != 0)) {
      uVar6 = (uint)*(byte *)(((int)this) + 0x1c);
      do {
        cVar3 = *(char *)(iVar7 + 2);
        iVar1 = iVar4 + *(char *)(iVar7 + 7) * 4;
        if (cVar3 == '\0') {
          FUN_004fc9a0(uVar5,iVar1);
        }
        else if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
          FUN_004fc100(iVar7,uVar5,iVar1);
        }
        iVar7 = iVar7 + 0x38;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if ((iVar7 == 0) || ((*(uint *)(iVar7 + 4) & 0xff000000) != 0)) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & (DAT_006f89ec | 0xff7fffff);
    }
    else {
      if (*(char *)(iVar7 + 3) < '\0') {
        uVar6 = *(uint *)(param_2 + 0x1c) & (DAT_006f89ec | 0xff7fffff);
      }
      else {
        uVar6 = *(uint *)(param_2 + 0x1c) | 0x800000;
      }
      *(uint *)(param_2 + 0x1c) = uVar6;
      FUN_004fbf60();
      uVar6 = DAT_006f89ec;
    }
    bVar2 = 0x80;
    if ((*(int *)(*(int *)(param_2 + 0x2c) + 0xc) != 0) && (*(byte *)(((int)this) + 0x1c) != 0)) {
      uVar6 = (uint)*(byte *)(((int)this) + 0x1c);
      do {
        if (*(char *)(iVar7 + 7) < '\x10') {
          bVar2 = bVar2 & *(byte *)(iVar7 + 3);
        }
        FUN_004fbf60();
        iVar7 = iVar7 + 0x38;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar6 = DAT_006f89ec;
      if (bVar2 == 0) {
        *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x1000000;
        goto LAB_0050032c;
      }
    }
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & (uVar6 | 0xfeffffff);
  }
LAB_0050032c:
  if ((*(uint *)(param_2 + 0x1c) & 0x1c00000) != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x2000000;
  }
  return;
}
