# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
# 1 "/home/eddieho/tmp/phase2_release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 3
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.3.1 20210824 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define nrf52840 1
#define SUPPORT_LORA 1
#define LORA_IO_SPI_PORT 2
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define LORA_STACK_VER 0x040407
#define RAK4631_V2 .0+RAK5005-O_V1.0 1
#define rak4630 1
#define BATTERY_LEVEL_SUPPORT 1
#define BLE_CENTRAL_SUPPORT 1
#define APP_TIMER_V2 1
#define APP_TIMER_V2_RTC1_ENABLED 1
#define BOARD_PCA10056 1
#define S140 1
#define CONFIG_GPIO_AS_PINRESET 1
#define FLOAT_ABI_HARD 1
#define NRF52840_XXAA 1
#define NRF_SD_BLE_API_VERSION 6
#define USER_UART 1
#define USBD_CDC 1
#define BLE_SUPPORT 1
#define DFU_SUPPORT 1
#define BL_SETTINGS_ACCESS_ONLY 1
#define NRF_DFU_SVCI_ENABLED 1
#define NRF_DFU_TRANSPORT_BLE 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define SOFTDEVICE_PRESENT 1
#define SWI_DISABLE0 1
#define __HEAP_SIZE 7168
#define __STACK_SIZE 7168
#define DEBUG 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_USB 1
#define SUPPORT_BLE 1
#define SUPPORT_NFC 1
#define SUPPORT_SPI 1
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
# 23 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 1 3 4
# 9 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "4.1.0"
#define __NEWLIB__ 4
#define __NEWLIB_MINOR__ 1
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 1 3







#define _STDLIB_H_ 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 77 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN 
# 91 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 3
#define _SUPPORTS_ERREXCEPT 
# 496 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 1


#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
# 11 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1
# 18 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/newlib.h" 3
#define _WANT_IO_C99_FORMATS 1


#define _WANT_IO_LONG_LONG 1


#define _WANT_REGISTER_FINI 1
# 37 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/newlib.h" 3
#define _REENT_CHECK_VERIFY 1





#define _MB_LEN_MAX 1
# 53 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/newlib.h" 3
#define HAVE_INITFINI_ARRAY 1



#define _ATEXIT_DYNAMIC_ALLOC 1


#define _HAVE_LONG_DOUBLE 1


#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL 1


#define _LDBL_EQ_DBL 1


#define _FVWRITE_IN_STREAMIO 1


#define _FSEEK_OPTIMIZATION 1


#define _WIDE_ORIENT 1


#define _UNBUF_STREAM_OPT 1
# 95 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/newlib.h" 3
#define _RETARGETABLE_LOCKING 1
# 11 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/config.h" 1 3

#define __SYS_CONFIG_H__ 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/config.h" 2 3
# 224 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/config.h" 3
#define _POINTER_INT long





#undef __RAND_MAX



#define __RAND_MAX 0x7fffffff
# 250 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/config.h" 3
#define __EXPORT 



#define __IMPORT 






#define _READ_WRITE_RETURN_TYPE int





#define _READ_WRITE_BUFSIZE_TYPE int
# 12 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 2 3
# 31 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 3
#define _BEGIN_STD_C 
#define _END_STD_C 
#define _NOTHROW 



#define _LONG_DOUBLE long double





#define _ATTRIBUTE(attrs) __attribute__ (attrs)
# 69 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 3
#define _ELIDABLE_INLINE static __inline__



#define _NOINLINE __attribute__ ((__noinline__))
#define _NOINLINE_STATIC _NOINLINE static
# 12 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3

#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 181 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef unsigned int size_t;
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL
# 17 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 39 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 



typedef int ptrdiff_t;
# 155 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 15 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 1 3
# 20 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 3
#define _SYS__TYPES_H 

#define __need_size_t 
#define __need_wint_t 
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 155 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_wchar_t




#define _WINT_T 




typedef unsigned int wint_t;

#undef __need_wint_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 25 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/_types.h" 1 3





#define _MACHINE__TYPES_H 
# 28 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 127 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 3
#undef __size_t



typedef unsigned int __size_t;
# 146 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 3
#define unsigned signed
typedef signed int _ssize_t;
#undef unsigned
# 158 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;



#define _CLOCK_T_ unsigned long


typedef unsigned long __clock_t;




#define _TIME_T_ __int_least64_t

typedef __int_least64_t __time_t;


#define _CLOCKID_T_ unsigned long


typedef unsigned long __clockid_t;

#define _TIMER_T_ unsigned long
typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 2 3

#define _NULL 0



#define __Long long
typedef unsigned long __ULong;
# 34 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/lock.h" 1 3

#define __SYS_LOCK_H__ 
# 33 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; class _LOCK_T lock = &__lock_ ## lock

#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) __retarget_lock_try_acquire_recursive(lock)

extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)
# 35 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};





#define _ATEXIT_SIZE 32

struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
#define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}





#define _REENT_INIT_ATEXIT _NULL, _ATEXIT_INIT,
# 122 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 183 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_SMALL_CHECK_INIT(ptr) 


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _RAND48_SEED_0 (0x330e)
#define _RAND48_SEED_1 (0xabcd)
#define _RAND48_SEED_2 (0x1234)
#define _RAND48_MULT_0 (0xe66d)
#define _RAND48_MULT_1 (0xdeec)
#define _RAND48_MULT_2 (0x0005)
#define _RAND48_ADD (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24
# 613 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};





#define _REENT_STDIO_STREAM(var,index) &(var)->__sf[index]


