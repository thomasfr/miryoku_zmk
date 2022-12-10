// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_ALPHAS_QWERTY
//#define MIRYOKU_TAP_QWERTY
//#define MIRYOKU_EXTRA_QWERTY
//#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_MAC
//#define MIRYOKU_LAYERS_FLIP
//#define MIRYOKU_MAPPING_EXTENDED_THUMBS

#define LOPT         LALT
#define ROPT         RALT
#define SH_APPS      C_AC_DESKTOP_SHOW_ALL_APPLICATIONS
#define SH_WINS      C_AC_DESKTOP_SHOW_ALL_WINDOWS
#define LHYPER       LS(LC(LA(LCMD)))
#define RHYPER       RS(RC(RA(RCMD)))
#define MEH          LS(LC(LALT))
#define EURO         LS(LA(N2))

#define HYPER_1      LS(LC(LA(LG(N1))))
#define HYPER_2      LS(LC(LA(LG(N2))))
#define HYPER_3      LS(LC(LA(LG(N3))))
#define HYPER_4      LS(LC(LA(LG(N4))))
#define HYPER_5      LS(LC(LA(LG(N5))))
#define SCR_AREA     LG(LS(N4))
#define SCR_CLP_AREA LG(LS(LC(N4)))
#define SCR_WIN      LG(LS(N5))


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(PLAIN,  "Plain") \
MIRYOKU_X(ONEHAND,"Onehand")

#define U_BASE      0
#define U_NAV       1
#define U_MOUSE     2
#define U_MEDIA     3
#define U_NUM       4
#define U_SYM       5
#define U_FUN       6
#define U_PLAIN     7
#define U_ONEHAND   8


#define MIRYOKU_LAYER_BASE \
U_TOG(Q, U_ONEHAND),&kp W,            &kp E,             &kp R,             &kp T,             /***/         &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                 \
U_MT(LSHFT, A),    U_MT(LCTRL, S),    U_MT(LOPT, D),     U_MT(LCMD, F),     U_MT(LHYPER, G),   /***/         U_MT(RHYPER, H),   U_MT(RCMD, J),     U_MT(ROPT, K),     U_MT(RCTRL, L),    U_MT(RSHFT, SQT),      \
U_LT(U_PLAIN, Z),  &kp X,             &kp C,             &kp V,             &kp B,             /***/         &kp N,             &kp M,             U_COMMA_SEMI,      U_DOT_COLON,       U_FSLH_BSLH,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),/***/         U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP




#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            U_NA,              U_NA,              &u_to_U_BASE,      U_NA,              /***/          U_NA,              U_NA,              &kp C_BRI_UP,      &kp C_BRI_DN,      U_NA,              \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp LHYPER,        /***/          &kp C_PREV,        &kp C_PP,          &kp C_VOL_UP,      &kp C_VOL_DN,      &kp C_NEXT,        \
U_NA,              U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              /***/          U_NA,              U_NA,              U_NA,              &kp K_MUTE,        U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              /***/          &kp HYPER_3,       &kp HYPER_4,       &kp HYPER_5,       U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            U_NA,              U_NA,              &u_to_U_BASE,      U_NA,              /***/          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp LHYPER,        /***/          &u_caps_word,      &kp LEFT,          &kp UP,            &kp DOWN,          &kp RIGHT,         \
U_NA,              U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              /***/          &kp INS,           &kp HOME,          &kp PG_UP,         &kp PG_DN,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              /***/          &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            U_NA,              U_NA,              &u_to_U_BASE,      U_NA,              /***/          U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LCMD,          &kp LHYPER,        /***/          U_NU,              U_MS_L,            U_MS_U,            U_MS_D,            U_MS_R,            \
U_NA,              U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              /***/          U_NU,              U_WH_R,            U_WH_D,            U_WH_U,            U_WH_L,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              /***/          U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP





#define MIRYOKU_LAYER_SYM \
&kp CARET,         &kp MINUS,         &kp LEFT_BRACKET,   &kp RIGHT_BRACKET,&kp PIPE,          /***/          &kp TILDE,         &kp FSLH,          &kp QMARK,         &dbl_arrow,        &dbl_arrow,        \
&kp AT,            &kp LEFT_BRACE,    &kp RIGHT_BRACE,    &kp EQUAL,        &kp STAR,          /***/          &kp DOLLAR,        &kp SQT,           &kp LPAR,          &kp RPAR,          &kp DQT,           \
&kp PERCENT,       &kp PLUS,          &kp LESS_THAN,      &kp GREATER_THAN, &kp AMPERSAND,     /***/          &kp GRAVE,         &kp HASH,          &kp SEMI,          &kp COLON,         &kp BSLH,          \
U_NP,              U_NP,              &kp DOT,            &kp EXCLAMATION,  &kp UNDER,         /***/          U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp CARET,         &kp N7,            &kp N8,            &kp N9,            &kp BACKSLASH,     /***/          U_NA,              &u_to_U_BASE,      U_NA,              U_NA,              U_BOOT,            \
&kp EURO,          &kp N4,            &kp N5,            &kp N6,            &kp STAR,          /***/          &kp RHYPER,        &kp RCMD,          &kp ROPT,          &kp RCTRL,         &kp RSHFT,         \
&kp PERCENT,       &kp N1,            &kp N2,            &kp N3,            &kp PLUS,          /***/          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         /***/          U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,              U_NA,              &kp SH_APPS,       &kp SH_WINS,       &kp SCR_AREA,      /***/          U_NA,              &u_to_U_BASE,      U_NA,              U_NA,              U_BOOT,            \
U_NA,              U_NA,              &kp LC(LG(Q)),     &kp LG(Q),         &kp SCR_CLP_AREA,  /***/          &kp RHYPER,        &kp RCMD,          &kp ROPT,          &kp RCTRL,         &kp RSHFT,         \
U_NA,              U_NA,              U_NA,              U_NA,              &kp SCR_WIN,       /***/          U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              U_NA,              \
U_NP,              U_NP,              &kp HYPER_1,       &kp HYPER_2,       &kp LG(SPC),       /***/          U_NA,              U_NA,              U_NA,              U_NP,              U_NP




#define MIRYOKU_LAYER_PLAIN \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             /***/         &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                 \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             /***/         &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,               \
U_NA,              &kp X,             &kp C,             &kp V,             &kp B,             /***/         &kp N,             &kp M,             U_COMMA_SEMI,      U_DOT_COLON,       U_FSLH_BSLH,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),/***/         U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_ONEHAND \
U_NA,              U_CUT,             U_CPY,             U_PST,             U_NA,             /***/         &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                 \
U_NA,              &kp DEL,           &kp RET,           &kp BSPC,          U_NA,             /***/         &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,               \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,             /***/         &kp N,             &kp M,             U_COMMA_SEMI,      U_DOT_COLON,       U_FSLH_BSLH,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),/***/        U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYERMAPPING_ONEHAND MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_PLAIN MIRYOKU_MAPPING
