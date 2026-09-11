/* spd-match: far pct=21.88 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E1A50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004e19a0();
int __cdecl FUN_004e1b90();
int __cdecl FUN_004f8340();
extern int DAT_0073ad3c;
extern int DAT_00746964;
extern int DAT_00746968;
extern unsigned char *DAT_00758c28;
extern int DAT_00777b4c;
extern void LAB_004e1a85(void);
void __fastcall FUN_004e1a50(int obj, int param_1)

{
  int iVar1;

  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(char *)(obj + 0x18) != '\0') {
    return;
  }
  puVar2 = *(undefined4 **)(obj + 0xc);
  if (param_1 == -0x6edfbf62) {
    if (puVar2 == *(undefined4 **)(obj + 4)) goto LAB_004e1a85;
    uVar3 = puVar2[1];
  }
  else {
    if ((param_1 != -0x4a68e40f) || (puVar2 == *(undefined4 **)(obj + 8))) goto LAB_004e1a85;
    uVar3 = *puVar2;
  }
  *(undefined4 *)(obj + 0xc) = uVar3;
LAB_004e1a85:
  if (puVar2 != *(undefined4 **)(obj + 0xc)) {
    FUN_004f8340(*(undefined4 *)(obj + 0x20));
    iVar1 = *(int *)(obj + 0x14);
    if ((iVar1 < 0) || (1 < iVar1)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = &DAT_00758c28 + iVar1 * 0x3e51;
    }
    uVar3 = *(undefined4 *)(*(int *)(obj + 0xc) + 0x738);
    if (DAT_00777b4c == 8) {
      puVar2[1] = uVar3;
    }
    else {
      *puVar2 = uVar3;
    }
    FUN_004e19a0();
    FUN_004e1b90();
    if (*(int *)(obj + 0x14) == 0) {
      DAT_00746968 = DAT_0073ad3c;
      return;
    }
    if (*(int *)(obj + 0x14) == 1) {
      DAT_00746964 = DAT_0073ad3c;
    }
  }
  return;
}