#define _REENT_INIT(var) { 0, _REENT_STDIO_STREAM(&(var), 0), _REENT_STDIO_STREAM(&(var), 1), _REENT_STDIO_STREAM(&(var), 2), 0, "", 0, _NULL, 0, _NULL, _NULL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, "", {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {0, {0}}, {0, {0}}, {0, {0}}, "", "", 0, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _REENT_INIT_ATEXIT _NULL, {_NULL, 0, _NULL} }
# 751 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_INIT_PTR_ZEROED(var) { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); (var)->_stdout = _REENT_STDIO_STREAM(var, 1); (var)->_stderr = _REENT_STDIO_STREAM(var, 2); (var)->_new._reent._rand_next = 1; (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reent._r48._add = _RAND48_ADD; }
# 765 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_CHECK_RAND48(ptr) 
#define _REENT_CHECK_MP(ptr) 
#define _REENT_CHECK_TM(ptr) 
#define _REENT_CHECK_ASCTIME_BUF(ptr) 
#define _REENT_CHECK_EMERGENCY(ptr) 
#define _REENT_CHECK_MISC(ptr) 
#define _REENT_CHECK_SIGNAL_BUF(ptr) 

#define _REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr) ((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)
#define _REENT_MP_P5S(ptr) ((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr) ((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr) ((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))



#define _REENT_INIT_PTR(var) { memset((var), 0, sizeof(*(var))); _REENT_INIT_PTR_ZEROED(var); }







#define _Kmax (sizeof (size_t) << 3)







#define __ATTRIBUTE_IMPURE_PTR__ 


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 832 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/reent.h" 3
#define _REENT _impure_ptr


#define _GLOBAL_REENT _global_impure_ptr





#define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
# 19 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 48 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 2 3

#define __PMT(args) args
#define __DOTS , ...
#define __THROW 


#define __ASMNAME(cname) __XSTRING (__USER_LABEL_PREFIX__) cname


#define __ptr_t void *
#define __long_double_t long double

#define __attribute_malloc__ 
#define __attribute_pure__ 
#define __attribute_format_strfmon__(a,b) 
#define __flexarr [0]


#define __bounded 
#define __unbounded 
#define __ptrvalue 
# 78 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __has_extension __has_feature


#define __has_feature(x) 0
# 94 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __BEGIN_DECLS 
#define __END_DECLS 
# 107 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __GNUCLIKE_ASM 3
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 



#define __GNUCLIKE___TYPEOF 1
#define __GNUCLIKE___OFFSETOF 1
#define __GNUCLIKE___SECTION 1


#define __GNUCLIKE_CTOR_SECTION_HANDLING 1


#define __GNUCLIKE_BUILTIN_CONSTANT_P 1






#define __GNUCLIKE_BUILTIN_VARARGS 1
#define __GNUCLIKE_BUILTIN_STDARG 1
#define __GNUCLIKE_BUILTIN_VAALIST 1



#define __GNUC_VA_LIST_COMPATIBILITY 1






#define __compiler_membar() __asm __volatile(" " : : : "memory")



#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 


#define __GNUCLIKE_BUILTIN_MEMCPY 1


#define __CC_SUPPORTS_INLINE 1
#define __CC_SUPPORTS___INLINE 1
#define __CC_SUPPORTS___INLINE__ 1

#define __CC_SUPPORTS___FUNC__ 1
#define __CC_SUPPORTS_WARNING 1

#define __CC_SUPPORTS_VARADIC_XXX 1

#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
# 177 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __P(protos) protos
#define __CONCAT1(x,y) x ## y
#define __CONCAT(x,y) __CONCAT1(x,y)
#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#define __const const
#define __signed signed
#define __volatile volatile
# 230 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __weak_symbol __attribute__((__weak__))
# 243 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __packed __attribute__((__packed__))
#define __aligned(x) __attribute__((__aligned__(x)))
#define __section(x) __attribute__((__section__(x)))


#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#define __alloc_size2(n,x) __attribute__((__alloc_size__(n, x)))





#define __alloc_align(x) __attribute__((__alloc_align__(x)))
# 280 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define _Alignas(x) __aligned(x)






#define _Alignof(x) __alignof(x)
# 302 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define _Noreturn __dead2
# 331 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define _Thread_local __thread
# 351 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __generic(expr,t,yes,no) __builtin_choose_expr( __builtin_types_compatible_p(__typeof(expr), t), yes, no)
# 366 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __min_size(x) static (x)





#define __malloc_like __attribute__((__malloc__))
#define __pure __attribute__((__pure__))






#define __always_inline __inline__ __attribute__((__always_inline__))





#define __noinline __attribute__ ((__noinline__))





#define __nonnull(x) __attribute__((__nonnull__ x))
#define __nonnull_all __attribute__((__nonnull__))






#define __fastcall __attribute__((__fastcall__))
#define __result_use_check __attribute__((__warn_unused_result__))






#define __returns_twice __attribute__((__returns_twice__))





#define __unreachable() __builtin_unreachable()
# 434 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __restrict restrict
# 467 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __predict_true(exp) __builtin_expect((exp), 1)
#define __predict_false(exp) __builtin_expect((exp), 0)






#define __null_sentinel __attribute__((__sentinel__))
#define __exported __attribute__((__visibility__("default")))


#define __hidden __attribute__((__visibility__("hidden")))
# 489 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __offsetof(type,field) offsetof(type, field)
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
# 500 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __containerof(x,s,m) ({ const volatile __typeof(((s *)0)->m) *__x = (x); __DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));})
# 522 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))

#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg,firstvararg) __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
# 539 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __printf0like(fmtarg,firstvararg) 




#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))




#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)


#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")



#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)

#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
# 593 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __FBSDID(s) struct __hack



#define __RCSID(s) struct __hack



#define __RCSID_SOURCE(s) struct __hack



#define __SCCSID(s) struct __hack



#define __COPYRIGHT(s) struct __hack



#define __DECONST(type,var) ((type)(__uintptr_t)(const void *)(var))



#define __DEVOLATILE(type,var) ((type)(__uintptr_t)(volatile void *)(var))



#define __DEQUALIFY(type,var) ((type)(__uintptr_t)(const volatile void *)(var))






#define _Nonnull 
#define _Nullable 
#define _Null_unspecified 
#define __NULLABILITY_PRAGMA_PUSH 
#define __NULLABILITY_PRAGMA_POP 
# 653 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __arg_type_tag(arg_kind,arg_idx,type_tag_idx) 
#define __datatype_type_tag(kind,type) 
# 672 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __lock_annotate(x) 





