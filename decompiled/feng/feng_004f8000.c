/* spd-match: far pct=9.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
extern int DAT_00706fd8;
extern int DAT_00735780;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_004f806f(void);
extern void LAB_004f8080(void);
extern void LAB_004f8098(void);

undefined4 FUN_004f8000(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_00735780 = 0;
  iVar4 = 0;
  do {
    uVar1 = (&DAT_00706fd8)[iVar4];
    if (param_1[3] == 0) goto LAB_004f8080;
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) goto LAB_004f806f;
    if (DAT_0073578c != 0) {
      iVar2 = *(int *)(DAT_0073578c + 8);
      if (iVar2 == 0) {
LAB_004f8080:
        if (DAT_0073578c != 0) {
          iVar3 = FUN_004ef050(uVar1);
          if (iVar3 != 0) goto LAB_004f8098;
        }
      }
      else {
        iVar3 = FUN_004fd1e0(iVar2 + 0xdc);
        if (iVar3 == 0) {
          iVar3 = FUN_004fd1e0(iVar2 + 0xec);
          if (iVar3 == 0) goto LAB_004f8080;
        }
LAB_004f806f:
        if (iVar3 == 0) goto LAB_004f8080;
        iVar3 = FUN_004ffb70();
        if (iVar3 == 0) goto LAB_004f8080;
LAB_004f8098:
        DAT_00735780 = DAT_00735780 | 1 << ((byte)iVar4 & 0x1f);
      }
    }
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
      DAT_00735780 = (**(code **)(*param_1 + 4))(DAT_00735780);
      return 1;
    }
  } while( true );
}
