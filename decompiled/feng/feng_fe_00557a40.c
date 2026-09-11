/* spd-match: far pct=8.27 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T141530Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_004ad730(...);
int __cdecl FUN_004dc6e0(...);
int __cdecl FUN_004ebcb0(...);
int __cdecl FUN_004ee3a0(...);
int __cdecl FUN_004f5ed0(...);
int __cdecl FUN_004f6360(...);
int __cdecl FUN_004f64d0(...);
int __cdecl FUN_004f66f0(...);
int __cdecl FUN_004f6850(...);
int __cdecl FUN_004f6b70(...);
int __cdecl FUN_0054d630(...);
int __cdecl FUN_0054d8b0(...);
int __cdecl FUN_005576f0(...);
int __cdecl FUN_00557e90(...);
int __cdecl FUN_00558000(...);
int __cdecl FUN_00558080(...);
int __cdecl FUN_00558220(...);
int __cdecl FUN_00558260(...);
int __cdecl FUN_005582d0(...);
int __cdecl FUN_00565da0(...);
int __cdecl FUN_00567cc0(...);
int __cdecl FUN_0059fc40(...);
extern int DAT_007346d8;
extern int DAT_007346f8;
extern int DAT_00734bc8;
extern int DAT_00734dbc;
extern int DAT_00734fc4;
extern int DAT_007354cc;
extern int DAT_0073578c;
extern int DAT_00736124;
extern int DAT_00777c30;
extern void LAB_00557a8d(...);
extern void LAB_00558110(...);

struct ThisCallBox {
  void FUN_00557a40(uint param_2, int param_3);
};
void ThisCallBox::FUN_00557a40(uint param_2, int param_3) {
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  HINSTANCE pHVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  CHAR local_3f0;
  undefined4 local_3ef;
  
  if (param_2 < 0x26eadf70) {
    if (param_2 == 0x26eadf6f) {
      FUN_00558220();
      return;
    }
    if (param_2 < 0x12bd8a3) {
      if (param_2 == 0x12bd8a2) {
        local_3f0 = '\0';
        puVar10 = &local_3ef;
        for (iVar9 = 0xf9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0;
        *(undefined1 *)((int)puVar10 + 2) = 0;
        FUN_005582d0(1000);
        pHVar5 = ShellExecuteA((HWND)0x0,"open",&local_3f0,(LPCSTR)0x0,(LPCSTR)0x0,1);
        if ((int)pHVar5 < 0x21) {
          FUN_004ee3a0(100,0);
          return;
        }
        DAT_00736124 = 1;
        return;
      }
      if ((param_2 == 100) || (param_2 == 0x12bd766)) {
        DAT_00734dbc = 0;
LAB_00557a8d:
        FUN_005576f0();
        return;
      }
    }
    else if (param_2 == 0xc407210) {
      iVar9 = *(int *)(param_3 + 0x10);
      if (iVar9 == 0x448e93e0) {
        if (*(char *)(((int)this) + 0x46) != '\0') {
          FUN_004ad730();
          FUN_004f6360(&DAT_00734bc8);
          return;
        }
      }
      else if (iVar9 == 0x5e4efa1b) {
        if ((*(char *)(((int)this) + 0x44) != '\0') && (cVar3 = FUN_00558260(((int)this)), cVar3 != '\0')) {
          FUN_004ebcb0();
          FUN_0054d8b0(&DAT_007346d8,&DAT_007346f8,&LAB_00558110);
          return;
        }
      }
      else if (((iVar9 == -0x4255a42e) && (*(char *)(((int)this) + 0x45) != '\0')) &&
              (cVar3 = FUN_00558260(((int)this)), cVar3 != '\0')) {
        FUN_004f6360(&DAT_00734bc8);
        return;
      }
    }
    else if (param_2 == 0x1234babe) {
      FUN_005576f0();
      return;
    }
  }
  else if (param_2 < 0xabc08913) {
    if (param_2 == 0xabc08912) {
      if ((param_3 != 0) &&
         (((iVar9 = *(int *)(param_3 + 0x10), iVar9 == 0x448e93e0 || (iVar9 == 0x5e4efa1b)) ||
          (iVar9 == -0x4255a42e)))) {
        FUN_004f66f0();
        FUN_004f6b70("FadeIn",1);
        return;
      }
    }
    else {
      if (param_2 == 0x4c7b3797) {
        FUN_00558080(((int)this));
        return;
      }
      if (param_2 == 0x911ab364) {
        if (0 < DAT_00734fc4) {
          local_3f8 = 0;
          local_3f4 = 0;
          local_404 = 0;
          local_400 = 0;
          local_414 = 0x7ab61b3f;
          local_410 = 0x639;
          local_40c = 0x1234babe;
          local_408 = 0x541389e5;
          local_3fc = 0xb8a7c6cd;
          FUN_004dc6e0(&local_414,"GenericDialog.fng",*(undefined4 *)(((int)this) + 0xc));
          return;
        }
        goto LAB_00557a8d;
      }
    }
  }
  else if (param_2 == 0xc519bfc0) {
    pcVar1 = *(char **)(((int)this) + 0xc);
    DAT_00777c30 = *pcVar1;
    if (DAT_00777c30 != '\0') {
      pcVar8 = (char *)(unsigned int)(&DAT_00777c30);
      do {
        cVar3 = (pcVar1 + -0x777c2f)[(int)pcVar8];
        pcVar8 = pcVar8 + 1;
        *pcVar8 = cVar3;
      } while (cVar3 != '\0');
    }
    FUN_004f6360(*(undefined4 *)(((int)this) + 0xc));
  }
  else if (param_2 == 0xc98356ba) {
    FUN_0054d630();
    iVar9 = (unsigned int)(DAT_00734fc4);
    if (((DAT_007354cc == '\0') || (DAT_00734fc4 < 1)) || (iVar6 = FUN_00567cc0(), iVar6 < 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    cVar2 = DAT_007354cc;
    bVar11 = DAT_007354cc == '\0';
    *(char *)(((int)this) + 0x44) = cVar3;
    if ((bVar11) || (iVar9 < 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(((int)this) + 0x45) = uVar4;
    if ((cVar2 == '\0') || (iVar9 < 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(((int)this) + 0x46) = uVar4;
    if (cVar3 != '\0') {
      local_3f0 = '\0';
      puVar10 = &local_3ef;
      for (iVar9 = 0x7c; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0;
      *(undefined1 *)((int)puVar10 + 2) = 0;
      uVar7 = FUN_0059fc40(&DAT_007346d8);
      FUN_00565da0("%s %s",uVar7);
      FUN_004f6850(&local_3f0);
    }
    FUN_00558000(((int)this));
    FUN_00558000(((int)this));
    FUN_00558000(((int)this));
    iVar9 = FUN_004f64d0(&DAT_00734bc8);
    if ((((*(int *)(iVar9 + 0x10) == 0x5e4efa1b) && (*(char *)(((int)this) + 0x44) == '\0')) &&
        (*(char *)(((int)this) + 0x46) != '\0')) && (DAT_0073578c != 0)) {
      FUN_004f5ed0(DAT_0073578c);
    }
    FUN_00557e90(((int)this));
    return;
  }
  return;
}
