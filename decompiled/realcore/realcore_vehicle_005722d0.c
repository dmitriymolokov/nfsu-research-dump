/* spd-match: far pct=31.74 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005722D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00572280();
int __cdecl FUN_00572b50();
int __cdecl FUN_00572f20();
extern int DAT_006f08a4;
extern void LAB_00572339(void);
int * __fastcall FUN_005722d0(int * obj)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;

  int *piVar4;
  int iVar5;
  
  bVar3 = false;
  piVar4 = (int *)0x0;
  if ((((*obj != 0) && (piVar4 = (int *)obj[6], piVar4 == (int *)0x0)) &&
      (DAT_006f08a4 != obj[0x29])) && (piVar4 = (int *)FUN_00572280(), (char)piVar4 != '\0')) {
    bVar3 = true;
  }
  if (obj[1] != 0) {
    piVar4 = (int *)(DAT_006f08a4 / 0xd3);
    if (DAT_006f08a4 % 0xd3 == 0) {
      bVar3 = true;
    }
    if ((obj[1] != 0) && (piVar4 = (int *)(obj[0x29] + 0x1e), (int)piVar4 < DAT_006f08a4))
    goto LAB_00572339;
  }
  if (!bVar3) {
    return piVar4;
  }
LAB_00572339:
  iVar5 = FUN_00572f20("DUMMY_SNAPSHOT");
  piVar4 = (int *)0x0;
  if ((iVar5 != 0) && (piVar4 = (int *)FUN_00572b50("DUMMY_SNAPSHOT",0), piVar4 != (int *)0x0)) {
    iVar5 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar5;
    *(int **)(iVar5 + 4) = piVar1;
    puVar2 = (undefined4 *)obj[0x1b];
    *puVar2 = piVar4;
    obj[0x1b] = (int)piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = (int)(obj + 0x1a);
  }
  return piVar4;
}
