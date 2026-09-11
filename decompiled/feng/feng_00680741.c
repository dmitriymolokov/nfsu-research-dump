/* spd-match: far pct=15.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0067733f();
int __cdecl FUN_00677354();
int __cdecl FUN_006806ac();
extern unsigned char *DAT_00793224;
extern int DAT_00793240;
extern void LAB_0068087a(void);
extern void LAB_0068087d(void);

int FUN_00680741(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  int local_4;
  
  iVar4 = -1;
  iVar2 = FUN_00677354(0xb);
  if (iVar2 != 0) {
    __lock(0xb);
    local_8 = 0;
    local_4 = 0;
    piVar5 = &DAT_00793240;
    while (puVar3 = (undefined4 *)*piVar5, puVar1 = puVar3, puVar3 != (undefined4 *)0x0) {
      for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                FUN_0067733f(10);
                goto LAB_0068087a;
              }
              puVar3[2] = puVar3[2] + 1;
            }
            FUN_0067733f(10);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          if ((*(byte *)(puVar3 + 1) & 1) == 0) {
            *puVar3 = 0xffffffff;
            iVar4 = ((int)puVar3 - *piVar5) / 0x24 + local_4;
            if (iVar4 != -1) goto LAB_0068087d;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
        }
        puVar1 = (undefined4 *)*piVar5;
      }
      local_4 = local_4 + 0x20;
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
      if (0x79333f < (int)piVar5) goto LAB_0068087d;
    }
    puVar3 = _malloc(0x480);
    if (puVar3 != (undefined4 *)0x0) {
      DAT_00793224 = DAT_00793224 + 0x20;
      (&DAT_00793240)[local_8] = puVar3;
      puVar1 = puVar3;
      for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
        *(undefined1 *)(puVar3 + 1) = 0;
        *puVar3 = 0xffffffff;
        puVar3[2] = 0;
        *(undefined1 *)((int)puVar3 + 5) = 10;
        puVar1 = (undefined4 *)(&DAT_00793240)[local_8];
      }
      iVar4 = local_8 << 5;
      iVar2 = FUN_006806ac(iVar4);
      if (iVar2 == 0) {
LAB_0068087a:
        iVar4 = -1;
      }
    }
LAB_0068087d:
    FUN_0067733f(0xb);
  }
  return iVar4;
}
