/* spd-match: far pct=11.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00406580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004067d0();
int __cdecl FUN_00406b10();
int __cdecl FUN_004070a0();
extern int DAT_00719780;
extern int DAT_00719784;
extern int DAT_00719788;
extern int DAT_0071d888;
extern int DAT_0071d89c;
extern int DAT_00736514;
extern int DAT_00736515;
void __fastcall FUN_00406580(int obj)

{
  byte bVar1;

  int iVar2;
  int iVar3;
  
  if (*(int *)(obj + 0x23c) == 0) {
    FUN_004070a0();
  }
  else if (*(int *)(obj + 0x134) == 0x13) {
    FUN_00406b10(obj);
  }
  else {
    FUN_004067d0();
  }
  DAT_00719780 = DAT_00719780 & *(uint *)(obj + 8);
  DAT_00719784 = DAT_00719784 & *(uint *)(obj + 0xc);
  if (*(int *)(obj + 0x134) != 0x13) {
    if ((byte)DAT_00719788 < *(byte *)(obj + 0x10)) {
      (*(unsigned char *)&(DAT_00719788)) = *(byte *)(obj + 0x10);
    }
    if ((*((unsigned char *)&(DAT_00719788) + 1)) < *(byte *)(obj + 0x11)) {
      (*((unsigned char *)&(DAT_00719788) + 1)) = *(byte *)(obj + 0x11);
    }
    bVar1 = *(byte *)(obj + 0x12);
    iVar2 = bVar1 - 0x80;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = (*((unsigned char *)&(DAT_00719788) + 2)) - 0x80;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((((iVar3 < iVar2) && ((*((unsigned char *)&(DAT_00719788) + 2)) = bVar1, DAT_00736515 == '\0')) &&
        ((&DAT_0071d89c)[*(int *)(obj + 0x130)] != 0)) &&
       ((&DAT_0071d888)[*(int *)(obj + 0x130)] != '\0')) {
      DAT_00736514 = 1;
    }
    iVar2 = *(byte *)(obj + 0x13) - 0x80;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = (*((unsigned char *)&(DAT_00719788) + 3)) - 0x80;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < iVar2) {
      (*((unsigned char *)&(DAT_00719788) + 3)) = *(byte *)(obj + 0x13);
    }
  }
  return;
}
