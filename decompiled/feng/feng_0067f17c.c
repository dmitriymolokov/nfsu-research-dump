/* spd-match: far pct=8.37 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

extern unsigned char *DAT_006b0cb0;
extern unsigned char *DAT_006b0cb4;
extern unsigned char *DAT_006b0cbc;
extern unsigned char *DAT_006b0cc0;
extern unsigned char *DAT_006b0cc4;
extern unsigned char *DAT_006b0cc8;
extern unsigned char *DAT_006b0ccc;
extern unsigned char *DAT_006b0cd4;

int FUN_0067f17c(uint param_1,LCTYPE param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *_Source;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x1a;
  do {
    iVar1 = (iVar2 + iVar3) / 2;
    if (param_1 == *(uint *)(&DAT_006b0cb0 + iVar1 * 0x2c)) {
      if (param_2 == 1) {
        _Source = &DAT_006b0cb4 + iVar1 * 0x2c;
      }
      else if (param_2 == 3) {
        _Source = &DAT_006b0cc0 + iVar1 * 0x2c;
      }
      else if (param_2 == 7) {
        _Source = &DAT_006b0cc8 + iVar1 * 0x2c;
      }
      else if (param_2 == 0xb) {
        _Source = &DAT_006b0ccc + iVar1 * 0x2c;
      }
      else if (param_2 == 0x1001) {
        _Source = *(char **)(&DAT_006b0cbc + iVar1 * 0x2c);
      }
      else if (param_2 == 0x1002) {
        _Source = *(char **)(&DAT_006b0cc4 + iVar1 * 0x2c);
      }
      else {
        if (param_2 != 0x1004) break;
        _Source = &DAT_006b0cd4 + iVar1 * 0x2c;
      }
      if ((_Source != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,_Source,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      break;
    }
    if (param_1 < *(uint *)(&DAT_006b0cb0 + iVar1 * 0x2c)) {
      iVar2 = iVar1 + -1;
    }
    else {
      iVar3 = iVar1 + 1;
    }
  } while (iVar3 <= iVar2);
  iVar2 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  return iVar2;
}
