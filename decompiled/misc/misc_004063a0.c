/* spd-match: far pct=23.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004063A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00405fa0();
int __cdecl FUN_004060a0();
int __cdecl FUN_0041cda0();
extern int DAT_0071d888;
extern int DAT_0071d88c;
extern int DAT_0071d898;
extern int DAT_0071d89c;
extern unsigned char *DAT_00736504;
void __fastcall FUN_004063a0(int val)

{
  int iVar1;
  char cVar2;

  undefined4 *puVar3;
  int unaff_EDI;
  
  if (-1 < val) {
    *(int *)(unaff_EDI + 0x130) = val;
    *(undefined4 *)(unaff_EDI + 0x254) = 1;
    *(undefined4 *)(unaff_EDI + 0x260) = 1;
    *(undefined1 *)(unaff_EDI + 0x268) = 1;
    *(undefined1 *)(unaff_EDI + 0x264) = 0;
    *(undefined1 *)(unaff_EDI + 0x265) = 0;
    *(undefined1 *)(unaff_EDI + 0x266) = 0;
    *(undefined1 *)(unaff_EDI + 0x267) = 0;
    *(undefined4 *)(unaff_EDI + 600) = 0xffffffff;
    *(undefined4 *)(unaff_EDI + 0x25c) = 0xffffffff;
    *(undefined4 *)(unaff_EDI + 0x244) = 0;
    *(undefined4 *)(unaff_EDI + 0x250) = 4;
    puVar3 = (undefined4 *)FUN_00405fa0();
    cVar2 = FUN_0041cda0(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    if (cVar2 == '\0') {
      FUN_004060a0(unaff_EDI);
    }
    iVar1 = *(int *)(unaff_EDI + 0x130);
    if ((&DAT_0071d89c)[iVar1] != 0) {
      if ((&DAT_0071d888)[iVar1] != '\0') {
        *(undefined4 *)(unaff_EDI + 0x134) = 0x16;
        DAT_00736504 = DAT_00736504 + 1;
        return;
      }
      if ((&DAT_0071d89c)[iVar1] != 0) {
        if ((&DAT_0071d898)[iVar1] != '\0') {
          *(undefined4 *)(unaff_EDI + 0x134) = 0x14;
          DAT_00736504 = DAT_00736504 + 1;
          return;
        }
        if (((&DAT_0071d89c)[iVar1] != 0) && ((&DAT_0071d88c)[iVar1] != '\0')) {
          DAT_00736504 = DAT_00736504 + 1;
          *(undefined4 *)(unaff_EDI + 0x134) = 0x15;
        }
      }
    }
  }
  return;
}