#define __lockable __lock_annotate(lockable)


#define __locks_exclusive(...) __lock_annotate(exclusive_lock_function(__VA_ARGS__))

#define __locks_shared(...) __lock_annotate(shared_lock_function(__VA_ARGS__))



#define __trylocks_exclusive(...) __lock_annotate(exclusive_trylock_function(__VA_ARGS__))

#define __trylocks_shared(...) __lock_annotate(shared_trylock_function(__VA_ARGS__))



#define __unlocks(...) __lock_annotate(unlock_function(__VA_ARGS__))


#define __asserts_exclusive(...) __lock_annotate(assert_exclusive_lock(__VA_ARGS__))

#define __asserts_shared(...) __lock_annotate(assert_shared_lock(__VA_ARGS__))



#define __requires_exclusive(...) __lock_annotate(exclusive_locks_required(__VA_ARGS__))

#define __requires_shared(...) __lock_annotate(shared_locks_required(__VA_ARGS__))

#define __requires_unlocked(...) __lock_annotate(locks_excluded(__VA_ARGS__))



#define __no_lock_analysis __lock_annotate(no_thread_safety_analysis)
# 721 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/cdefs.h" 3
#define __nosanitizeaddress 
#define __nosanitizethread 



#define __guarded_by(x) __lock_annotate(guarded_by(x))
#define __pt_guarded_by(x) __lock_annotate(pt_guarded_by(x))
# 20 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/stdlib.h" 1 3

#define _MACHSTDLIB_H_ 
# 21 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 2 3
# 33 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3


typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;



#define __compar_fn_t_defined 
typedef int (*__compar_fn_t) (const void *, const void *);


#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

int __locale_mb_cur_max (void);

#define MB_CUR_MAX __locale_mb_cur_max()

void abort (void) __attribute__ ((__noreturn__));
int abs (int);





int atexit (void (*__func)(void));
double atof (const char *__nptr);



int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__))
      __attribute__((__alloc_size__(1, 2))) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);



char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);




long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(1))) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *restrict, const wchar_t *restrict, size_t, _mbstate_t *);
# 137 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2))) ;
# 159 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
void srand (unsigned __seed);
double strtod (const char *restrict __n, char **restrict __end_PTR);
double _strtod_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR);

float strtof (const char *restrict __n, char **restrict __end_PTR);







long strtol (const char *restrict __n, char **restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long strtoul (const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
# 191 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
int system (const char *__string);
# 202 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
void _Exit (int __status) __attribute__ ((__noreturn__));




int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);



int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 224 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);
# 263 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *restrict __n, char **restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long strtoull (const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);
# 284 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
int _unsetenv_r (struct _reent *, const char *__string);







char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) ;
void * _calloc_r (struct _reent *, size_t, size_t) ;
void _free_r (struct _reent *, void *) ;
void * _realloc_r (struct _reent *, void *, size_t) ;
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 322 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3
extern long double _strtold_r (struct _reent *, const char *restrict, char **restrict);

extern long double strtold (const char *restrict, char **restrict);
# 339 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdlib.h" 3

# 25 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 1 3


#define _MATH_H_ 



# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 8 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 2 3





#define _M_LN2 0.693147180559945309417





#define HUGE_VAL (__builtin_huge_val())



#define HUGE_VALF (__builtin_huge_valf())



#define HUGE_VALL (__builtin_huge_vall())



#define INFINITY (__builtin_inff())



#define NAN (__builtin_nanf(""))
# 86 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);
# 145 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __TMP_FLT_EVAL_METHOD 



    typedef float float_t;
    typedef double double_t;
# 168 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
#undef FLT_EVAL_METHOD


#define FP_NAN 0
#define FP_INFINITE 1
#define FP_ZERO 2
#define FP_SUBNORMAL 3
#define FP_NORMAL 4


#define FP_ILOGB0 (-__INT_MAX__)


#define FP_ILOGBNAN __INT_MAX__



#define MATH_ERRNO 1


#define MATH_ERREXCEPT 2





#define _MATH_ERRHANDLING_ERRNO MATH_ERRNO


#define _MATH_ERRHANDLING_ERREXCEPT MATH_ERREXCEPT



#define math_errhandling (_MATH_ERRHANDLING_ERRNO | _MATH_ERRHANDLING_ERREXCEPT)


extern int __isinff (float);
extern int __isinfd (double);
extern int __isnanf (float);
extern int __isnand (double);
extern int __fpclassifyf (float);
extern int __fpclassifyd (double);
extern int __signbitf (float);
extern int __signbitd (double);
# 221 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
#define fpclassify(__x) (__builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, __x))



#define isfinite(__x) (__builtin_isfinite (__x))


#define isinf(__x) (__builtin_isinf_sign (__x))


#define isnan(__x) (__builtin_isnan (__x))

#define isnormal(__x) (__builtin_isnormal (__x))
# 254 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
#define signbit(__x) ((sizeof(__x) == sizeof(float)) ? __builtin_signbitf(__x) : (sizeof(__x) == sizeof(double)) ? __builtin_signbit (__x) : __builtin_signbitl(__x))
# 270 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
#define isgreater(__x,__y) (__builtin_isgreater (__x, __y))
#define isgreaterequal(__x,__y) (__builtin_isgreaterequal (__x, __y))
#define isless(__x,__y) (__builtin_isless (__x, __y))
#define islessequal(__x,__y) (__builtin_islessequal (__x, __y))
#define islessgreater(__x,__y) (__builtin_islessgreater (__x, __y))
#define isunordered(__x,__y) (__builtin_isunordered (__x, __y))
# 300 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
extern double infinity (void);
extern double nan (const char *);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);

#define log2(x) (log (x) / _M_LN2)



extern double hypot (double, double);






extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);




extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);
# 432 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3
extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);




extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 617 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/math.h" 3

# 26 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 1 3
# 27 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
#define _STDIO_H_ 



#define _FSTDIO 

