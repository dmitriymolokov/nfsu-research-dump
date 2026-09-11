/* spd-match: far pct=11.96 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00405C60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00407ca0();
extern unsigned char *DAT_007187c8;
extern int DAT_00719798;
extern int DAT_007198e0;
extern int DAT_00719dc8;
extern unsigned char *DAT_00736504;
extern int _DAT_007187d8;
void __fastcall FUN_00405c60(int * obj, int param_1)

{
  char cVar1;

  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  DAT_007187c8 = obj;
  (**(code **)(*obj + 4))();
  pcVar2 = (char *)(param_1 + 300);
  *(undefined4 *)(unaff_EDI + 0x130) = 0;
  *(undefined4 *)(unaff_EDI + 0x134) = 0x13;
  iVar3 = (unaff_EDI + 0x138) - (int)pcVar2;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(unaff_EDI + 0x23c) = 0;
  *(undefined4 *)(unaff_EDI + 0x11c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(unaff_EDI + 0x120) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(unaff_EDI + 0x124) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(unaff_EDI + 0x128) = *(undefined4 *)(param_1 + 0x10);
  FUN_00407ca0(unaff_EDI);
  _DAT_007187d8 = 4;
  puVar4 = &DAT_00719798;
  do {
    (**(code **)(*DAT_007187c8 + 0x74))(DAT_007187c8,puVar4,0,2);
    puVar4 = puVar4 + 0x52;
  } while ((int)puVar4 < 0x719a28);
  (**(code **)(*DAT_007187c8 + 0x74))(DAT_007187c8,&DAT_00719dc8,0,0);
  (**(code **)(*DAT_007187c8 + 0x78))(DAT_007187c8,&DAT_007198e0,0,0);
  *(undefined4 *)(unaff_EDI + 8) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0xc) = 0xffffffff;
  DAT_00736504 = DAT_00736504 + 1;
  return;
}
