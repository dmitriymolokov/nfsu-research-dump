/* spd-match: far pct=12.23 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
#include "ghidra_compat.h"

/* M3.75 C2146 — missing Win32 / CRT / TAPI types (signature unblock) */
typedef BYTE *LPBYTE;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
typedef WCHAR *LPWSTR;
typedef DWORD LCID;
typedef DWORD LCTYPE;
typedef const char *PCNZCH;
typedef const WCHAR *PCNZWCH;
typedef void *HCALL;
typedef HCALL *LPHCALL;
typedef HLINE *LPHLINE;
typedef void *HLINEAPP;
typedef struct lineextensionid_tag {
  DWORD dwExtensionID0, dwExtensionID1, dwExtensionID2, dwExtensionID3;
} lineextensionid_tag;
typedef struct linecallparams_tag {
  DWORD dwTotalSize;
  DWORD dwBearerMode;
  DWORD dwMinRate;
  DWORD dwMaxRate;
  DWORD dwMediaMode;
  DWORD dwCallParamFlags;
  DWORD dwAddressMode;
  DWORD dwAddressID;
  DWORD dwDisplayableAddressSize;
  DWORD dwDisplayableAddressOffset;
  DWORD dwCalledPartySize;
  DWORD dwCalledPartyOffset;
  DWORD dwCommentSize;
  DWORD dwCommentOffset;
  DWORD dwUserUserInfoSize;
  DWORD dwUserUserInfoOffset;
  DWORD dwHighLevelCompSize;
  DWORD dwHighLevelCompOffset;
  DWORD dwLowLevelCompSize;
  DWORD dwLowLevelCompOffset;
  DWORD dwDevSpecificSize;
  DWORD dwDevSpecificOffset;
  DWORD dwPredictiveAutoTransferStates;
  DWORD dwTargetAddressSize;
  DWORD dwTargetAddressOffset;
  DWORD dwSendingFlowspecSize;
  DWORD dwSendingFlowspecOffset;
  DWORD dwReceivingFlowspecSize;
  DWORD dwReceivingFlowspecOffset;
  DWORD dwDeviceClassSize;
  DWORD dwDeviceClassOffset;
  DWORD dwDeviceConfigSize;
  DWORD dwDeviceConfigOffset;
  DWORD dwCallDataSize;
  DWORD dwCallDataOffset;
  DWORD dwNoAnswerTimeout;
  DWORD dwCallingPartyIDSize;
  DWORD dwCallingPartyIDOffset;
} linecallparams_tag, *LPLINECALLPARAMS;
typedef struct _NCB {
  UCHAR ncb_command;
  UCHAR ncb_retcode;
  UCHAR ncb_lsn;
  UCHAR ncb_num;
  PUCHAR ncb_buffer;
  WORD ncb_length;
  UCHAR ncb_callname[16];
  UCHAR ncb_name[16];
  UCHAR ncb_rto;
  UCHAR ncb_sto;
  void *ncb_post;
  UCHAR ncb_lana_num;
  UCHAR ncb_cmd_cplt;
  UCHAR ncb_reserve[10];
  void *ncb_event;
} _NCB, NCB, *PNCB;
/* Richer CRT soft structs — base CRT stubs are pointer-to-dummy. */
typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct m375_ptiddata_s {
  void *_initaddr;
  unsigned int _holdrand;
  int _pad0[16];
  int _tfpecode;
  char _con_ch_buf[32];
  unsigned int _thandle;
} *m375_ptiddata;
typedef struct m375_lc_strings_s {
  char szLanguage[64];
  char szCountry[64];
  char szCodePage[16];
} *m375_lplc_strings;

int __cdecl FUN_0067e1d0();
int __cdecl FUN_0067f0e2();
int __cdecl FUN_0067f17c();
extern int DAT_00717a88;
extern int DAT_00717e64;
extern int DAT_00717e68;
extern int DAT_00717e6c;
extern unsigned char *DAT_00717e78;
extern int DAT_00717e80;
extern code *DAT_00717e84;
extern unsigned char *PTR_s_america_006b12b0;
extern unsigned char *PTR_s_american_006b1460;
extern void LAB_0067f89f(void);
extern void LAB_0067f8a4(void);
extern void LAB_0067f974(void);

