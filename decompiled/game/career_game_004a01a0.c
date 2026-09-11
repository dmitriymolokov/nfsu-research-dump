/* spd-match: far pct=9.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043eaa0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_00586580();
int __cdecl FUN_0059fb80();
extern int DAT_006ca778;
extern int DAT_006cc568;
extern int DAT_006fbf14;
extern int DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_0073ad34;
extern int DAT_0078a320;
extern int DAT_0078a324;
extern int DAT_0078a328;
extern int DAT_0078a32c;
extern int DAT_0078a345;
extern int _DAT_006cc7ac;
extern int _DAT_006cca38;
extern unsigned char *PTR_LAB_006c7520;
int unaff_ESI;

void FUN_004a01a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  undefined1 local_20 [32];
  
  if ((*(uint *)(unaff_ESI + 0x18) & *(uint *)(unaff_ESI + 0x10)) != 0 ||
      (*(uint *)(unaff_ESI + 0x1c) & *(uint *)(unaff_ESI + 0x14)) != 0) {
    iVar4 = *(int *)(param_1 + 4);
    if (((DAT_006fbf14 == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
       (iVar2 = FUN_0041ffe0(), iVar2 != 0)) {
      iVar4 = iVar2;
    }
    if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
      cVar1 = FUN_0043a2e0();
      if (cVar1 == '\0') {
        iVar2 = 4;
      }
      else {
        iVar2 = ((int)DAT_0078a32c) + ((int)DAT_0078a328) + ((int)DAT_0078a324) + (int)DAT_0078a320;
      }
      FUN_004f68a0(&PTR_LAB_006c7520,iVar2);
      uVar3 = FUN_0043eaa0((int)*(short *)(iVar4 + 10));
      iVar4 = FUN_0059fb80();
      if (iVar4 == 0) {
        iVar4 = FUN_0059fb80();
      }
      FUN_004f68a0(&DAT_006cc568,iVar4);
      FUN_004f68a0(&DAT_006ca778,uVar3);
      return;
    }
    if (*(int *)(iVar4 + 0x1c) != 0) {
      iVar2 = *(int *)(((int)DAT_0073619c) + 0x24);
      iVar6 = iVar2;
      if (0 < iVar2) {
        piVar5 = (int *)(((int)DAT_0073619c) + 0x520);
        do {
          if ((*piVar5 != 0) && (*(short *)(*piVar5 + 0x10) == 3)) {
            iVar6 = iVar6 + -1;
          }
          piVar5 = piVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (int)*(char *)(*(int *)(iVar4 + 0x1c) + 10);
      FUN_004f68a0(&DAT_006ca778,iVar2);
      iVar4 = FUN_0059fb80();
      if (iVar4 == 0) {
        iVar4 = FUN_0059fb80();
      }
      FUN_004f68a0(&DAT_006cc568,iVar4);
      FUN_004f68a0(&PTR_LAB_006c7520,iVar6);
      if (iVar2 != *(int *)(unaff_ESI + 0x24)) {
        *(int *)(unaff_ESI + 0x24) = iVar2;
      }
      if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0xd) != '\0') {
        *(int *)(unaff_ESI + 0x40) = DAT_0073ad34;
      }
      if (_DAT_006cc7ac <= (float)(DAT_0073ad34 - *(int *)(unaff_ESI + 0x40)) * _DAT_006cca38) {
        *(undefined4 *)(unaff_ESI + 0x44) = *(undefined4 *)(((int)DAT_0073619c) + 0x14);
      }
      FUN_00586580(local_20);
      FUN_004f68a0(&DAT_006cc568,local_20);
    }
  }
  return;
}
