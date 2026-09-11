/* spd-match: far pct=2.13 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059FF40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00734418;
extern void LAB_0059ffa2(void);
extern void LAB_0059ffae(void);
int unaff_EDI;
bool __fastcall FUN_0059ff40(byte * obj, int param_1, int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;

  int iVar5;
  byte *pbVar6;
  int unaff_EDI;
  
  bVar2 = false;
  iVar5 = 0;
  bVar3 = false;
  if (0 < param_2) {
    do {
      bVar2 = bVar3;
      bVar1 = *obj;
      pbVar6 = obj + 1;
      if (bVar1 < 0x80) {
        uVar4 = (ushort)bVar1;
      }
      else if (DAT_00734418 == 0) {
        uVar4 = *(ushort *)(unaff_EDI + 4 + (uint)bVar1 * 2);
        if (uVar4 < 0x80) {
          if (uVar4 == 0) {
            uVar4 = (ushort)bVar1;
            goto LAB_0059ffa2;
          }
          bVar1 = *pbVar6;
          pbVar6 = obj + 2;
          if (0x7f < bVar1) {
            uVar4 = *(ushort *)(unaff_EDI + -0xfc + ((uint)uVar4 * 0x80 + (uint)bVar1) * 2);
            goto LAB_0059ffa2;
          }
        }
        else {
LAB_0059ffa2:
          if (uVar4 != 0) goto LAB_0059ffae;
        }
        bVar2 = true;
        uVar4 = 0x5f;
      }
      else {
        uVar4 = (ushort)bVar1;
      }
LAB_0059ffae:
      *(ushort *)(param_1 + iVar5 * 2) = uVar4;
      iVar5 = iVar5 + 1;
    } while ((uVar4 != 0) && (obj = pbVar6, bVar3 = bVar2, iVar5 < param_2));
  }
  return !bVar2;
}
