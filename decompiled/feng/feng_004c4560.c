/* spd-match: far pct=16.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C4560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004c44c0();
int __cdecl FUN_004f8340();
int __cdecl FUN_004f8910();
extern int DAT_00748850;
extern int _DAT_0072cc80;
void __fastcall FUN_004c4560(int obj, int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  int iVar3;
  
  puVar1 = *(undefined4 **)(obj + 0x48);
  if (param_1 == -0x6edfbf62) {
    if (puVar1 != *(undefined4 **)(obj + 0x40)) {
      *(undefined4 *)(obj + 0x48) = puVar1[1];
    }
  }
  else if ((param_1 == -0x4a68e40f) && (puVar1 != *(undefined4 **)(obj + 0x44))) {
    *(undefined4 *)(obj + 0x48) = *puVar1;
  }
  puVar2 = *(undefined4 **)(obj + 0x48);
  if (puVar2 != puVar1) {
    iVar3 = FUN_004b2330();
    FUN_004323f0(&DAT_00748850,puVar2 + 4);
    _DAT_0072cc80 = 1;
    if (iVar3 != 0) {
      FUN_004b0e50(iVar3,&DAT_00748850,1);
    }
    FUN_004f8910();
    FUN_004c44c0();
    if (param_1 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(obj + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(obj + 0xc));
  }
  return;
}
