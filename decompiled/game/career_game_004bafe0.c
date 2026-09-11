/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BAFE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ab510();
int __cdecl FUN_004ba530();
int __cdecl FUN_004bb0d0();
int __cdecl FUN_004f8340();
int __cdecl FUN_0059e510();
extern int DAT_00735e74;
extern void LAB_004bb032(void);
extern void LAB_004bb037(void);
void __fastcall FUN_004bafe0(int obj, undefined4 param_1, int param_2)

{
  int iVar1;
  char cVar2;

  int iVar3;
  
  iVar1 = *(int *)(obj + 0x48);
  if (param_2 == -0x6edfbf62) {
    if (*(int *)(obj + 0x40) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(obj + 0x40) + -4;
    }
    if (iVar1 == iVar3) goto LAB_004bb037;
    if (*(int *)(iVar1 + 8) == 0) {
LAB_004bb032:
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8) + -4;
    }
  }
  else {
    if (param_2 != -0x4a68e40f) goto LAB_004bb037;
    if (*(int *)(obj + 0x44) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(obj + 0x44) + -4;
    }
    if (iVar1 == iVar3) goto LAB_004bb037;
    if (*(int *)(iVar1 + 4) == 0) goto LAB_004bb032;
    iVar3 = *(int *)(iVar1 + 4) + -4;
  }
  *(int *)(obj + 0x48) = iVar3;
LAB_004bb037:
  if (*(int *)(obj + 0x48) != iVar1) {
    FUN_004f8340(*(undefined4 *)(obj + 0xc));
    FUN_004bb0d0();
    iVar1 = *(int *)(obj + 0x48);
    if (((DAT_00735e74 != 0) || (cVar2 = FUN_0059e510(*(undefined4 *)(iVar1 + 0x18)), cVar2 != '\0')
        ) || (*(char *)(iVar1 + 0x10) == '\0')) {
      iVar3 = FUN_004ab510();
      *(int *)(iVar3 + 8) = (int)*(short *)(*(int *)(iVar1 + 0xc) + 0x6c);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(obj + 0x48) + 0x18);
    }
    FUN_004ba530(obj);
  }
  return;
}
