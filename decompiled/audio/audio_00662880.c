/* spd-match: far pct=1.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

extern unsigned char *DAT_006aab9b;
extern int DAT_006eb720;
extern char stack0xffffffb8;
int unaff_retaddr;

undefined4 FUN_00662880(PUCHAR param_1)

{
  _NCB *p_Var1;
  UCHAR UVar2;
  int iVar3;
  undefined4 *puVar4;
  uint unaff_retaddr;
  _NCB local_44;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  puVar4 = (undefined4 *)&stack0xffffffb8;
  p_Var1 = &local_44;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = (_NCB *)((int)p_Var1 + 4);
  }
  local_44.ncb_command = '2';
  local_44.ncb_lana_num = 0;
  while (UVar2 = Netbios(&local_44), UVar2 != '\0') {
    local_44.ncb_lana_num = local_44.ncb_lana_num + 1;
    if (9 < local_44.ncb_lana_num) {
      return 0xffffffff;
    }
  }
  if (9 < local_44.ncb_lana_num) {
    return 0xffffffff;
  }
  for (iVar3 = 0x10; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
  }
  local_44.ncb_callname[0] = DAT_006aab9b[0x11];
  local_44.ncb_callname[1] = DAT_006aab9b[0x12];
  local_44.ncb_callname[2] = DAT_006aab9b[0x13];
  local_44.ncb_callname[3] = DAT_006aab9b[0x14];
  local_44.ncb_callname[0xc] = DAT_006aab9b[0x1d];
  local_44.ncb_callname[0xd] = DAT_006aab9b[0x1e];
  local_44.ncb_callname[0xe] = DAT_006aab9b[0x1f];
  local_44.ncb_callname[0xf] = DAT_006aab9b[0x20];
  local_44.ncb_callname[4] = DAT_006aab9b[0x15];
  local_44.ncb_callname[5] = DAT_006aab9b[0x16];
  local_44.ncb_callname[6] = DAT_006aab9b[0x17];
  local_44.ncb_callname[7] = DAT_006aab9b[0x18];
  local_44.ncb_callname[8] = DAT_006aab9b[0x19];
  local_44.ncb_callname[9] = DAT_006aab9b[0x1a];
  local_44.ncb_callname[10] = DAT_006aab9b[0x1b];
  local_44.ncb_callname[0xb] = DAT_006aab9b[0x1c];
  local_44.ncb_command = '3';
  local_44.ncb_name[0] = DAT_006aab9b[0x21];
  local_44.ncb_buffer = param_1;
  local_44.ncb_length = 0xf0;
  UVar2 = Netbios(&local_44);
  if (UVar2 != '\0') {
    return 0xffffffff;
  }
  return 0;
}
