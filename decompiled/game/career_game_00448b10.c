/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m85_nocd_recover source=m8.5/va_00448B10 */
/* M8.5: recovered from tools/nfsu_patch/Speed.exe (no-CD) — Ghidra gap LAB_00448b10.
 * LoadingFrontEnd gameflow. Readable C; score TBD (new VA).
 */
#include "ghidra_compat.h"

int __cdecl FUN_004482f0(char *path, int a, int b, int c, int d);
void __cdecl FUN_00448110(void *callback, int unused, void *file_slot);
int __cdecl FUN_00585fa0(void);
int __cdecl FUN_00431df0(void);
int __cdecl FUN_005657d0(void);
int __cdecl FUN_004f3f90(char *name, int *list_head);
int __cdecl FUN_004f61f0(char *name);
int __cdecl FUN_0059f7c0(int a, int b, int c, int d);
int __cdecl FUN_00408610(void);
int __cdecl FUN_005697b0(void);
int __cdecl FUN_004af4a0(void);
int __cdecl FUN_004eebf0(int a, int b);
int __cdecl FUN_004de440(void);
int __cdecl FUN_00567da0(int pool, char *name);
int __cdecl FUN_0051da90(int a, void *cb);
int __cdecl FUN_00536690(void);
int __cdecl FUN_004483c0(void);

extern int DAT_0077a920;
extern int _DAT_007360dc;
extern float DAT_0072cbd4;
extern int DAT_0072cbe4;
extern unsigned char DAT_007301d4[4];
extern int DAT_007360c0;
extern int DAT_007360c4;
extern int DAT_007360c8;
extern int DAT_007349a4;
extern int DAT_00746104;
extern int DAT_0077a904;
extern int DAT_0077a918;
extern int DAT_0077a91c;
extern int _DAT_0077a90c;
extern int DAT_00735568;
extern int DAT_00735564;
extern int DAT_0073556c;
extern int _DAT_00735570;
extern unsigned char DAT_0073578c[4];
extern int DAT_00707018;
extern int DAT_00735790;
extern int DAT_007363b4;
extern int DAT_0070f460;
extern unsigned char DAT_006f1dd8[4];
extern unsigned char DAT_007356a8[4];
extern unsigned char DAT_007360e8[4];
extern code *DAT_0069715c;

#define FE_PENDING_LOADS (*(int *)(void *)DAT_007360e8)
#define FE_DAT_007301d4 (*(int *)(void *)DAT_007301d4)
#define FE_DAT_0073578c (*(int *)(void *)DAT_0073578c)
#define FE_DAT_007356a8 (*(int *)(void *)DAT_007356a8)
#define FE_DAT_006f1dd8 (*(int *)(void *)DAT_006f1dd8)

void LAB_00448b10(int unused);
void LAB_00448ac0(int unused);
void LAB_00448a40(int unused);
void LAB_00448a10(int unused);
void LAB_00448c40(int unused);

static void copy_name_into_slot(char *dst, char *src, int maxn)
{
  int n;
  if (dst == (char *)0x0 || src == (char *)0x0) {
    return;
  }
  n = maxn;
  for (; n != 0; n = n + -1) {
    char c = *src;
    *dst = c;
    if (c == '\0') {
      break;
    }
    dst = dst + 1;
    src = src + 1;
  }
}

static void kick_and_drain(void *callback, void *slot)
{
  if (slot == (void *)0x0) {
    return;
  }
  FUN_00448110(callback, 0, slot);
  while (FE_PENDING_LOADS != 0) {
    if (FUN_004483c0() == 0) {
      break;
    }
  }
}

void LAB_00448a10(int unused)
{
  (void)unused;
  if (DAT_0077a918 != 0) {
    DAT_0077a918 = 0;
  }
  _DAT_0077a90c = (int)"EndGameFlowLoadingFrontEnd";
  DAT_0077a904 = (int)&LAB_00448c40;
}

