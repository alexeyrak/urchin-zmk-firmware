#pragma once

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <behaviors/unicode.dtsi>

&uc {
  default-mode = <UC_MODE_MACOS>;
};

// Lowercase Cyrillic
#define UC_CYR_A &uc 0x0430 0x0410 // а А
#define UC_CYR_B &uc 0x0431 0x0411 // б Б
#define UC_CYR_V &uc 0x0432 0x0412 // в В
#define UC_CYR_G &uc 0x0433 0x0413 // г Г
#define UC_CYR_D &uc 0x0434 0x0414 // д Д
#define UC_CYR_E &uc 0x0435 0x0415 // е Е
#define UC_CYR_YO &uc 0x0451 0x0401 // ё Ё
#define UC_CYR_ZH &uc 0x0436 0x0416 // ж Ж
#define UC_CYR_Z &uc 0x0437 0x0417 // з З
#define UC_CYR_I &uc 0x0438 0x0418 // и И
#define UC_CYR_SHORT_I &uc 0x0439 0x0419 // й Й
#define UC_CYR_K &uc 0x043A 0x041A // к К
#define UC_CYR_L &uc 0x043B 0x041B // л Л
#define UC_CYR_M &uc 0x043C 0x041C // м М
#define UC_CYR_N &uc 0x043D 0x041D // н Н
#define UC_CYR_O &uc 0x043E 0x041E // о О
#define UC_CYR_P &uc 0x043F 0x041F // п П
#define UC_CYR_R &uc 0x0440 0x0420 // р Р
#define UC_CYR_S &uc 0x0441 0x0421 // с С
#define UC_CYR_T &uc 0x0442 0x0422 // т Т
#define UC_CYR_U &uc 0x0443 0x0423 // у У
#define UC_CYR_F &uc 0x0444 0x0424 // ф Ф
#define UC_CYR_H &uc 0x0445 0x0425 // х Х
#define UC_CYR_TS &uc 0x0446 0x0426 // ц Ц
#define UC_CYR_CH &uc 0x0447 0x0427 // ч Ч
#define UC_CYR_SH &uc 0x0448 0x0428 // ш Ш
#define UC_CYR_SHCH &uc 0x0449 0x0429 // щ Щ
#define UC_CYR_HARD_SIGN &uc 0x044A 0x042A // ъ Ъ
#define UC_CYR_Y &uc 0x044B 0x042B // ы Ы
#define UC_CYR_SOFT_SIGN &uc 0x044C 0x042C // ь Ь
#define UC_CYR_E_REV &uc 0x044D 0x042D // э Э
#define UC_CYR_YU &uc 0x044E 0x042E // ю Ю
#define UC_CYR_YA &uc 0x044F 0x042F // я Я

// Ukrainian specific lowercase (from provided list)
#define UC_CYR_GHE_UPTURN &uc 0x0491 0x0490 // ґ Ґ
#define UC_CYR_YI &uc 0x0457 0x0407 // ї Ї
#define UC_CYR_IE &uc 0x0454 0x0404 // є Є
#define UC_CYR_I_DOT &uc 0x0456 0x0406 // і І



#define UC_MAC &uc UC_SET_MACOS
#define UC_LINuX &uc UC_SET_LINUX
#define UC_WIN &uc UC_SET_WIN_COMPOSE






























// Ukrainian specific uppercase (from provided list)




