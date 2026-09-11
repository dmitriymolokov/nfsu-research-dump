/* spd-match: far pct=16.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A2EF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
extern int DAT_006cc568;
extern int DAT_006fbf14;
extern unsigned char *DAT_0073619c;
extern void LAB_004a2f50(void);
extern void LAB_004a2fbe(void);
extern void LAB_004a2fe1(void);
void __fastcall FUN_004a2ef0(int obj, int param_1)

{
  char cVar1;
  int iVar2;

  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = param_1;
  iVar6 = *(int *)(obj + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) &&
     (iVar3 = FUN_0041ffe0(), iVar3 != 0)) {
    iVar6 = iVar3;
  }
  if (*(int *)(iVar6 + 0x1c) != 0) {
    cVar1 = *(char *)(*(int *)(iVar6 + 0x1c) + 10);
    piVar5 = (int *)(param_1 + 0xf0);
    param_1 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar2 + 0xe0);
LAB_004a2f50:
      if (param_1 < *(int *)(DAT_0073619c + 0x24)) {
        iVar6 = piVar5[0x11];
        if (*(int *)(*piVar5 * 0x30 + 0x20 + iVar2) == (int)cVar1) {
          if (iVar6 != 0) {
            for (iVar3 = *(int *)(iVar6 + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
              iVar4 = FUN_004fd230();
              if (*(int *)(iVar3 + 0x30) == iVar4) goto LAB_004a2fbe;
            }
          }
        }
        else if (iVar6 != 0) {
          for (iVar3 = *(int *)(iVar6 + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            iVar4 = FUN_004fd230();
            if (*(int *)(iVar3 + 0x30) == iVar4) goto LAB_004a2fbe;
          }
        }
        goto LAB_004a2fe1;
      }
    }
  }
  return;
LAB_004a2fbe:
  if (iVar3 != 0) {
    if (iVar3 != *(int *)(iVar6 + 0x54)) {
      *(int *)(iVar6 + 0x54) = iVar3;
      FUN_004ff030(iVar6);
      *(undefined4 *)(*(int *)(iVar6 + 0x54) + 0x10) = 0;
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
LAB_004a2fe1:
  FUN_004f68a0(&DAT_006cc568,*piVar5 * 0x30 + 0x2c + iVar2);
  param_1 = param_1 + 1;
  piVar5 = piVar5 + 1;
  if (*(int *)(iVar2 + 0xf0) <= param_1) {
    return;
  }
  goto LAB_004a2f50;
}
