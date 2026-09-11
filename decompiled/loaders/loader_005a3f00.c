/* spd-match: far pct=12.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_005a3f74(void);
void __fastcall FUN_005a3f00(undefined4 * obj, undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  puVar2 = param_1;
  obj[1] = 0;
  *obj = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    *obj = *param_1;
    piVar4 = param_1 + 0x1d;
    param_1 = (undefined4 *)0x0;
    if (0 < *piVar4) {
      piVar4 = puVar2 + 0xf;
      do {
        if ((piVar4 == (int *)0x4) || (piVar4[-1] != 0)) goto switchD_005a3fba_default;
        bVar5 = piVar4[1] == 4;
        iVar1 = *piVar4;
        if ((iVar1 < 0x10) || ((0x18 < iVar1 || (bVar5)))) {
          if ((-1 < iVar1) && (iVar1 < 0x10)) {
            uVar3 = obj[1] | 2;
            goto LAB_005a3f74;
          }
        }
        else {
          uVar3 = obj[1] | 1;
LAB_005a3f74:
          obj[1] = uVar3;
        }
        switch(*piVar4) {
        case 5:
        case 8:
        case 9:
        case 0xb:
        case 0xc:
        case 0xd:
          obj[1] = obj[1] | 8;
        }
        switch(*piVar4) {
        case 2:
        case 4:
        case 6:
        case 10:
        case 0xe:
          obj[1] = obj[1] | 0x10;
        }
        switch(*piVar4) {
        case 0:
          uVar3 = obj[1] | 0x20;
          break;
        case 1:
          uVar3 = obj[1] | 0x40;
          break;
        case 2:
          uVar3 = obj[1] | 0x80;
          break;
        case 3:
          uVar3 = obj[1] | 0x100;
          break;
        case 4:
          uVar3 = obj[1] | 0x200;
          break;
        case 5:
          uVar3 = obj[1] | 0x400;
          break;
        case 6:
          uVar3 = obj[1] | 0x800;
          break;
        case 7:
          uVar3 = obj[1] | 0x1000;
          break;
        case 8:
          uVar3 = obj[1] | 0x2000;
          break;
        case 9:
          uVar3 = obj[1] | 0x4000;
          break;
        case 10:
          uVar3 = obj[1] | 0x8000;
          break;
        case 0xb:
          uVar3 = obj[1] | 0x10000;
          break;
        case 0xc:
          uVar3 = obj[1] | 0x20000;
          break;
        case 0xd:
          uVar3 = obj[1] | 0x40000;
          break;
        case 0xe:
          uVar3 = obj[1] | 0x80000;
          break;
        case 0xf:
          uVar3 = obj[1] | 0x100000;
          break;
        case 0x10:
          if (!bVar5) {
            uVar3 = obj[1] | 0x200000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x11:
          if (!bVar5) {
            uVar3 = obj[1] | 0x400000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x12:
          if (!bVar5) {
            uVar3 = obj[1] | 0x800000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x13:
          if (!bVar5) {
            uVar3 = obj[1] | 0x1000000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x14:
          if (!bVar5) {
            uVar3 = obj[1] | 0x2000000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x15:
          if (!bVar5) {
            uVar3 = obj[1] | 0x4000000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x16:
          if (!bVar5) {
            uVar3 = obj[1] | 0x8000000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x17:
          if (!bVar5) {
            uVar3 = obj[1] | 0x10000000;
            break;
          }
          goto switchD_005a3fba_default;
        case 0x18:
          if (!bVar5) {
            uVar3 = obj[1] | 0x20000000;
            break;
          }
        default:
          goto switchD_005a3fba_default;
        }
        obj[1] = uVar3;
switchD_005a3fba_default:
        param_1 = (undefined4 *)((int)param_1 + 1);
        piVar4 = piVar4 + 3;
      } while ((int)param_1 < (int)puVar2[0x1d]);
    }
  }
  return;
}
