/* spd-match: far pct=15.70 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00539560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005393a0();
int __cdecl FUN_00539430();
int __cdecl FUN_00539530();
bool __fastcall FUN_00539560(int * obj)

{
  int iVar1;
  int iVar2;

  bool bVar3;
  
  iVar1 = obj[0x88];
  iVar2 = obj[0x89];
  bVar3 = iVar1 == iVar2;
  if (obj[0x8b] == 1) {
    if (iVar1 == iVar2) {
      switch(iVar1) {
      case 1:
        FUN_005393a0();
        break;
      case 3:
        (**(code **)(*obj + 0x30))();
        break;
      case 4:
        (**(code **)(*obj + 0x34))();
        break;
      case 8:
        FUN_00539430();
      }
      return obj[0x88] == obj[0x89];
    }
    switch(iVar2) {
    case 0:
      obj[0x88] = 0;
      obj[0x89] = 0;
      obj[0x8a] = 0;
      return bVar3;
    case 1:
      FUN_005393a0();
      return bVar3;
    case 2:
      FUN_00539530();
      return bVar3;
    case 3:
      obj[0x88] = 3;
      break;
    case 7:
      obj[0x8a] = iVar1;
      obj[0x88] = 7;
      return bVar3;
    case 8:
      FUN_00539430();
      return bVar3;
    case 10:
      obj[0x88] = obj[0x8a];
      obj[0x89] = obj[0x8a];
      return bVar3;
    }
  }
  return bVar3;
}
