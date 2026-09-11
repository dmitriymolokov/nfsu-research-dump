/* spd-match: far pct=25.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00506F30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
int __cdecl FUN_00506160();
int __cdecl FUN_00506eb0();
extern int DAT_006f1dd8;
extern unsigned char *DAT_007356a8;
extern int DAT_00735714;
extern int DAT_00735720;
extern int DAT_00735724;
extern int DAT_0073578c;
extern int DAT_00746104;
void __fastcall FUN_00506f30(int obj)

{
  undefined4 uVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(obj + 0x40);
  cVar2 = FUN_00506160();
  if (((cVar2 == '\0') || (*(int *)(iVar3 + 8) < 0)) || (2 < *(int *)(iVar3 + 8))) {
    if (*(int *)(iVar3 + 0x10) != 0) {
      uVar1 = *(undefined4 *)(iVar3 + 8);
      iVar3 = FUN_00506eb0(obj);
      if (iVar3 < 1) {
        if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
        }
      }
      else {
        DAT_00735720 = *(undefined4 *)(obj + 0x88);
        DAT_00735714 = uVar1;
        DAT_00735724 = uVar1;
        FUN_00504320(*(undefined4 *)(obj + 0xc));
        iVar3 = DAT_0073578c;
        if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
           (*(int *)(iVar4 + 0x18) != 0)) {
          FUN_004f0800(*(undefined4 *)(iVar3 + 8),*(int *)(iVar4 + 0x18));
          return;
        }
      }
    }
  }
  else if ((DAT_006f1dd8 != 0) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0)) {
    (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(7);
    return;
  }
  return;
}
