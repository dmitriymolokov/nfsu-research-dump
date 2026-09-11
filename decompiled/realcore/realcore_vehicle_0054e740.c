/* spd-match: far pct=18.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054E740 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054e530();
int __cdecl FUN_00664100();
int __cdecl FUN_006641f0();
int __cdecl FUN_00674898();
extern int DAT_00704b50;
extern int DAT_00704b54;
extern int DAT_00704b58;
extern code *DAT_00730168;
extern int DAT_00730174;
extern code *DAT_00730178;
extern int _DAT_00704b5c;
void __fastcall FUN_0054e740(int * obj)

{
  uint uVar1;

  int iVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_218 [4];
  ushort local_214;
  char local_212;
  undefined1 local_210 [528];
  
  iVar2 = FUN_00664100(obj[3]);
  if ((*(char *)(iVar2 + 0x45) != '\0') && (*obj == 3)) {
    while ((obj[3] != 0 && (iVar2 = FUN_006641f0(obj[3],local_218,1), iVar2 != 0))) {
      uVar4 = (uint)local_214;
      bVar5 = local_212 == '\x05';
      iVar2 = FUN_00674898();
      uVar1 = DAT_00704b58;
      if (DAT_00704b50 <= -iVar2 - (int)DAT_00704b54) {
        iVar2 = (-iVar2 - (int)DAT_00704b54) / DAT_00704b50;
        DAT_00704b54 = ((int)DAT_00704b54) + (int)DAT_00704b50 * iVar2;
        DAT_00704b58 = 0;
        _DAT_00704b5c = (iVar2 != 1) - 1 & uVar1;
      }
      DAT_00704b58 = ((int)DAT_00704b58) + uVar4;
      (*DAT_00730178)(obj[1],local_210,uVar4,bVar5);
      if (*obj != 3) {
        return;
      }
    }
    if ((*obj == 3) &&
       (piVar3 = (int *)FUN_00664100(obj[3]), DAT_00730174 < (uint)(*piVar3 - piVar3[8]))) {
      iVar2 = obj[1];
      FUN_0054e530();
      (*DAT_00730168)(iVar2);
    }
  }
  return;
}
