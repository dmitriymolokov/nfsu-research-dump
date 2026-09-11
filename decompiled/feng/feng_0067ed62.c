/* spd-match: far pct=9.53 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141750Z_w0_tc0 */
#include "ghidra_compat.h"

typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct m375_pthreadmbcinfo_s {
  int mbulinfo;
  int mbcodepage;
  int ismbcodepage;
  unsigned char mbctype[257];
} *m375_pthreadmbcinfo;
typedef struct m375_ptiddata_s {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *_token;
  m375_pthreadmbcinfo _tpxcptinfoptrs;
  void *_pxcptacttab;
  unsigned int _holdrand;
  int _tfpecode;
  int _terrno;
  int _tdoserrno;
  int _NLG_dwCode;
  int _maxcharsize;
  char _con_ch_buf[32];
  unsigned int _thandle;
  unsigned char _pad[64];
} *m375_ptiddata;
float10 __cdecl __set_exp(unsigned __int64, short, int, int);
void _FindAndUnlinkFrame(FrameInfo *);

int __cdecl FUN_00681f42();
extern int DAT_006b08a2;
extern int DAT_006eb720;
extern int DAT_006ec180;
extern int DAT_00717e90;
extern int DAT_00717ea0;
extern int DAT_00717eb8;
extern int DAT_00792fa4;
extern int DAT_00792fa8;
extern unsigned char *PTR_DAT_006ec130;
extern void LAB_0067eed8(void);
int unaff_retaddr;

undefined4 FUN_0067ed62(void)

{
  BYTE *pBVar1;
  undefined2 *_CchSrc;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *_Memory;
  BOOL BVar5;
  BYTE *pBVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  uint unaff_retaddr;
  m375_cpinfo local_28;
  undefined4 *local_14;
  undefined2 *local_10;
  void *local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  uVar9 = 0;
  local_c = (void *)0x0;
  if (DAT_00717e90 == 0) {
    PTR_DAT_006ec130 = &DAT_006b08a2;
    DAT_00792fa4 = (undefined2 *)0x0;
    DAT_00792fa8 = (undefined4 *)0x0;
    return 0;
  }
  if ((DAT_00717ea0 != 0) ||
     (iVar3 = FUN_00681f42(0,DAT_00717eb8,0x1004,&DAT_00717ea0), _Memory = local_10, iVar3 == 0)) {
    puVar4 = _malloc(4);
    local_14 = puVar4;
    _Memory = _malloc(0x202);
    local_10 = _Memory;
    local_c = _malloc(0x101);
    if ((puVar4 != (undefined4 *)0x0) &&
       ((_Memory != (undefined2 *)0x0 && (local_c != (void *)0x0)))) {
      *puVar4 = 0;
      iVar3 = 0;
      do {
        *(char *)(iVar3 + (int)local_c) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar5 = GetCPInfo(DAT_00717ea0,&local_28);
      if ((BVar5 != 0) && (local_28.MaxCharSize < 6)) {
        DAT_006ec180 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_006ec180) && (local_28.LeadByte[0] != '\0')) {
          pBVar6 = local_28.LeadByte + 1;
          do {
            bVar2 = *pBVar6;
            if (bVar2 == 0) break;
            for (uVar7 = (uint)pBVar6[-1]; (int)uVar7 <= (int)(uint)bVar2; uVar7 = uVar7 + 1) {
              *(undefined1 *)(uVar7 + (int)local_c) = 0;
              bVar2 = *pBVar6;
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        _CchSrc = _Memory + 1;
        BVar5 = ___crtGetStringTypeA
                          ((_locale_t)0x1,(DWORD)local_c,(LPCSTR)0x100,(int)_CchSrc,(LPWORD)0x0,0,0)
        ;
        if (BVar5 != 0) {
          *_Memory = 0;
          if ((1 < (int)DAT_006ec180) && (local_28.LeadByte[0] != '\0')) {
            pBVar6 = local_28.LeadByte + 1;
            do {
              if (*pBVar6 == 0) break;
              uVar7 = (uint)pBVar6[-1];
              if (uVar7 <= *pBVar6) {
                puVar8 = _Memory + uVar7 + 1;
                do {
                  *puVar8 = 0x8000;
                  uVar7 = uVar7 + 1;
                  puVar8 = puVar8 + 1;
                  _Memory = local_10;
                } while ((int)uVar7 <= (int)(uint)*pBVar6);
              }
              pBVar1 = pBVar6 + 1;
              pBVar6 = pBVar6 + 2;
            } while (*pBVar1 != 0);
          }
          DAT_00792fa8 = local_14;
          PTR_DAT_006ec130 = (undefined *)_CchSrc;
          DAT_00792fa4 = _Memory;
          goto LAB_0067eed8;
        }
      }
    }
  }
  _free(local_14);
  _free(_Memory);
  uVar9 = 1;
LAB_0067eed8:
  _free(local_c);
  return uVar9;
}
