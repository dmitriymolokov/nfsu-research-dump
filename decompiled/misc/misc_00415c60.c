/* spd-match: far pct=10.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f0700();
int __cdecl FUN_004f6540();
int __cdecl FUN_004f6670();
int __cdecl FUN_004f7660();
extern int DAT_00701040;
extern int DAT_00701044;
extern int DAT_00701048;
extern int DAT_0070104c;
extern int DAT_00701058;
extern int DAT_0070105c;
extern int DAT_00701060;
extern int DAT_00701064;
extern int DAT_00701068;
extern int DAT_0070106c;
extern int DAT_00701070;
extern int DAT_00701074;
extern int DAT_0070107c;
extern int DAT_00701080;
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;
extern int DAT_007064b2;
extern unsigned char *DAT_0073578c;
extern void LAB_00415f2a(void);
extern void LAB_00415f4a(void);
extern void LAB_00415f63(void);
extern void LAB_00415f78(void);
int unaff_EBX;

void FUN_00415c60(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  do {
    if (((*(int *)(unaff_EBX + 0x130 + iVar5 * 4) != 0) && (DAT_007064b2 != '\0')) &&
       (cVar2 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0)),
       cVar2 != '\0')) {
      uVar1 = *(uint *)(*(int *)(unaff_EBX + 0x130 + iVar5 * 4) + 0x10);
      if (uVar1 < 0x9f6badfe) {
        if (uVar1 == 0x9f6badfd) {
          if (DAT_00701058 != 0) {
            uVar4 = *(undefined4 *)(unaff_EBX + 0x2b0);
            uVar6 = FUN_004f6670();
            if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
              FUN_004f0700(0xb5971bf1,*(undefined4 *)(unaff_EBX + 0x130 + iVar5 * 4),uVar4,uVar6,0);
            }
          }
        }
        else {
          if (0x4eac79b9 < uVar1) {
            if (uVar1 < 0x7dba07dc) {
              iVar3 = DAT_0070106c;
              if ((uVar1 == 0x7dba07db) ||
                 ((iVar3 = DAT_00701060, uVar1 == 0x71fd7547 ||
                  (iVar3 = DAT_00701070, uVar1 == 0x73eda200)))) goto LAB_00415f2a;
              iVar3 = DAT_0070104c;
              if (uVar1 != 0x73fc2fe5) goto LAB_00415f78;
            }
            else {
              iVar3 = DAT_00701044;
              if (uVar1 != 0x8b088614) {
                iVar3 = DAT_00701074;
                if ((uVar1 != 0x8d8ae227) && (iVar3 = DAT_00701048, uVar1 != 0x8fe84e38))
                goto LAB_00415f78;
                goto LAB_00415f2a;
              }
            }
            goto LAB_00415f4a;
          }
          iVar3 = DAT_0070107c;
          if (uVar1 == 0x4eac79b9) goto LAB_00415f4a;
          if (uVar1 < 0x25cd4d64) {
            iVar3 = DAT_0070105c;
            if ((((uVar1 == 0x25cd4d63) || (iVar3 = DAT_00701074, uVar1 == 0x3ffe4e1)) ||
                (iVar3 = DAT_00701058, uVar1 == 0x15e0b0b7)) ||
               (iVar3 = DAT_00701064, uVar1 == 0x1a471f70)) goto LAB_00415f4a;
          }
          else {
            iVar3 = DAT_00701080;
            if ((uVar1 == 0x2df9a3cd) || (iVar3 = DAT_00701068, uVar1 == 0x3820a0d1))
            goto LAB_00415f2a;
            iVar3 = DAT_00701040;
            if (uVar1 == 0x4b853ca2) goto LAB_00415f4a;
          }
        }
      }
      else if (uVar1 < 0xbb833bd2) {
        iVar3 = DAT_0070107c;
        if (uVar1 != 0xbb833bd1) {
          if (uVar1 < 0xae95a38c) {
            iVar3 = DAT_00701068;
            if (uVar1 == 0xae95a38b) goto LAB_00415f4a;
            iVar3 = DAT_00701064;
            if (uVar1 != 0xa3d21cb6) {
              iVar3 = DAT_00701080;
              if (uVar1 == 0xa46ea687) goto LAB_00415f4a;
              iVar3 = DAT_00701044;
              if (uVar1 != 0xa611a8cc) goto LAB_00415f78;
            }
          }
          else {
            iVar3 = DAT_0070105c;
            if (uVar1 != 0xaf584aa9) {
              iVar3 = DAT_00701048;
              if (uVar1 == 0xafb3d900) goto LAB_00415f4a;
              iVar3 = DAT_00701040;
              if (uVar1 != 0xbb6ac59a) goto LAB_00415f78;
            }
          }
        }
LAB_00415f2a:
        if (iVar3 != 0) {
          uVar4 = FUN_004f6670();
          uVar6 = 0xb5971bf1;
          goto LAB_00415f63;
        }
      }
      else {
        if (uVar1 < 0xf08e374f) {
          iVar3 = DAT_0070105c;
          if (uVar1 == 0xf08e374e) goto LAB_00415f2a;
          if (((uVar1 != 0xe1fdd3f7) && (iVar3 = DAT_00701060, uVar1 != 0xe8727801)) &&
             (iVar3 = DAT_00701070, uVar1 != 0xea62a4ba)) goto LAB_00415f78;
        }
        else {
          iVar3 = DAT_0070106c;
          if (uVar1 != 0xf42f0a95) {
            iVar3 = DAT_0070104c;
            if (uVar1 != 0xfd872d2b) goto LAB_00415f78;
            goto LAB_00415f2a;
          }
        }
LAB_00415f4a:
        if (iVar3 != 0) {
          uVar4 = FUN_004f6670();
          uVar6 = 0x9120409e;
LAB_00415f63:
          FUN_004f6540(uVar6,uVar4);
        }
      }
    }
LAB_00415f78:
    iVar5 = iVar5 + 1;
    if (0x1f < iVar5) {
      return;
    }
  } while( true );
}
