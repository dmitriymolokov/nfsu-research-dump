/* spd-match: far pct=13.64 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C6970 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004c2b00();
int __cdecl FUN_004f42f0();
extern int DAT_00734588;
extern int DAT_00734998;
void __fastcall FUN_004c6970(int obj)

{

  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(obj + 0x48) + 0x730) + 0xc50) * 0xc90 + DAT_00734588;
  pcVar3 = (char *)(iVar1 + 0xc0);
  if ((DAT_00734998 != 0) && (*(int *)(iVar1 + 0xc50) == 0xe)) {
    pcVar3 = "HONDA";
  }
  uVar2 = FUN_004f42f0("BRAND_NAME_%s",pcVar3);
  FUN_00495f00(uVar2);
  uVar2 = FUN_004c2b00();
  FUN_004ad7b0(uVar2);
  return;
}
