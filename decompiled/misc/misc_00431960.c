/* spd-match: far pct=8.42 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00431960 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f600(...);
int __cdecl FUN_00421c00(...);
int __cdecl FUN_0042ab30(...);
int __cdecl FUN_0042abf0(...);
int __cdecl FUN_0042add0(...);
int __cdecl FUN_0042da40(...);
int __cdecl FUN_0042e020(...);
int __cdecl FUN_0042e450(...);
int __cdecl FUN_00431230(...);
int __cdecl FUN_004314a0(...);
int __cdecl FUN_004318d0(...);
int __cdecl FUN_00431900(...);
int __cdecl FUN_00431920(...);
int __cdecl FUN_00431940(...);
int __cdecl FUN_004654f0(...);
int __cdecl FUN_00465530(...);
int __cdecl FUN_00574d90(...);
extern int DAT_007000e8;
extern unsigned char *DAT_0073619c;
extern int DAT_007361f0;
extern int DAT_007361fc;
extern int DAT_0073ad34;
extern int DAT_0073ad3c;
extern int DAT_0078a368;
extern int _DAT_006cc7bc;
extern int _DAT_006cca38;
extern int _DAT_0073654c;

struct ThisCallBox {
  void FUN_00431960(undefined4 val, undefined4 param_2, char param_3);
};
void ThisCallBox::FUN_00431960(undefined4 val, undefined4 param_2, char param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;

  int *piVar5;
  
  switch(val) {
  case 0x75:
    cVar3 = FUN_0042ab30();
    if (cVar3 != '\0') {
      *(byte *)(((int)this) + 0x124) = *(byte *)(((int)this) + 0x124) ^ 1;
      return;
    }
    if ((((_DAT_006cc7bc < (float)(DAT_0073ad3c - *(int *)(((int)this) + 0xa0)) * _DAT_006cca38) &&
         ((*(int *)(((int)this) + 0x278) == 2 || (*(int *)(((int)this) + 0x278) == 3)))) &&
        (*(int *)(((int)this) + 0x27c) != 0)) && (*(int *)(*(int *)(((int)this) + 0x27c) + 0x14) != 0)) {
      uVar4 = FUN_0042e020();
      *(undefined1 *)(((int)this) + 0x24) = uVar4;
      return;
    }
    break;
  case 0x76:
    *(bool *)(((int)this) + 0x4ad) = param_3 != '\0';
    if (DAT_007361fc == 0) {
      *(undefined4 *)(((int)this) + 0x70) = DAT_0073ad34;
    }
    piVar5 = *(int **)(((int)this) + 0x27c);
    if (((piVar5 != (int *)0x0) && (cVar3 = FUN_0042add0(), cVar3 != '\0')) ||
       ((piVar5 = *(int **)(((int)this) + 0x280), piVar5 != (int *)0x0 &&
        (cVar3 = FUN_0042add0(), cVar3 != '\0')))) {
      (**(code **)(*piVar5 + 0x14))(*(undefined1 *)(((int)this) + 0x4ad));
      return;
    }
    break;
  case 0x77:
    FUN_0042da40(1,1,1,1);
    return;
  case 0x78:
    FUN_0042da40(2,1,1,1);
    return;
  case 0x79:
    FUN_0042da40(3,1,1,1);
    return;
  case 0x99:
    iVar1 = *(int *)(*(int *)(((int)this) + 4) + 0x30);
    if ((param_3 != '\0') &&
       ((((*(int *)(*(int *)(((int)this) + 4) + 0x24) != 1 || (iVar1 == 0)) ||
         (*(int *)(iVar1 + 0x278) == 0)) && (cVar3 = FUN_00431230(), cVar3 != '\0')))) {
      FUN_004314a0();
      return;
    }
    break;
  case 0x9a:
    iVar1 = *(int *)(((int)this) + 4);
    iVar2 = *(int *)(iVar1 + 0xc);
    if (param_3 == '\0') {
      FUN_00431940();
      if (*(int *)(iVar2 + 0xc54) != 1) {
        *(undefined1 *)(iVar1 + 0x855) = 0;
        return;
      }
    }
    else {
      FUN_00431920();
      if (*(int *)(iVar2 + 0xc54) != 1) {
        *(undefined1 *)(iVar1 + 0x855) = 1;
        return;
      }
      if (DAT_0078a368 == 0) {
        if (*(int *)(iVar1 + 0x834) != 0) {
          *(undefined4 *)(iVar1 + 0x858) = 0;
          *(undefined4 *)(iVar1 + 0x834) = 0;
          return;
        }
        *(undefined4 *)(iVar1 + 0x858) = 1;
        *(undefined4 *)(iVar1 + 0x834) = 2;
        return;
      }
    }
    break;
  case 0x9b:
  case 0x9c:
    cVar3 = FUN_0041f600();
    if ((cVar3 == '\0') && (cVar3 = FUN_0042ab30(), cVar3 == '\0')) {
      if (param_3 == '\0') {
        cVar3 = FUN_004318d0();
        if ((cVar3 != '\0') && (DAT_007000e8 != 0)) {
          FUN_00465530();
        }
      }
      else {
        cVar3 = FUN_00431900();
        if ((cVar3 != '\0') && (cVar3 = FUN_004654f0(), cVar3 != '\0')) {
          if (*DAT_0073619c < 4) {
            FUN_0042abf0();
          }
          else {
            _DAT_0073654c = 1;
            *(undefined1 *)(((int)this) + 0x270) = 1;
          }
          if (*(char *)(((int)this) + 0x21) != '\0') {
            FUN_00574d90(0x3f800000);
            return;
          }
        }
      }
    }
    break;
  case 0x9d:
    *(int *)(((int)this) + 0xa0) = DAT_0073ad3c;
    return;
  case 0x9e:
    *(int *)(((int)this) + 0xa0) = DAT_0073ad3c;
    return;
  case 0xa3:
    *(byte *)(((int)this) + 0x4ae) = *(byte *)(((int)this) + 0x4ae) ^ 1;
    return;
  case 0xaa:
    if (*(int *)(((int)this) + 0x4c) != 0) {
      FUN_0042e450(((int)this),1);
      return;
    }
    break;
  case 0xab:
    cVar3 = FUN_004318d0();
    if (cVar3 != '\0') {
      FUN_00465530();
    }
    FUN_00421c00(DAT_007361f0,5,param_2);
    return;
  }
  return;
}
