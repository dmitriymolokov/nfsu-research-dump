/* spd-match: far pct=14.93 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_06 */
#include "ghidra_compat.h"

typedef struct m375_p2_cpinfo {
  BYTE MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_p2_cpinfo;
typedef struct m375_p2_mbcinfo { int refcount; } m375_p2_mbcinfo;
typedef struct m375_p2_ptiddata {
  m375_p2_mbcinfo *_tpxcptinfoptrs;
} m375_p2_ptiddata;

extern int DAT_006eb720;
extern int DAT_00792fc0;
extern unsigned char *DAT_00792fe0;
extern int DAT_007930e4;
extern int DAT_00793100;
extern void LAB_0067986c(void);
extern void LAB_006798af(void);
int unaff_retaddr;

void FUN_00679757(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  undefined4 *puVar9;
  uint unaff_retaddr;
  _locale_t _BError;
  ushort local_51c [256];
  undefined1 local_31c [256];
  undefined1 local_21c [256];
  undefined4 local_11c [64];
  m375_p2_cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  BVar2 = GetCPInfo((UINT)DAT_007930e4,&local_1c);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      *(char *)((int)local_11c + uVar3) = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    ((unsigned char *)local_11c)[0] = 0x20;
    if (local_1c.LeadByte[0] != 0) {
      pBVar8 = local_1c.LeadByte + 1;
      do {
        uVar3 = (uint)local_1c.LeadByte[0];
        if (uVar3 <= *pBVar8) {
          uVar6 = (*pBVar8 - uVar3) + 1;
          puVar9 = (undefined4 *)((int)local_11c + uVar3);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_1c.LeadByte[0] = pBVar8[1];
        pBVar8 = pBVar8 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    BVar2 = 1;
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_11c,(LPCSTR)0x100,(int)local_51c,DAT_007930e4,
               (int)DAT_00792fc0,0);
    _BError = DAT_00792fc0;
    ___crtLCMapStringA(DAT_00792fc0,(LPCWSTR)0x100,(DWORD)local_11c,(LPCSTR)0x100,(int)local_21c,
                       (LPSTR)0x100,(int)DAT_007930e4,0,BVar2);
    ___crtLCMapStringA(DAT_00792fc0,(LPCWSTR)0x200,(DWORD)local_11c,(LPCSTR)0x100,(int)local_31c,
                       (LPSTR)0x100,(int)DAT_007930e4,0,(BOOL)_BError);
    uVar3 = 0;
    do {
      if ((local_51c[uVar3] & 1) == 0) {
        if ((local_51c[uVar3] & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_00792fe0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar4 = local_31c[uVar3];
          goto LAB_0067986c;
        }
        (&DAT_00793100)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00792fe0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar4 = local_21c[uVar3];
LAB_0067986c:
        (&DAT_00793100)[uVar3] = uVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_00792fe0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar5 = (char)uVar3 + -0x20;
          goto LAB_006798af;
        }
        (&DAT_00793100)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00792fe0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar5 = (char)uVar3 + ' ';
LAB_006798af:
        (&DAT_00793100)[uVar3] = cVar5;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}