#define __need_size_t 
#define __need_NULL 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 155 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 37 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 2 3


#define __need___va_list 
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdarg.h" 1 3 4
# 34 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdarg.h" 3 4
#undef __need___va_list




#define __GNUC_VA_LIST 
typedef __builtin_va_list __gnuc_va_list;
# 41 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 2 3
# 61 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 1 3
# 28 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;
#define __BIT_TYPES_DEFINED__ 1



#define _SYS_TYPES_H 
# 97 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;
#define _BLKCNT_T_DECLARED 



typedef __blksize_t blksize_t;
#define _BLKSIZE_T_DECLARED 



typedef unsigned long clock_t;
#define __clock_t_defined 
#define _CLOCK_T_DECLARED 



typedef __int_least64_t time_t;
#define __time_t_defined 
#define _TIME_T_DECLARED 



typedef long daddr_t;
#define __daddr_t_defined 


typedef char * caddr_t;
#define __caddr_t_defined 



typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
#define _FSBLKCNT_T_DECLARED 



typedef __id_t id_t;
#define _ID_T_DECLARED 



typedef __ino_t ino_t;
#define _INO_T_DECLARED 
# 157 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 3
typedef __off_t off_t;
#define _OFF_T_DECLARED 


typedef __dev_t dev_t;
#define _DEV_T_DECLARED 


typedef __uid_t uid_t;
#define _UID_T_DECLARED 


typedef __gid_t gid_t;
#define _GID_T_DECLARED 



typedef __pid_t pid_t;
#define _PID_T_DECLARED 



typedef __key_t key_t;
#define _KEY_T_DECLARED 



typedef _ssize_t ssize_t;
#define _SSIZE_T_DECLARED 



typedef __mode_t mode_t;
#define _MODE_T_DECLARED 



typedef __nlink_t nlink_t;
#define _NLINK_T_DECLARED 



typedef __clockid_t clockid_t;
#define __clockid_t_defined 
#define _CLOCKID_T_DECLARED 



typedef __timer_t timer_t;
#define __timer_t_defined 
#define _TIMER_T_DECLARED 



typedef __useconds_t useconds_t;
#define _USECONDS_T_DECLARED 



typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED 


typedef __int64_t sbintime_t;


# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_pthreadtypes.h" 1 3
# 19 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/_pthreadtypes.h" 3
#define _SYS__PTHREADTYPES_H_ 
# 224 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/machine/types.h" 1 3
# 225 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/types.h" 2 3



#undef __need_inttypes
# 62 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 2 3




typedef __FILE FILE;
#define __FILE_defined 





typedef _fpos_t fpos_t;





# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/stdio.h" 1 3

#define _NEWLIB_STDIO_H 
# 13 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/stdio.h" 3
#define _flockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_acquire_recursive((fp)->_lock))







#define _funlockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_release_recursive((fp)->_lock))
# 80 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 2 3

#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SRD 0x0004
#define __SWR 0x0008

#define __SRW 0x0010
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SMBF 0x0080
#define __SAPP 0x0100
#define __SSTR 0x0200
#define __SOPT 0x0400
#define __SNPT 0x0800
#define __SOFF 0x1000
#define __SORD 0x2000



#define __SL64 0x8000


#define __SNLK 0x0001
#define __SWID 0x2000
# 114 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#define EOF (-1)




#define BUFSIZ 1024





#define FOPEN_MAX 20





#define FILENAME_MAX 1024





#define L_tmpnam FILENAME_MAX







#define SEEK_SET 0


#define SEEK_CUR 1


#define SEEK_END 2


#define TMP_MAX 26

#define stdin (_REENT->_stdin)
#define stdout (_REENT->_stdout)
#define stderr (_REENT->_stderr)

#define _stdin_r(x) ((x)->_stdin)
#define _stdout_r(x) ((x)->_stdout)
#define _stderr_r(x) ((x)->_stderr)







#define __VALIST __gnuc_va_list
# 186 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
FILE * tmpfile (void);
char * tmpnam (char *);



int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *restrict, const char *restrict, FILE *restrict);
void setbuf (FILE *restrict, char *restrict);
int setvbuf (FILE *restrict, char *restrict, int, size_t);
int fprintf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *restrict, int, FILE *restrict);
int fputc (int, FILE *);
int fputs (const char *restrict, FILE *restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite (const void *restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *restrict, fpos_t *restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *restrict _name, const char *restrict _type);
int sprintf (char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 266 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
int snprintf (char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
# 396 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *restrict, int, FILE *restrict);
char * _fgets_unlocked_r (struct _reent *, char *restrict, int, FILE *restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *restrict, size_t, const char *restrict);
FILE * _fopen_r (struct _reent *, const char *restrict, const char *restrict);
FILE * _freopen_r (struct _reent *, const char *restrict, const char *restrict, FILE *restrict);
int _fprintf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *restrict, FILE *restrict);
int _fputs_unlocked_r (struct _reent *, const char *restrict, FILE *restrict);
size_t _fread_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fread_unlocked_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
int _fscanf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fwrite_unlocked_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
# 577 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 654 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
#define __sgetc_raw_r(__ptr,__f) (--(__f)->_r < 0 ? __srget_r(__ptr, __f) : (int)(*(__f)->_p++))
# 683 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
#define __sgetc_r(__ptr,__p) __sgetc_raw_r(__ptr, __p)



static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {




 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 719 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
#define __sfeof(p) ((int)(((p)->_flags & __SEOF) != 0))
#define __sferror(p) ((int)(((p)->_flags & __SERR) != 0))
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __sfileno(p) ((p)->_file)



#define feof(p) __sfeof(p)
#define ferror(p) __sferror(p)
#define clearerr(p) __sclearerr(p)
# 741 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return ((--(((_ptr)->_stdin))->_r < 0 ? __srget_r(_ptr, ((_ptr)->_stdin)) : (int)(*(((_ptr)->_stdin))->_p++)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 797 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/stdio.h" 3

# 27 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 1 3







#define _STRING_H_ 






#define __need_size_t 
#define __need_NULL 
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 155 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 18 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 2 3
# 27 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 3


void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);
# 86 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 3
char *_strdup_r (struct _reent *, const char *);



char *_strndup_r (struct _reent *, const char *, size_t);
# 112 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 3
char * _strerror_r (struct _reent *, int, int, int *);
# 134 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 3
char *strsignal (int __signo);
# 175 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 3
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/sys/string.h" 1 3
# 176 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/arm-none-eabi/include/string.h" 2 3


# 28 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define __UTILITIES_H__ 
# 37 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define SUCCESS 1



#define FAIL 0
# 52 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 63 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 72 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define POW2(n) ( 1 << n )





# 77 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 103 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 114 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 123 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 134 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 152 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 171 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 180 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 203 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 29 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
#define __BOARD_H__ 
# 36 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
enum BoardPowerSources
{
    USB_POWER = 0,
    BATTERY_POWER,
};




void BoardInitMcu( void );




void BoardResetMcu( void );




void BoardInitPeriph( void );





void BoardDeInitMcu( void );






uint8_t BoardGetPotiLevel( void );






uint32_t BoardGetBatteryVoltage( void );
# 86 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
uint8_t BoardGetBatteryLevel( void );






uint32_t BoardGetRandomSeed( void );






void BoardGetUniqueId( uint8_t *id );




void BoardLowPowerHandler( void );






uint8_t GetBoardPowerSource( void );






Version_t BoardGetVersion( void );
# 30 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
#define __RTC_BOARD_H__ 







# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdbool.h" 1 3 4
# 29 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 33 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
#define __TIMER_H__ 






# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/include/stddef.h" 1 3 4
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2






typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    
# 42 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 42 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsStarted;
    
# 43 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 43 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsNext2Expire;
    void ( *Callback )( void* context );
    void *Context;
    struct TimerEvent_s *Next;
}TimerEvent_t;





typedef uint32_t TimerTime_t;
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 66 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) );







