/* spd-match: far pct=8.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059FA20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00448370();
int __cdecl FUN_004f6010();
int __cdecl FUN_0051c5f0();
int __cdecl FUN_0053ec90();
int __cdecl FUN_0059f7c0();
extern unsigned char *DAT_006ee650;
extern int DAT_006ee6f0;
extern int DAT_00734428;
extern int DAT_0073578c;
extern int DAT_00740420;
extern int DAT_007588f0;
extern int DAT_0077a920;
extern void LAB_0059fa5a(void);
void __fastcall FUN_0059fa20(int val)

{

  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (val != DAT_006ee6f0) {
    if (DAT_006ee6f0 != -1) {
      iVar2 = 0;
      piVar1 = &DAT_006ee650;
      do {
        if (*piVar1 == DAT_006ee6f0) {
          puVar3 = &DAT_006ee650 + iVar2 * 4;
          goto LAB_0059fa5a;
        }
        piVar1 = piVar1 + 4;
        iVar2 = iVar2 + 1;
      } while ((int)piVar1 < 0x6ee6f0);
      puVar3 = (undefined4 *)0x0;
LAB_0059fa5a:
      FUN_00448370();
      DAT_00734428 = 0;
      if (*(int *)(puVar3[3] + 0x60) != 0) {
        FUN_0053ec90(&DAT_00740420,puVar3[3],8);
        *(undefined4 *)(puVar3[3] + 0x60) = 0;
      }
      if (*(int *)(puVar3[3] + 0x68) != 0) {
        FUN_0053ec90(&DAT_00740420,puVar3[3] + 0x40,8);
        *(undefined4 *)(puVar3[3] + 0x68) = 0;
      }
      if (*(int *)(puVar3[3] + 100) != 0) {
        FUN_0053ec90(&DAT_00740420,puVar3[3] + 0x20,8);
        *(undefined4 *)(puVar3[3] + 100) = 0;
      }
    }
    DAT_006ee6f0 = val;
    if (val != -1) {
      FUN_0059f7c0(1,DAT_0077a920 == 3,DAT_0077a920 == 6,1);
      FUN_0051c5f0(DAT_006ee6f0);
      DAT_007588f0 = (uint)(DAT_006ee6f0 != 0);
      if (DAT_0073578c != 0) {
        FUN_004f6010(DAT_0073578c);
      }
    }
  }
  return;
}
