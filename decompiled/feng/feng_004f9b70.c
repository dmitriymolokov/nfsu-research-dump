/* spd-match: far pct=12.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F9B70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f70();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00567c70();
extern int DAT_0073578c;
int unaff_EBX;
void __fastcall FUN_004f9b70(undefined4 val)

{

  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x12dfbc68);
    }
  }
  FUN_004f6970(iVar1);
  switch(val) {
  case 0:
    FUN_00495f70();
    return;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    goto switchD_004f9bc0_default;
  }
  uVar2 = FUN_00567c70();
  FUN_004ad7b0(uVar2);
switchD_004f9bc0_default:
  return;
}