void LAB_00448a40(int unused)
{
  (void)unused;
  if (DAT_0077a904 != 0) {
    DAT_0077a904 = 0;
  }
  DAT_0077a918 = 1;
  DAT_0077a91c = (int)"GameFlowLoadingFrontEndPart3";
  if (FE_DAT_006f1dd8 == 1) {
    FUN_0051da90(FE_DAT_007356a8, &LAB_00448a10);
    FUN_00536690();
    return;
  }
  DAT_0077a918 = 0;
  DAT_0077a904 = (int)&LAB_00448c40;
  _DAT_0077a90c = (int)"EndGameFlowLoadingFrontEnd";
}

void LAB_00448ac0(int unused)
{
  void *slot;

  (void)unused;
  if (DAT_0077a904 != 0) {
    DAT_0077a904 = 0;
  }
  DAT_0077a918 = 1;
  DAT_0077a91c = (int)"GameFlowLoadingFrontEndPart2";
  slot = (void *)(long)FUN_004482f0("FRONTEND\\ROAD_SEGMENT.BIN", 2, 1, 0, 0);
  kick_and_drain((void *)&LAB_00448a40, slot);
}

void LAB_00448b10(int unused)
{
  int eax;
  int ecx;
  void *slot;

  (void)unused;

  DAT_0077a920 = 1;
  _DAT_007360dc = (int)"Load";
  FUN_00585fa0();
  DAT_0072cbd4 = 0.0f;
  DAT_0072cbe4 = 0;
  FUN_00431df0();

  eax = FE_DAT_007301d4;
  if (eax == 0) {
    ecx = 0;
  } else {
    ecx = FUN_005657d0();
    eax = FE_DAT_007301d4;
  }
  DAT_007360c0 = ecx;
  DAT_007360c4 = (eax != 0) ? 0x06300000 : 0;
  DAT_007360c8 = DAT_007349a4;

  eax = FUN_004f3f90("PC_Loading.fng", &DAT_00746104);
  if ((eax == 0) || (*(int *)(eax + 0x18) == 0)) {
    FUN_004f61f0("PC_Loading.fng");
  }

  FUN_0059f7c0(1, 1, 0, 0);

  slot = (void *)(long)FUN_004482f0("FRONTEND\\FRONTA.BUN", 1, 1, 0, 0);
  kick_and_drain((void *)0x0, slot);

  if (DAT_0077a904 != 0) {
    DAT_0077a904 = 0;
  }

  DAT_0077a918 = 1;
  DAT_0077a91c = (int)"GameFlowLoadingFrontEndPart1";
  slot = (void *)(long)FUN_004482f0("FRONTEND\\FRONTB.LZC", 2, 9, 0, 0);
  if (slot != (void *)0x0) {
    copy_name_into_slot((char *)slot + 0x18, "FRONTEND\\FRONTB.BUN", 0x27);
  }
  kick_and_drain((void *)&LAB_00448ac0, slot);
}

void FUN_00448b10(void)
{
  LAB_00448b10(0);
}

void LAB_00448c40(int unused)
{
  int eax;
  int esi;

  (void)unused;

  DAT_00735564 = 0;
  if ((DAT_00735568 != 0) || (DAT_0073556c != 0)) {
    FUN_00408610();
    DAT_00735568 = 0;
    DAT_0073556c = 0;
    _DAT_00735570 = 0;
  }
  _DAT_007360dc = 0;
  FUN_005697b0();
  FUN_004af4a0();

  eax = FE_DAT_0073578c;
  if (eax != 0) {
    esi = eax;
    eax = FUN_004f3f90("PC_Loading.fng", &DAT_00746104);
    if ((eax != 0) && (*(int *)(eax + 0x18) != 0)) {
      FUN_004eebf0(*(int *)(esi + 8), *(int *)(eax + 0x18));
    }
  }
  if (DAT_00707018 != 0) {
    FUN_004de440();
    DAT_00707018 = 0;
  }
  esi = DAT_00735790;
  eax = FUN_00567da0(esi, "MU_Garage.fng");
  if (eax != 0) {
    FUN_004f61f0("MU_Garage.fng");
  }

  DAT_0077a920 = 3;
  if (DAT_007363b4 != 0) {
    if (DAT_0069715c != (code *)0x0) {
      (*DAT_0069715c)(DAT_0070f460);
    }
  }
}

void FUN_00448c40(void)
{
  LAB_00448c40(0);
}
