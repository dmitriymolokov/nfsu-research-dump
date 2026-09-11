/* spd-match: far pct=10.16 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0054F200 */
#include <windows.h>
extern int DAT_00777cb4;
extern int DAT_0070649c;
extern int DAT_007064a0;
extern void* DAT_006cc568;
extern void* DAT_00748f70;
extern int DAT_0073578c;
extern char* DAT_006b9172;
int FUN_0059fb80(void);
void FUN_004f67f0(void* fmt, ...);
int FUN_004abd40(void*);
int FUN_00549c40(void);
void FUN_004f9f30(void);
void FUN_004f68c0(int, char*, char*, int);
int FUN_004f65d0(void);
int FUN_004ffb70(void);
int FUN_004ef050(int);
char FUN_004f7660(float, float);
void FUN_004f9ed0(void);
void FUN_004f0700(int, int, int, int, int);
void* FUN_00549ca0(int, int);
int FUN_004abcd0(void*);
void FUN_00549d30(int, int, int*, int*);
void FUN_0054f200(int param_1) {
  int iVar5, iVar7, iVar8;
  float f1 = (float)(DAT_0070649c - 0x140);
  float f2 = (float)(DAT_007064a0 - 0xf0);
  iVar5 = FUN_0059fb80();
  if (iVar5 == 0) iVar5 = FUN_0059fb80();
  FUN_004f67f0(&DAT_006cc568, iVar5);
  FUN_004abd40(&DAT_00748f70);
  FUN_00549c40();
  FUN_004f9f30();
  if (FUN_004f7660(f1, f2)) { FUN_004f9ed0(); }
}
