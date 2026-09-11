/* spd-match: far pct=17.53 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_005B1AC5 */
#include "ghidra_compat.h"
double __cdecl _atof(const char *);
int _isdigit(int);
int _tolower(int);
struct ThisCallBox { int end_ptr; int FUN_005b1ac5(char *p, double *out); };
int ThisCallBox::FUN_005b1ac5(char *p, double *out) {
  char *ebx = p;
  if (ebx >= (char *)this->end_ptr) goto label_exit;
  if (!_isdigit(*ebx)) goto label_dot_check;
  do { ebx++; if (ebx >= (char *)this->end_ptr) break; } while (_isdigit(*ebx));
  if (ebx >= (char *)this->end_ptr || *ebx != '.') return 0;
  ebx++;
  while (ebx < (char *)this->end_ptr && _isdigit(*ebx)) ebx++;
  goto label_check_exp;
label_dot_check:
  if (ebx + 1 >= (char *)this->end_ptr || *ebx != '.') return 0;
  if (!_isdigit(ebx[1])) return 0;
  ebx += 2;
  while (ebx < (char *)this->end_ptr && _isdigit(*ebx)) ebx++;
label_check_exp:
  return (int)(ebx - p);
label_exit: return 0;
}
