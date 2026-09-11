/* spd-match: far pct=8.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

int __cdecl FUN_00669960();
int __cdecl FUN_006699c0();
int __cdecl FUN_006699e0();
int __cdecl FUN_00669a60();
int __cdecl FUN_006702d0();
int __cdecl FUN_00670660();
int __cdecl FUN_00670740();
int __cdecl FUN_006707b0();
extern int DAT_006eb720;
extern void LAB_00669bf3(void);
extern void LAB_00669d1d(void);
extern void LAB_00669e34(void);
int unaff_retaddr;

void FUN_00669b20(HCALL param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  bool bVar4;
  uint unaff_retaddr;
  CHAR local_104 [256];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (param_2 != 2) {
    return;
  }
  if (param_4 != 0x4000) {
    if (param_4 == 2) {
      if ((*(int *)(param_3 + 0x80) != 4) && (*(int *)(param_3 + 0x80) != 7)) {
        return;
      }
      *(HCALL *)(param_3 + 0x7c) = param_1;
      LVar3 = lineAnswer(param_1,(LPCSTR)0x0,0);
      *(LONG *)(param_3 + 0x84) = LVar3;
      bVar4 = LVar3 == 0;
    }
    else {
      bVar4 = param_4 == 0x100;
    }
    if (!bVar4) {
      return;
    }
    iVar2 = *(int *)(param_3 + 0x80);
    if ((iVar2 == 4) || (iVar2 == 3)) {
      iVar2 = FUN_006699e0(*(undefined4 *)(param_3 + 0x78));
      if (iVar2 != -1) {
        wsprintfA(local_104,"TAPI%d:",iVar2);
        if (*(int *)(param_3 + 0x80) == 3) {
          FUN_00670740(*(undefined4 *)(param_3 + 0x68),local_104);
        }
        else {
          FUN_00670660(*(undefined4 *)(param_3 + 0x68),local_104);
        }
        goto LAB_00669e34;
      }
    }
    else {
      if ((iVar2 != 7) && (iVar2 != 6)) {
        return;
      }
      iVar2 = FUN_006699e0(*(undefined4 *)(param_3 + 0x78));
      if (iVar2 != -1) {
        wsprintfA(local_104,"TAPI%d:",iVar2);
        FUN_006702d0(*(undefined4 *)(param_3 + 0x68),local_104);
LAB_00669e34:
        *(undefined4 *)(param_3 + 0x80) = 5;
        return;
      }
    }
    FUN_006699c0();
    *(undefined4 *)(param_3 + 0x78) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x80) = 8;
    return;
  }
  if (*(int *)(param_3 + 0x80) == 4) {
    lineClose(*(HLINE *)(param_3 + 0x78));
    *(undefined4 *)(param_3 + 0x78) = 0xffffffff;
    FUN_00669960((undefined4 *)(param_3 + 0x78),param_3,4,0x10);
    return;
  }
  if (*(int *)(param_3 + 0x80) == 3) {
    puVar1 = (undefined4 *)(param_3 + 0x78);
    lineClose(*(HLINE *)(param_3 + 0x78));
    *puVar1 = 0xffffffff;
    iVar2 = FUN_00669960(puVar1,param_3,1,0x10);
    if (iVar2 != 0) goto LAB_00669d1d;
    iVar2 = FUN_00669a60(*puVar1,param_3 + 0x7c,0);
    *(int *)(param_3 + 0x84) = iVar2;
    if (0 < iVar2) goto LAB_00669bf3;
  }
  else {
LAB_00669bf3:
    if (*(int *)(param_3 + 0x80) != 5) {
      return;
    }
    iVar2 = FUN_006707b0(*(undefined4 *)(param_3 + 0x68));
    if ((iVar2 == 3) && (*(char *)(param_3 + 0x88) == '\0')) {
      *(undefined4 *)(param_3 + 0x80) = 7;
      FUN_006702d0(*(undefined4 *)(param_3 + 0x68),0);
      lineClose(*(HLINE *)(param_3 + 0x78));
      *(undefined4 *)(param_3 + 0x78) = 0xffffffff;
      iVar2 = FUN_00669960((undefined4 *)(param_3 + 0x78),param_3,4,0x10);
      if (iVar2 == 0) {
        return;
      }
      *(undefined4 *)(param_3 + 0x80) = 8;
      return;
    }
    if (*(int *)(param_3 + 0x80) != 5) {
      return;
    }
    iVar2 = FUN_006707b0(*(undefined4 *)(param_3 + 0x68));
    if (iVar2 != 3) {
      return;
    }
    if (*(char *)(param_3 + 0x88) == '\0') {
      return;
    }
    *(undefined4 *)(param_3 + 0x80) = 6;
    FUN_006702d0(*(undefined4 *)(param_3 + 0x68),0);
    puVar1 = (undefined4 *)(param_3 + 0x78);
    lineClose(*(HLINE *)(param_3 + 0x78));
    *puVar1 = 0xffffffff;
    iVar2 = FUN_00669960(puVar1,param_3,1,0x10);
    if (iVar2 != 0) goto LAB_00669d1d;
    iVar2 = FUN_00669a60(*puVar1,param_3 + 0x7c,0);
    *(int *)(param_3 + 0x84) = iVar2;
    if (0 < iVar2) {
      return;
    }
  }
  lineClose(*(HLINE *)(param_3 + 0x78));
  *(HLINE *)(param_3 + 0x78) = 0xffffffff;
LAB_00669d1d:
  *(undefined4 *)(param_3 + 0x80) = 8;
  return;
}
