/* spd-match: far pct=2.08 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FD1E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fd0f0();
int __cdecl FUN_004fd230();
extern void LAB_004fd20d(void);
int __fastcall FUN_004fd1e0(int * ctx, int obj)

{

  int iVar1;
  int iVar2;
  int edi;
  
  edi = ctx[2];
  iVar1 = FUN_004fd230();
  do {
    if (obj == 0) {
      return 0;
    }
    iVar2 = edi;
    if (*(int *)(obj + 0xc) == 0) {
LAB_004fd20d:
      if (iVar2 == 0) {

      }
    }
    else if (iVar1 == *(int *)(obj + 0x10)) {
      iVar2 = FUN_004fd0f0();
      goto LAB_004fd20d;
    }
    obj = *(int *)(obj + 4);
  } while( true );
}
