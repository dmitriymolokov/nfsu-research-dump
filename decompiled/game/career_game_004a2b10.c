/* spd-match: far pct=12.16 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A2B10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f600();
int __cdecl FUN_004353e0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043ea50();
int __cdecl FUN_0049fcf0();
int __cdecl FUN_004a2ef0();
int __cdecl FUN_004a3020();
int __cdecl FUN_004a31e0();
int __cdecl FUN_004a34c0();
int __cdecl FUN_004a3690();
int __cdecl FUN_004a37d0();
int __cdecl FUN_004a3930();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_00586580();
int __cdecl FUN_00674898();
extern int DAT_006ca778;
extern int DAT_006cc568;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0078a320;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a410;
extern int DAT_0078a414;
extern int _DAT_006cca38;
extern int _DAT_006cca94;
extern int _DAT_006ccc00;
extern unsigned char *PTR_DAT_006c7228;
extern void LAB_004a2e36(void);
extern void LAB_004a2ed8(void);
void __fastcall FUN_004a2b10(int obj)

{
  char cVar1;

  int iVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_24;
  undefined1 local_20 [32];
  
  if ((*(uint *)(unaff_ESI + 0x18) & *(uint *)(unaff_ESI + 0x10)) == 0 &&
      (*(uint *)(unaff_ESI + 0x1c) & *(uint *)(unaff_ESI + 0x14)) == 0) {
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xe0) = 0;
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  *(undefined4 *)(unaff_ESI + 0xe8) = 0;
  *(undefined4 *)(unaff_ESI + 0xec) = 0;
  FUN_004a3930(unaff_ESI,obj);
  if (DAT_0078a320 == 1) {
    if (*(char *)(unaff_ESI + 0x141) == '\0') {
      if (*(char *)(unaff_ESI + 0x140) == '\0') {
        local_24 = DAT_0073ad34 - *(int *)(unaff_ESI + 0x13c);
        if (_DAT_006cca94 < (float)local_24 * _DAT_006cca38) {
          *(int *)(unaff_ESI + 0x13c) = DAT_0073ad34;
          if (*(char *)(unaff_ESI + 0x142) == '\0') {
            *(undefined1 *)(unaff_ESI + 0x140) = 1;
          }
          else {
            *(undefined1 *)(unaff_ESI + 0x141) = 1;
          }
        }
        cVar1 = FUN_0041f600();
        if (cVar1 == '\0') {
          FUN_004a31e0(unaff_ESI);
        }
        else {
          FUN_004a34c0(unaff_ESI,obj);
        }
      }
      else {
        local_24 = DAT_0073ad34 - *(int *)(unaff_ESI + 0x13c);
        if (_DAT_006ccc00 < (float)local_24 * _DAT_006cca38) {
          *(int *)(unaff_ESI + 0x13c) = DAT_0073ad34;
          *(undefined1 *)(unaff_ESI + 0x140) = 0;
          *(undefined1 *)(unaff_ESI + 0x142) = 1;
        }
        cVar1 = FUN_0041f600();
        if (cVar1 == '\0') {
          FUN_004a2ef0(unaff_ESI);
        }
        else {
          FUN_004a3690(unaff_ESI,obj);
        }
      }
    }
    else {
      local_24 = DAT_0073ad34 - *(int *)(unaff_ESI + 0x13c);
      if (_DAT_006ccc00 < (float)local_24 * _DAT_006cca38) {
        *(int *)(unaff_ESI + 0x13c) = DAT_0073ad34;
        *(undefined1 *)(unaff_ESI + 0x141) = 0;
        *(undefined1 *)(unaff_ESI + 0x142) = 0;
      }
      if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
        FUN_004a3020(unaff_ESI);
      }
      else {
        FUN_004a37d0(unaff_ESI,obj);
      }
    }
    if (((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) || (cVar1 = FUN_0043a2e0(), cVar1 != '\0'))
    {
      iVar4 = *(int *)(DAT_0073619c + 0x24);
    }
    else {
      iVar4 = 4;
    }
    if (iVar4 < 1) {
      FUN_004f6910(*(undefined4 *)(unaff_ESI + 0xf4));
      FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x114));
      FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x104));
      FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x124));
    }
    if (*(int *)(unaff_ESI + 0xf0) <= iVar4) {
      return;
    }
    puVar5 = (undefined4 *)(unaff_ESI + 0x114 + iVar4 * 4);
    do {
      FUN_004f6910(puVar5[-8]);
      FUN_004f6910(*puVar5);
      FUN_004f6910(puVar5[-4]);
      FUN_004f6910(puVar5[4]);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0xf0));
    return;
  }
  if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 0xf4));
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x124));
    return;
  }
  iVar4 = 0;
  if (0 < *(int *)(unaff_ESI + 0xf0)) {
    puVar5 = (undefined4 *)(unaff_ESI + 0x114);
    do {
      FUN_004f6910(puVar5[-8]);
      FUN_004f6910(*puVar5);
      FUN_004f6910(puVar5[-4]);
      FUN_004f6910(puVar5[4]);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0xf0));
  }
  FUN_004f6970(*(undefined4 *)(unaff_ESI + 0xf4));
  FUN_004f6970(*(undefined4 *)(unaff_ESI + 0x124));
  uVar8 = DAT_0078a414;
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    iVar4 = FUN_0049fcf0();
    uVar8 = *(undefined4 *)(iVar4 + 0x1c);
    iVar4 = FUN_0049fcf0();
    local_24 = 0;
    uVar7 = *(undefined4 *)(iVar4 + 0x1c);
    if (((*(int *)(obj + 0x10) == 0) ||
        (uVar7 = uVar8, uVar8 = *(undefined4 *)(iVar4 + 0x1c), *(int *)(obj + 0x10) == 1)) &&
       (FUN_004353e0(&local_24,uVar7,uVar8), local_24 < 0)) {
      FUN_00586580(local_20);
    }
    else {
      FUN_00586580(local_20);
    }
    puVar3 = local_20;
    ppuVar6 = (undefined **)&DAT_006cc568;
    goto LAB_004a2ed8;
  }
  FUN_0043ea50(DAT_0078a410);
  iVar4 = FUN_00674898();
  FUN_0043ea50(uVar8);
  iVar2 = FUN_00674898();
  puVar3 = (undefined1 *)0x0;
  if (*(int *)(obj + 0x10) == 0) {
    puVar3 = (undefined1 *)(iVar4 - iVar2);
LAB_004a2e36:
    if ((int)puVar3 < 0) {
      ppuVar6 = (undefined **)&DAT_006ca778;
      goto LAB_004a2ed8;
    }
  }
  else if (*(int *)(obj + 0x10) == 1) {
    puVar3 = (undefined1 *)(iVar2 - iVar4);
    goto LAB_004a2e36;
  }
  ppuVar6 = &PTR_DAT_006c7228;
LAB_004a2ed8:
  FUN_004f68a0(ppuVar6,puVar3);
  return;
}
