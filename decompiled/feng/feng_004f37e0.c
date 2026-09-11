/* spd-match: far pct=9.75 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-b/va_004F37E0 */
#include "ghidra_compat.h"

int __cdecl FUN_004eebf0();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3d60();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004fd1e0();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006f94dc;
extern unsigned char *PTR_s_Options_fng_006f94d8;
undefined4 __fastcall FUN_004f37e0(int val, undefined4 param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;

  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined *local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar8 = 0;
  ppuVar7 = &PTR_s_Options_fng_006f94d8;
  while( true ) {
    pbVar6 = *ppuVar7;
    iVar5 = -1;
    if (pbVar6 != (byte *)0x0) {
      bVar2 = *pbVar6;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < 0x7b)) {
          bVar2 = bVar2 - 0x20;
        }
        iVar5 = iVar5 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar1;
      }
    }
    if (val == iVar5) break;
    ppuVar7 = ppuVar7 + 5;
    iVar8 = iVar8 + 1;
    if (0x6f9fdb < (int)ppuVar7) {
      return 0;
    }
  }
  iVar5 = iVar8 * 0x14;
  local_10 = (&PTR_s_Options_fng_006f94d8)[iVar8 * 5];
  local_c = param_1;
  local_4 = *(undefined4 *)(iVar5 + 0x6f94e8);
  local_8 = iVar5 + 0x6f94e4;
  uVar4 = (*(code *)(&PTR_FUN_006f94dc)[iVar8 * 5])(&local_10);
  if (*(int *)(iVar5 + 0x6f94e0) == 0) {
    cVar3 = FUN_004f3d60();
    if (((((cVar3 == '\0') &&
          (iVar5 = FUN_004f3f90(&DAT_00746104), iVar8 = DAT_0073578c, iVar5 != 0)) &&
         (*(int *)(iVar5 + 0x18) != 0)) &&
        ((DAT_0073578c != 0 && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)))) &&
       (*(int *)(iVar5 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar8 + 8),*(int *)(iVar5 + 0x18));
    }
  }
  else {
    iVar8 = FUN_004f3f90(&DAT_00746104);
    if (((iVar8 == 0) || (*(int *)(iVar8 + 0x18) == 0)) && (DAT_0073578c != 0)) {
      iVar5 = *(int *)(DAT_0073578c + 8);
      iVar8 = iVar5 + 0xdc;
      if ((iVar8 == 0) || (iVar8 = FUN_004fd1e0(iVar8), iVar8 == 0)) {
        FUN_004eede0(iVar5,"MU_HorizontalBrowserBack.fng",0x10,0);
        return uVar4;
      }
    }
  }
  return uVar4;
}