void TimerSetContext( TimerEvent_t *obj, void* context );




void TimerIrqHandler( void );






void TimerStart( TimerEvent_t *obj );
# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"

# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
_Bool 
# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
    TimerIsStarted( TimerEvent_t *obj );






void TimerStop( TimerEvent_t *obj );






void TimerReset( TimerEvent_t *obj );







void TimerSetValue( TimerEvent_t *obj, uint32_t value );






TimerTime_t TimerGetCurrentTime( void );
# 135 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerGetElapsedTime( TimerTime_t past );
# 146 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature );




void TimerProcess( void );
# 34 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 2




#define RTC_TEMP_COEFFICIENT ( -0.035f )




#define RTC_TEMP_DEV_COEFFICIENT ( 0.0035f )




#define RTC_TEMP_TURNOVER ( 25.0f )




#define RTC_TEMP_DEV_TURNOVER ( 5.0f )






void RtcInit( void );






uint32_t RtcGetMinimumTimeout( void );







uint32_t RtcMs2Tick( TimerTime_t milliseconds );







TimerTime_t RtcTick2Ms( uint32_t tick );






void RtcDelayMs( TimerTime_t milliseconds );






void RtcSetMcuWakeUpTime( void );






int16_t RtcGetMcuWakeUpTime( void );
# 113 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
void RtcSetAlarm( uint32_t timeout );




void RtcStopAlarm( void );
# 127 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
void RtcStartAlarm( uint32_t timeout );






uint32_t RtcSetTimerContext( void );






uint32_t RtcGetTimerContext( void );







uint32_t RtcGetCalendarTime( uint16_t *milliseconds );






uint32_t RtcGetTimerValue( void );






uint32_t RtcGetTimerElapsedTime( void );







void RtcBkupWrite( uint32_t data0, uint32_t data1 );







void RtcBkupRead( uint32_t* data0, uint32_t* data1 );




void RtcProcess( void );
# 195 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
TimerTime_t RtcTempCompensation( TimerTime_t period, float temperature );
# 31 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/gps-board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/gps-board.h"
#define __GPS_BOARD_H__ 






# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
#define __UART_H__ 






# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h"
#define __FIFO_H__ 
# 37 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h"
typedef struct Fifo_s
{
    uint16_t Begin;
    uint16_t End;
    uint8_t *Data;
    uint16_t Size;
}Fifo_t;
# 52 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h"
void FifoInit( Fifo_t *fifo, uint8_t *buffer, uint16_t size );







void FifoPush( Fifo_t *fifo, uint8_t data );







uint8_t FifoPop( Fifo_t *fifo );






void FifoFlush( Fifo_t *fifo );








# 83 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h" 3 4
_Bool 
# 83 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h"
    IsFifoEmpty( Fifo_t *fifo );








# 91 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h" 3 4
_Bool 
# 91 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/fifo.h"
    IsFifoFull( Fifo_t *fifo );
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 1
# 28 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
#define __GPIO_H__ 







# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/pinName-board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/pinName-board.h"
#define __PIN_NAME_BOARD_H__ 




#define MCU_PINS P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47
# 37 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/pinName-ioe.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/pinName-ioe.h"
#define __PIN_NAME_IOE_H__ 


#define IOE_PINS IOE_0, IOE_1, IOE_2, IOE_3, IOE_4, IOE_5, IOE_6, IOE_7, IOE_8, IOE_9, IOE_10, IOE_11, IOE_12, IOE_13, IOE_14, IOE_15
# 38 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 2




typedef enum
{
    P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47,
    IOE_0, IOE_1, IOE_2, IOE_3, IOE_4, IOE_5, IOE_6, IOE_7, IOE_8, IOE_9, IOE_10, IOE_11, IOE_12, IOE_13, IOE_14, IOE_15,


    NC = (int)0xFFFFFFFF
}PinNames;




typedef enum
{
    PIN_INPUT = 0,
    PIN_OUTPUT,
    PIN_ALTERNATE_FCT,
    PIN_ANALOGIC
}PinModes;




