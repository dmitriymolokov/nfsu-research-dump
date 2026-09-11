/* spd-match: far pct=10.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00430B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00421c00();
int __cdecl FUN_0042b040();
int __cdecl FUN_0042c3e0();
int __cdecl FUN_0042c670();
int __cdecl FUN_0042c6d0();
int __cdecl FUN_0042e620();
int __cdecl FUN_0042ed40();
int __cdecl FUN_004a9440();
extern int DAT_00700aa4;
extern int DAT_007306c4;
extern unsigned char *DAT_0073619c;
extern int DAT_007361b4;
extern int DAT_007361b8;
extern unsigned char *DAT_007361c8;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad34;
extern int DAT_0078a368;
extern int _DAT_006cca38;
extern void LAB_00430ce2(void);
extern void LAB_00430cf7(void);
extern void LAB_00430dbc(void);
void __fastcall FUN_00430b90(int obj)

{
  void *_Memory;

  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = DAT_007361f0;
  iVar1 = *DAT_007361f0;
  if ((((iVar1 == 4) || (iVar1 == 0)) || (iVar1 == 2)) || (iVar1 == 3)) {
    if (((&DAT_007306c4)[*(int *)(obj + 8)] == 0xff) ||
       ((uint)(byte)(&DAT_007306c4)[*(int *)(obj + 8)] != *(uint *)(obj + 0xc))) {
      if (DAT_007361c8 == 0) {
        if (((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 3)) {
          FUN_00421c00(DAT_007361f0,4,0);
        }
        FUN_00421c00(DAT_007361f0,5,*(undefined4 *)(obj + 8));
      }
      DAT_007361c8 = DAT_007361c8 + 1;
      piVar2 = DAT_007361f0;
    }
  }
  else {
    *(uint *)(obj + 0xc) = (uint)(byte)(&DAT_007306c4)[*(int *)(obj + 8)];
  }
  if (*piVar2 != 4) goto LAB_00430dbc;
  _Memory = *(void **)(obj + 0x298);
  if ((_Memory != (void *)0x0) &&
     (*(float *)((int)_Memory + 4) <
      (float)(DAT_0073ad34 - *(int *)((int)_Memory + 8)) * _DAT_006cca38)) {
    FUN_0042b040(_Memory);
    _free(_Memory);
    piVar2 = DAT_007361f0;
    *(undefined4 *)(obj + 0x298) = 0;
  }
  if (*piVar2 != 4) goto LAB_00430dbc;
  iVar1 = DAT_007361b4;
  if (DAT_007361b4 == obj) {
    iVar1 = DAT_007361b8;
  }
  if (((((*(int *)(obj + 0x27c) == 0) && (*(int *)(obj + 0x288) == 0)) &&
       (*(int *)(obj + 0x28c) == 0)) &&
      ((*(int *)(obj + 0x290) == 0 && (*(int *)(obj + 0x294) == 0)))) &&
     (*(int *)(*(int *)(obj + 0x2a8) + 0x44) == 0)) {
    if (*DAT_0073619c == 3) {
      if (DAT_0078a368 == 0) {
        FUN_0042c3e0();
        piVar2 = DAT_007361f0;
      }
      else {
LAB_00430ce2:
        if (((iVar1 == 0) || (*(int *)(iVar1 + 0x2a8) == 0)) ||
           (*(int *)(*(int *)(iVar1 + 0x2a8) + 0x44) == 0)) goto LAB_00430cf7;
      }
    }
    else {
      if (DAT_0078a368 != 0) goto LAB_00430ce2;
LAB_00430cf7:
      FUN_0042c670(0);
      piVar2 = DAT_007361f0;
    }
  }
  if ((((*(int *)(obj + 0x290) != 0) && (*(int *)(*(int *)(obj + 0x290) + 0xc) == 0)) &&
      ((iVar1 = piVar2[0xf], iVar1 == 0 ||
       ((*(int *)(iVar1 + 0x20) == 0 || (*(int *)(iVar1 + 0x1c) == 0)))))) &&
     ((piVar2[0x10] == 0 || (*(int *)(piVar2[0x10] + 0x1c) == 0)))) {
    FUN_0042c6d0(obj,(-(DAT_00700aa4 != 0) & 0x10U) + 1,0);
  }
  if (DAT_00700aa4 != 0) {
    if ((*(int *)(obj + 0x27c) != 0) && (*(int *)(*(int *)(obj + 0x27c) + 0xc) == 1)) {
      FUN_0042c6d0(obj,0x11,0);
      (**(code **)(**(int **)(obj + 0x27c) + 0x14))(*(undefined1 *)(obj + 0x4ad));
    }
    if (DAT_00700aa4 != 0) goto LAB_00430dbc;
  }
  if ((*(int *)(obj + 0x27c) != 0) && (*(int *)(*(int *)(obj + 0x27c) + 0xc) == 0x11)) {
    FUN_0042c6d0(obj,1,0);
    (**(code **)(**(int **)(obj + 0x27c) + 0x14))(*(undefined1 *)(obj + 0x4ad));
  }
LAB_00430dbc:
  uVar3 = FUN_0042e620(obj);
  if (((int)uVar3 != *(int *)(obj + 0x4b0)) ||
     ((int)((ulonglong)uVar3 >> 0x20) != *(int *)(obj + 0x4b4))) {
    FUN_0042ed40(uVar3);
  }
  if (*(int *)(obj + 0x95c) != 0) {
    FUN_004a9440(*(int *)(obj + 0x95c),obj,*(undefined4 *)(obj + 4));
  }
  return;
}
