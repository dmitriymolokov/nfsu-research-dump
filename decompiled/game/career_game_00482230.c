/* spd-match: far pct=9.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00482230 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00454f10();
int __cdecl FUN_0047fca0();
int __cdecl FUN_00480660();
int __cdecl FUN_00480750();
int __cdecl FUN_00480930();
int __cdecl FUN_00480a20();
int __cdecl FUN_00480a50();
int __cdecl FUN_004812b0();
int __cdecl FUN_00481510();
int __cdecl FUN_00481720();
int __cdecl FUN_004819f0();
int __cdecl FUN_00481ab0();
int __cdecl FUN_00482fc0();
extern int _DAT_006cc7c4;
extern unsigned char *PTR_DAT_00705de0;
void __fastcall FUN_00482230(int obj, undefined4 param_1, byte param_2, undefined4 param_3, uint param_4)

{
  int *piVar1;
  char cVar2;

  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  
  iVar3 = *(int *)(obj + 0xcb8);
  switch(iVar3) {
  case 1:
    switch(param_4) {
    case 9:
      FUN_00481ab0(2);
      return;
    case 10:
      puVar4 = (undefined4 *)(*(int *)(obj + 0xcb4) * 0x4c + 0xd0 + obj);
      puVar6 = (undefined4 *)(obj + 0x84);
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      return;
    case 0xb:
      FUN_00481510(obj);
      return;
    case 0xc:
      (*(unsigned short *)&(param_4)) = CONCAT11(*(undefined1 *)(obj + 0xcb4),3);
      param_4 = CONCAT22(0x50,(undefined2)param_4);
      FUN_00481720(&param_4,4);
      FUN_00481720(*(int *)(obj + 0xcb4) * 0x4c + 0xd0 + obj,0x4c);
      FUN_00480a20();
      return;
    case 0x22:
      if (param_2 != 0) {
        FUN_00480660(obj,*(undefined4 *)(obj + 0xcb4));
        return;
      }
      break;
    case 0x23:
      if (param_2 != 0) {
        FUN_00480a50(obj,1);
        return;
      }
      break;
    case 0x24:
      if ((param_2 != 0) && (0 < *(int *)(obj + 0xcb4))) {
        FUN_00481ab0(3);
        return;
      }
      break;
    case 0x25:
      if ((param_2 != 0) && (*(int *)(obj + 0xcb4) < *(int *)(obj + 0xcb0) + -1)) {
        FUN_00481ab0(4);
        return;
      }
      break;
    case 0x60:
      param_4 = (uint)param_2;
      fVar7 = (float10)FUN_00454f10(&PTR_DAT_00705de0,(float)param_4 - _DAT_006cc7c4);
      *(float *)(obj + 0xce4) = (float)fVar7;
      return;
    }
    break;
  case 2:
    if (param_2 != 0) {
      switch(param_4) {
      case 9:
        if (*(int *)(obj + 0xcbc) == 8) {
          FUN_00482fc0();
          return;
        }
        break;
      case 0xb:
        goto switchD_004823c9_caseD_b;
      case 0x22:
        piVar1 = (int *)(obj + 0xcbc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined4 *)(obj + 0xcbc) = 8;
          return;
        }
        break;
      case 0x23:
        iVar3 = *(int *)(obj + 0xcbc) + 1;
        *(int *)(obj + 0xcbc) = iVar3;
        if (8 < iVar3) {
          *(undefined4 *)(obj + 0xcbc) = 0;
          return;
        }
        break;
      case 0x24:
      case 0x25:
        switch(*(undefined4 *)(obj + 0xcbc)) {
        case 0:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          cVar2 = *(char *)(iVar3 + 0xd0 + obj);
          *(byte *)(iVar3 + 0xd0 + obj) = (cVar2 != '\0') - 1U & 0x14;
          (*(unsigned short *)&(param_4)) = CONCAT11(*(undefined1 *)(obj + 0xcb4),2);
          param_4 = CONCAT22(8,(undefined2)param_4);
          FUN_00481720(&param_4,4);
          FUN_0047fca0(obj,cVar2);
          return;
        case 1:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          *(byte *)(iVar3 + 0xd1 + obj) = *(byte *)(iVar3 + 0xd1 + obj) ^ 1;
          (*(unsigned char *)&(param_4)) = 9;
          break;
        case 2:
          FUN_004812b0(obj,*(undefined4 *)(obj + 0xcb4),1);
          (*(unsigned char *)&(param_4)) = 5;
          break;
        case 3:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          *(byte *)(iVar3 + 0xd2 + obj) = *(byte *)(iVar3 + 0xd2 + obj) ^ 1;
          (*(unsigned char *)&(param_4)) = 6;
          break;
        case 4:
          FUN_004812b0(obj,*(undefined4 *)(obj + 0xcb4),0);
          (*(unsigned char *)&(param_4)) = 7;
          break;
        case 5:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          *(byte *)(iVar3 + 0xd3 + obj) = *(byte *)(iVar3 + 0xd3 + obj) ^ 1;
          (*(unsigned char *)&(param_4)) = 8;
          break;
        case 6:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          *(byte *)(iVar3 + 0xd6 + obj) = *(byte *)(iVar3 + 0xd6 + obj) ^ 1;
          (*(unsigned char *)&(param_4)) = 10;
          break;
        case 7:
          iVar3 = *(int *)(obj + 0xcb4) * 0x4c;
          *(byte *)(iVar3 + 0xd7 + obj) = *(byte *)(iVar3 + 0xd7 + obj) ^ 1;
          (*(unsigned char *)&(param_4)) = 0xb;
          break;
        default:
          goto switchD_004825cb_caseD_b;
        }
        (*(unsigned short *)&(param_4)) = CONCAT11(*(undefined1 *)(obj + 0xcb4),(undefined1)param_4);
        param_4 = CONCAT22(4,(undefined2)param_4);
        FUN_00481720(&param_4,4);
        return;
      }
    }
    break;
  case 3:
  case 4:
    if ((iVar3 == 4) || (iVar3 == 6)) {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
    switch(param_4) {
    case 9:
      if (*(char *)(*(int *)(obj + 0xcb4) * 0x4c + 0xd0 + obj) == '\x14') {
        FUN_00481ab0((iVar5 != 0) + '\x05');
        return;
      }
      break;
    case 10:
      FUN_00480750(*(undefined4 *)(obj + 0xcb4));
      return;
    case 0xc:
      (*(unsigned short *)&(param_4)) = CONCAT11(*(undefined1 *)(obj + 0xcb4),3);
      param_4 = CONCAT22(0x50,(undefined2)param_4);
      FUN_00481720(&param_4,4);
      FUN_00481720(*(int *)(obj + 0xcb4) * 0x4c + 0xd0 + obj,0x4c);
      FUN_00480930(*(undefined4 *)(obj + 0xcb4),iVar5);
      return;
    case 0x24:
      if ((param_2 == 0) && (iVar3 == 3)) {
        FUN_00481ab0(1);
        return;
      }
      break;
    case 0x25:
      if ((param_2 == 0) && (iVar3 == 4)) {
        FUN_00481ab0(1);
        return;
      }
      break;
    case 0x60:
      param_4 = (uint)param_2;
      fVar7 = (float10)FUN_00454f10(&PTR_DAT_00705de0,(float)param_4 - _DAT_006cc7c4);
      *(float *)(obj + 0xce4) = (float)fVar7;
      return;
    }
    break;
  case 5:
  case 6:
    if (param_4 != 9) {
      if (param_4 != 0xb) break;
      FUN_004819f0();
    }
switchD_004823c9_caseD_b:
    FUN_00481ab0(1);
    break;
  default:
    goto switchD_0048224b_default;
  }
switchD_004825cb_caseD_b:
switchD_0048224b_default:
  return;
}
