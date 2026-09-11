/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B1C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043a220();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f0800();
int __cdecl FUN_004f09b0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00549980();
int __cdecl FUN_00575940();
int __cdecl FUN_00672970();
extern unsigned char *DAT_0073578c;
extern int DAT_00735e80;
extern int DAT_00746104;
void __fastcall FUN_0054b1c0(undefined4 val)

{
  int iVar1;

  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  DAT_00735e80 = val;
  if (*(int *)(DAT_0073578c + 8) != 0) {
    for (iVar1 = *(int *)(*(int *)(DAT_0073578c + 8) + 0xe4); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 4)) {
      iVar2 = FUN_00672970(*(undefined4 *)(iVar1 + 0x2c),"MU_Online");
      if (iVar2 != 0) {
        _strrchr(*(char **)(iVar1 + 0x2c),0x5c);
        iVar2 = DAT_0073578c;
        if (*(int *)(iVar1 + 0x30) == 0) {
          if (((DAT_0073578c != 0) && (iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0)) &&
             (*(int *)(iVar3 + 0x18) != 0)) {
            FUN_004f0800(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
          }
        }
        else if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
                (*(int *)(iVar2 + 0x18) != 0)) {
          FUN_004f09b0(*(int *)(iVar2 + 0x18));
        }
      }
      iVar2 = FUN_00672970(*(undefined4 *)(iVar1 + 0x2c),"HELP_Generic.fng");
      if (((iVar2 != 0) &&
          (FUN_00575940("Send message[%x] to package [%s]\n",0x911ab364,"HELP_Generic.fng"),
          DAT_0073578c != 0)) &&
         ((*(int *)(DAT_0073578c + 8) != 0 &&
          ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))))) {
        FUN_00575940("Message was queued\n");
        FUN_004f0700(0x911ab364,0,extraout_ECX,0xffffffff,0);
      }
    }
  }
  FUN_0043a220(0);
  FUN_00549980();
  return;
}
