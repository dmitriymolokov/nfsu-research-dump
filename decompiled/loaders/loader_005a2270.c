/* spd-match: far pct=18.35 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A2270 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a1100();
int __cdecl FUN_005a1850();
int __cdecl FUN_005a1b10();
int __cdecl FUN_005a2040();
extern int DAT_00733ff8;
void __fastcall FUN_005a2270(int obj, uint *param_1)

{
  char cVar1;

  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint local_30 [12];
  
  FUN_005a1100();
  puVar5 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_005a2040(obj);
  if (cVar1 != '\0') {
    FUN_005a1850(local_30);
    FUN_005a1b10();
  }
  uVar6 = 0;
  do {
    puVar5 = (uint *)(&DAT_00733ff8)[uVar6];
    if ((puVar5 != (uint *)0x0) ||
       (((*(int *)(obj + 0x88b0) != 0 &&
         (puVar5 = (uint *)(*(int *)(obj + 0x88b0) + 0x58a0), puVar5 != (uint *)0x0)) &&
        (uVar6 == *puVar5)))) {
      if (((uVar6 < 0x100) && ((&DAT_00733ff8)[uVar6] != 0)) ||
         ((*(int *)(obj + 0x88b0) != 0 &&
          ((puVar2 = (uint *)(*(int *)(obj + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
           (uVar6 == *puVar2)))))) {
        pcVar3 = (char *)(uVar6 + 0x34c + obj);
      }
      else {
        pcVar3 = (char *)0x0;
      }
      if (*pcVar3 == '\x01') {
        iVar4 = 0;
        do {
          if (local_30[iVar4] == 0xffffffff) {
            local_30[iVar4] = *puVar5;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0xc);
      }
    }
    uVar6 = uVar6 + 1;
    if (0xff < uVar6) {
      puVar5 = local_30;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_1 = *puVar5;
        puVar5 = puVar5 + 1;
        param_1 = param_1 + 1;
      }
      return;
    }
  } while( true );
}
