/* spd-match: far pct=4.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0064241E */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641b50();
int unaff_EBX;
int unaff_ESI;
void __fastcall FUN_0064241E(undefined4 * obj)

{
  int iVar1;

  int iVar2;
  int *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  int iStack00000010;
  int in_stack_00000018;
  code *in_stack_0000001c;
  
code_r0x0064241e:
  *obj = unaff_ESI;
  do {
    unaff_EBX[1] = unaff_EBX[1] | 1;
    do {
      FUN_0063f1a0();
      iVar2 = in_stack_00000018 + -1;
      if (iVar2 < 1) {
code_r0x0064243e:
        FUN_0063f1a0();
        return;
      }
      FUN_0063f190();
      unaff_ESI = (undefined4 *)unaff_EBX[2];
      FUN_0063f1a0();
      if (1 < iVar2) {
        iStack00000010 = in_stack_00000018 + -2;
        puVar3 = unaff_ESI;
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar1 = (*in_stack_0000001c)(puVar3,unaff_ESI);
          if (iVar1 < 0) {
            unaff_ESI = puVar3;
          }
          iStack00000010 = iStack00000010 + -1;
        } while (iStack00000010 != 0);
      }
      iVar1 = FUN_00641b50();
      if (iVar1 == 0) goto code_r0x0064243e;
      FUN_0063f190();
      in_stack_00000018 = iVar2;
    } while (unaff_ESI == (undefined4 *)0x0);
    obj = (undefined4 *)unaff_EBX[3];
    *unaff_ESI = 0;
    *unaff_EBX = *unaff_EBX + 1;
    unaff_EBX[3] = (int)unaff_ESI;
    if (obj != (undefined4 *)0x0) goto code_r0x0064241e;
    unaff_EBX[2] = (int)unaff_ESI;
  } while( true );
}
