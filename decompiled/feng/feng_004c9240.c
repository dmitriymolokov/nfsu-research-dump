/* spd-match: far pct=12.18 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T141530Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_004c72d0(...);
int __cdecl FUN_004c9030(...);
int __cdecl FUN_004c90c0(...);
int __cdecl FUN_004c9150(...);
int __cdecl FUN_004c96f0(...);
int __cdecl FUN_004f0800(...);
int __cdecl FUN_004f3f90(...);
int __cdecl FUN_004f5ed0(...);
int __cdecl FUN_004f5f80(...);
int __cdecl FUN_004f7d30(...);
int __cdecl FUN_004f89d0(...);
int __cdecl FUN_0051bb50(...);
extern unsigned char *DAT_006fae18;
extern int DAT_0073578c;
extern int DAT_00735e50;
extern int DAT_00735e58;
extern int DAT_00735e5c;
extern int DAT_00746104;
extern int DAT_0076777c;
extern int _DAT_006fae18;
extern int _DAT_006fae1c;
extern int _DAT_006fae20;
extern int _DAT_006fae24;
extern void LAB_004c9404(...);

struct ThisCallBox {
  void FUN_004c9240(uint param_2);
};
void ThisCallBox::FUN_004c9240(uint param_2) {
  char *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 < 0x9120409f) {
    if (param_2 == 0x9120409e) {
LAB_004c9404:
      FUN_004c9030();
      return;
    }
    if (param_2 != 0xc407210) {
      if (param_2 == 0x14141414) {
        FUN_0051bb50();
        FUN_004c72d0();
        return;
      }
      if (param_2 != 0x911ab364) {
        return;
      }
      iVar3 = 0;
      if (0 < DAT_00735e58) {
        do {
          pcVar1 = (char *)(unsigned int)(&DAT_006fae18+ iVar3);
          iVar3 = iVar3 + 1;
          (&DAT_0076777c)[*pcVar1] = 1;
        } while (iVar3 < DAT_00735e58);
      }
      _DAT_006fae18 = 0xffffffff;
      _DAT_006fae1c = 0xffffffff;
      _DAT_006fae20 = 0xffffffff;
      _DAT_006fae24 = 0xffffffff;
      DAT_00735e58 = 0;
      FUN_004c96f0(0x14141414,2);
      return;
    }
  }
  else {
    if (param_2 == 0xb5971bf1) goto LAB_004c9404;
    if (param_2 != 0xc519bfc8) {
      if (param_2 != 0xc98356ba) {
        return;
      }
      FUN_004c90c0();
      if (*(int *)(((int)this) + 0x80) != ((int)this) + 0x80) {
        FUN_004f89d0();
      }
      FUN_004f7d30();
      return;
    }
  }
  if ((*(char *)(((int)this) + 0x88) == '\0') || (param_2 != 0xc519bfc8)) {
    iVar3 = *(int *)(((int)this) + 0x7c);
    (&DAT_0076777c)[*(int *)(iVar3 + 0xc)] = 1;
    iVar2 = (unsigned int)(DAT_0073578c);
    DAT_00735e50 = *(undefined4 *)(iVar3 + 8);
    DAT_00735e5c = 1;
    if ((DAT_0073578c != 0) &&
       ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
      FUN_004f0800(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
      return;
    }
  }
  else {
    FUN_004c9150();
    iVar3 = (unsigned int)(DAT_0073578c);
    bVar4 = DAT_0073578c != 0;
    *(undefined1 *)(((int)this) + 0x88) = 0;
    if (((bVar4) && (FUN_004f5f80(iVar3,1), DAT_0073578c != 0)) &&
       (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)) {
      FUN_004f5ed0(DAT_0073578c);
      return;
    }
  }
  return;
}
