/* spd-match: far pct=18.62 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00466F70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00465770();
int __cdecl FUN_00467220();
int __cdecl FUN_00472600();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_00466f70(int obj, int param_1)

{
  int iVar1;
  int iVar2;

  char cVar3;
  
  iVar2 = param_1;
  FUN_00571ea0(obj,"CollisionBodyWitness");
  FUN_00472600();
  param_1 = CONCAT31(((unsigned int)(param_1) >> 8),*(int *)(obj + 0x264) != 0);
  FUN_00571c20(iVar2,&param_1,1,1,1);
  if ((char)param_1 != '\0') {
    if (*(char *)(iVar2 + 0x3d) != '\0') {
      FUN_00467220(0);
    }
    FUN_00465770();
  }
  iVar1 = *(char *)(iVar2 + 0x40) * 0x10 + 0x4c + iVar2;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar3 = *(char *)(iVar2 + 0x40) + -1;
  *(char *)(iVar2 + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(iVar2 + 0x44)) {
    *(undefined4 *)(iVar2 + 0x44) = 0xffffffff;
  }
  return;
}
