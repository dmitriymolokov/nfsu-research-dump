/* spd-match: far pct=4.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6670();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern void LAB_004c1abc(void);
extern void LAB_004c1ae6(void);

void FUN_004c19e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  piVar7 = (int *)(param_1 + 0x234);
  local_8 = 0x10;
  do {
    if (((*piVar7 != 0) && (DAT_007064b2 != '\0')) &&
       (cVar4 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar4 != '\0')) {
      uVar1 = *(uint *)(*piVar7 + 0x10);
      if (uVar1 < 0xd01ed5cd) {
        if (uVar1 < 0xd01ed5c5) {
          if ((uVar1 < 0xd01b8b87) &&
             ((0xd01b8b7e < uVar1 || ((0x4acf8b8a < uVar1 && (uVar1 < 0x4acf8b8e)))))) {
            uVar2 = *(undefined4 *)(param_1 + 0x2b4);
            uVar5 = FUN_004f6670();
            if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
              FUN_004f0700(0x9120409e,*piVar7,uVar2,uVar5,0);
            }
          }
        }
        else {
LAB_004c1ae6:
          iVar3 = piVar7[0x10];
          if (((*(int *)(param_1 + 0xc) == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
             (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
            if (DAT_0073578c == 0) goto LAB_004c1abc;
            iVar6 = FUN_004ef050(iVar3);
          }
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            FUN_004f0700(0xb5971bf1,*piVar7,*(undefined4 *)(param_1 + 0x2b4),iVar6,0);
          }
        }
      }
      else if ((0xd96a7802 < uVar1) && (uVar1 < 0xd96a7806)) goto LAB_004c1ae6;
    }
LAB_004c1abc:
    piVar7 = piVar7 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
