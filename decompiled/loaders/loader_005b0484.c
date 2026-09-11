/* spd-match: far pct=27.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

extern char stack0x00000010;

undefined4 FUN_005b0484(LPBYTE param_1,LPCSTR param_2,LPBYTE param_3)

{
  LSTATUS LVar1;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_8,param_2,(LPDWORD)0x0,(LPDWORD)&param_3,param_3,
                             (LPDWORD)&stack0x00000010);
    RegCloseKey(local_8);
    if ((LVar1 == 0) && (param_3 == param_1)) {
      return 1;
    }
  }
  return 0;
}
