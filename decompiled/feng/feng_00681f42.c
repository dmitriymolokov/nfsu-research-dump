/* spd-match: far pct=10.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

extern int DAT_006eb720;
extern int DAT_00717ef8;
extern void LAB_00681ff1(void);
int unaff_retaddr;

undefined4 FUN_00681f42(int param_1,_locale_t param_2,LPCWSTR param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t _Size;
  DWORD DVar3;
  LPSTR _LpLCData;
  char *_Source;
  char *_Dest;
  int iVar4;
  byte *pbVar5;
  uint unaff_retaddr;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar5 = &DAT_00717ef8;
    iVar4 = ___crtGetLocaleInfoW(param_2,param_3,&DAT_00717ef8,4,0);
    if (iVar4 != 0) {
      *param_4 = '\0';
      do {
        bVar1 = *pbVar5;
        iVar4 = _isdigit((uint)bVar1);
        if (iVar4 == 0) {
          return 0;
        }
        pbVar5 = pbVar5 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
      } while ((int)pbVar5 < 0x717f00);
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_88;
  bVar2 = false;
  _Size = ___crtGetLocaleInfoA(param_2,param_3,(LCTYPE)local_88,(LPSTR)0x80,0);
  if (_Size == 0) {
    DVar3 = GetLastError();
    if (DVar3 != 0x7a) {
      return 0xffffffff;
    }
    _LpLCData = (LPSTR)___crtGetLocaleInfoA(param_2,param_3,0,(LPSTR)0x0,0);
    if (_LpLCData == (LPSTR)0x0) {
      return 0xffffffff;
    }
    _Source = _malloc((size_t)_LpLCData);
    if (_Source == (char *)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    _Size = ___crtGetLocaleInfoA(param_2,param_3,(LCTYPE)_Source,_LpLCData,0);
    if (_Size == 0) goto LAB_00681ff1;
  }
  _Dest = _malloc(_Size);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,_Size);
    if (bVar2) {
      _free(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_00681ff1:
  _free(_Source);
  return 0xffffffff;
}
