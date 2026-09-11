/* spd-match: far pct=10.53 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00494B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456ba0();
int __cdecl FUN_00461520();
int __cdecl FUN_0058db20();
extern int DAT_007360b8;
extern unsigned char *DAT_0073619c;
extern int DAT_007361b4;
extern unsigned char *DAT_007361f8;
extern int DAT_0078a336;
extern int DAT_0078a387;
extern int DAT_0078a3fa;
extern int DAT_0078a3fb;
extern int _DAT_0078a338;
undefined4 __fastcall FUN_00494b90(int * obj)

{

  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0073619c;
  iVar2 = *obj;
  if (iVar2 == 0) {
    iVar2 = obj[3];
    *(int *)(DAT_0073619c + 0x534) = obj[2];
    *(int *)(iVar1 + 0x538) = iVar2;
    return 1;
  }
  if (iVar2 == 1) {
    iVar2 = (&DAT_007361b4)[obj[2]];
    _DAT_0078a338 = obj[3];
    *(int *)(*(int *)(iVar2 + 4) + 0x400) = _DAT_0078a338;
    *(char *)(iVar2 + 0x22) = (char)_DAT_0078a338;
    FUN_00456ba0();
    return 1;
  }
  if (iVar2 == 2) {
    DAT_0078a336 = obj[2] != 0;
    iVar2 = 0;
    if (0 < *(int *)(DAT_007361f8 + 0x18)) {
      iVar3 = 0x28;
      iVar1 = DAT_007361f8;
      do {
        if (*(int *)(*(int *)(iVar3 + iVar1) + 0x868) != 0) {
          FUN_0058db20();
          iVar1 = DAT_007361f8;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
    return 1;
  }
  if (iVar2 != 3) {
    if (iVar2 == 4) {
      DAT_0078a3fa = (char)obj[2];
      return 1;
    }
    if (iVar2 != 5) {
      if (iVar2 != 6) {
        return 0;
      }
      DAT_007360b8 = obj[2];
      return 1;
    }
    DAT_0078a3fb = (char)obj[2];
    return 1;
  }
  iVar2 = (&DAT_007361b4)[obj[2]];
  iVar1 = obj[3];
  *(char *)(iVar2 + 0x23) = (char)iVar1;
  (&DAT_0078a387)[*(int *)(iVar2 + 0x10) * 0x38] = (char)iVar1;
  FUN_00461520();
  return 1;
}
