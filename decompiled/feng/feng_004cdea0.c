/* spd-match: far pct=9.38 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CDEA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ce120();
int __cdecl FUN_004ce370();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f5f80();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern int DAT_0078a30c;
void __fastcall FUN_004cdea0(int obj)

{

  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((DAT_0073578c != 0) && (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)) &&
      (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)) &&
     ((FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0 &&
      (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)))) {
    FUN_004f5f80(DAT_0073578c,0);
  }
  if (((*(int *)(obj + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x1aec7d09);
    }
  }
  iVar3 = DAT_0073578c;
  FUN_004f6910(iVar1);
  if (((*(int *)(obj + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar3 = DAT_0073578c, iVar1 == 0))
     || (iVar2 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar3 = DAT_0073578c, iVar2 == 0)) {
    if (iVar3 == 0) {
      iVar2 = 0;
      iVar1 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x1aec7d0a);
      iVar1 = DAT_0073578c;
    }
  }
  FUN_004f6910(iVar2);
  if (((*(int *)(obj + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar3 == 0))
     || (iVar3 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar3 == 0)) {
    if (iVar1 == 0) {
      iVar3 = 0;
      iVar1 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x1aec7d0b);
      iVar1 = DAT_0073578c;
    }
  }
  FUN_004f6910(iVar3);
  if (((*(int *)(obj + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar3 == 0))
     || (iVar3 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar3 == 0)) {
    if (iVar1 == 0) {
      iVar3 = 0;
      iVar1 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x1aec7d0c);
      iVar1 = DAT_0073578c;
    }
  }
  FUN_004f6910(iVar3);
  if (((*(int *)(obj + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar3 == 0))
     || (iVar3 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar3 == 0)) {
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x1aec7d0d);
    }
  }
  FUN_004f6910(iVar3);
  switch(DAT_0078a30c) {
  case 1:
    FUN_004ce120();
    return;
  case 2:
    FUN_004ce370();
    return;
  case 3:
    FUN_004ce370();
    return;
  case 5:
    FUN_004ce370();
  }
  return;
}
