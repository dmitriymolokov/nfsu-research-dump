/* spd-match: far pct=10.99 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436600 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004366c0();
extern int DAT_0073618c;
extern int DAT_00736190;
extern int DAT_0073ad34;
extern int _DAT_006cca38;
void __fastcall FUN_00436600(int obj)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;

  int iVar5;
  int iVar6;
  
  iVar4 = DAT_00736190;
  iVar3 = DAT_0073618c;
  cVar1 = *(char *)(obj + 0x34);
  while( true ) {
    if (cVar1 != '\0') {
      *(undefined1 *)(obj + 0x34) = 0;
      return;
    }
    if (*(int *)(obj + 0x10) == 3) {
      *(int *)(obj + 0x1c) = *(int *)(obj + 0x1c) + 1;
      FUN_004366c0();
      fVar2 = (float)(DAT_0073ad34 - *(int *)(obj + 0x40)) * _DAT_006cca38;
      if (*(float *)(obj + 0x2c) < fVar2) {
        *(float *)(obj + 0x2c) = fVar2;
      }
      if (*(float *)(obj + 0x30) < *(float *)(obj + 0x20)) {
        *(undefined4 *)(obj + 0x30) = *(undefined4 *)(obj + 0x20);
      }
    }
    *(undefined4 *)(obj + 0x20) = 0;
    *(undefined4 *)(obj + 0x24) = 0;
    *(undefined4 *)(obj + 0x40) = 0;
    *(undefined4 *)(obj + 0x10) = 2;
    if (*(int *)(obj + 0xc) != 0) {
      return;
    }
    if (iVar3 == 0) {
      return;
    }
    iVar6 = (iVar3 << 7) % iVar4;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (obj == iVar5 * 0x44 + iVar3) break;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    obj = iVar6 * 0x44 + iVar3;
    cVar1 = *(char *)(obj + 0x34);
  }
  return;
}