typedef enum
{
    PIN_NO_PULL = 0,
    PIN_PULL_UP,
    PIN_PULL_DOWN
}PinTypes;




typedef enum
{
    PIN_PUSH_PULL = 0,
    PIN_OPEN_DRAIN
}PinConfigs;




typedef enum
{
    NO_IRQ = 0,
    IRQ_RISING_EDGE,
    IRQ_FALLING_EDGE,
    IRQ_RISING_FALLING_EDGE
}IrqModes;




typedef enum
{
    IRQ_VERY_LOW_PRIORITY = 0,
    IRQ_LOW_PRIORITY,
    IRQ_MEDIUM_PRIORITY,
    IRQ_HIGH_PRIORITY,
    IRQ_VERY_HIGH_PRIORITY
}IrqPriorities;




typedef void( GpioIrqHandler )( void* context );




typedef struct
{
    PinNames pin;
    uint16_t pinIndex;
    void *port;
    uint16_t portIndex;
    PinTypes pull;
    void* Context;
    GpioIrqHandler* IrqHandler;
}Gpio_t;
# 134 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
void GpioInit( Gpio_t *obj, PinNames pin, PinModes mode, PinConfigs config, PinTypes type, uint32_t value );







void GpioSetContext( Gpio_t *obj, void* context );
# 155 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
void GpioSetInterrupt( Gpio_t *obj, IrqModes irqMode, IrqPriorities irqPriority, GpioIrqHandler *irqHandler );






void GpioRemoveInterrupt( Gpio_t *obj );







void GpioWrite( Gpio_t *obj, uint32_t value );






void GpioToggle( Gpio_t *obj );







uint32_t GpioRead( Gpio_t *obj );
# 33 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h" 2




typedef enum
{
    UART_1,
    UART_2,
    UART_USB_CDC = 255,
}UartId_t;




typedef enum
{
    UART_NOTIFY_TX,
    UART_NOTIFY_RX
}UartNotifyId_t;




typedef struct
{
    UartId_t UartId;
    
# 59 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h" 3 4
   _Bool 
# 59 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
        IsInitialized;
    Gpio_t Tx;
    Gpio_t Rx;
    Fifo_t FifoTx;
    Fifo_t FifoRx;



    void ( *IrqNotify )( UartNotifyId_t id );
}Uart_t;




typedef enum
{
    TX_ONLY = 0,
    RX_ONLY,
    RX_TX
}UartMode_t;




typedef enum
{
    UART_8_BIT = 0,
    UART_9_BIT
}WordLength_t;




typedef enum
{
    UART_1_STOP_BIT = 0,
    UART_0_5_STOP_BIT,
    UART_2_STOP_BIT,
    UART_1_5_STOP_BIT
}StopBits_t;




typedef enum
{
    NO_PARITY = 0,
    EVEN_PARITY,
    ODD_PARITY
}Parity_t;




typedef enum
{
    NO_FLOW_CTRL = 0,
    RTS_FLOW_CTRL,
    CTS_FLOW_CTRL,
    RTS_CTS_FLOW_CTRL
}FlowCtrl_t;
# 128 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
void UartInit( Uart_t *obj, UartId_t uartId, PinNames tx, PinNames rx );
# 143 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
void UartConfig( Uart_t *obj, UartMode_t mode, uint32_t baudrate, WordLength_t wordLength, StopBits_t stopBits, Parity_t parity, FlowCtrl_t flowCtrl );






void UartDeInit( Uart_t *obj );
# 159 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
uint8_t UartPutChar( Uart_t *obj, uint8_t data );
# 169 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
uint8_t UartPutBuffer( Uart_t *obj, uint8_t *buffer, uint16_t size );
# 178 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
uint8_t UartGetChar( Uart_t *obj, uint8_t *data );
# 189 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/uart.h"
uint8_t UartGetBuffer( Uart_t *obj, uint8_t *buffer, uint16_t size, uint16_t *nbReadBytes );
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/gps-board.h" 2






typedef enum PpsTrigger_s
{
    PpsTriggerIsRising = 0,
    PpsTriggerIsFalling,
}PpsTrigger_t;




void GpsMcuOnPpsSignal( void* context );




void GpsMcuInvertPpsTrigger( void );




void GpsMcuInit( void );




void GpsMcuStart( void );




void GpsMcuStop( void );




void GpsMcuProcess( void );




void GpsMcuIrqNotify( UartNotifyId_t id );
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
#define __GPS_H__ 
# 35 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
typedef struct
{
    char NmeaDataType[6];
    char NmeaUtcTime[11];
    char NmeaDataStatus[2];
    char NmeaLatitude[10];
    char NmeaLatitudePole[2];
    char NmeaLongitude[11];
    char NmeaLongitudePole[2];
    char NmeaFixQuality[2];
    char NmeaSatelliteTracked[3];
    char NmeaHorizontalDilution[6];
    char NmeaAltitude[8];
    char NmeaAltitudeUnit[2];
    char NmeaHeightGeoid[8];
    char NmeaHeightGeoidUnit[2];
    char NmeaSpeed[8];
    char NmeaDetectionAngle[8];
    char NmeaDate[8];
}NmeaGpsData_t;




void GpsInit( void );




void GpsStart( void );




void GpsStop( void );




void GpsProcess( void );




void GpsPpsHandler( 
# 79 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h" 3 4
                   _Bool 
# 79 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
                        *parseData );







# 86 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h" 3 4
_Bool 
# 86 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
    GpsGetPpsDetectedState( void );







# 93 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h" 3 4
_Bool 
# 93 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
    GpsHasFix( void );





void GpsConvertPositionIntoBinary( void );





void GpsConvertPositionFromStringToNumerical( void );
# 116 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
uint8_t GpsGetLatestGpsPositionDouble ( double *lati, double *longi );
# 127 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
uint8_t GpsGetLatestGpsPositionBinary ( int32_t *latiBin, int32_t *longiBin );
# 139 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.h"
uint8_t GpsParseGpsData( int8_t *rxBuffer, int32_t rxBufferSize );






int16_t GpsGetLatestGpsAltitude( void );




