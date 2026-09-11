/* spd-match: far pct=14.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_12 */
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

extern int DAT_006ee180;
extern int DAT_006ee18c;
extern void LAB_006846be(void);

int __cdecl FID_conflict___getch_lk(void)

{
  uint uVar1;
  byte *pbVar2;
  BOOL BVar3;
  _INPUT_RECORD local_20;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_006ee180 != 0xffffffff) {
    uVar1 = DAT_006ee180 & 0xff;
    DAT_006ee180 = 0xffffffff;
    return uVar1;
  }
  if (DAT_006ee18c == (HANDLE)0xffffffff) {
    return -1;
  }
  if (DAT_006ee18c == (HANDLE)0xfffffffe) {
    ___initconin();
  }
  GetConsoleMode(DAT_006ee18c,&local_c);
  SetConsoleMode(DAT_006ee18c,0);
  do {
    do {
      BVar3 = ReadConsoleInputA(DAT_006ee18c,&local_20,1,&local_8);
      if ((BVar3 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_006846be;
      }
    } while ((local_20.EventType != 1) || (local_20.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)local_20.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_006846be;
    pbVar2 = (byte *)__getextendedkeycode(&local_20.Event);
  } while (pbVar2 == (byte *)0x0);
  uVar1 = (uint)*pbVar2;
  DAT_006ee180 = (uint)pbVar2[1];
LAB_006846be:
  SetConsoleMode(DAT_006ee18c,local_c);
  return uVar1;
}
