/* spd-match: far pct=5.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F160 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern int DAT_0073ad3c;
extern void LAB_0041f1a9(void);
extern void LAB_0041f1c1(void);
extern void LAB_0041f1c7(void);
extern void LAB_0041f215(void);
int unaff_ESI;
void __fastcall FUN_0041f160(int obj, undefined1 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6)

{

  int iVar1;
  int *unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 1) = param_1;
  *unaff_ESI = obj;
  unaff_ESI[100] = 0;
  unaff_ESI[0x65] = 0;
  unaff_ESI[0x7a] = param_2;
  unaff_ESI[0x7b] = param_6;
  if (*(int *)(obj + 0xc) == 0) {
LAB_0041f1a9:
    if (DAT_0073578c != 0) {
      iVar1 = FUN_004ef050(param_3);
      if (iVar1 != 0) goto LAB_0041f1c1;
    }
LAB_0041f1c7:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_0041f1a9;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_0041f1a9;
LAB_0041f1c1:
    if (*(int *)(iVar1 + 0x18) != 2) goto LAB_0041f1c7;
  }
  unaff_ESI[3] = iVar1;
  *(undefined1 *)((int)unaff_ESI + 5) = 1;
  *(undefined1 *)(unaff_ESI + 0x69) = 0;
  if (*(int *)(*unaff_ESI + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_0041f215;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(param_4);
  }
LAB_0041f215:
  unaff_ESI[0x7d] = 0;
  unaff_ESI[0x68] = iVar1;
  unaff_ESI[0x80] = DAT_0073ad3c;
  *(undefined1 *)((int)unaff_ESI + 0x205) = 0;
  *(undefined1 *)(unaff_ESI + 0x81) = 1;
  return;
}
