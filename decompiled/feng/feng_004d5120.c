/* spd-match: far pct=8.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004c96c0();
int __cdecl FUN_004d5790();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f0700();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f7660();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern void LAB_004d51c2(void);
extern void LAB_004d53dd(void);

void FUN_004d5120(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_ESI;
  undefined4 uVar6;
  int local_8;
  
  piVar5 = (int *)(unaff_ESI + 0x40);
  local_8 = 0x14;
  do {
    if (((*piVar5 != 0) && (DAT_007064b2 != '\0')) &&
       (cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar2 != '\0')) {
      uVar6 = *(undefined4 *)(*piVar5 + 0x10);
      if (((*(int *)(unaff_ESI + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
         (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar3 = FUN_004ef050(uVar6);
          goto LAB_004d51c2;
        }
      }
      else {
LAB_004d51c2:
        if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
          FUN_004f0700(0xc407210,*piVar5,*(undefined4 *)(unaff_ESI + 0x90),iVar3,0);
        }
      }
      uVar1 = *(uint *)(*piVar5 + 0x10);
      if (uVar1 < 0x830a1feb) {
        if (uVar1 == 0x830a1fea) {
          puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
          for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 3));
              iVar3 = iVar3 + 1) {
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          if (uVar1 < 0x830a1fe7) {
            if (uVar1 == 0x830a1fe6) {
              uVar6 = 0xc519bfbf;
              goto LAB_004d53dd;
            }
            if (uVar1 == 0x218508bb) {
              FUN_004d5790(unaff_ESI,0);
            }
            else if (uVar1 == 0x59bb154e) {
              FUN_004d5790(unaff_ESI,0);
            }
            else if (uVar1 == 0x830a1fe5) {
              uVar6 = 0x5073ef13;
              goto LAB_004d53dd;
            }
            goto switchD_004d5327_caseD_b5e1b079;
          }
          if (uVar1 == 0x830a1fe7) {
            puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
            for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 0));
                iVar3 = iVar3 + 1) {
              puVar4 = (undefined4 *)*puVar4;
            }
          }
          else if (uVar1 == 0x830a1fe8) {
            puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
            for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 1));
                iVar3 = iVar3 + 1) {
              puVar4 = (undefined4 *)*puVar4;
            }
          }
          else {
            if (uVar1 != 0x830a1fe9) goto switchD_004d5327_caseD_b5e1b079;
            puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
            for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 2));
                iVar3 = iVar3 + 1) {
              puVar4 = (undefined4 *)*puVar4;
            }
          }
        }
        if (puVar4 == *(undefined4 **)(unaff_ESI + 0xb0)) {
          uVar6 = 0x9120409e;
          goto LAB_004d53dd;
        }
      }
      else {
        if (uVar1 < 0xdfe06fae) {
          if (uVar1 == 0xdfe06fad) {
            uVar6 = 0x911c0a4b;
          }
          else {
            switch(uVar1) {
            case 0xb5e1b078:
              uVar6 = 0xd9feec59;
              goto LAB_004d53dd;
            default:
              goto switchD_004d5327_caseD_b5e1b079;
            case 0xb5e1b07a:
              puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
              for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 0));
                  iVar3 = iVar3 + 1) {
                puVar4 = (undefined4 *)*puVar4;
              }
              break;
            case 0xb5e1b07b:
              puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
              for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 1));
                  iVar3 = iVar3 + 1) {
                puVar4 = (undefined4 *)*puVar4;
              }
              break;
            case 0xb5e1b07c:
              puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
              for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 2));
                  iVar3 = iVar3 + 1) {
                puVar4 = (undefined4 *)*puVar4;
              }
              break;
            case 0xb5e1b07d:
              puVar4 = *(undefined4 **)(unaff_ESI + 0x98);
              for (iVar3 = 0; (puVar4 != (undefined4 *)(unaff_ESI + 0x98) && (iVar3 != 3));
                  iVar3 = iVar3 + 1) {
                puVar4 = (undefined4 *)*puVar4;
              }
            }
            if (puVar4 != *(undefined4 **)(unaff_ESI + 0xb0)) goto switchD_004d5327_caseD_b5e1b079;
            uVar6 = 0xb5971bf1;
          }
        }
        else {
          if (uVar1 != 0xfbcca3da) goto switchD_004d5327_caseD_b5e1b079;
          uVar6 = 0x72619778;
        }
LAB_004d53dd:
        FUN_004c96c0(uVar6);
      }
    }
switchD_004d5327_caseD_b5e1b079:
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return;
    }
  } while( true );
}
