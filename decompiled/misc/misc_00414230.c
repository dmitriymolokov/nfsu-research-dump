/* spd-match: far pct=8.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00414230 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f5ed0();
int __cdecl FUN_004f6510();
extern int DAT_0073578c;
extern void LAB_004142c3(void);
extern void LAB_004142ec(void);
int unaff_ESI;
void __fastcall FUN_00414230(int obj, int param_1)

{
  byte bVar1;

  int iVar2;
  int unaff_ESI;
  
  if (param_1 == -0x6edfbf62) {
    iVar2 = *(int *)(obj + 0x10);
    if (iVar2 == -0x355332c5) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar2 = FUN_004ef050(0xcaaccd3d);
      if (iVar2 == 0) {
        return;
      }
      bVar1 = ~(byte)((uint)*(undefined4 *)(iVar2 + 0x1c) >> 0x1a) & 1;
LAB_004142ec:
      if (bVar1 == 0) {
        return;
      }
      if (DAT_0073578c == 0) {
        return;
      }
      FUN_004f5ed0(DAT_0073578c);
      return;
    }
    if (iVar2 == -0x355332c4) {
LAB_004142c3:
      if (DAT_0073578c == 0) {
        return;
      }
      FUN_004f5ed0(DAT_0073578c);
      return;
    }
    if (iVar2 != -0x355332c3) {
      return;
    }
    bVar1 = FUN_004f6510(*(undefined4 *)(unaff_ESI + 0xc));
  }
  else {
    if (param_1 != -0x4a68e40f) {
      return;
    }
    iVar2 = *(int *)(obj + 0x10);
    if (iVar2 != -0x355332c5) {
      if (iVar2 != -0x355332c4) {
        if (iVar2 != -0x355332c3) {
          return;
        }
        goto LAB_004142c3;
      }
      bVar1 = FUN_004f6510(*(undefined4 *)(unaff_ESI + 0xc));
      goto LAB_004142ec;
    }
    if (DAT_0073578c == 0) {
      return;
    }
    iVar2 = FUN_004ef050(0xcaaccd3c);
    if (iVar2 == 0) {
      return;
    }
    bVar1 = ~(byte)((uint)*(undefined4 *)(iVar2 + 0x1c) >> 0x1a) & 1;
  }
  if ((bVar1 != 0) && (DAT_0073578c != 0)) {
    FUN_004f5ed0(DAT_0073578c);
  }
  return;
}
