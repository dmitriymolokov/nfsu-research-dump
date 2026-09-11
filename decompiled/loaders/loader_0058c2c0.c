/* spd-match: far pct=7.02 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058C2C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058b050();
extern int DAT_00734588;
undefined4 * __fastcall FUN_0058c2c0(int obj)

{
  undefined4 *puVar1;

  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_1f4 [8];
  int local_1ec;
  int aiStack_1e0 [120];
  
  FUN_0058b050(local_1f4,*(undefined4 *)(obj + 0xc),*(undefined4 *)(obj + 0x10));
  puVar1 = *(undefined4 **)(obj + 0x44);
  do {
    if (puVar1 == (undefined4 *)(obj + 0x44)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == local_1ec) {
      if (*(int *)(puVar1[2] * 0xc90 + 0xc54 + DAT_00734588) == 2) {
        return puVar1;
      }
      bVar4 = false;
      iVar3 = 0;
      do {
        if (0x77 < iVar3) {
          if (!bVar4) {
            return puVar1;
          }
          break;
        }
        for (iVar2 = 0; (!bVar4 && (iVar2 < 4)); iVar2 = iVar2 + 1) {
          bVar4 = aiStack_1e0[iVar3 + iVar2] != puVar1[iVar3 + iVar2 + 5];
        }
        iVar3 = iVar3 + 4;
      } while (!bVar4);
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
