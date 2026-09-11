/* spd-match: far pct=18.70 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045C550 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0042ab50();
int __cdecl FUN_00432c90();
int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int DAT_007361a8;
extern int DAT_0078a344;
extern int _DAT_006b74d8;
extern int _DAT_006b74dc;
extern int _DAT_006b74e0;
extern int _DAT_006b74e8;
extern int _DAT_006b74ec;
extern int _DAT_006b74f0;
extern int _DAT_006cc954;
extern int _DAT_006cc9f0;
extern int _DAT_006ccc24;
extern unsigned char *PTR_DAT_007061dc;
extern void LAB_0045c558(void);
extern void LAB_0045c59f(void);
float10 __fastcall FUN_0045c550(int val, int *param_1)

{
  int iVar1;
  char cVar2;

  float10 fVar3;
  
  iVar1 = *param_1;
  if (val == 2) goto LAB_0045c558;
  if ((val == 4) || (val == 3)) {
    return (float10)_DAT_006b74e8;
  }
  if (val == 1) {
    return (float10)_DAT_006b74ec;
  }
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    cVar2 = FUN_0042ab50();
    if (cVar2 != '\0') goto LAB_0045c59f;
  }
  else {
LAB_0045c59f:
    if ((*(int *)(iVar1 + 0x24) == 3) || (*(int *)(iVar1 + 0x24) == 2)) {
      fVar3 = (float10)FUN_00583f20(&PTR_DAT_007061dc,*(float *)(iVar1 + 0x3d4) * _DAT_006cc9f0);
      return fVar3;
    }
  }
  if (*(int *)(iVar1 + 0x24) == 4) {
    return (float10)_DAT_006b74f0;
  }
  fVar3 = (float10)FUN_00432c90();
  if (((float10)_DAT_006cc954 <= fVar3) &&
     (*(float *)(iVar1 + 0x3d4) < _DAT_006ccc24 == (*(float *)(iVar1 + 0x3d4) == _DAT_006ccc24))) {
    if (*(float *)(iVar1 + 0x3d4) <= _DAT_006b74d8 * _DAT_006ccc24) {
      return (float10)_DAT_006b74e0;
    }
    return (float10)_DAT_006b74dc;
  }
LAB_0045c558:
  return (float10)DAT_006cc7a4;
}