BOOL __cdecl ___get_qualified_locale(m375_lplc_strings _LpInStr,UINT *_LpCodePage,m375_lplc_strings _LpOutStr)

{
  LCID LVar1;
  undefined2 uVar2;
  int iVar3;
  uint _Value;
  BOOL BVar4;
  
  if (DAT_00717e84 == (code *)0x0) {
    if (DAT_00717a88 == 2) {
      DAT_00717e84 = ((code *)0);
    }
    else {
      DAT_00717e84 = FUN_0067f17c;
    }
  }
  if (_LpInStr == (m375_lplc_strings)0x0) {
LAB_0067f89f:
    _GetLcidFromDefault();
LAB_0067f8a4:
    if (DAT_00717e64 == 0) {
      return 0;
    }
  }
  else {
    DAT_00717e78 = _LpInStr->szLanguage + 0x20;
    DAT_00717e80 = _LpInStr;
    if ((DAT_00717e78 != (wchar_t *)0x0) && ((char)*DAT_00717e78 != '\0')) {
      _TranslateName(&PTR_s_america_006b12b0,0x16,&DAT_00717e78);
    }
    DAT_00717e64 = 0;
    if ((DAT_00717e80 == (m375_lplc_strings)0x0) || ((char)((m375_lplc_strings)(void *)(unsigned)DAT_00717e80)->szLanguage[0] == '\0')) {
      if ((DAT_00717e78 == (wchar_t *)0x0) || ((char)*DAT_00717e78 == '\0')) goto LAB_0067f89f;
      _GetLcidFromCountry();
      goto LAB_0067f8a4;
    }
    if ((DAT_00717e78 == (wchar_t *)0x0) || ((char)*DAT_00717e78 == '\0')) {
      _GetLcidFromLanguage();
    }
    else {
      _GetLcidFromLangCountry();
    }
    if (DAT_00717e64 == 0) {
      iVar3 = _TranslateName(&PTR_s_american_006b1460,0x40,&DAT_00717e80);
      if (iVar3 != 0) {
        if ((DAT_00717e78 == (wchar_t *)0x0) || ((char)*DAT_00717e78 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
      goto LAB_0067f8a4;
    }
  }
  _Value = FUN_0067f0e2();
  if (((_Value == 0) || (BVar4 = IsValidCodePage(_Value & 0xffff), BVar4 == 0)) ||
     (BVar4 = IsValidLocale(DAT_00717e68,1), LVar1 = DAT_00717e68, BVar4 == 0)) {
LAB_0067f974:
    BVar4 = 0;
  }
  else {
    if (_LpCodePage != (UINT *)0x0) {
      uVar2 = (undefined2)DAT_00717e6c;
      *(short *)_LpCodePage = (short)DAT_00717e68;
      *(undefined2 *)((int)_LpCodePage + 2) = uVar2;
      *(short *)(_LpCodePage + 1) = (short)_Value;
    }
    if (_LpOutStr != (m375_lplc_strings)0x0) {
      if ((short)*_LpCodePage == 0x814) {
        FUN_0067e1d0(_LpOutStr,"Norwegian-Nynorsk");
      }
      else {
        iVar3 = (*DAT_00717e84)(LVar1,0x1001,_LpOutStr,0x40);
        if (iVar3 == 0) goto LAB_0067f974;
      }
      iVar3 = (*DAT_00717e84)(DAT_00717e6c,0x1002,_LpOutStr->szLanguage + 0x20,0x40);
      if (iVar3 == 0) goto LAB_0067f974;
      __itoa(_Value,(char *)_LpOutStr->szCountry,10);
    }
    BVar4 = 1;
  }
  return BVar4;
}
