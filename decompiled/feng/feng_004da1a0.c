/* spd-match: far pct=12.01 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DA1A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004b0150();
int __cdecl FUN_004b2330();
int __cdecl FUN_004d7a30();
int __cdecl FUN_004d7af0();
int __cdecl FUN_004d7b70();
int __cdecl FUN_004d9a40();
int __cdecl FUN_004da0d0();
int __cdecl FUN_004db8a0();
int __cdecl FUN_004dbb40();
int __cdecl FUN_004dbc70();
int __cdecl FUN_004dbf90();
int __cdecl FUN_004e24a0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6a10();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
int __cdecl FUN_0050f9f0();
int __cdecl FUN_0050fa10();
int __cdecl FUN_0057cc70();
int __cdecl FUN_0059fb80();
extern int DAT_006f88a4;
extern int DAT_006fa1a0;
extern int DAT_00735718;
extern int DAT_0073578c;
extern int DAT_00735ddc;
extern int DAT_00735de8;
extern int DAT_00745b6c;
extern unsigned char *DAT_00745b70;
extern int DAT_00745b74;
extern unsigned char *DAT_00745b78;
extern int DAT_0074696c;
extern void LAB_004da37d(void);
extern void LAB_004da506(void);
extern void LAB_004da8af(void);
void __fastcall FUN_004da1a0(int obj)

{
  char *pcVar1;
  char cVar2;

  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_ECX;
  char *pcVar7;
  uint uVar8;
  int extraout_EDX;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  char local_28 [32];
  int local_8;
  
  FUN_004d9a40(obj);
  *(undefined4 *)(obj + 0x40) = 0;
  *(undefined4 *)(obj + 0x44) = 0;
  *(undefined4 *)(obj + 0x48) = 0;
  *(undefined4 *)(obj + 0x4c) = 0;
  *(undefined1 *)(obj + 3000) = 0;
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",0);
  iVar4 = *(int *)(obj + 0xc);
  *(undefined4 *)(obj + 0xb04) = 6;
  *(undefined4 *)(obj + 0xb08) = 10;
  uVar3 = FUN_004fd230();
  if (((((iVar4 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(uVar3), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 1)) {
    iVar4 = 0;
  }
  iVar9 = *(int *)(obj + 0xc);
  *(int *)(obj + 0xaf4) = iVar4;
  uVar3 = FUN_004fd230();
  if (((((iVar9 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(uVar3), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 1)) {
    iVar4 = 0;
  }
  uVar3 = 0;
  bVar11 = DAT_00735718 == 3;
  *(int *)(obj + 0xaf8) = iVar4;
  *(undefined4 *)(obj + 0xb0c) = 0;
  *(undefined4 *)(obj + 0xb10) = 0;
  *(undefined4 *)(obj + 0xafc) = 0;
  *(undefined1 *)(obj + 0xb00) = 1;
  local_8 = 0x1e;
  if (bVar11) {
    if (DAT_006f88a4 == 0) {
      FUN_00495f00(0xa3b76154);
      *(undefined4 *)(obj + 0xb1c) = 0;
      local_8 = 0x1e;
    }
    else if (DAT_006f88a4 == 2) {
      FUN_00495f00(0xa8d7e6ed);
      *(undefined4 *)(obj + 0xb1c) = 3;
      local_8 = 0x26;
    }
    else if (DAT_006f88a4 == 4) {
      FUN_00495f00(0xd223f84a);
      *(undefined4 *)(obj + 0xb1c) = 1;
      local_8 = 0x29;
    }
    else {
      if (DAT_006f88a4 != 5) goto LAB_004da37d;
      FUN_00495f00(0xa6343aec);
      *(undefined4 *)(obj + 0xb1c) = 5;
      local_8 = 0x28;
    }
  }
  else {
LAB_004da37d:
    cVar2 = FUN_0050f9f0();
    if (cVar2 == '\0') {
      cVar2 = FUN_0050fa10();
      uVar5 = DAT_006fa1a0;
      if (cVar2 == '\0') {
        if ((extraout_EDX == 5) && (DAT_00735ddc == 3)) {
          *(undefined4 *)(obj + 0xb1c) = 6;
          iVar4 = extraout_ECX;
          switch(uVar5) {
          case 0x1f:
            uVar3 = 4;
            local_8 = 0x2a;
            iVar4 = local_8;
            break;
          case 0x20:
            uVar3 = 3;
            local_8 = 0x2e;
            iVar4 = local_8;
            break;
          case 0x21:
            uVar3 = 2;
            local_8 = 0x32;
            iVar4 = local_8;
            break;
          case 0x22:
            uVar3 = 1;
            local_8 = 0x36;
            iVar4 = local_8;
          }
          *(int *)(obj + 0x50) = iVar4;
          *(undefined4 *)(obj + 0x40) = (&DAT_00745b6c)[iVar4];
          *(undefined4 *)(obj + 0x44) = *(undefined4 *)(&DAT_00745b70 + iVar4 * 4);
          *(undefined4 *)(obj + 0x48) = (&DAT_00745b74)[iVar4];
          *(undefined4 *)(obj + 0x4c) = *(undefined4 *)(&DAT_00745b78 + iVar4 * 4);
        }
      }
      else {
        FUN_00495f00(0x87b7eb73);
        *(undefined4 *)(obj + 0xb1c) = 4;
        local_8 = 0x27;
      }
    }
    else {
      FUN_00495f00(0x4e875a92);
      *(undefined4 *)(obj + 0xb1c) = 2;
      local_8 = 0x25;
    }
  }
  iVar4 = *(int *)(obj + 0xb1c);
  *(undefined4 *)(obj + 0xafc) = 0;
  *(undefined1 *)(obj + 0xb00) = 1;
  if ((iVar4 == 6) && (DAT_00735de8 != 0)) {
    pcVar7 = "NUMREMAPCOLOURS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    uVar5 = FUN_0057cc70(0);
    *(undefined4 *)(obj + 0xb20) = uVar5;
    uVar3 = FUN_004e24a0(uVar3);
    FUN_004ad7b0(uVar3);
  }
  else {
    if (iVar4 < 0) {
LAB_004da506:
      uVar3 = 0xffffffff;
    }
    else if (iVar4 < 6) {
      uVar3 = 1;
    }
    else {
      if (iVar4 != 6) goto LAB_004da506;
      uVar3 = 4;
    }
    *(undefined4 *)(obj + 0xb20) = uVar3;
  }
  iVar4 = FUN_004d7b70(&DAT_0074696c);
  *(int *)(obj + 0xb34) = iVar4;
  if (iVar4 == 1) {
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x5a418323);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x718751d6);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xdfb9b476);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xc31fb618);
      }
    }
    FUN_004f6910(iVar4);
  }
  *(undefined4 *)(obj + 0xb24) = 0;
  *(undefined4 *)(obj + 0xb28) = 0;
  *(undefined4 *)(obj + 0xaac) = 0;
  *(undefined4 *)(obj + 0xab0) = 0;
  *(undefined2 *)(obj + 0xab4) = 0;
  *(undefined4 *)(obj + 0xab6) = 0;
  *(undefined4 *)(obj + 0xaba) = 0;
  *(undefined4 *)(obj + 0xabe) = 0;
  *(undefined4 *)(obj + 0xac2) = 0;
  *(undefined4 *)(obj + 0xac6) = 0;
  puVar10 = (undefined4 *)(obj + 0xaca);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  FUN_004dbc70(obj,0x1e,local_8);
  uVar3 = FUN_004d7af0(&DAT_0074696c);
  uVar5 = FUN_004d7a30(&DAT_0074696c);
  FUN_00495f00(uVar5);
  FUN_00495f00(uVar3);
  if (*(int *)(obj + 0xb1c) == 6) {
    switch(DAT_006fa1a0) {
    case 0x1f:
      uVar3 = 4;
      break;
    case 0x20:
      uVar3 = 3;
      break;
    case 0x21:
      uVar3 = 2;
      break;
    case 0x22:
      uVar3 = 1;
      break;
    default:
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_0059fb80();
    if (iVar4 == 0) {
      iVar4 = FUN_0059fb80();
    }
    iVar9 = 0x20;
    pcVar7 = local_28;
    do {
      cVar2 = pcVar7[iVar4 - (int)local_28];
      iVar9 = iVar9 + -1;
      *pcVar7 = cVar2;
      if (cVar2 == '\0') break;
      pcVar7 = pcVar7 + 1;
    } while (iVar9 != 0);
    FUN_004f6850("%s %i",local_28,uVar3);
  }
  else {
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xfac7f39a);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x841b49f1);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x86ae47d7);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c != 0) {
        uVar3 = FUN_004ef050(0x7f52f045);
        FUN_004f6910(uVar3);
        goto LAB_004da8af;
      }
      iVar4 = 0;
    }
    FUN_004f6910(iVar4);
  }
LAB_004da8af:
  if (*(int *)(obj + 0xb34) < 2) {
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xdfb9b476);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xc31fb618);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xd0440103);
      }
    }
    FUN_004f6910(iVar4);
    if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0xecda84a5);
      }
    }
    FUN_004f6910(iVar4);
  }
  if (((*(int *)(obj + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x8a3840b9);
    }
  }
  FUN_004f6910(iVar4);
  uVar6 = *(int *)(obj + 0xb20) * *(int *)(obj + 0xb34);
  if (1 < (int)uVar6) {
    puVar10 = (undefined4 *)(obj + 0xb78);
    for (uVar8 = uVar6 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar10 = (undefined4 *)(obj + 0xb38);
    for (uVar6 = uVar6 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_004da0d0();
  }
  if ((&DAT_00745b6c)[*(int *)(obj + 0xb18)] == 0) {
    *(undefined4 *)(obj + 0xb10) = 0;
    *(undefined4 *)(obj + 0xb0c) = 0;
  }
  else {
    iVar4 = FUN_004dbb40();
    if (iVar4 == 0) {
      *(undefined4 *)(obj + 0xb10) = 0;
      *(undefined4 *)(obj + 0xb0c) = 0;
    }
    else {
      *(undefined4 *)(obj + 0xb0c) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(obj + 0xb10) = *(undefined4 *)(iVar4 + 0x28);
    }
  }
  FUN_004dbf90();
  FUN_004db8a0();
  *(undefined1 *)(obj + 0x54) = 0;
  iVar4 = FUN_004b2330();
  if (iVar4 != 0) {
    FUN_004b0150();
  }
  return;
}
