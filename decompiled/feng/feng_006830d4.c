/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_residual_tok_p2/batches/20260724T142325Z_w0_tc0 */
#include "ghidra_compat.h"

/* P3 typed_residual_tok — SEH/TAPI/NetBIOS/MFC signature unblock (no FILE redef) */
typedef struct _EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef BYTE *LPBYTE;
typedef unsigned char UCHAR;
typedef UCHAR *PUCHAR;
typedef void *HCALL;
typedef HCALL *LPHCALL;
typedef HLINE *LPHLINE;
typedef void *HLINEAPP;
typedef HLINEAPP *LPHLINEAPP;
typedef void (__stdcall *LINECALLBACK)(DWORD, DWORD, DWORD, DWORD, DWORD, DWORD);
typedef struct lineextensionid_tag {
  DWORD dwExtensionID0, dwExtensionID1, dwExtensionID2, dwExtensionID3;
} LINEEXTENSIONID, lineextensionid_tag, *LPLINEEXTENSIONID;
typedef struct varstring_tag {
  DWORD dwTotalSize; DWORD dwNeededSize; DWORD dwUsedSize;
  DWORD dwStringFormat; DWORD dwStringSize; DWORD dwStringOffset;
} VARSTRING, *LPVARSTRING;
typedef struct linedevcaps_tag { DWORD dwTotalSize; } LINEDEVCAPS, linedevcaps_tag, *LPLINEDEVCAPS;
typedef struct linecallparams_tag {
  DWORD dwTotalSize; DWORD dwBearerMode; DWORD dwMinRate; DWORD dwMaxRate;
  DWORD dwMediaMode; DWORD dwCallParamFlags; DWORD dwAddressMode; DWORD dwAddressID;
  DWORD dwDisplayableAddressSize; DWORD dwDisplayableAddressOffset;
  DWORD dwCalledPartySize; DWORD dwCalledPartyOffset;
  DWORD dwCommentSize; DWORD dwCommentOffset;
  DWORD dwUserUserInfoSize; DWORD dwUserUserInfoOffset;
  DWORD dwHighLevelCompSize; DWORD dwHighLevelCompOffset;
  DWORD dwLowLevelCompSize; DWORD dwLowLevelCompOffset;
  DWORD dwDevSpecificSize; DWORD dwDevSpecificOffset;
  DWORD dwPredictiveAutoTransferStates;
  DWORD dwTargetAddressSize; DWORD dwTargetAddressOffset;
  DWORD dwSendingFlowspecSize; DWORD dwSendingFlowspecOffset;
  DWORD dwReceivingFlowspecSize; DWORD dwReceivingFlowspecOffset;
  DWORD dwDeviceClassSize; DWORD dwDeviceClassOffset;
  DWORD dwDeviceConfigSize; DWORD dwDeviceConfigOffset;
  DWORD dwCallDataSize; DWORD dwCallDataOffset;
  DWORD dwNoAnswerTimeout; DWORD dwCallingPartyIDSize; DWORD dwCallingPartyIDOffset;
} linecallparams_tag, *LPLINECALLPARAMS;
typedef struct _NCB {
  UCHAR ncb_command; UCHAR ncb_retcode; UCHAR ncb_lsn; UCHAR ncb_num;
  PUCHAR ncb_buffer; WORD ncb_length;
  UCHAR ncb_callname[16]; UCHAR ncb_name[16];
  UCHAR ncb_rto; UCHAR ncb_sto; void *ncb_post;
  UCHAR ncb_lana_num; UCHAR ncb_cmd_cplt; UCHAR ncb_reserve[10]; void *ncb_event;
} _NCB, NCB, *PNCB;
#ifdef __cplusplus
struct CGlobalUtils { unsigned char _pad[16]; };
#else
typedef struct CGlobalUtils { unsigned char _pad[16]; } CGlobalUtils;
#endif


LONG lineAnswer(HCALL hCall,LPCSTR lpsUserUserInfo,DWORD dwSize)

{
  LONG LVar1;
  
                    
                    
  LVar1 = lineAnswer(hCall,lpsUserUserInfo,dwSize);
  return LVar1;
}