void GpsFormatGpsData( void );




void GpsResetPosition( void );
# 33 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 2

#define TRIGGER_GPS_CNT 10


const char NmeaDataTypeGPGGA[] = "GPGGA";
const char NmeaDataTypeGPGSA[] = "GPGSA";
const char NmeaDataTypeGPGSV[] = "GPGSV";
const char NmeaDataTypeGPRMC[] = "GPRMC";


const int32_t MaxNorthPosition = 8388607;
const int32_t MaxSouthPosition = 8388608;
const int32_t MaxEastPosition = 8388607;
const int32_t MaxWestPosition = 8388608;

NmeaGpsData_t NmeaGpsData;

static double HasFix = 
# 50 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                      0
# 50 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                           ;
static double Latitude = 0;
static double Longitude = 0;

static int32_t LatitudeBinary = 0;
static int32_t LongitudeBinary = 0;

static int16_t Altitude = ( int16_t )0xFFFF;

static uint32_t PpsCnt = 0;


# 61 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
_Bool 
# 61 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
    PpsDetected = 
# 61 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                  0
# 61 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                       ;

void GpsPpsHandler( 
# 63 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                   _Bool 
# 63 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                        *parseData )
{
    PpsDetected = 
# 65 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 1
# 65 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                     ;
    PpsCnt++;
    *parseData = 
# 67 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                0
# 67 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                     ;

    if( PpsCnt >= 10 )
    {
        PpsCnt = 0;
        *parseData = 
# 72 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                    1
# 72 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                        ;
    }
}

void GpsInit( void )
{
    PpsDetected = 
# 78 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 0
# 78 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                      ;
    GpsMcuInit( );
}

void GpsStart( void )
{
    GpsMcuStart( );
}

void GpsStop( void )
{
    GpsMcuStop( );
}

void GpsProcess( void )
{
    GpsMcuProcess( );
}


# 97 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
_Bool 
# 97 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
    GpsGetPpsDetectedState( void )
{
    
# 99 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
   _Bool 
# 99 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
        state = 
# 99 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                0
# 99 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                     ;

    uint32_t mask; BoardCriticalSectionBegin( &mask );
    state = PpsDetected;
    PpsDetected = 
# 103 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 0
# 103 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                      ;
    BoardCriticalSectionEnd( &mask );
    return state;
}


# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
_Bool 
# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
    GpsHasFix( void )
{
    return HasFix;
}

void GpsConvertPositionIntoBinary( void )
{
    long double temp;

    if( Latitude >= 0 )
    {
        temp = Latitude * MaxNorthPosition;
        LatitudeBinary = temp / 90;
    }
    else
    {
        temp = Latitude * MaxSouthPosition;
        LatitudeBinary = temp / 90;
    }

    if( Longitude >= 0 )
    {
        temp = Longitude * MaxEastPosition;
        LongitudeBinary = temp / 180;
    }
    else
    {
        temp = Longitude * MaxWestPosition;
        LongitudeBinary = temp / 180;
    }
}

void GpsConvertPositionFromStringToNumerical( void )
{
    int i;

    double valueTmp1;
    double valueTmp2;
    double valueTmp3;
    double valueTmp4;


    for( i = 0 ; i < 10 ; i++ )
    {
        NmeaGpsData.NmeaLatitude[i] = NmeaGpsData.NmeaLatitude[i] & 0xF;
    }

    valueTmp1 = ( double )NmeaGpsData.NmeaLatitude[0] * 10.0 + ( double )NmeaGpsData.NmeaLatitude[1];
    valueTmp2 = ( double )NmeaGpsData.NmeaLatitude[2] * 10.0 + ( double )NmeaGpsData.NmeaLatitude[3];
    valueTmp3 = ( double )NmeaGpsData.NmeaLatitude[5] * 1000.0 + ( double )NmeaGpsData.NmeaLatitude[6] * 100.0 +
                ( double )NmeaGpsData.NmeaLatitude[7] * 10.0 + ( double )NmeaGpsData.NmeaLatitude[8];

    Latitude = valueTmp1 + ( ( valueTmp2 + ( valueTmp3 * 0.0001 ) ) / 60.0 );

    if( NmeaGpsData.NmeaLatitudePole[0] == 'S' )
    {
        Latitude *= -1;
    }


    for( i = 0 ; i < 10 ; i++ )
    {
        NmeaGpsData.NmeaLongitude[i] = NmeaGpsData.NmeaLongitude[i] & 0xF;
    }

    valueTmp1 = ( double )NmeaGpsData.NmeaLongitude[0] * 100.0 + ( double )NmeaGpsData.NmeaLongitude[1] * 10.0 + ( double )NmeaGpsData.NmeaLongitude[2];
    valueTmp2 = ( double )NmeaGpsData.NmeaLongitude[3] * 10.0 + ( double )NmeaGpsData.NmeaLongitude[4];
    valueTmp3 = ( double )NmeaGpsData.NmeaLongitude[6] * 1000.0 + ( double )NmeaGpsData.NmeaLongitude[7] * 100;
    valueTmp4 = ( double )NmeaGpsData.NmeaLongitude[8] * 10.0 + ( double )NmeaGpsData.NmeaLongitude[9];

    Longitude = valueTmp1 + ( valueTmp2 / 60.0 ) + ( ( ( valueTmp3 + valueTmp4 ) * 0.0001 ) / 60.0 );

    if( NmeaGpsData.NmeaLongitudePole[0] == 'W' )
    {
        Longitude *= -1;
    }
}


uint8_t GpsGetLatestGpsPositionDouble( double *lati, double *longi )
{
    uint8_t status = 0;
    if( HasFix == 
# 190 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 1 
# 190 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                      )
    {
        status = 1;
    }
    else
    {
        GpsResetPosition( );
    }
    *lati = Latitude;
    *longi = Longitude;
    return status;
}

uint8_t GpsGetLatestGpsPositionBinary( int32_t *latiBin, int32_t *longiBin )
{
    uint8_t status = 0;

    uint32_t mask; BoardCriticalSectionBegin( &mask );
    if( HasFix == 
# 208 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 1 
# 208 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                      )
    {
        status = 1;
    }
    else
    {
        GpsResetPosition( );
    }
    *latiBin = LatitudeBinary;
    *longiBin = LongitudeBinary;
    BoardCriticalSectionEnd( &mask );
    return status;
}

int16_t GpsGetLatestGpsAltitude( void )
{
    uint32_t mask; BoardCriticalSectionBegin( &mask );
    if( HasFix == 
# 225 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                 1 
# 225 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                      )
    {
        Altitude = atoi( NmeaGpsData.NmeaAltitude );
    }
    else
    {
        Altitude = ( int16_t )0xFFFF;
    }
    BoardCriticalSectionEnd( &mask );

    return Altitude;
}
# 246 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
int32_t GpsNmeaChecksum( int8_t *nmeaStr, int32_t nmeaStrSize, int8_t * checksum )
{
    int i = 0;
    uint8_t checkNum = 0;


    if( ( nmeaStr == 
# 252 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                    ((void *)0) 
# 252 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                         ) || ( checksum == 
# 252 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                            ((void *)0) 
# 252 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                 ) || ( nmeaStrSize <= 1 ) )
    {
        return -1;
    }


    if( nmeaStr[i] == '$' )
    {
        i += 1;
    }


    while( nmeaStr[i] != '*' )
    {
        checkNum ^= nmeaStr[i];
        i += 1;
        if( i >= nmeaStrSize )
        {
            return -1;
        }
    }


    checksum[0] = Nibble2HexChar( checkNum / 16 );
    checksum[1] = Nibble2HexChar( checkNum % 16 );

    return i + 1;
}






static 
# 286 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
      _Bool 
# 286 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
           GpsNmeaValidateChecksum( int8_t *serialBuff, int32_t buffSize )
{
    int32_t checksumIndex;
    int8_t checksum[2];

    checksumIndex = GpsNmeaChecksum( serialBuff, buffSize, checksum );


    if( checksumIndex < 0 )
    {
        return 
# 296 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
              0
# 296 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                   ;
    }


    if( checksumIndex >= ( buffSize - 2 ) )
    {
        return 
# 302 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
              0
# 302 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                   ;
    }


    if( ( serialBuff[checksumIndex] == checksum[0] ) && ( serialBuff[checksumIndex + 1] == checksum[1] ) )
    {
        return 
# 308 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
              1
# 308 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                  ;
    }
    else
    {
        return 
# 312 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
              0
# 312 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                   ;
    }
}

uint8_t GpsParseGpsData( int8_t *rxBuffer, int32_t rxBufferSize )
{
    uint8_t i = 1;
    uint8_t j = 0;
    uint8_t fieldSize = 0;

    if( rxBuffer[0] != '$' )
    {
        GpsMcuInvertPpsTrigger( );
        return 0;
    }

    if( GpsNmeaValidateChecksum( rxBuffer, rxBufferSize ) == 
# 328 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                                            0 
# 328 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                                  )
    {
        return 0;
    }

    fieldSize = 0;
    while( rxBuffer[i + fieldSize++] != ',' )
    {
        if( fieldSize > 6 )
        {
            return 0;
        }
    }
    for( j = 0; j < fieldSize; j++, i++ )
    {
        NmeaGpsData.NmeaDataType[j] = rxBuffer[i];
    }

    if( strncmp( ( const char* )NmeaGpsData.NmeaDataType, ( const char* )NmeaDataTypeGPGGA, 5 ) == 0 )
    {

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 11 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaUtcTime[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 10 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLatitude[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLatitudePole[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 11 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLongitude[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLongitudePole[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaFixQuality[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 3 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaSatelliteTracked[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 6 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaHorizontalDilution[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 8 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaAltitude[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaAltitudeUnit[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 8 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaHeightGeoid[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaHeightGeoidUnit[j] = rxBuffer[i];
        }

        GpsFormatGpsData( );
        return 1;
    }
    else if ( strncmp( ( const char* )NmeaGpsData.NmeaDataType, ( const char* )NmeaDataTypeGPRMC, 5 ) == 0 )
    {

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 11 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaUtcTime[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaDataStatus[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 10 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLatitude[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLatitudePole[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 11 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLongitude[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 2 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaLongitudePole[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 8 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaSpeed[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 8 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaDetectionAngle[j] = rxBuffer[i];
        }

        fieldSize = 0;
        while( rxBuffer[i + fieldSize++] != ',' )
        {
            if( fieldSize > 8 )
            {
                return 0;
            }
        }
        for( j = 0; j < fieldSize; j++, i++ )
        {
            NmeaGpsData.NmeaDate[j] = rxBuffer[i];
        }

        GpsFormatGpsData( );
        return 1;
    }
    else
    {
        return 0;
    }
}

void GpsFormatGpsData( void )
{
    if( strncmp( ( const char* )NmeaGpsData.NmeaDataType, ( const char* )NmeaDataTypeGPGGA, 5 ) == 0 )
    {
        HasFix = ( NmeaGpsData.NmeaFixQuality[0] > 0x30 ) ? 
# 641 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                                           1 
# 641 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                                : 
# 641 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                                                  0
# 641 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                                       ;
    }
    else if ( strncmp( ( const char* )NmeaGpsData.NmeaDataType, ( const char* )NmeaDataTypeGPRMC, 5 ) == 0 )
    {
        HasFix = ( NmeaGpsData.NmeaDataStatus[0] == 0x41 ) ? 
# 645 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                                            1 
# 645 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                                 : 
# 645 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c" 3 4
                                                                   0
# 645 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gps.c"
                                                                        ;
    }
    GpsConvertPositionFromStringToNumerical( );
    GpsConvertPositionIntoBinary( );
}

void GpsResetPosition( void )
{
    Altitude = ( int16_t )0xFFFF;
    Latitude = 0;
    Longitude = 0;
    LatitudeBinary = 0;
    LongitudeBinary = 0;
}
