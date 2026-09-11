/* spd-match: far pct=55.75 flags=/O2 /c /nologo /TC method=m8_known_flag source=m8/composer/m8.composer/va_004472E0 */
#include <windows.h>
extern int __cdecl FUN_00401a10(const char*, int);
extern void __cdecl FUN_004471b0(int, int);
extern void __cdecl FUN_004b6390(void);
extern void __cdecl FUN_00447600(void);
extern void __cdecl FUN_00411830(void);
extern void __stdcall FUN_006720fb(int);
extern int DAT_0073465c;
extern unsigned char DAT_0077a918;
extern void* DAT_0077a904;
extern void* DAT_0077a90c;
void FUN_004472e0(int arg1, int arg2) {
  if ((unsigned char)FUN_00401a10((const char*)0x006ca110, 1)) {
    FUN_006720fb(0);
  }
  FUN_004471b0(arg1, arg2);
  if (DAT_0073465c != 0) {
    FUN_004b6390();
  } else {
    if (DAT_0077a918) {
      DAT_0077a918 = 0;
    }
    DAT_0077a904 = (void*)0x00448b10;
    DAT_0077a90c = (void*)0x006c9ea0;
  }
  FUN_00447600();
  FUN_00411830();
  FUN_006720fb(0);
}
