/* spd-match: far pct=7.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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
int unaff_ESI;
int unaff_retaddr;

void FUN_00669a60(HLINE param_1,LPHCALL param_2,DWORD param_3)

{
  char cVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  char *unaff_ESI;
  linecallparams_tag *plVar5;
  uint unaff_retaddr;
  linecallparams_tag local_480 [6];
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  plVar5 = local_480;
  for (iVar4 = 0x11c; iVar4 != 0; iVar4 = iVar4 + -1) {
    plVar5->dwTotalSize = 0;
    plVar5 = (linecallparams_tag *)&plVar5->dwBearerMode;
  }
  local_480[0].dwBearerMode = 1;
  local_480[0].dwAddressMode = 1;
  local_480[0].dwTotalSize = 0x470;
  local_480[0].dwMediaMode = 0x10;
  local_480[0].dwCallParamFlags = 2;
  local_480[0].dwAddressID = 0;
  local_480[0].dwDisplayableAddressOffset = 0x70;
  iVar4 = 0x70 - (int)unaff_ESI;
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI[(int)local_480 + iVar4] = cVar1;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  pDVar3 = &local_480[0].dwPredictiveAutoTransferStates;
  do {
    DVar2 = *pDVar3;
    pDVar3 = (DWORD *)((int)pDVar3 + 1);
  } while ((char)DVar2 != '\0');
  local_480[0].dwDisplayableAddressSize =
       (int)pDVar3 - (int)((int)&local_480[0].dwPredictiveAutoTransferStates + 1);
  lineMakeCall(param_1,param_2,(LPCSTR)&local_480[0].dwPredictiveAutoTransferStates,param_3,
               local_480);
  return;
}
