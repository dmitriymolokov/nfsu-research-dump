/* spd-match: far pct=20.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00501610 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fa4a0();
int __cdecl FUN_004fd2c0();
int __cdecl FUN_004febb0();
int __cdecl FUN_00500910();
int __cdecl FUN_00500940();
int __cdecl FUN_00500a30();
int __cdecl FUN_00500af0();
int __cdecl FUN_00500b90();
int __cdecl FUN_00500c20();
int __cdecl FUN_00500cd0();
int __cdecl FUN_00503330();
int __cdecl FUN_005033d0();
extern int DAT_007460c8;
extern void LAB_00501736(void);
extern void LAB_0050175e(void);
extern unsigned int uRam00000058;
int __fastcall FUN_00501610(int obj, int param_1)

{

  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500af0();
      goto LAB_00501736;
    }
    break;
  case 2:
    pvVar1 = _malloc(0x74);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500940();
      goto LAB_00501736;
    }
    break;
  default:
    pvVar1 = _malloc(0x58);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_004febb0();
      goto LAB_00501736;
    }
    break;
  case 4:
    pvVar1 = _malloc(0xa8);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_004fd2c0();
      goto LAB_00501736;
    }
    break;
  case 5:
    pvVar1 = _malloc(0x68);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500910();
      goto LAB_00501736;
    }
    break;
  case 6:
    pvVar1 = _malloc(0xc4);
    if (pvVar1 == (void *)0x0) {
      uRam00000058 = *(undefined4 *)(obj + 0x38);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004fa4a0();
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(obj + 0x38);
    }
    goto LAB_00501736;
  case 7:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500a30();
      goto LAB_00501736;
    }
    break;
  case 9:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500b90();
      goto LAB_00501736;
    }
    break;
  case 10:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500c20();
      goto LAB_00501736;
    }
    break;
  case 0xb:
    pvVar1 = _malloc(0x58);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00500cd0();
      goto LAB_00501736;
    }
  }
  iVar2 = 0;
LAB_00501736:
  *(int *)(iVar2 + 0x18) = param_1;
  uVar3 = 0;
  if (*(uint *)(obj + 0x30) != 0) {
    piVar5 = *(int **)(obj + 0x34);
    do {
      if (*piVar5 == param_1) {
        iVar6 = (*(int **)(obj + 0x34))[uVar3 * 2 + 1];
        goto LAB_0050175e;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 < *(uint *)(obj + 0x30));
  }
  iVar6 = 0;
LAB_0050175e:
  FUN_005033d0(&DAT_007460c8);
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  uVar4 = FUN_00503330(&DAT_007460c8);
  *(undefined4 *)(iVar2 + 0x2c) = uVar4;
  *(int *)(iVar2 + 0x30) = iVar6;
  return iVar2;
}
