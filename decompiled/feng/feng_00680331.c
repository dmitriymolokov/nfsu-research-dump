/* spd-match: far pct=10.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

int __cdecl FUN_00677f42();

undefined4 ___mbtowc_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_3 != (byte *)0x0) && (param_4 != 0)) {
    bVar1 = *param_3;
    if (bVar1 != 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (param_2 != (LPWSTR)0x0) {
          *param_2 = (ushort)bVar1;
        }
        return 1;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)bVar1 * 2) & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,1,param_2,
                                    (uint)(param_2 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28);
        if ((((1 < iVar2) && (iVar2 <= (int)param_4)) &&
            (iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCSTR)param_3,iVar2,param_2,
                                         (uint)(param_2 != (LPWSTR)0x0)), iVar2 != 0)) ||
           ((*(uint *)(param_1 + 0x28) <= param_4 && (param_3[1] != 0)))) {
          return *(undefined4 *)(param_1 + 0x28);
        }
      }
      puVar3 = (undefined4 *)FUN_00677f42();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_2 != (LPWSTR)0x0) {
      *param_2 = L'\0';
    }
  }
  return 0;
}
