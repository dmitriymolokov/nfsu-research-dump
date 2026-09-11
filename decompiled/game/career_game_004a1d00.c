/* spd-match: far pct=18.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A1D00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004353e0();
int __cdecl FUN_004a1ee0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_00586580();
extern int DAT_006cc568;
extern int DAT_006cc7a4;
extern unsigned char *DAT_0073619c;
extern int _DAT_006cca38;
extern void LAB_004a1d3c(void);
void __fastcall FUN_004a1d00(int obj, int param_1)

{
  int iVar1;

  undefined4 uVar2;
  undefined1 local_20 [32];
  
  iVar1 = *(int *)(DAT_0073619c + 0x24);
  if (iVar1 < 2) {
    return;
  }
  if ((param_1 == 0) || (*(char *)(param_1 + 10) != '\x01')) {
    if (0 < iVar1) {
      uVar2 = *(undefined4 *)(DAT_0073619c + 0x520);
      goto LAB_004a1d3c;
    }
  }
  else if (1 < iVar1) {
    uVar2 = *(undefined4 *)(DAT_0073619c + 0x524);
    goto LAB_004a1d3c;
  }
  uVar2 = 0;
LAB_004a1d3c:
  FUN_004353e0((int *)(obj + 0x34),param_1,uVar2);
  if ((float)*(int *)(obj + 0x34) * _DAT_006cca38 != DAT_006cc7a4) {
    FUN_00586580(local_20);
    FUN_004f68a0(&DAT_006cc568,local_20);
    FUN_004a1ee0();
  }
  return;
}
