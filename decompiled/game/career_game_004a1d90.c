/* spd-match: far pct=7.81 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A1D90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a1ee0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_00586580();
extern int DAT_006cc568;
extern int DAT_006cc7a4;
extern unsigned char *DAT_0073619c;
extern int _DAT_006cca38;
void __fastcall FUN_004a1d90(int obj, int param_1)

{

  int iVar1;
  undefined1 local_20 [32];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    iVar1 = *(int *)(param_1 + 0x38 + *(char *)(DAT_0073619c + 0x53f) * 4) -
            *(int *)(DAT_0073619c + 0x18);
    if ((float)iVar1 * _DAT_006cca38 == DAT_006cc7a4) {
      *(int *)(obj + 0x34) =
           *(int *)(param_1 + 0x84 + *(char *)(param_1 + 9) * 4) - *(int *)(DAT_0073619c + 0x18);
    }
    else {
      *(int *)(obj + 0x34) = iVar1;
    }
    FUN_00586580(local_20);
    FUN_004f68a0(&DAT_006cc568,local_20);
    FUN_004a1ee0();
  }
  return;
}
