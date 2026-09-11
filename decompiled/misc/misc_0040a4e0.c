/* spd-match: far pct=31.21 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00401e50();
int __cdecl FUN_00408b20();
int __cdecl FUN_0040a890();
int __cdecl FUN_0040aa20();
int __cdecl FUN_0040b340();
int __cdecl FUN_0040b4e0();
int __cdecl FUN_0040cb80();
int __cdecl FUN_0040cce0();
int __cdecl FUN_0040ebc0();
extern unsigned char *DAT_00718738;
extern unsigned char *DAT_007187b0;
extern int DAT_0071a96c;
extern int DAT_0071abd0;
extern unsigned char *DAT_0073636c;

void FUN_0040a4e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0071abd0;
  do {
    (**(code **)(*(int *)*puVar1 + 0x110))((int *)*puVar1);
    puVar1 = puVar1 + 0x38;
  } while ((int)puVar1 < 0x71b1f0);
  FUN_0040b4e0();
  FUN_0040cce0();
  iVar2 = 0;
  do {
    (**(code **)(**(int **)((int)&DAT_00718738 + iVar2) + 8))(*(int **)((int)&DAT_00718738 + iVar2))
    ;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  (**(code **)(*DAT_007187b0 + 8))(DAT_007187b0);
  iVar2 = (**(code **)(*DAT_0073636c + 0x40))(DAT_0073636c,&DAT_0071a96c);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*DAT_0073636c + 0x40))(DAT_0073636c,&DAT_0071a96c);
  }
  FUN_0040a890();
  FUN_0040b340();
  FUN_0040aa20();
  FUN_0040cb80();
  FUN_00401e50(&DAT_00718738);
  FUN_00408b20();
  FUN_0040ebc0();
  return;
}
