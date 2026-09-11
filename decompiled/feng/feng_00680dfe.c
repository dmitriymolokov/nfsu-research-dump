/* spd-match: far pct=5.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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

int __cdecl FUN_0068088e();
int __cdecl FUN_006808d7();
extern int DAT_006b1d18;
extern int DAT_006eb720;
extern int DAT_00717e90;
extern int DAT_00717ea0;
extern int DAT_00717ef0;
extern void LAB_006810af(void);
extern void LAB_00681144(void);
extern unsigned int uRamfffffff8;
extern unsigned int uRamfffffffc;
extern char stack0xffffff88;
extern char stack0xffffff8c;
extern char stack0xffffff90;
extern char stack0xffffff94;
extern char stack0xffffff98;
extern char stack0xffffff9c;
extern char stack0xffffffa0;
int unaff_EDI;
int unaff_retaddr;

int FUN_00680dfe(LCID param_1,DWORD param_2,byte *param_3,char *param_4,byte *param_5,char *param_6,
                UINT param_7)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  UINT UVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  size_t unaff_EDI;
  byte *_Memory;
  uint unaff_retaddr;
  undefined4 uStackY_7c;
  byte *local_54;
  m375_cpinfo local_40;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006b1d18;
  uStack_c = 0x680e0a;
  local_20 = DAT_006eb720 ^ unaff_retaddr;
  _Memory = (byte *)0x0;
  if (DAT_00717ef0 == 0) {
    uStackY_7c = 0x680e33;
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_00717ef0 = 2;
      }
    }
    else {
      DAT_00717ef0 = 1;
    }
  }
  if (0 < (int)param_4) {
    param_4 = (char *)_strncnt(param_4,unaff_EDI);
  }
  if (0 < (int)param_6) {
    param_6 = (char *)_strncnt(param_6,unaff_EDI);
  }
  if ((DAT_00717ef0 == 2) || (DAT_00717ef0 == 0)) {
    local_54 = (byte *)0x0;
    if (param_1 == 0) {
      param_1 = DAT_00717e90;
    }
    if (param_7 == 0) {
      param_7 = DAT_00717ea0;
    }
    UVar11 = FUN_0068088e();
    if (UVar11 != 0xffffffff) {
      if (UVar11 == param_7) {
LAB_00681144:
        uStackY_7c = 0x68115c;
        iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)param_4,(PCNZCH)param_5,
                               (int)param_6);
        if (_Memory != (byte *)0x0) {
          _free(_Memory);
          _free(local_54);
          return iVar1;
        }
        return iVar1;
      }
      uStackY_7c = 0x68110d;
      _Memory = (byte *)FUN_006808d7();
      if (_Memory != (byte *)0x0) {
        uStackY_7c = 0x681128;
        param_5 = (byte *)FUN_006808d7();
        param_3 = _Memory;
        local_54 = param_5;
        if (param_5 != (byte *)0x0) goto LAB_00681144;
        _free(_Memory);
      }
    }
  }
  else if (DAT_00717ef0 == 1) {
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    if (param_7 == 0) {
      param_7 = DAT_00717ea0;
    }
    if ((param_4 == (char *)0x0) || (param_6 == (char *)0x0)) {
      if (param_4 == param_6) {
        return 2;
      }
      if (1 < (int)param_6) {
        return 1;
      }
      if (1 < (int)param_4) {
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&local_40);
      if (BVar3 == 0) {
        return 0;
      }
      if (0 < (int)param_4) {
        if (local_40.MaxCharSize < 2) {
          return 3;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        return 3;
      }
      if (0 < (int)param_6) {
        if (local_40.MaxCharSize < 2) {
          return 1;
        }
        pBVar4 = local_40.LeadByte;
        if (local_40.LeadByte[0] != 0) {
          while( true ) {
            if (pBVar4[1] == 0) {
              return 1;
            }
            if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) break;
            pBVar4 = pBVar4 + 2;
            if (*pBVar4 == 0) {
              return 1;
            }
          }
          return 2;
        }
        return 1;
      }
    }
    uStackY_7c = 0x680f7d;
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      puVar5 = (undefined1 *)(iVar1 * 2 + 3U & 0xfffffffc);
      iVar7 = -(int)puVar5;
      puVar6 = &stack0xffffffa0 + iVar7;
      local_1c = &stack0xffffffa0 + iVar7;
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffa0 == puVar5) {
        *(int *)(&stack0xffffff9c + iVar7) = iVar1 * 2;
        *(undefined4 *)(&stack0xffffff98 + iVar7) = 0x680fd5;
        puVar6 = _malloc(*(size_t *)(&stack0xffffff9c + iVar7));
        if (puVar6 == (undefined1 *)0x0) {
          return 0;
        }
        local_24 = 1;
      }
      *(int *)(&stack0xffffff9c + iVar7) = iVar1;
      *(undefined1 **)(&stack0xffffff98 + iVar7) = puVar6;
      *(char **)(&stack0xffffff94 + iVar7) = param_4;
      *(byte **)(&stack0xffffff90 + iVar7) = param_3;
      *(undefined4 *)(&stack0xffffff8c + iVar7) = 1;
      *(UINT *)(&stack0xffffff88 + iVar7) = param_7;
      puVar12 = (undefined1 *)((int)&uStackY_7c + iVar7);
      *(undefined4 *)((int)&uStackY_7c + iVar7) = 0x680ff6;
      iVar7 = MultiByteToWideChar(*(UINT *)(&stack0xffffff88 + iVar7),
                                  *(DWORD *)(&stack0xffffff8c + iVar7),
                                  *(LPCSTR *)(&stack0xffffff90 + iVar7),
                                  *(int *)(&stack0xffffff94 + iVar7),
                                  *(LPWSTR *)(&stack0xffffff98 + iVar7),
                                  *(int *)(&stack0xffffff9c + iVar7));
      puVar5 = puVar12;
      if (iVar7 != 0) {
        *(undefined4 *)(puVar12 + -4) = 0;
        *(undefined4 *)(puVar12 + -8) = 0;
        *(char **)(puVar12 + -0xc) = param_6;
        *(byte **)(puVar12 + -0x10) = param_5;
        *(undefined4 *)(puVar12 + -0x14) = 9;
        *(UINT *)(puVar12 + -0x18) = param_7;
        puVar13 = puVar12 + -0x1c;
        *(undefined4 *)(puVar12 + -0x1c) = 0x681013;
        iVar7 = MultiByteToWideChar(*(UINT *)(puVar12 + -0x18),*(DWORD *)(puVar12 + -0x14),
                                    *(LPCSTR *)(puVar12 + -0x10),*(int *)(puVar12 + -0xc),
                                    *(LPWSTR *)(puVar12 + -8),*(int *)(puVar12 + -4));
        puVar5 = puVar13;
        if (iVar7 != 0) {
          puVar8 = (undefined1 *)(iVar7 * 2 + 3U & 0xfffffffc);
          *(undefined4 *)(puVar13 + -4) = 0x681035;
          iVar10 = -(int)puVar8;
          puVar9 = puVar13 + iVar10;
          puVar5 = puVar13 + iVar10;
          local_1c = puVar13 + iVar10;
          local_8 = (undefined *)0xffffffff;
          if (puVar13 == puVar8) {
            uRamfffffffc = iVar7 * 2;
            uRamfffffff8 = 0x681068;
            puVar9 = _malloc(uRamfffffffc);
            if (puVar9 == (undefined1 *)0x0) goto LAB_006810af;
            local_28 = 1;
          }
          *(int *)(puVar13 + iVar10 + -4) = iVar7;
          *(undefined1 **)(puVar13 + iVar10 + -8) = puVar9;
          *(char **)(puVar13 + iVar10 + -0xc) = param_6;
          *(byte **)(puVar13 + iVar10 + -0x10) = param_5;
          *(undefined4 *)(puVar13 + iVar10 + -0x14) = 1;
          *(UINT *)(puVar13 + iVar10 + -0x18) = param_7;
          puVar14 = puVar13 + iVar10 + -0x1c;
          *(undefined4 *)(puVar13 + iVar10 + -0x1c) = 0x681089;
          iVar10 = MultiByteToWideChar(*(UINT *)(puVar13 + iVar10 + -0x18),
                                       *(DWORD *)(puVar13 + iVar10 + -0x14),
                                       *(LPCSTR *)(puVar13 + iVar10 + -0x10),
                                       *(int *)(puVar13 + iVar10 + -0xc),
                                       *(LPWSTR *)(puVar13 + iVar10 + -8),
                                       *(int *)(puVar13 + iVar10 + -4));
          puVar5 = puVar14;
          if (iVar10 != 0) {
            *(int *)(puVar14 + -4) = iVar7;
            *(undefined1 **)(puVar14 + -8) = puVar9;
            *(int *)(puVar14 + -0xc) = iVar1;
            *(undefined1 **)(puVar14 + -0x10) = puVar6;
            *(DWORD *)(puVar14 + -0x14) = param_2;
            *(LCID *)(puVar14 + -0x18) = param_1;
            puVar5 = puVar14 + -0x1c;
            *(undefined4 *)(puVar14 + -0x1c) = 0x68109f;
            local_2c = CompareStringW(*(LCID *)(puVar14 + -0x18),*(DWORD *)(puVar14 + -0x14),
                                      *(PCNZWCH *)(puVar14 + -0x10),*(int *)(puVar14 + -0xc),
                                      *(PCNZWCH *)(puVar14 + -8),*(int *)(puVar14 + -4));
          }
          if (local_28 != 0) {
            *(undefined1 **)(puVar5 + -4) = puVar9;
            *(undefined4 *)(puVar5 + -8) = 0x6810ae;
            _free(*(void **)(puVar5 + -4));
          }
        }
      }
LAB_006810af:
      if (local_24 != 0) {
        *(undefined1 **)(puVar5 + -4) = puVar6;
        *(undefined4 *)(puVar5 + -8) = 0x6810bd;
        _free(*(void **)(puVar5 + -4));
        return local_2c;
      }
      return local_2c;
    }
  }
  return 0;
}
