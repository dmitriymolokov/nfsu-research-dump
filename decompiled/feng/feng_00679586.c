/* spd-match: far pct=9.86 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141722Z_w0_tc0 */
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

int __cdecl FUN_006796c1();
extern int DAT_006eb830;
extern unsigned char *DAT_006eb834;
extern int DAT_00717d84;
extern int DAT_00717d88;
extern int DAT_00717d8c;
extern int DAT_00717d90;
extern void LAB_00679613(void);
extern void LAB_00679672(void);
extern void LAB_006796a0(void);

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  void *local_30;
  void *local_2c;
  m375_ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    puVar3 = &DAT_00717d84;
    pcVar4 = DAT_00717d84;
LAB_00679613:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar3 = &DAT_00717d90;
        pcVar4 = DAT_00717d90;
      }
      else if (_SigNum == 0x15) {
        puVar3 = &DAT_00717d88;
        pcVar4 = DAT_00717d88;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar3 = &DAT_00717d8c;
        pcVar4 = DAT_00717d8c;
      }
      goto LAB_00679613;
    }
    local_28 = (m375_ptiddata)__getptd();
    iVar2 = siglookup();
    puVar3 = (undefined4 *)(iVar2 + 8);
    pcVar4 = (code *)*puVar3;
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_2c = local_28->_initarg;
    local_28->_initarg = (void *)0x0;
    if (_SigNum == 8) {
      local_30 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_00679672;
    }
  }
  else {
LAB_00679672:
    iVar2 = DAT_006eb830;
    if (_SigNum == 8) {
      for (; iVar2 < DAT_006eb834 + DAT_006eb830; iVar2 = iVar2 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar2 * 0xc + 8) = 0;
      }
      goto LAB_006796a0;
    }
  }
  *puVar3 = 0;
LAB_006796a0:
  FUN_006796c1();
  if (_SigNum == 8) {
    (*pcVar4)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_2c;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_30;
  }
  return 0;
}
