/* spd-match: far pct=2.96 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_12 */
#include "ghidra_compat.h"

/* p0_12 H2: targeted declarations for audio/console pseudo-C. */
typedef void *HLINEAPP;

typedef struct varstring_tag {
  DWORD dwTotalSize;
  DWORD dwNeededSize;
} varstring_tag;
LONG __stdcall lineGetID(
    HLINE, DWORD, DWORD, DWORD, void *, LPCSTR);

typedef struct lineextensionid_tag {
  DWORD dwExtensionID0;
  DWORD dwExtensionID1;
} lineextensionid_tag;
typedef struct linedevcaps_tag {
  DWORD dwTotalSize;
  DWORD dwNeededSize;
  DWORD dwUsedSize;
  DWORD dwLineNameOffset;
  DWORD dwRingModes;
} linedevcaps_tag;
LONG __stdcall lineNegotiateAPIVersion(
    HLINEAPP, DWORD, DWORD, DWORD, DWORD *, lineextensionid_tag *);
LONG __stdcall lineGetDevCaps(
    HLINEAPP, DWORD, DWORD, DWORD, linedevcaps_tag *);
int __cdecl __stricmp(const char *, const char *);
int __cdecl wsprintfA(LPSTR, LPCSTR, ...);

typedef struct p08_control_key_state {
  unsigned char _0_1_;
  unsigned char _1_1_;
  unsigned char _2_1_;
  unsigned char _3_1_;
} p08_control_key_state;
typedef struct p08_key_event {
  BOOL bKeyDown;
} p08_key_event;
typedef struct p08_mouse_event {
  p08_control_key_state dwControlKeyState;
} p08_mouse_event;
typedef struct _INPUT_RECORD {
  WORD EventType;
  union {
    p08_key_event KeyEvent;
    p08_mouse_event MouseEvent;
  } Event;
} _INPUT_RECORD;
BOOL __stdcall GetConsoleMode(HANDLE, DWORD *);
BOOL __stdcall SetConsoleMode(HANDLE, DWORD);
BOOL __stdcall ReadConsoleInputA(HANDLE, _INPUT_RECORD *, DWORD, DWORD *);
int __cdecl ___initconin(void);
byte *__cdecl __getextendedkeycode(void *);

extern int DAT_006eb720;
int unaff_retaddr;

undefined4 FUN_00669f80(int param_1,char *param_2,LPSTR param_3,char *param_4,CHAR param_5)

{
  char cVar1;
  HLINEAPP hLineApp;
  LPSTR pCVar2;
  DWORD DVar3;
  char *pcVar4;
  LONG LVar5;
  char *pcVar6;
  int iVar7;
  linedevcaps_tag *plVar8;
  bool bVar9;
  uint unaff_retaddr;
  DWORD local_42c;
  DWORD local_424;
  lineextensionid_tag local_420;
  linedevcaps_tag local_410 [3];
  uint local_c;
  
  pCVar2 = param_3;
  local_c = DAT_006eb720 ^ unaff_retaddr;
  *param_3 = '*';
  param_3[1] = '\0';
  param_3[2] = '\0';
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0xffffffff;
  }
  if (0x3f < (int)param_4) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 + (2 - (int)(param_2 + 1)) <= param_4) {
      local_42c = 0;
      if (*(int *)(param_1 + 0x70) != 0) {
        do {
          LVar5 = lineNegotiateAPIVersion
                            (*(HLINEAPP *)(param_1 + 0x74),local_42c,0x10004,0x20002,&local_424,
                             &local_420);
          if (LVar5 == 0) {
            hLineApp = *(HLINEAPP *)(param_1 + 0x74);
            plVar8 = local_410;
            for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
              plVar8->dwTotalSize = 0;
              plVar8 = (linedevcaps_tag *)&plVar8->dwNeededSize;
            }
            local_410[0].dwTotalSize = 0x400;
            lineGetDevCaps(hLineApp,local_42c,local_424,0,local_410);
            DVar3 = local_410[0].dwLineNameOffset;
            if (local_410[0].dwRingModes != 0) {
              iVar7 = 10;
              bVar9 = true;
              pcVar4 = param_2;
              pcVar6 = "localhost";
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar9 = *pcVar4 == *pcVar6;
                pcVar4 = pcVar4 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar9);
              pcVar4 = (char *)((int)&local_410[0].dwTotalSize + local_410[0].dwLineNameOffset);
              if (bVar9) {
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                if (param_4 < pcVar6 + (2 - ((int)&local_410[0].dwTotalSize +
                                            local_410[0].dwLineNameOffset + 1))) {
                  return 0xfffffffa;
                }
                if (param_3 != pCVar2) {
                  *param_3 = param_5;
                  param_3 = param_3 + 1;
                  param_4 = param_4 + -1;
                }
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6[(int)param_3 - (int)pcVar4] = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                param_3 = param_3 + ((int)pcVar6 - ((int)&local_410[0].dwTotalSize + DVar3 + 1));
                do {
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                } while (cVar1 != '\0');
                param_4 = param_4 + -((int)pcVar4 - ((int)&local_410[0].dwTotalSize + DVar3 + 1));
              }
              else {
                iVar7 = __stricmp(param_2,pcVar4);
                if (iVar7 == 0) {
                  wsprintfA(param_3,"%d%c",local_42c,0);
                  return 1;
                }
              }
            }
          }
          local_42c = local_42c + 1;
        } while (local_42c < *(uint *)(param_1 + 0x70));
      }
      *param_3 = '\0';
      param_3[1] = '\0';
      return 1;
    }
  }
  return 0xfffffffa;
}
