/* spd-match: far pct=25.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051BB50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004483c0();
int __cdecl FUN_0053e4f0();
int __cdecl FUN_0053ed70();
int __cdecl FUN_0053f3e0();
int __cdecl FUN_00546060();
extern int DAT_007360e8;
extern int DAT_00740420;
extern unsigned char *PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860;
void __fastcall FUN_0051bb50(undefined4 * obj)

{
  undefined *puVar1;
  undefined *puVar2;

  int iVar3;
  
  if (obj[1] != 0) {
    FUN_00546060();
  }
  if (obj[2] != 0) {
    FUN_00546060();
  }
  if (obj[3] != 0) {
    FUN_00546060();
  }
  obj[1] = 0;
  obj[2] = 0;
  obj[3] = 0;
  *obj = 0;
  puVar2 = PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860;
  iVar3 = FUN_0053ed70(&DAT_00740420,PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860);
  puVar1 = puVar2;
  while (iVar3 != 0) {
    FUN_004483c0();
    iVar3 = FUN_0053ed70(&DAT_00740420,puVar2);
    puVar1 = PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860;
  }
  iVar3 = FUN_0053e4f0(&DAT_00740420,puVar1);
  if (iVar3 != 0) {
    FUN_0053f3e0(puVar1,0,0);
    while (DAT_007360e8 != 0) {
      FUN_004483c0();
    }
  }
  return;
}
