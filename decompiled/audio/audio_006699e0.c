/* spd-match: far pct=8.20 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_12 */
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

undefined4 FUN_006699e0(HLINE param_1)

{
  LONG LVar1;
  int iVar2;
  varstring_tag *pvVar3;
  uint unaff_retaddr;
  varstring_tag local_130;
  undefined4 local_118;
  uint local_c;
  
  local_c = DAT_006eb720 ^ unaff_retaddr;
  pvVar3 = &local_130;
  for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
    pvVar3->dwTotalSize = 0;
    pvVar3 = (varstring_tag *)&pvVar3->dwNeededSize;
  }
  local_130.dwTotalSize = 0x11c;
  LVar1 = lineGetID(param_1,0,0,1,&local_130,"comm/datamodem");
  if (LVar1 != 0) {
    return 0xffffffff;
  }
  return local_118;
}
