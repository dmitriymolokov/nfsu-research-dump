/* spd-match: far pct=13.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049D940 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
extern int DAT_006ca778;
extern int DAT_00735710;
extern unsigned char *DAT_00777c94;
extern int DAT_0078a31c;
extern unsigned char *PTR_LAB_006c7968;
void __fastcall FUN_0049d940(int obj, int param_1)

{
  char cVar1;

  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x120);
  cVar1 = *(char *)(obj + 10);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar3 + 0x5c) = 0xf0952942;
    if (bVar4) {
      (**(code **)*puVar2)(iVar3);
    }
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffd | 0x400000;
  }
  FUN_004f6910(*(undefined4 *)(param_1 + 0x124));
  iVar3 = 0;
  if (0 < DAT_0078a31c) {
    puVar2 = (undefined4 *)(&DAT_00777c94 + cVar1 * 0x15c);
    do {
      iVar3 = iVar3 + 1;
      FUN_004f68a0(&PTR_LAB_006c7968,iVar3);
      FUN_004f68a0(&DAT_006ca778,puVar2[-0x15]);
      FUN_004f68a0(&DAT_006ca778,*puVar2);
      puVar2 = puVar2 + 1;
    } while (iVar3 < DAT_0078a31c);
    if (9 < iVar3) {
      return;
    }
  }
  puVar2 = (undefined4 *)(param_1 + 0x80 + iVar3 * 4);
  do {
    FUN_004f6910(puVar2[-10]);
    FUN_004f6910(*puVar2);
    FUN_004f6910(puVar2[10]);
    FUN_004f6910(*(undefined4 *)(param_1 + 0x128 + (iVar3 / 2) * 4));
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 10);
  return;
}
