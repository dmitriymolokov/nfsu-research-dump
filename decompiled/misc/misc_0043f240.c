/* spd-match: far pct=9.11 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0043F240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00436230();
int __cdecl FUN_00436ba0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043eaa0();
int __cdecl FUN_0043f210();
int __cdecl FUN_0043f430();
int __cdecl FUN_0043f550();
int __cdecl FUN_0043f630();
int __cdecl FUN_0043f8b0();
int __cdecl FUN_0043f9b0();
int __cdecl FUN_0043fa90();
int __cdecl FUN_0043fb50();
extern int DAT_006cc7a4;
extern int DAT_007361a4;
extern int DAT_0078a310;
extern int DAT_0078a31c;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int DAT_0078a345;
extern int _DAT_006cca38;
extern void LAB_0043f355(void);
extern void LAB_0043f380(void);
extern void LAB_0043f38c(void);
extern void LAB_0043f39d(void);
void __fastcall FUN_0043f240(int * obj)

{
  int *piVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  
  FUN_0043f430();
  if (*(int *)(*obj + 0x58) == 0) {
    FUN_0043f550();
    FUN_0043f8b0(obj);
    FUN_0043f9b0();
    FUN_0043f630();
    FUN_0043fa90();
    FUN_0043fb50(obj);
    return;
  }
  piVar1 = *(int **)(*(int *)(*obj + 4) + 0x1c);
  if (((*(char *)((int)obj + 10) != '\0') && (*(char *)((int)piVar1 + 9) == DAT_0078a31c)) &&
     (*(undefined1 *)((int)obj + 10) = 0, *(char *)(*(int *)(obj[1] + 0x4c) + 0x14) != '\0'))
  {
    FUN_00436230(0x3f800000);
  }
  if (*(char *)((int)obj + 0xd) != '\0') {
    return;
  }
  *(undefined1 *)((int)obj + 0xd) = 1;
  cVar2 = FUN_0043a2e0();
  if (cVar2 != '\0') goto LAB_0043f39d;
  if (((int)DAT_0078a328) + ((int)DAT_0078a32c) + ((int)DAT_0078a324) + (int)DAT_0078a320 < 2) {
    if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
LAB_0043f355:
      cVar2 = FUN_0043a2e0();
      if (cVar2 != '\0') goto LAB_0043f380;
      iVar3 = FUN_0043eaa0((int)*(short *)(*piVar1 + 10));
      if (iVar3 != 1) goto LAB_0043f39d;
      iVar3 = *(int *)(obj[1] + 0x34);
      goto LAB_0043f38c;
    }
    cVar2 = FUN_0043f210();
    if (((cVar2 == '\0') || (DAT_0078a310 <= piVar1[0x44])) ||
       (*(char *)(*(int *)(obj[1] + 0x6c) + 0x14) == '\0')) goto LAB_0043f39d;
    fVar6 = (float)(DAT_0078a310 - piVar1[0x44]) * _DAT_006cca38;
  }
  else {
    if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) goto LAB_0043f355;
LAB_0043f380:
    if ((char)piVar1[3] != '\x01') goto LAB_0043f39d;
    iVar3 = *(int *)(obj[1] + 0x34);
LAB_0043f38c:
    if (*(char *)(iVar3 + 0x14) == '\0') goto LAB_0043f39d;
    fVar6 = 1.0;
  }
  FUN_00436230(fVar6);
LAB_0043f39d:
  fVar5 = (float10)FUN_00436ba0();
  if ((float10)DAT_006cc7a4 < fVar5) {
    if ((short)piVar1[4] == 7) {
      iVar3 = obj[1];
      iVar4 = *(int *)(iVar3 + 0x74);
    }
    else {
      if ((short)piVar1[4] != 6) {
        return;
      }
      iVar3 = obj[1];
      iVar4 = *(int *)(iVar3 + 0x78);
    }
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_00436230(*(undefined4 *)(iVar3 + 0x7c));
    }
  }
  return;
}
