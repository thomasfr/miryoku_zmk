// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
//#define MIRYOKU_EXTRA_QWERTY
//#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_MAC
//#define MIRYOKU_LAYERS_FLIP
//#define MIRYOKU_MAPPING_EXTENDED_THUMBS

#define LOPT     LALT
#define SH_APPS  C_AC_DESKTOP_SHOW_ALL_APPLICATIONS
#define SH_WINS  C_AC_DESKTOP_SHOW_ALL_WINDOWS
#define HYPER    LS(LC(LA(LCMD)))
#define MEH      LS(LC(LALT))

#define HYPER_C      LS(LC(LA(LG(C))))
#define SCR_AREA     LG(LS(N4))
#define SCR_CLP_AREA LG(LS(LC(N4)))
#define SCR_WIN      LG(LS(N5))

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LSHFT, A),    U_MT(LCTRL, S),    U_MT(LOPT, D),     U_MT(LCMD, F),     U_MT(MEH G),       U_MT(HYPER H),     U_MT(LCMD J),      U_MT(LOPT, K),     U_MT(LCTRL, L),    U_MT(LSHFT, SQT),   \
U_LT(U_BUTTON, Z), &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP



#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_NA,              &kp K_MUTE,        U_NA,              U_NA,         \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp MEH,           U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_PP,          &kp C_NEXT,        &kp K_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp MEH,           &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp LG(SPC),       &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp MEH,           U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              




#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          &kp HYPER,         &kp LCMD,          &kp LOPT,          &kp LCTRL,         &kp LSHFT,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           &kp HYPER,         &kp LCMD,          &kp LOPT,          &kp LCTRL,         &kp LSHFT,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,              U_NA,              &kp C_BRI_DN,      &kp C_BRI_UP,      &kp SCR_AREA,      U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_NA,              U_NA,              &kp SH_APPS,       &kp SH_WINS,       &kp SCR_CLP_AREA,  &kp HYPER,         &kp LCMD,          &kp LOPT,          &kp LCTRL,         &kp LSHFT,          \
U_NA,              U_NA,              U_NA,              U_NA,              &kp SCR_WIN,       U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp HYPER_C,       &kp SPC,           &kp LG(SPC),       U_NA,              U_NA,              U_NA,              U_NP,              U_NP




#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp MEH,           &kp HYPER,         &kp LCMD,          &kp LOPT,          &kp LCTRL,         &kp LSHFT,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP