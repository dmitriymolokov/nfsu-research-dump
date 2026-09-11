/* spd-match: far pct=9.61 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141722Z_w0_tc0 */
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

int __cdecl FUN_006796ff();
int __cdecl FUN_00679757();
extern int DAT_006eb720;
extern int DAT_006ebb08;
extern unsigned char *DAT_006ebb10;
extern unsigned char *DAT_006ebb14;
extern unsigned char *DAT_006ebb18;
extern unsigned char *DAT_006ebb1c;
extern int DAT_00717d98;
extern int DAT_00792fc0;
extern int DAT_00792fc8;
extern unsigned char *DAT_00792fe0;
extern int DAT_007930e4;
extern int DAT_007930f0;
extern int DAT_007930f4;
extern int DAT_007930f8;
extern void LAB_00679ad2(void);
int unaff_retaddr;

undefined4 FUN_00679958(UINT param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint unaff_retaddr;
  m375_cpinfo local_20;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  if (param_1 != 0) {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if (*(UINT *)((int)&DAT_006ebb10 + uVar5) == param_1) {
        puVar12 = &DAT_00792fe0;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_c = 0;
        *(undefined1 *)puVar12 = 0;
        pbVar10 = (byte *)(iVar9 * 0x30 + 0x6ebb20);
        do {
          bVar4 = *pbVar10;
          pbVar11 = pbVar10;
          while ((bVar4 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
            uVar5 = (uint)bVar4;
            if (uVar5 <= bVar3) {
              bVar4 = (&DAT_006ebb08)[local_c];
              do {
                pbVar2 = (byte *)((int)&DAT_00792fe0 + uVar5 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar5 = uVar5 + 1;
              } while (uVar5 <= bVar3);
            }
            pbVar11 = pbVar11 + 2;
            bVar4 = *pbVar11;
          }
          local_c = local_c + 1;
          pbVar10 = pbVar10 + 8;
        } while (local_c < 4);
        DAT_007930e4 = param_1;
        DAT_00792fc8 = 1;
        DAT_00792fc0 = FUN_006796ff();
        DAT_007930f0 = *(undefined4 *)(&DAT_006ebb14 + extraout_ECX);
        DAT_007930f4 = *(undefined4 *)(&DAT_006ebb18 + extraout_ECX);
        DAT_007930f8 = *(undefined4 *)(&DAT_006ebb1c + extraout_ECX);
        goto LAB_00679ad2;
      }
      uVar5 = uVar5 + 0x30;
      iVar9 = iVar9 + 1;
    } while (uVar5 < 0xf0);
    BVar6 = GetCPInfo(param_1,&local_20);
    if (BVar6 == 1) {
      puVar12 = &DAT_00792fe0;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
      DAT_007930e4 = param_1;
      DAT_00792fc0 = 0;
      if (local_20.MaxCharSize < 2) {
        DAT_00792fc8 = 0;
      }
      else {
        if (local_20.LeadByte[0] != '\0') {
          pBVar7 = local_20.LeadByte + 1;
          do {
            bVar4 = *pBVar7;
            if (bVar4 == 0) break;
            for (uVar5 = (uint)pBVar7[-1]; uVar5 <= bVar4; uVar5 = uVar5 + 1) {
              pbVar10 = (byte *)((int)&DAT_00792fe0 + uVar5 + 1);
              *pbVar10 = *pbVar10 | 4;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        uVar5 = 1;
        do {
          pbVar10 = (byte *)((int)&DAT_00792fe0 + uVar5 + 1);
          *pbVar10 = *pbVar10 | 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xff);
        DAT_00792fc0 = FUN_006796ff();
        DAT_00792fc8 = extraout_ECX_00;
      }
      DAT_007930f0 = 0;
      DAT_007930f4 = 0;
      DAT_007930f8 = 0;
      goto LAB_00679ad2;
    }
    if (DAT_00717d98 == 0) {
      return 0xffffffff;
    }
  }
  setSBCS();
LAB_00679ad2:
  FUN_00679757();
  return 0;
}
