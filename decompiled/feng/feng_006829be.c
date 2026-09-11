/* spd-match: far pct=6.05 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

extern int DAT_00717ea0;
extern int DAT_00717f04;
extern char stack0xffffffb8;
extern char stack0xffffffbc;
extern char stack0xffffffc0;
extern char stack0xffffffc4;
extern char stack0xffffffc8;

int ___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStackY_4c;
  int local_20;
  
  if (DAT_00717f04 == 0) {
    uStackY_4c = 0x6829e1;
    iVar3 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_00717f04 = 2;
      }
    }
    else {
      DAT_00717f04 = 1;
    }
  }
  if (DAT_00717f04 == 1) {
    uStackY_4c = 0x682a1d;
    iVar3 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  if ((DAT_00717f04 == 2) || (DAT_00717f04 == 0)) {
    local_20 = 0;
    bVar2 = false;
    if (param_5 == 0) {
      param_5 = DAT_00717ea0;
    }
    uStackY_4c = 0x682a4c;
    iVar3 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)(iVar3 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = &stack0xffffffc8 + iVar1;
      if (&stack0xffffffc8 == puVar5) {
        *(int *)(&stack0xffffffc4 + iVar1) = iVar3;
        *(undefined4 *)(&stack0xffffffc0 + iVar1) = 0x682a99;
        puVar6 = _malloc(*(size_t *)(&stack0xffffffc4 + iVar1));
        if (puVar6 == (void *)0x0) {
          return 0;
        }
        bVar2 = true;
      }
      *(int *)(&stack0xffffffc4 + iVar1) = iVar3;
      *(undefined1 **)(&stack0xffffffc0 + iVar1) = puVar6;
      *(LCTYPE *)(&stack0xffffffbc + iVar1) = param_2;
      *(LCID *)(&stack0xffffffb8 + iVar1) = param_1;
      puVar7 = (undefined1 *)((int)&uStackY_4c + iVar1);
      *(undefined4 *)((int)&uStackY_4c + iVar1) = 0x682ab3;
      iVar3 = GetLocaleInfoA(*(LCID *)(&stack0xffffffb8 + iVar1),
                             *(LCTYPE *)(&stack0xffffffbc + iVar1),
                             *(LPSTR *)(&stack0xffffffc0 + iVar1),*(int *)(&stack0xffffffc4 + iVar1)
                            );
      puVar5 = puVar7;
      if (iVar3 != 0) {
        if (param_4 == 0) {
          *(undefined4 *)(puVar7 + -4) = 0;
          *(undefined4 *)(puVar7 + -8) = 0;
        }
        else {
          *(int *)(puVar7 + -4) = param_4;
          *(LPWSTR *)(puVar7 + -8) = param_3;
        }
        *(undefined4 *)(puVar7 + -0xc) = 0xffffffff;
        *(undefined1 **)(puVar7 + -0x10) = puVar6;
        *(undefined4 *)(puVar7 + -0x14) = 1;
        *(int *)(puVar7 + -0x18) = param_5;
        puVar5 = puVar7 + -0x1c;
        *(undefined4 *)(puVar7 + -0x1c) = 0x682ad3;
        local_20 = MultiByteToWideChar(*(UINT *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                                       *(LPCSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                       *(LPWSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
      }
      if (bVar2) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
        *(undefined4 *)(puVar5 + -8) = 0x682ae1;
        _free(*(void **)(puVar5 + -4));
        return local_20;
      }
      return local_20;
    }
  }
  return 0;
}
