/* spd-match: far pct=5.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004361b0();
int __cdecl FUN_00436460();
int __cdecl FUN_004364d0();
int __cdecl FUN_00436600();
extern int DAT_006cc7a4;
extern int DAT_0073618c;
extern int DAT_00736190;
extern int DAT_0073ad34;
extern int _DAT_006cca38;
void __fastcall FUN_00436070(int obj, float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;

  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar3 = DAT_00736190;
  iVar2 = DAT_0073618c;
  while( true ) {
    fVar1 = (float)(DAT_0073ad34 - *(int *)(obj + 0x3c)) * _DAT_006cca38;
    if (*(float *)(*(int *)(obj + 8) + 0xc) < fVar1) {
      if (*(int *)(obj + 0x10) == 0) {
        FUN_004364d0(0);
      }
      else if (*(int *)(obj + 0x10) == 1) {
        FUN_00436460(0);
        FUN_00436600();
      }
    }
    if (((*(int *)(obj + 0x10) == 0) || (*(int *)(obj + 0x10) == 1)) &&
       (fVar1 < param_1 + param_1)) {
      fVar6 = (float10)FUN_004361b0(param_1);
      *(float *)(obj + 0x20) = (float)fVar6;
    }
    if (((*(int *)(obj + 0x10) == 1) &&
        (iVar4 = *(int *)(obj + 8),
        *(float *)(iVar4 + 8) < (float)(DAT_0073ad34 - *(int *)(obj + 0x40)) * _DAT_006cca38)) &&
       (((*(float *)(iVar4 + 0x18) < DAT_006cc7a4 &&
         (*(float *)(obj + 0x24) < *(float *)(iVar4 + 0x10))) ||
        ((DAT_006cc7a4 < *(float *)(iVar4 + 0x18) &&
         (*(float *)(iVar4 + 0x10) < *(float *)(obj + 0x24))))))) {
      *(int *)(obj + 0x1c) = *(int *)(obj + 0x1c) + 1;
      *(undefined4 *)(obj + 0x10) = 0;
    }
    if ((*(int *)(obj + 0xc) != 0) || (iVar2 == 0)) break;
    iVar5 = (iVar2 << 7) % iVar3;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (obj == iVar4 * 0x44 + iVar2) {
      return;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    obj = iVar5 * 0x44 + iVar2;
  }
  return;
}
