/* spd-match: far pct=11.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DDFA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_00495fc0();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004dd880();
int __cdecl FUN_004ddf60();
int __cdecl FUN_004de0e0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f6910();
int __cdecl FUN_004ffb70();
int __cdecl FUN_0053e9e0();
extern int DAT_006b9172;
extern int DAT_0073578c;
extern int DAT_00740420;
void __fastcall FUN_004ddfa0(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  FUN_004dd880();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_004de0e0();
  }
  else {
    *(int *)(obj + 0x48) = *(int *)(iVar1 + 8);
    FUN_004ad7b0(*(undefined4 *)(iVar1 + 8));
    param_1 = *(int *)(iVar1 + 8);
    FUN_0053e9e0(&DAT_00740420,&param_1,1,FUN_004ddf60,obj,0);
  }
  if (((*(int *)(obj + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xbe813131);
    }
  }
  FUN_004f6910(iVar2);
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_00495fc0();
    FUN_00495f00(*(undefined4 *)(iVar1 + 0xc));
    return;
  }
  FUN_00495fc0();
  FUN_00495fc0();
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (*(int *)(iVar1 + 4) == 4) {
    uVar3 = 0x70c47a47;
    iVar2 = 0;
  }
  FUN_00495f00(uVar3);
  if (iVar2 == 0) {
    FUN_004f6850(&DAT_006b9172);
    return;
  }
  FUN_00495f00(iVar2);
  return;
}
