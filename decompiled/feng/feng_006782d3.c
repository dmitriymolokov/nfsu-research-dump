/* spd-match: far pct=4.51 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2146 */
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
extern int DAT_00717d78;
extern int DAT_00717e90;
extern int DAT_00717ea0;
extern void LAB_00678339(void);
extern void LAB_00678508(void);
extern void LAB_00678607(void);
extern void LAB_0067864e(void);
extern void LAB_00678676(void);
extern char stack0x00000000;
extern char stack0xffffff90;
extern char stack0xffffff94;
extern char stack0xffffff98;
extern char stack0xffffff9c;
extern char stack0xffffffa0;
extern char stack0xffffffa4;
extern char stack0xffffffa8;

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  size_t _Size;
  LPCSTR pCVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  LPSTR lpDestStr;
  undefined4 uStackY_74;
  uint local_4c;
  LPCSTR local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  if (DAT_00717d78 == 0) {
    uStackY_74 = 0x678300;
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_00717d78 = 2;
      }
    }
    else {
      DAT_00717d78 = 1;
    }
  }
  pcVar5 = (char *)_DwMapFlag;
  pCVar9 = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    do {
      pCVar9 = pCVar9 + -1;
      if (*pcVar5 == '\0') goto LAB_00678339;
      pcVar5 = pcVar5 + 1;
    } while (pCVar9 != (LPCSTR)0x0);
    pCVar9 = (LPCSTR)0xffffffff;
LAB_00678339:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar9);
  }
  if ((DAT_00717d78 != 2) && (DAT_00717d78 != 0)) {
    if (DAT_00717d78 == 1) {
      iVar3 = 0;
      bVar2 = false;
      bVar1 = false;
      if (_CchDest == 0) {
        _CchDest = DAT_00717ea0;
      }
      uStackY_74 = 0x678399;
      iVar6 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      if (iVar6 != 0) {
        puVar7 = (undefined1 *)(iVar6 * 2 + 3U & 0xfffffffc);
        iVar8 = -(int)puVar7;
        local_30 = &stack0xffffffa8 + iVar8;
        if (&stack0xffffffa8 == puVar7) {
          *(int *)(&stack0xffffffa4 + iVar8) = iVar6 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar8) = 0x6783f2;
          local_30 = _malloc(*(size_t *)(&stack0xffffffa4 + iVar8));
          if (local_30 == (void *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)(&stack0xffffffa4 + iVar8) = iVar6;
        *(undefined1 **)(&stack0xffffffa0 + iVar8) = local_30;
        *(LPCSTR *)(&stack0xffffff9c + iVar8) = _LpSrcStr;
        *(DWORD *)(&stack0xffffff98 + iVar8) = _DwMapFlag;
        *(undefined4 *)(&stack0xffffff94 + iVar8) = 1;
        *(int *)(&stack0xffffff90 + iVar8) = _CchDest;
        puVar10 = (undefined1 *)((int)&uStackY_74 + iVar8);
        *(undefined4 *)((int)&uStackY_74 + iVar8) = 0x67841a;
        iVar8 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar8),
                                    *(DWORD *)(&stack0xffffff94 + iVar8),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar8),
                                    *(int *)(&stack0xffffff9c + iVar8),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar8),
                                    *(int *)(&stack0xffffffa4 + iVar8));
        puVar7 = puVar10;
        if (iVar8 != 0) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(int *)(puVar10 + -0xc) = iVar6;
          *(undefined1 **)(puVar10 + -0x10) = local_30;
          *(LPCWSTR *)(puVar10 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar10 + -0x18) = _Plocinfo;
          puVar11 = puVar10 + -0x1c;
          *(undefined4 *)(puVar10 + -0x1c) = 0x678434;
          iVar3 = LCMapStringW(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                               *(LPCWSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                               *(LPWSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
          puVar7 = puVar11;
          if (iVar3 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar7 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar11 + -4) = 0x678489;
              iVar8 = -(int)puVar7;
              local_34 = puVar11 + iVar8;
              if (puVar11 == puVar7) {
                *(int *)(puVar11 + iVar8 + -4) = iVar3 * 2;
                *(undefined4 *)(puVar11 + iVar8 + -8) = 0x6784c0;
                local_34 = _malloc(*(size_t *)(puVar11 + iVar8 + -4));
                puVar7 = puVar11 + iVar8;
                if (local_34 == (undefined1 *)0x0) goto LAB_00678508;
                bVar1 = true;
              }
              *(int *)(puVar11 + iVar8 + -4) = iVar3;
              *(undefined1 **)(puVar11 + iVar8 + -8) = local_34;
              *(int *)(puVar11 + iVar8 + -0xc) = iVar6;
              *(undefined1 **)(puVar11 + iVar8 + -0x10) = local_30;
              *(LPCWSTR *)(puVar11 + iVar8 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + iVar8 + -0x18) = _Plocinfo;
              puVar13 = puVar11 + iVar8 + -0x1c;
              *(undefined4 *)(puVar11 + iVar8 + -0x1c) = 0x6784e3;
              iVar6 = LCMapStringW(*(LCID *)(puVar11 + iVar8 + -0x18),
                                   *(DWORD *)(puVar11 + iVar8 + -0x14),
                                   *(LPCWSTR *)(puVar11 + iVar8 + -0x10),
                                   *(int *)(puVar11 + iVar8 + -0xc),
                                   *(LPWSTR *)(puVar11 + iVar8 + -8),*(int *)(puVar11 + iVar8 + -4))
              ;
              puVar7 = puVar13;
              if (iVar6 != 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                *(undefined4 *)(puVar13 + -8) = 0;
                if (_LpDestStr == (LPSTR)0x0) {
                  *(undefined4 *)(puVar13 + -0xc) = 0;
                  *(undefined4 *)(puVar13 + -0x10) = 0;
                }
                else {
                  *(LPSTR *)(puVar13 + -0xc) = _LpDestStr;
                  *(int *)(puVar13 + -0x10) = _CchSrc;
                }
                *(int *)(puVar13 + -0x14) = iVar3;
                *(undefined1 **)(puVar13 + -0x18) = local_34;
                *(undefined4 *)(puVar13 + -0x1c) = 0;
                *(int *)(puVar13 + -0x20) = _CchDest;
                puVar7 = puVar13 + -0x24;
                *(undefined4 *)(puVar13 + -0x24) = 0x678506;
                iVar3 = WideCharToMultiByte(*(UINT *)(puVar13 + -0x20),*(DWORD *)(puVar13 + -0x1c),
                                            *(LPCWSTR *)(puVar13 + -0x18),*(int *)(puVar13 + -0x14),
                                            *(LPSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                            *(LPCSTR *)(puVar13 + -8),*(LPBOOL *)(puVar13 + -4));
              }
            }
            else if ((_LpDestStr != (LPSTR)0x0) && (iVar3 <= (int)_LpDestStr)) {
              *(LPSTR *)(puVar11 + -4) = _LpDestStr;
              *(int *)(puVar11 + -8) = _CchSrc;
              *(int *)(puVar11 + -0xc) = iVar6;
              *(undefined1 **)(puVar11 + -0x10) = local_30;
              *(LPCWSTR *)(puVar11 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar11 + -0x18) = _Plocinfo;
              puVar12 = puVar11 + -0x1c;
              *(undefined4 *)(puVar11 + -0x1c) = 0x67846f;
              LCMapStringW(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                           *(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                           *(LPWSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
              puVar7 = puVar12;
            }
          }
        }
LAB_00678508:
        if (bVar1) {
          *(undefined1 **)(puVar7 + -4) = local_34;
          *(undefined4 *)(puVar7 + -8) = 0x678515;
          _free(*(void **)(puVar7 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar7 + -4) = local_30;
          *(undefined4 *)(puVar7 + -8) = 0x678523;
          _free(*(void **)(puVar7 + -4));
          return iVar3;
        }
        return iVar3;
      }
    }
    return 0;
  }
  local_38 = (LPCSTR)0x0;
  lpDestStr = (LPSTR)0x0;
  bVar1 = false;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = DAT_00717e90;
  }
  if (_CchDest == 0) {
    _CchDest = DAT_00717ea0;
  }
  iVar3 = FUN_0068088e();
  if (iVar3 == -1) {
    return 0;
  }
  if (iVar3 == _CchDest) {
    uStackY_74 = 0x678674;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_00678676;
  }
  uStackY_74 = 0x678580;
  local_38 = (LPCSTR)FUN_006808d7();
  if (local_38 == (LPCSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0x67859c;
  _Size = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_38,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (_Size != 0) {
    lpDestStr = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,_Size);
    if (&stack0x00000000 == (undefined1 *)0x58) {
      lpDestStr = _malloc(_Size);
      if (lpDestStr != (LPSTR)0x0) {
        _memset(lpDestStr,0,_Size);
        bVar1 = true;
        goto LAB_00678607;
      }
    }
    else {
LAB_00678607:
      uStackY_74 = 0x67861d;
      iVar3 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_38,(int)_LpSrcStr,lpDestStr,
                           _Size);
      if (iVar3 != 0) {
        uStackY_74 = 0x67863e;
        iVar3 = FUN_006808d7();
        local_4c = (uint)(iVar3 != 0);
        goto LAB_0067864e;
      }
    }
    local_4c = 0;
  }
LAB_0067864e:
  if (bVar1) {
    _free(lpDestStr);
  }
LAB_00678676:
  if (local_38 != (LPCSTR)0x0) {
    _free(local_38);
    return local_4c;
  }
  return local_4c;
}
